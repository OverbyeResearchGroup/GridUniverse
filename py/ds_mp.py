
from eventlet import wsgi, listen
from eventlet.queue import Queue

from json import load
from sys import argv, stdout
from os import environ

from random import randrange
from msgpack import dumps

from socketio import Server, WSGIApp
from powerworldDS_eventlet import PowerWorldDS


print("DS Client is loading ...", flush=True)

if environ.get('ENV', None) == 'DEV':
    with open('datafields.json', 'r') as f:
        temp = load(f)

    with open('config.py', 'w') as f:
        f.write(f"config = {temp}")

from config import config

args = argv
if len(args) <= 3:
    ip = "192.168.1.221"
    port = "5557"
    server_port = "9990"
else:
    ip = args[1]
    port = args[2]
    server_port = args[3]
print(f"Connecting to {ip}:{port}")

sio = Server(async_mode='eventlet', cors_allowed_origins='*')
app = WSGIApp(sio)
sock = listen(('', int(server_port)))
queue = Queue(100)

topic_prefix = "S000"

clients = {}
online = []
room = "webrtc"


@sio.event
def connect(sid, environ):
    print('connect ', sid)
    clients[sid] = {}
    clients[sid]["status"] = "Connected"
    if sid not in online:
        online.append(sid)
    sio.emit('OK', dumps({"status": "connected"}), room=sid)


@sio.event
def disconnect(sid):
    global sock
    print('disconnect ', sid)
    clients[sid]["status"] = "Disconnected"
    try:
        online.remove(sid)
    except ValueError:
        pass
    if len(online) == 0:
        print("No active connection!")
        sock.close()


@sio.on('*')
def catch_all(event, sid, data):
    print(event, sid, data)


@sio.on('query')
def handle_query(sid):
    print("receive query request from", sid)
    sio.emit('reply', dumps(clients), room=sid)


@sio.on('register')
def handle_register(sid, data):
    print("receive registration")
    clients[sid]["name"] = data


@sio.on('rtc_connect')
def handle_rtc_connect(sid):
    print("rtc connect", sid)
    sio.emit('ready', room=room, skip_sid=sid)
    sio.enter_room(sid, room)


@sio.on('rtc_disconnect')
def handle_rtc_disconnect(sid):
    print("rtc disconnect", sid)
    sio.leave_room(sid, room)


@sio.on('data')
def data(sid, data):
    print('Message from {}: {}'.format(sid, data))
    sio.emit('data', data, room=room, skip_sid=sid)


@sio.on(f"{topic_prefix}/user/cmd")
def handle_user_cmd(sid, data):
    postload = data  #loads(data)
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
                queue.put_nowait(([userid, soc, fsec, json_data],
                                  user, dtype, name, action,
                                  rawid))
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
                    queue.put_nowait(([userid, soc, fsec, json_data],
                                      user, dtype, name, action,
                                      rawid))
            except ValueError:
                print(ValueError)
    elif dtype == 'Import':
        user = postload['user']
        schedule = postload['schedule']
        queue.put_nowait(("notification", "ds/note", "#" + user + " "
                                                                  "changed the schedule to " + schedule))


@sio.on(f"{topic_prefix}/user/system")
def handle_system_message(sid, payload):
    if 'Start' in str(payload):
        queue.put_nowait(("notification", topic_prefix + "/ds/note", "#" + str(payload).split(':')[
            0] + " start the simulation"))
        # ds.msgtypes[18]()
        queue.put_nowait(("msgtype1", 18, ))
    elif 'seconds' in str(payload):
        queue.put_nowait(("notification", topic_prefix + "/ds/note",
                          "#" + str(payload).split(':')[
                              0] + " start the simulation"))
        # ds.msgtypes[23](int(str(payload).split('seconds ')[1][:-1]))
        queue.put_nowait(("msgtype2", 23, int(str(payload).split('seconds ')[1][:-1])))
    elif 'Pause' in str(payload):
        queue.put_nowait(("notification", topic_prefix + "/ds/note",
                          "#" + str(payload).split(':')[
                              0] + " pause the simulation"))
        # ds.msgtypes[19]()
        queue.put_nowait(("msgtype1", 19, ))
    elif 'Continue' in str(payload):
        queue.put_nowait(("notification", topic_prefix + "/ds/note",
                          "#" + str(payload).split(':')[
                              0] + " continue the simulation"))
        # ds.msgtypes[20]()
        queue.put_nowait(("msgtype1", 20, ))
    elif 'Abort' in str(payload):
        queue.put_nowait(("notification", topic_prefix + "/ds/note",
                          "#" + str(payload).split(':')[
                              0] + " abort the simulation"))
        # ds.msgtypes[21]()
        queue.put_nowait(("msgtype1", 21, ))


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
    # config = json.loads(open(resource_path("datafields.json")).read())
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
        stdout.flush()
        self.id = id
        self.ip = ip
        self.port = port
        self.ds = PowerWorldDS(ip, int(port))
        self.client = client
        self.last_known_state = "Initialized"
        self.topic_prefix = "S" + str(self.id).zfill(3)
        # client.subscribe(self.topic_prefix + "/user/cmd")
        # client.subscribe(self.topic_prefix + "/user/system")
        self.action_queue = queue
        self.data_package_id: int = 1000

    def setup(self):
        try:
            setup_dictionary_data(self.ds, self.data_package_id)
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
                self.client.emit("/ds/system", dumps("The simulation is continuing"))
            elif temp['type'] == 'dsmPauseSimulation':
                self.client.emit("/ds/system", dumps("The simulation is paused"))
            elif temp['type'] == 'dsmAbortSimulation':
                if temp['abort-fsec'] == 0:
                    self.client.emit("/ds/system", dumps("The system goes blackout"))
                else:
                    self.client.emit("/ds/system", dumps("The simulation has been aborted"))
            elif temp['type'] == 'dsmStartSimulation':
                self.client.emit("/ds/system", dumps("The simulation is started @" + str(
                                                temp['start-soc'])))
            elif temp['type'] == 'dsmFinishSimulation':
                self.client.emit("/ds/system", dumps("The simulation has finished"))
            return self.get_data()
        return temp

    def handle_action_queue(self):
        count = 0
        while not self.action_queue.empty():
            count += 1
            # print(count, self.action_queue.qsize())
            action = self.action_queue.get_nowait()
            if action[0] == "notification":
                self.client.emit(
                    action[1], dumps(action[2]))
            elif action[0] == "update":
                self.regular_update()
            elif action[0] == "msgtype1":
                self.ds.msgtypes[action[1]]()
            elif action[0] == "msgtype2":
                self.ds.msgtypes[action[1]](action[2])
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
                        self.client.emit(
                            "/ds/note",
                            dumps("#" + action[
                                1] + " just issued a command at " +
                                  action[2] + " " + action[3] + ': ' +
                                  action[4] + '@' + action[5] + '@' +
                                  action[3]))
                except TypeError as e:
                    print('TypeError ' + str(e))

    def update(self):
        try:
            self.handle_action_queue()
        except KeyError as e:
            return
        except IOError as e:
            self.ds = None
            self.last_known_state = " Not able to connect to the DS"

    def regular_update(self):
        try:
            self.ds.msgtypes[12](self.data_package_id)
            data = self.get_data()
            if data is None:
                return
            data['Data'] = list(map(lambda n: round(n, 2), data['Data']))
            topic = "/ds/data"
            self.client.emit(topic, dumps(data))
        except AttributeError:
            print("DS is disconnected")
            print("Reconnecting...")
            self.ds = PowerWorldDS(self.ip, int(self.port))

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
stdout.flush()
data_package_id = 9999
command = ""


def regular_publisher(queue):
    while True:
        sio.sleep(1)  #sleep(1)
        queue.put_nowait(("update",))


def background_work(ip, port, sio, queue):
    sim = SimulationInstance(0, ip, int(port), sio, queue)
    sim.setup()
    while True:
        sim.update()
        sio.sleep(0.002)


def main():
    global sock, app
    clientname = 'electron' + '{:03}'.format(randrange(1, 10 ** 3))

    # Set up the zmq publishers

    # context = Context()
    # zmq_publisher = context.socket(PUB)
    # # zmq_publisher.setsockopt(zmq.LINGER, 100)
    # zmq_publisher.bind("tcp://0.0.0.0:5556")
    # print("ZMQ publisher is ready ...", flush=True)
    #
    # Set up a thread-safe queue
    # queue = Queue()

    sio.start_background_task(target=lambda: regular_publisher(queue))
    sio.start_background_task(target=lambda: background_work(ip, port, sio, queue))

    # sio.start_background_task(target=periodic_job)

    # app.run(port=9999, debug=True)
    try:
        wsgi.server(sock, app, socket_timeout=2)
    except OSError:
        print("wsgi server exited")
    # wsgi.server(wrap_ssl(listen(('', int(server_port))),
    #                      certfile='80053852_tauri.cert',
    #                      keyfile='80053852_tauri.key',
    #                      server_side=True),
    #             app)


if __name__ == "__main__":
    main()
