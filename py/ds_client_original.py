import time
import json
import sys
import threading
from queue import Queue
import os
from random import randrange

import paho.mqtt.client as mqtt

from powerworldDS import PowerWorldDS

print("DS Client is loading ...")


# sys.stdout.flush()

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print("Connected to MQTT broker with result code " + str(rc))
    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    # client.subscribe("test")


# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    print(time.ctime(), "MQTT Receive: " + msg.topic + " " + str(msg.payload))
    topic_prefix = msg.topic.split('/')[0]
    sim = None
    for tsim in simulation_instances.values():
        if tsim.topic_prefix == topic_prefix:
            sim = tsim
    if sim is None:
        return
    ds = sim.ds
    if msg.topic == topic_prefix + '/user/cmd':
        # msg.payload should be a json string
        # do a preliminary validation
        # get second validation from DS direct
        postload = json.loads(msg.payload)
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
                        sim.action_queue.put(([userid, soc, fsec, json_data],
                                              user, dtype, name, action,
                                              rawid))
                except ValueError:
                    print(ValueError)
            # action = postload['action']
            # otype = postload['type']
            # if action in commands[otype] or action.split(" ")[0] in ["CLOSE", "SET", "Set"]:  # second validation for poor Internet related issues
            #     json_data = {
            #         dtype: {
            #             'ID': deviceid,
            #             'Action': action
            #             # 'Action': action
            #         }
            #     }
            #     sim.action_queue.put(([userid, soc, fsec, json_data], user, dtype, name, action, rawid))
        elif dtype == 'Import':
            user = postload['user']
            schedule = postload['schedule']
            client.publish(simID + "ds/note",
                           "#" + user + " changed the schedule to " + schedule);
    elif msg.topic == topic_prefix + '/user/system':
        if 'Start' in str(msg.payload):
            client.publish(topic_prefix + "/ds/note",
                           "#" + str(msg.payload).split(':')[
                               0] + " start the simulation")
            ds.msgtypes[18]()
        elif 'seconds' in str(msg.payload):
            client.publish(topic_prefix + "/ds/note",
                           "#" + str(msg.payload).split(':')[
                               0] + " start the simulation")
            ds.msgtypes[23](int(str(msg.payload).split('seconds ')[1][:-1]))
        elif 'Pause' in str(msg.payload):
            client.publish(topic_prefix + "/ds/note",
                           "#" + str(msg.payload).split(':')[
                               0] + " pause the simulation")
            ds.msgtypes[19]()
        elif 'Continue' in str(msg.payload):
            client.publish(topic_prefix + "/ds/note",
                           "#" + str(msg.payload).split(':')[
                               0] + " continue the simulation")
            ds.msgtypes[20]()
        elif 'Abort' in str(msg.payload):
            client.publish(topic_prefix + "/ds/note",
                           "#" + str(msg.payload).split(':')[
                               0] + " abort the simulation")
            ds.msgtypes[21]()


def on_publish(client, userdata, mid):
    # print(str(mid) + " => publish")
    pass


def setup_dictionary_data(ds, data_package_id):
    # Receive the case dictionary
    ds.msgtypes[14]()
    dsdictionary = ds.receive(14)
    print(dsdictionary['Gen'].keys())

    # Send the tcmGetData request
    config = {
        "Area": {
            "Field": ["GenMW", "GenMvar", "LoadMW", "LoadMvar", "ShuntMvar",
                      "ExportMW", "FrequencyAve", "ACE", "LossMW",
                      "AGCStatus"],
            "Object": []
        },
        "Substation": {
            "Field": ["GenMW", "GenMvar", "LoadMW", "LoadMvar", "ShuntMvar",
                      "FrequencyAve"],
            "Object": []
        },
        "Bus": {
            "Field": ["Vpu", "Vangle", "FreqHz", "Status", "GenMW", "GenMvar",
                      "LoadMW", "LoadMvar", "ShuntMvar"],
            "Object": []
        },
        "Gen": {
            "Field": ["Vpu", "Vangle", "KV", "FreqHz", "BusStatus", "Status",
                      "MW", "Mvar", "VpuSetpoint", "MWSetpoint", "AGCStatus"],
            "Object": []  # e.g. [28,"2"]
        },
        "Load": {
            "Field": ["Vpu", "Vangle", "KV", "FreqHz", "BusStatus", "Status",
                      "MW", "Mvar"],
            "Object": []
        },
        "Shunt": {
            "Field": ["Vpu", "Vangle", "KV", "FreqHz", "BusStatus", "Status",
                      "Mvar"],
            "Object": []
        },
        "Branch": {
            "Field": ["Status", "MWFrom", "MvarFrom", "MVAFrom", "AmpsFrom"],
            "Object": []
        },
        "Transformer": {
            "Field": ["Phase", "Tap"],
            "Object": []
        }
    }
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


class SimulationInstance():

    def __init__(self, id, ip, port, client):
        print("Simulation ID " + str(
            id) + " initialized to use local DS Port " + str(port))
        sys.stdout.flush()
        self.id = id
        self.ip = ip
        self.port = port
        self.ds = None
        self.client = client
        self.last_known_state = "Initialized"
        self.topic_prefix = "S" + str(self.id).zfill(3)
        client.subscribe(self.topic_prefix + "/user/cmd")
        client.subscribe(self.topic_prefix + "/user/system")
        self.action_queue = Queue()

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
                                    temp['Status'];
        if temp['type'] != 'dsmSimulationData':
            print("DS Message from ID " + str(self.id) + " " + temp['type'])
        if temp['type'] in ['dsmContinueSimulation', 'dsmPauseSimulation',
                            'dsmAbortSimulation', 'dsmStartSimulation',
                            'dsmFinishSimulation']:
            if temp['type'] == 'dsmContinueSimulation':
                self.client.publish(self.topic_prefix + "/ds/system",
                                    "The simulation is continuing")
            elif temp['type'] == 'dsmPauseSimulation':
                self.client.publish(self.topic_prefix + "/ds/system",
                                    "The simulation is paused")
            elif temp['type'] == 'dsmAbortSimulation':
                if temp['abort-fsec'] == 0:
                    self.client.publish(self.topic_prefix + "/ds/system",
                                        "The system goes blackout")
                else:
                    self.client.publish(self.topic_prefix + "/ds/system",
                                        "The simulation has been aborted")
            elif temp['type'] == 'dsmStartSimulation':
                self.client.publish(self.topic_prefix + "/ds/system",
                                    "The simulation is started @" + str(
                                        temp['start-soc']))
            elif temp['type'] == 'dsmFinishSimulation':
                self.client.publish(self.topic_prefix + "/ds/system",
                                    "The simulation has finished")
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
                    self.client.publish(self.topic_prefix + "/ds/note",
                                        "#" + action[
                                            1] + " just issued a command at " +
                                        action[2] + " " + action[3] + ': ' +
                                        action[4] + '@' + action[5] + '@' +
                                        action[3])
            except TypeError as e:
                print('TypeError ' + str(e))

    def update(self):
        if self.ds is None:
            self.setup()
        else:
            try:
                self.handle_action_queue()
                self.ds.msgtypes[12](data_package_id)
                data = self.get_data()
                # print(len(data), flush=True)
                if data is None:
                    return
                data['Data'] = list(map(lambda n: round(n, 2), data['Data']))
                self.client.publish(self.topic_prefix + "/ds/data",
                                    json.dumps(data))
            except KeyError as e:
                return
            except IOError as e:
                self.ds = None
                self.last_known_state = " Not able to connect to the DS"

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


def background_work():
    global command
    while True:
        time.sleep(1)

        # update all simulations
        for sim in simulation_instances.values():
            sim.update()

        # Process admin commands
        if command != "":
            command_split = command.split()
            relevant_sims = []
            if len(command_split) > 1:
                for com_part in command_split[1:]:
                    for sim in simulation_instances.values():
                        if com_part == str(sim.id):
                            relevant_sims.append(sim)
                            break
                    else:
                        print("No simulation id " + com_part + " exists")
            else:
                for sim in simulation_instances.values():
                    relevant_sims.append(sim)
            if command_split[0] == "status" or command_split[0] == "s":
                for sim in relevant_sims:
                    sim.write_status()
            elif command_split[0] in ["start"]:
                for sim in relevant_sims:
                    if sim.ds is not None:
                        print("Tried to start " + str(sim.id))
                        sim.ds.msgtypes[18]()
            elif command_split[0] in ["pause"]:
                for sim in relevant_sims:
                    if sim.ds is not None:
                        print("Tried to pause " + str(sim.id))
                        sim.ds.msgtypes[19]()
            elif command_split[0] in ["continue"]:
                for sim in relevant_sims:
                    if sim.ds is not None:
                        print("Tried to continue " + str(sim.id))
                        sim.ds.msgtypes[20]()
            elif command_split[0] in ["abort"]:
                for sim in relevant_sims:
                    if sim.ds is not None:
                        print("Tried to abort " + str(sim.id))
                        sim.ds.msgtypes[21]()
            else:
                print("Unknown admin command: " + command)
            command = ""


def main():
    args = sys.argv
    ip = args[1]
    port = args[2]
    print("Connecting to {}:{}".format(ip, port))
    clientname = 'electron' + '{:03}'.format(randrange(1, 10**3))

    # Set up the MQTT Client
    client = mqtt.Client(clientname)
    client.on_connect = on_connect
    client.on_message = on_message
    client.on_publish = on_publish
    # client.connect("104.254.244.143")
    client.connect("localhost")

    # Set up Simulation Instances and connect to DS Clients
    id = 0
    port = int(port)
    sim = SimulationInstance(id, ip, port, client)
    simulation_instances[id] = sim

    client.loop_start()
    worker_thread = threading.Thread(target=background_work)
    worker_thread.daemon = True
    worker_thread.start()

    global command
    command_raw = ""
    while command_raw != "q":
        command_raw = input()
        command = command_raw
    print("Main thread quitting")


if __name__ == "__main__":
    main()
