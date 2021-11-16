import time
import json
import sys
import os
import threading
from queue import Queue
from random import randrange
import msgpack

import socketio

from powerworldDS import PowerWorldDS

print("DS Client is loading ...", flush=True)


def recv_loop():
    global queue
    context = zmq.Context()
    zmq_puller = context.socket(zmq.SUB)
    zmq_puller.bind("tcp://0.0.0.0:5555")
    zmq_puller.subscribe("S000/user/cmd")
    zmq_puller.subscribe("S000/user/system")
    print("ZMQ puller is ready ...", flush=True)
    while True:
        [topic, msg] = zmq_puller.recv_multipart()
        on_message(topic.decode(), msg.decode())


# The callback for when a PUBLISH message is received from the server.
def on_message(topic, payload):
    global queue
    print(time.ctime(), "MQTT Receive: " + topic + " " + payload)
    topic_prefix = topic.split('/')[0]
    sim = None
    for tsim in simulation_instances.values():
        if tsim.topic_prefix == topic_prefix:
            sim = tsim
    if sim is None:
        return
    ds = sim.ds
    if topic == topic_prefix + '/user/cmd':
        # msg.payload should be a json string
        # do a preliminary validation
        # get second validation from DS direct
        postload = json.loads(payload)
        dtype = postload['type']
        soc = 0  # For execute immediately
        fsec = 0  # For execute immediately
        if dtype in ['Branch', 'Gen', 'Load', 'Shunt', 'LineShunt']:
            # print(postload)
            user = postload['user']
            if user not in userlist:
                userlist.append(user)
            userid = userlist.index(user)
            rawid = postload['id']
            name = postload['name']
            if dtype == 'Branch':
                temp = rawid.split(',')
                deviceid = [int(temp[0]), int(temp[1]), temp[2]]
            elif dtype in ['Gen', 'Load', 'Shunt']:
                temp = rawid.split(',')
                try:
                    deviceid = [int(temp[0]), temp[1]]
                    action = postload['action']
                    otype = postload['type']
                    if action in commands[otype] or action.split(" ")[0] in [
                        "CLOSE", "SET",
                            "Set"]:  # second validation for poor Internet related issues
                        json_data = {
                            dtype: {
                                'ID': deviceid,
                                'Action': action
                                # 'Action': action
                            }
                        }
                        queue.put(([userid, soc, fsec, json_data],
                                   user, dtype, name, action,
                                   rawid))
                except ValueError:
                    print(ValueError)
        elif dtype == 'Import':
            user = postload['user']
            schedule = postload['schedule']
            queue.put(("notification", "ds/note", "#" + user + " "
                       "changed the schedule to " + schedule))
    elif topic == topic_prefix + '/user/system':
        if 'Start' in str(payload):
            queue.put(("notification", topic_prefix + "/ds/note", "#" + str(payload).split(':')[
                0] + " start the simulation"))
            ds.msgtypes[18]()
        elif 'seconds' in str(payload):
            queue.put(("notification", topic_prefix + "/ds/note",
                       "#" + str(payload).split(':')[
                           0] + " start the simulation"))
            ds.msgtypes[23](int(str(payload).split('seconds ')[1][:-1]))
        elif 'Pause' in str(payload):
            queue.put(("notification", topic_prefix + "/ds/note",
                       "#" + str(payload).split(':')[
                           0] + " pause the simulation"))
            ds.msgtypes[19]()
        elif 'Continue' in str(payload):
            queue.put(("notification", topic_prefix + "/ds/note",
                       "#" + str(payload).split(':')[
                           0] + " continue the simulation"))
            ds.msgtypes[20]()
        elif 'Abort' in str(payload):
            queue.put(("notification", topic_prefix + "/ds/note",
                       "#" + str(payload).split(':')[
                           0] + " abort the simulation"))
            ds.msgtypes[21]()


def setup_dictionary_data(ds, data_package_id):
    # Receive the case dictionary
    ds.msgtypes[14]()
    dsdictionary = ds.receive(14)
    # print(dsdictionary['Gen'].keys())

    # Send the tcmGetData request
    # this datafields.json is used by both python and js
    # so that the backend and the web frontend shared the
    # same data structure. This is like a simple encode/decode
    # mechanism to keep the data structure consistent in both sides.
    config = json.loads(open(resource_path("datafields.json")).read())
    for ele in config.keys():
        config[ele]['Object'] = []
    
    for ele in dsdictionary["Area"]:
        config["Area"]["Object"].append(
            [dsdictionary["Area"][ele]["Int.Number"]])
    for ele in dsdictionary["Bus"]:
        if dsdictionary["Bus"][ele]["Int.Area Number"] == 2:
            config["Bus"]["Object"].append(
                [dsdictionary["Bus"][ele]["Int.Bus Number"]])
    for ele in dsdictionary["Gen"]:
        if dsdictionary["Gen"][ele]["Int.Area Number"] == 2:
            config["Gen"]["Object"].append(
                [dsdictionary["Gen"][ele]["Int.Bus Number"],
                 dsdictionary["Gen"][ele]["String.ID"]])
    for ele in dsdictionary["Load"]:
        if dsdictionary["Load"][ele]["Int.Area Number"] == 2:
            config["Load"]["Object"].append(
                [dsdictionary["Load"][ele]["Int.Bus Number"],
                 dsdictionary["Load"][ele]["String.ID"]])
    for ele in dsdictionary["Shunt"]:
        if dsdictionary["Shunt"][ele]["Int.Area Number"] == 2:
            config["Shunt"]["Object"].append(
                [dsdictionary["Shunt"][ele]["Int.Bus Number"],
                 dsdictionary["Shunt"][ele]["String.ID"]])
    for ele in config["Bus"]["Object"]:
        if [dsdictionary["Bus"][str(ele[0])]["Int.Sub Number"]] not in \
                config["Substation"]["Object"]:
            config["Substation"]["Object"].append(
                [dsdictionary["Bus"][str(ele[0])]["Int.Sub Number"]])
    for ele in dsdictionary["Branch"]:
        if [dsdictionary["Branch"][ele]["Int.From Bus Number"]] in \
            config["Bus"]["Object"] or [
                dsdictionary["Branch"][ele]["Int.To Bus Number"]] in config["Bus"][
                "Object"]:
            config["Branch"]["Object"].append(
                [dsdictionary["Branch"][ele]["Int.From Bus Number"],
                 dsdictionary["Branch"][ele]["Int.To Bus Number"],
                 dsdictionary["Branch"][ele]["String.CircuitID"]])
    for ele in dsdictionary["Transformer"]:
        if [dsdictionary["Transformer"][ele]["Int.From Bus Number"]] in \
                config["Bus"]["Object"] or [
            dsdictionary["Transformer"][ele]["Int.To Bus Number"]] in \
                config["Bus"]["Object"]:
            config["Transformer"]["Object"].append(
                [dsdictionary["Transformer"][ele]["Int.From Bus Number"],
                 dsdictionary["Transformer"][ele]["Int.To Bus Number"],
                 dsdictionary["Transformer"][ele]["String.CircuitID"]])
    ds.msgtypes[11]([data_package_id, config])
    data = ds.receive()


class SimulationInstance:

    def __init__(self, id, ip, port, client, queue):
        print(f"Simulation ID {id} initialized to connect {ip} {port}")
        sys.stdout.flush()
        self.id = id
        self.ip = ip
        self.port = port
        self.ds = None
        self.client = client
        self.last_known_state = "Initialized"
        self.topic_prefix = "S" + str(self.id).zfill(3)
        # client.subscribe(self.topic_prefix + "/user/cmd")
        # client.subscribe(self.topic_prefix + "/user/system")
        self.action_queue = queue

    def setup(self):
        try:
            self.ds = PowerWorldDS(self.ip, self.port)
            setup_dictionary_data(self.ds, data_package_id)
        except IOError as e:
            self.ds = None
            self.last_known_state = " Not able to connect to the DS"

    def string_time(self, soc, fsec):
        day = soc // (24 * 60 * 60)
        sod = soc - (day * 24 * 60 * 60)
        hour = sod // (60 * 60)
        min = (sod - 60 * 60 * hour) // 60
        sec = sod % 60
        return str(day) + " " + str(hour).zfill(2) + ":" + str(min).zfill(
            2) + ":" + str(sec).zfill(2) + "." + str(fsec).zfill(
            6) + "   Simtime " + str(min) + ":" + str(sec).zfill(2)

    def get_data(self):
        temp = self.ds.receive()
        if temp is None:
            return temp
        if temp['type'] == 'dsmSimulationData':
            self.last_known_state = self.string_time(temp['SOC'],
                                                     temp['FRACSEC']) + "  " + \
                temp['Status']
        if temp['type'] != 'dsmSimulationData':
            print("DS Message from ID " + str(self.id) + " " + temp['type'])
        if temp['type'] in ['dsmContinueSimulation', 'dsmPauseSimulation',
                            'dsmAbortSimulation', 'dsmStartSimulation',
                            'dsmFinishSimulation']:
            if temp['type'] == 'dsmContinueSimulation':
                self.client.send_multipart([msgpack.dumps("/ds/system"),
                                            msgpack.dumps("The simulation is continuing")])
            elif temp['type'] == 'dsmPauseSimulation':
                self.client.send_multipart([msgpack.dumps("/ds/system"),
                                            msgpack.dumps("The simulation is paused")])
            elif temp['type'] == 'dsmAbortSimulation':
                if temp['abort-fsec'] == 0:
                    self.client.send_multipart([msgpack.dumps("/ds/system"),
                                                msgpack.dumps("The system goes blackout")])
                else:
                    self.client.send_multipart([msgpack.dumps("/ds/system"),
                                                msgpack.dumps("The simulation has been aborted")])
            elif temp['type'] == 'dsmStartSimulation':
                self.client.send_multipart([msgpack.dumps("/ds/system"),
                                            msgpack.dumps("The simulation is started @" + str(
                                                temp['start-soc']))])
            elif temp['type'] == 'dsmFinishSimulation':
                self.client.send_multipart([msgpack.dumps("/ds/system"),
                                            msgpack.dumps("The simulation has finished")])
                # target = {
                #     'Case': sdfgas
                # }
                # opt = [0, temp['SOC'], temp['FRACSEC'], ]
                # self.ds.msgtypes[13](opt)
            return self.get_data()
        return temp

    def handle_action_queue(self):
        count = 0
        while not self.action_queue.empty():
            count += 1
            # print(count, self.action_queue.qsize())
            action = self.action_queue.get(timeout=1)
            if action[0] == "notification":
                self.client.send_multipart(
                    [msgpack.dumps(action[1]), msgpack.dumps(action[2])])
            elif action[0] == "update":
                self.regular_update()
            else:
                self.ds.msgtypes[13](action[0])
                # time.sleep(0.2)
                try:
                    message = self.ds.receive()
                except IOError:
                    self.ds = None
                    return
                try:
                    if message['type'] == 'dsmOK':
                        # print(self.topic_prefix)
                        # print(action)
                        self.client.send_multipart([
                            msgpack.dumps("/ds/note"),
                            msgpack.dumps("#" + action[
                                1] + " just issued a command at " +
                                action[2] + " " + action[3] + ': ' +
                                action[4] + '@' + action[5] + '@' +
                                action[3])])
                except TypeError as e:
                    print('TypeError ' + str(e))

    def update(self):
        if self.ds is None:
            self.setup()
        else:
            try:
                self.handle_action_queue()
            except KeyError as e:
                return
            except IOError as e:
                self.ds = None
                self.last_known_state = " Not able to connect to the DS"

    def regular_update(self):
        self.ds.msgtypes[12](data_package_id)
        data = self.get_data()
        # print("update new data")
        if data is None:
            return
        data['Data'] = list(map(lambda n: round(n, 2), data['Data']))
        topic = "/ds/data"
        self.client.send_multipart(
            [msgpack.dumps(topic), msgpack.dumps(data)])
        # print("data send")

    def write_status(self):
        print("ID " + str(self.id).zfill(3) + " Port " + str(
            self.port) + " State " + self.last_known_state)


# Global variables
simulation_instances = {}
userlist = []

# dir_path = os.path.dirname(os.path.realpath(__file__))
# file = os.path.join(dir_path, "tcmcommands.json")
# f = open(file)
commands = {
    "Case": [
        "DSEVENT(xxx)",
        "TSRFILE FLUSH"
    ],
    "Area": [
        "OPEN",
        "CLOSE xxx DEG",
        "AGC DISABLE",
        "AGC ENABLE",
        "SET SCHEDMW xxx",
        "CHANGE SCHEDMW xxx yyy"
    ],

    "Gen": [
        "OPEN",
        "CLOSE",
        "CLOSE xxx DEG",
        "SET Exciter_Setpoint xxx pu",
        "Set Power xxx MW",
        "AGC DISABLE",
        "AGC Enable",
        "Set Part_Factor xxx"
    ],
    "Load": [
        "OPEN",
        "CLOSE",
        "Set MW xxx",
        "Set Mvar xxx",
        "AutoScale"
    ],
    "Shunt": [
        "OPEN",
        "CLOSE"
    ],
    "Branch": [
        "OPEN BOTH",
        "OPEN NEAR",
        "OPEN FAR",
        "CLOSE BOTH",
        "CLOSE NEAR",
        "CLOSE FAR",
        "BYPASS",
        "NOTBYPASS",
        "SET GMDDCVOLT xxx"
    ],
    "LineShunt": [
        "OPEN",
        "CLOSE"
    ],
    "Transformer": [
        "DISABLE Automatic Control",
        "ENABLE Automatic Control",
        "SET xxx TAP RATIO",
        "SET xxx PHASE ANGLE",
        "CHANGEBY xxx TAP RATIO",
        "CHANGEBY xxx PHASE ANGLE "
    ]
}
# f.close()
print("List of tcmcommand is loaded")
sys.stdout.flush()
data_package_id = 9999
command = ""


def regular_publisher():
    global queue
    while True:
        time.sleep(1)
        queue.put(("update",))


def background_work():
    while True:
        # update all simulations
        for sim in simulation_instances.values():
            sim.update()


def resource_path(relative_path):
    """ Get absolute path to resource, works for dev and for PyInstaller """
    try:
        # PyInstaller creates a temp folder and stores path in _MEIPASS
        base_path = sys._MEIPASS
    except Exception:
        base_path = os.path.abspath(".")

    return os.path.join(base_path, relative_path)


def main():
    global queue
    args = sys.argv
    if len(args) <= 2:
        ip = "192.168.1.221"
        port = "5557"
    else:
        ip = args[1]
        port = args[2]
    print(f"Connecting to {ip}:{port}")
    clientname = 'electron' + '{:03}'.format(randrange(1, 10**3))

    # Set up the zmq publishers
    context = zmq.Context()
    zmq_publisher = context.socket(zmq.PUB)
    # zmq_publisher.setsockopt(zmq.LINGER, 100)
    zmq_publisher.bind("tcp://0.0.0.0:5556")
    print("ZMQ publisher is ready ...", flush=True)

    # Set up a thread-safe queue
    queue = Queue()

    # Set up Simulation Instances and connect to DS Clients
    sim = SimulationInstance(0, ip, int(port), zmq_publisher, queue)
    simulation_instances[id] = sim

    publisher_thread = threading.Thread(target=background_work)
    publisher_thread.daemon = True
    publisher_thread.start()
    puller_thread = threading.Thread(target=recv_loop)
    puller_thread.daemon = True
    puller_thread.start()
    routine_thread = threading.Thread(target=regular_publisher)
    routine_thread.daemon = True
    routine_thread.start()

    global command
    command_raw = ""
    while command_raw != "q":
        command_raw = input()
        command = command_raw
    print("Main thread quitting")


if __name__ == "__main__":
    print(sys.executable)
    print(os.getcwd())
    print(sys.path)
    main()
