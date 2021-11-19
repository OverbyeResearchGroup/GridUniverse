from eventlet.green import socket
# import socket
import struct
import itertools

# Load the default parameters corresponding to the PWDS Protocol Nov-08-2017
DATAFIELD = ["LoadMW", "LoadMvar", "ShuntMW", "ShuntMvar", "FrequencyAve", "ExportMW", "ExportMvar",  # 0-6
             "IslandNumber", "KV", "BusStatus", "MW", "Mvar", "MVA", "VpuSetpoint", "MWSetpoint",  # 7-14
             "Vpu", "Vangle", "FreqHz", "ROCOFHz", "Status", "GenMW", "GenMvar", "MvarNom",  # 15-22
             "MWFrom", "MvarFrom", "MVAFrom", "AmpsFrom", "MWTo", "MvarTo", "MVATo", "AmpsTo", "MWMech",  # 23-31#
             "Mode", "MWRect", "MvarRect", "MWInv", "MvarInv", "Amps", "VoltSched", "Setpoint", "Percent",  # 32-40
             "Phase", "Tap", "TapMin", "TapMax", "TapStepSize", "RegMin", "RegMax", "RegValue", "RegError",  # 41-49
             "GICXFNeutralAmps", "GICQLosses", "AGCStatus"]  # 50-52

CONFIGFIELD = ["Word.Status", "Card.START-SOC", "Card.START-Fracsec", "Card.END-SOC", "Card.END-Fracsec",  # 0-4
               "Card.CURRENT-SOC", "Card.CURRENT-Fracsec", "Single.MVA Base", "Single.Nominal Freq", "Single.Speed",
               # 5-9
               "String.Name", "Byte.Option", "Int.Number", "String.Superarea Name", "Double.Latitude",
               "Double.Longitude",  # 10-15
               "String.SubID", "Int.Bus Number", "Int.Area Number", "Int.Zone Number", "Int.Sub Number",
               "Single.Nominal kV",  # 16-21
               "Single.Max Limit", "Single.Min Limit", "Single.Voltage Setpoint", "Single.MW Setpoint",
               "Single.MVA Base",  # 22-26
               "Single.MW Max Limit", "Single.MW Min Limit", "String.ID", "Single.Load Scalar", "Single.Nominal Mvar",
               # 27-31
               "Byte.Number of Branches", "Int.From Bus Number", "Int.To Bus Number", "String.CircuitID", "Byte.Type",
               # 32-36
               "Byte.MultiSectionLine Number", "Int.MultiSectionLine From Bus", "Int.MultiSectionLine To Bus",  # 37-39
               "Single.MVA Limit", "Int.Local Bus Number", "Int.End Bus Number", "Single.Nominal MW",
               "Int.Rectifier Bus Number",  # 40-44
               "Int.Inverter Bus Number", "Int.ID", "Int.Number of MTDC BUS", "Int.MTDC Bus Number",
               "Int.MTDCRecord Number",  # 45-49
               "Int.AC Bus Number", "Int.DC Bus Number", "String.Circuit Character", "Int.Number of Generators",
               # 50-53
               "Int.Number of Loads", "Int.Number of Shunts", "Int.MTDCRecord ID", "Single.MW Limit", # 54-57
               "Int.Regulated Location Bus Number", "Single.Min Tap/PA", "Single.Max Tap/PA", "Single.Step Size",  # 58-61
               "Single.Min Regulation Value", "Single.Max Regulation Value", "Word.Number", "Single.Scan Period Multiplier",  # 62-65
               "Byte.Class", "Int.Additional Number", "String.Type", "String.Field Name", "String.ID2",    # 66-70
               "Single.ACEFBT", "Single.ACEDB", "Byte.AGC", "Byte.Unittype", "Byte.Fueltype", "Int.Number of Buses",  # 71-76
               "Single.AGCPF"]  # 77-

INDEXDICT = {}


# Load the global functions
def utf16be(word):
    return word.encode('utf-16BE')


def isplit(iterable, splitters):
    return [list(g) for k, g in itertools.groupby(iterable, lambda x: x in splitters) if not k]


def list2list(detail):
    """
    turn a list of values into a list of strings
    """
    str_list = []
    e = map(str, detail)
    for l in e:
        str_list.append(l)
    return str_list


def find(target, myList):
    """
    fina an index of a specific element in a list
    """
    for i in range(len(myList)):
        if myList[i] == target:
            yield i


class PowerWorldDS(object):
    """
    A thread responsible for communication between the client and DS
    """
    def __init__(self, host, port):
        self.socket = socket.socket(
            socket.AF_INET, socket.SOCK_STREAM)
        # self.socket = socket.socket()
        self.socket.connect((host, port))
        self.socket.settimeout(1)
        self.msgtypes = {0: self.dsmconnected,
                         1: self.dsmdisconnect,
                         2: self.dsmsimulationdata,
                         3: self.dsmstartsimulation,
                         4: self.dsmpausesimulation,
                         5: self.dsmcontinuesimulation,
                         6: self.dsmfinishsimulation,
                         7: self.dsmabortsimulation,
                         8: self.dsmgetclientinfo,
                         9: self.dsmtextmessage,
                         10: self.tcminfo,
                         11: self.tcmgetdata,
                         12: self.tcmgetdatabyid,
                         13: self.tcmcommand,
                         14: self.tcmdictionary,
                         15: self.dsmdictionary,
                         16: self.dsmok,
                         17: self.dsmerror,
                         18: self.tcmsimulationstart,
                         19: self.tcmsimulationpause,
                         20: self.tcmsimulationcontinue,
                         21: self.tcmsimulationabort,
                         22: self.tcmsimulationnsteps,
                         23: self.tcmsimulationruntosecond,
                         24: self.tcmgetfile,
                         25: self.dsmfile
                         }
        self.status = {
            0: "no case",
            1: "initialized",
            2: "running",
            3: "paused",
            4: "finished",
            5: "aborted",
            6: "error"
        }
        info = self.receive()

    def tuple_round(self, data, p):
        """
        round every elements in a tuple
        still return a tuple form
        """
        output = []
        for x in data:
            try:
                output.append(round(x, p))
            except TypeError:
                pass
        return output

    def receive(self, opt=None):
        """
        Receive messages from the socket
        """
        header_data = self._recv_n_bytes(6)
        key = struct.unpack('!' + 2 * 'B', header_data[0:2])
        framesize = struct.unpack('!I', header_data[2:6])[0]
        if key == (111, 1) or key == (111, 2):
            datasize = framesize - 6
            data = self._recv_n_bytes(datasize)
            msgtype = struct.unpack('!H', data[0:2])[0]
            if msgtype not in self.msgtypes:
                print("Unexpected message received: " + str(msgtype));
            return self.msgtypes[msgtype](data)
        else:
            print("Bad key received");

    def _handle_close(self, cmd):
        """
        Close the DS connection
        """
        self.work_signal = 0

    def dsmconnected(self, data):
        #TODO: cancel all the shared class variable
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        if sourceid_num:
            self.sourceid = data[4: 4 + 2 * sourceid_num]
            # print(self.sourceid.decode('utf-16BE'))
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        if userid_num:
            userid = data[6 + 2 * sourceid_num: 6 + 2 * sourceid_num + 2 * userid_num]
            # print(userid)
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        # print(payloadsize)
        payload = data[-payloadsize:]
        sim_status = struct.unpack('!H', payload[0:2])[0]
        status = self.status[sim_status]
        # print(status)
        self.guid = payload[2:]
        # print(self.guid)
        return {'type': 'dsmConnected', 'status': status, 'GUID': self.guid}

    def dsmdisconnect(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        return {'type': 'dsmDisconnect'}

    def dsmsimulationdata(self, data):
        """
        Receive the data frame and translate to the readable data according to the DS protocol
        """
        time_base = float(1000000)
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        id = struct.unpack('!h', payload[:2])[0]
        status_index = struct.unpack('!H', payload[2:4])[0]
        status = self.status[status_index]
        number = int((payloadsize - 12) / 4)
        # print(payloadsize, number)
        data = struct.unpack('!' + number * 'f', payload[12:])
        simtime = struct.unpack('!' + 2 * 'I', payload[4:12])
        # utc_simtime = datetime.datetime.utcfromtimestamp(simtime[0])
        # sim_time = str(utc_simtime) + str(round(simtime[1] / time_base, 3))[1:4]
        # simdata = [sim_time] + data[:self.req_data]
        # origin_data = copy.deepcopy(simdata)
        # area_length = 5
        # startpoint = self.req_data + area_length
        # object_data = []
        # title = ['Time'] + self.req_data / 3 * ['Vmag', 'Vangle', 'FreqHz']
        # title = ['Time'] + (len(origin_data) - 1) / 3 * ['Vmag', 'Vangle', 'FreqHz']
        return {'type': 'dsmSimulationData', 'ID': id, 'Status': status, 'SOC': simtime[0], 'FRACSEC': simtime[1],
                'Data': data}

    def dsmstartsimulation(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        simtime = struct.unpack('!' + 4 * 'I', payload[:16])
        speedup = struct.unpack('!' + 'f', payload[16:])[0]
        return {'type': 'dsmStartSimulation', 'start-soc': simtime[0], 'start-fsec': simtime[1], 'end-soc': simtime[2], 'end-fsec': simtime[3],
                'speedup': speedup}

    def dsmpausesimulation(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        simtime = struct.unpack('!' + 2 * 'I', payload[:8])
        return {'type': 'dsmPauseSimulation', 'current-soc': simtime[0], 'current-fsec': simtime[1]}

    def dsmcontinuesimulation(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        simtime = struct.unpack('!' + 2 * 'I', payload[:8])
        return {'type': 'dsmContinueSimulation', 'current-soc': simtime[0], 'current-fsec': simtime[1]}

    def dsmfinishsimulation(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        simtime = struct.unpack('!' + 2 * 'I', payload[:8])
        return {'type': 'dsmFinishSimulation', 'end-soc': simtime[0], 'end-fsec': simtime[1]}

    def dsmabortsimulation(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        simtime = struct.unpack('!' + 2 * 'I', payload[:8])
        return {'type': 'dsmAbortSimulation', 'abort-soc': simtime[0], 'abort-fsec': simtime[1]}

    def dsmgetclientinfo(self, data):
        #print("dsmGetClientInfo")
        return {'type': 'dsmGetClientInfo'}

    def dsmtextmessage(self, data):
        #print("dsmTextMessage")
        return {'type': 'dsmTextMessage'}

    def dsmdictionary(self, data):
        """
        Receive the dictionary frame from DS
        """
        #print("dsmdictionary")
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
        struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        d = dict()
        objecttype_count = struct.unpack('!H', payload[16:18])[0]
        d['type'] = 'dsmDictionary'
        d['ObjectType Count'] = objecttype_count
        point = 18
        while len(payload) - point:
            object_name_num = struct.unpack('!H', payload[point:point + 2])[0]
            object_name = payload[point + 2:point + 2 + 2 * object_name_num].decode('utf-16BE')
            point = point + 2 + 2 * object_name_num
            object_num = struct.unpack('!I', payload[point:point + 4])[0]
            (byte_num, word_num, int_num, single_num, double_num, str_num) = struct.unpack('!' + 6 * 'H', payload[
                                                                                                          point + 4:point + 16])
            major_list = [object_name, object_num, byte_num, word_num, int_num, single_num, double_num, str_num]
            point += 16
            d[str(major_list[0])] = {}
            #print([object_name, object_num])
            for n in range(object_num):
                item_list = []
                if byte_num > 0:
                    byte_field = struct.unpack('!' + byte_num * 'b', payload[point: point + byte_num])
                    item_list += list(byte_field)
                    point += byte_num
                if word_num > 0:
                    word_field = struct.unpack('!' + word_num * 'H', payload[point: point + 2 * word_num])
                    item_list += list(word_field)
                    point += 2 * word_num
                if int_num > 0:
                    int_field = struct.unpack('!' + int_num * 'i', payload[point:point + 4 * int_num])
                    item_list += list(int_field)
                    point += 4 * int_num
                if single_num > 0:
                    single_field = struct.unpack('!' + single_num * 'f', payload[point:point + 4 * single_num])
                    item_list += self.tuple_round(single_field, 2)
                    point += 4 * single_num
                if double_num > 0:
                    double_field = struct.unpack('!' + double_num * 'd', payload[point: point + 8 * double_num])
                    item_list += self.tuple_round(double_field, 2)
                    point += 8 * double_num
                if str_num > 0:
                    for i in range(str_num):
                        cha_num = struct.unpack('!H', payload[point: point + 2])[0]
                        string_field = payload[point + 2: point + 2 + 2 * cha_num].decode('utf-16BE')
                        item_list.append(string_field)
                        point += 2 + 2 * cha_num
                self.dict_generator(d, str(major_list[0]), item_list)
        #print(len(d['Gen']))
        return d

    def dict_generator(self, dict_d, object_name, item_list):
        # print(object_name)
        if object_name == 'Bus':
            # keys = ['Bus Num', 'Area Num', 'Zone Num', 'Sub Num', 'Nominal KV', 'Max Limit', 'Min Limit', 'Name']
            keys = [17, 18, 19, 20, 21, 22, 23, 10]
        elif object_name == 'Gen':
            # keys = ["Byte.AGC", "Byte.Unittype", "Byte.Fueltype", 'Bus Num', 'Area Num', 'Zone Num', 'Voltage Setpoint', 'MW Setpoint', 'MVA Base', 'MW Max', 'MW Min', 'Single.AGCPF', 'Device ID']
            keys = [73, 74, 75, 17, 18, 19, 24, 25, 26, 27, 28, 77, 29]
        elif object_name == 'Load':
            # keys = ['Bus Num', 'Area Num', 'Zone Num', 'Initial Scalar', 'Device ID']
            keys = [17, 18, 19, 30, 29]
        elif object_name == 'Shunt':
            # keys = ['Bus Num', 'Area Num', 'Zone Num', 'Nominal Mvar', 'Device ID']
            keys = [17, 18, 19, 31, 29]
        elif object_name == 'Substation':
            # keys = ['Number', 'Latitude', 'Longitude', 'Name', 'subID']
            keys = [12, 14, 15, 10, 16]
        elif object_name == 'Case':
            # keys = ['Status', 'Start SOC', 'Start FRACSEC', 'End SOC', 'End FRACSEC', 'Current SOC', 'Current FRACSEC', 'MVA Base', 'Nominal Frequency', 'Speedup', 'Name']
            keys = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
        elif object_name == 'SuperArea':
            # keys = ['Name']
            keys = [10]
        elif object_name == 'Area':
            # keys = ['Option Byte', 'Number', 'Single.ACEFBT', 'Single.ACEDB', 'Name', 'Superarea Name']
            keys = [11, 12, 71, 72, 10, 13]
        elif object_name == 'Zone':
            # keys = ['Option Byte', 'Number', 'Name']
            keys = [11, 12, 13]
        elif object_name == 'Owner':
            # keys = ['Number', 'Name']
            keys = [12, 13]
        elif object_name == 'MultiSectionLine':
            # keys = ['Option Byte', 'Number of Branch', 'From Bus', 'To Bus', 'Circuit ID', 'Name']
            keys = [11, 32, 33, 34, 35, 10]
        elif object_name == 'Branch':
            # keys = ['Option Byte', 'Type', 'Multisectionline Number', 'From Bus', 'To Bus', 'Multisectionline From Bus', 'Multisectionline To Bus', 'MVA Limit', 'Circuit ID']
            keys = [11, 36, 37, 33, 34, 38, 39, 40, 35]
        elif object_name == 'LineShunt':
            # keys = ['Local Bus Num', 'Remote Bus Num', 'Nominal MW', 'Nominal Mvar', 'Circuit ID', 'Shunt ID']
            keys = [41, 42, 43, 31, 35, 46]
        elif object_name == 'DCTransmissionLine':
            # keys = ["Int.Rectifier Bus Number", "Int.Inverter Bus Number", 'Circuit ID']
            keys = [44, 45, 35]
        elif object_name == 'VSCDCLine':
            # keys = ['From Bus', 'To Bus', 'Name']
            keys = [33, 34, 10]
        elif object_name == 'MTDCRecord':
            # keys = ["Int.ID", "Int.AC Bus Number", "String.Name"]
            keys = [46, 47, 10]
        elif object_name == 'MTDCBus':
            # keys = ["Int.MTDC Bus Number", "Int.MTDCRecord Number", "Int.AC Bus Number", "String.Name"]
            keys = [48, 49, 50, 10]
        elif object_name == 'MTDCConverter':
            # keys = ["Int.AC Bus Number", "Int.DC Bus Number", "Int.MTDCRecord ID"]
            keys = [50, 51, 56]
        elif object_name == 'MTDCTransmissionLine':
            # keys = ["Int.MTDCRecord Number", "Int.MTDCRecord Number", "Int.MTDCRecord ID", "String.Circuit Character"]
            keys = [49, 49, 56, 52]
        elif object_name == 'Interface':
            # keys = ["Byte.Option", "Int.Number", "Single.MW Limit", "String.Name"]
            keys = [11, 12, 57, 10]
        elif object_name == 'InjectionGroup':
            # keys = ["Int.Number of Generators", "Int.Number of Loads", "Int.Number of Shunts", "Int.Number of Buses", "String.Name"]
            keys = [53, 54, 55, 76, 10]
        elif object_name == 'InjectionGroupElement':
            # keys = ["Byte.Type", "Int.Bus Num", "String.Device ID", "String.Name"]
            keys = [36, 17, 29, 10]
        elif object_name == 'Outstation':
            # keys = ["Word.Number", "Single.Scan Period Multiplier", "String.Name"]
            keys = [64, 65, 10]
        elif object_name == 'DNP3Point':
            # keys = ["Byte.Type", "Byte.Class", "Word.Number", "Int.Bus Number", "Int.Additional Number", "String.Type", "String.Field Name", "String.ID", "String.ID2"]
            keys = [36, 66, 64, 17, 67, 68, 69, 29, 70]
        elif object_name == 'Transformer':
            # keys = ["Byte.Type", 'From Bus', 'To Bus', "Int.Regulated Location Bus Number", "Single.Min Tap/PA",
            # "Single.Max Tap/PA", "Single.Step Size", "Single.Min Regulation Value", "Single.Max Regulation Value",
            # 'Circuit ID']
            keys = [36, 33, 34, 58, 59, 60, 61, 62, 63, 35]
        # print(object_name)
        INDEXDICT[object_name] = keys
        key_list = [CONFIGFIELD[i] for i in keys]
        new_dict = {k: v for k, v in zip(key_list, item_list)}
        if object_name in ['Bus', 'Gen', 'Load', 'Shunt', 'Substation', 'Owner']:
            # dict_d[object_name][str(item_list[0])] = new_dict
            if object_name in ['Bus', 'Substation', 'Owner']:
                dict_d[object_name][str(item_list[0])] = new_dict
            elif object_name == 'Gen':
                # print(','.join((str(item_list[3]), str(item_list[12]))))
                dict_d[object_name][','.join((str(item_list[3]), str(item_list[12])))] = new_dict
            elif object_name == 'Load':
                dict_d[object_name][','.join((str(item_list[0]), str(item_list[4])))] = new_dict
            elif object_name == 'Shunt':
                dict_d[object_name][','.join((str(item_list[0]), str(item_list[4])))] = new_dict
        elif object_name in ['Branch']:
            if new_dict['Byte.Type'] == 0:    # Only for transmission lines
                dict_d[object_name][','.join((str(item_list[3]), str(item_list[4]), str(item_list[8])))] = new_dict
        elif object_name in ['LineShunt']:
            dict_d[object_name][','.join((str(item_list[0]), str(item_list[1]), str(item_list[4]), str(item_list[5])))] = new_dict
        elif object_name in ['MultiSectionLine']:
            dict_d[object_name][','.join((str(item_list[2]), str(item_list[3]), str(item_list[4])))] = new_dict
        elif object_name in ['Area', 'Zone']:
            dict_d[object_name][str(item_list[1])] = new_dict
        elif object_name in ['Transformer']:
            dict_d[object_name][','.join((str(item_list[1]), str(item_list[2]), str(item_list[9])))] = new_dict

    def dsmok(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        dok_id = struct.unpack('!h', payload[0:2])[0]
        return {'type': 'dsmOK', 'request id': dok_id}

    def dsmerror(self, data):
        sourceid_num = struct.unpack('!H', data[2:4])[0]
        userid_num = struct.unpack('!H', data[4 + 2 * sourceid_num: 6 + 2 * sourceid_num])[0]
        payloadsize = \
            struct.unpack('!I', data[6 + 2 * sourceid_num + 2 * userid_num:10 + 2 * sourceid_num + 2 * userid_num])[0]
        payload = data[-payloadsize:]
        de_id = struct.unpack('!h', payload[:2])[0]
        de_location = struct.unpack('!I', payload[2:6])[0]
        de_explain_num = struct.unpack('!H', payload[6:8])[0]
        de_explain = payload[8:8 + 2 * de_explain_num].decode('utf-16BE')
        return {'type': 'dsmError', 'request id': de_id, 'error location': de_location, 'explanation': de_explain}

    def dsmfile(self):
        print("TBD")

    def tcmdictionary(self, user="undefined"):
        #print('tcmdictionary')
        cmd_key = struct.pack('!B', 111)
        cmd_userid = self.sourceid
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 14)  # 14 = tcmDictionary
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        # print(cmd_userid)
        # print(len(cmd_userid))
        cmd_userid_num = struct.pack('!H', int(len(cmd_userid)/2))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                              cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                              cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmgetdata(self, opt):
        """
        #opt = [id, target]
        Example:
        target = {
            ...
            Bus: {
               ...
               Field: [Vpu, Vangle, ...],
               Object: [[12], [15], ...]
               ...
            },
            ...
        }
        """
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 11)  # 11 = tcmGetData
        cmd_sourceid = utf16be("vpdc")
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', int(len(cmd_userid) / 2))
        tgdid = opt[0]
        target = opt[1]
        cmd_tGD_id = struct.pack('!h', tgdid)
        cmd_tGD_obj_num = struct.pack('!H', len(target))
        # cmd_tGD_obj_num = struct.pack('!H', 1)
        # print(len(target))
        cmd_repeat = b""
        for single_target in target:

            # print(single_target, flush=True)
            # print(target[single_target]['Object'])
            # print(len(target[single_target]['Object']))
            obj_str = single_target
            cmd_obj_str = struct.pack('!H', len(obj_str)) + utf16be(obj_str)
            cmd_field_num = struct.pack('!H', len(target[single_target]['Field']))
            cmd_obj_num = struct.pack('!i', len(target[single_target]['Object']))
            cmd_field_type = b""
            cmd_field_obj = b""
            for field in target[single_target]['Field']:
                field_str = field
                cmd_field_type += struct.pack('!H', len(field_str)) + utf16be(field_str)
            for obj in target[single_target]['Object']:
                for single_id in obj:
                    if type(single_id) is int:
                        cmd_field_obj += struct.pack('!i', single_id)
                    elif type(single_id) is str:
                        cmd_field_obj += struct.pack('!H', len(single_id)) + utf16be(single_id)
            cmd_repeat += cmd_obj_str + cmd_field_num + cmd_field_type + cmd_obj_num + cmd_field_obj
        cmd_payload = cmd_tGD_id + cmd_tGD_obj_num + cmd_repeat
        payloadsize = len(cmd_payload)
        cmd_tGD_payloadsize = struct.pack('!I', payloadsize)
        cmd_framesize = struct.pack('!I', 12 + len(cmd_sourceid) + len(cmd_userid) + 4 + payloadsize)  # Re-calculate
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                              cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                              cmd_userid, cmd_tGD_payloadsize, cmd_payload])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmgetdatabyid(self, opt: int):
        # opt =(int)id;
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 12)  # 12 = tcmGetDataByID
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', int(len(cmd_userid) / 2))
        payloadsize = 2
        cmd_tGD_payloadsize = struct.pack('!I', payloadsize)
        cmd_tGD_id = struct.pack('!h', opt)
        cmd_framesize = struct.pack('!I', 12 + len(cmd_sourceid) + len(cmd_userid) + 4 + payloadsize)
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                              cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                              cmd_userid, cmd_tGD_payloadsize, cmd_tGD_id])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmcommand(self, opt):
        """
        # opt = [id, soc, fracsec, target]
        target = {
            ...
            Gen: {
                ID: [(int)1,(str)1]
                Action: (str)OPEN
            }
            ...
        }

        """
        target = opt[3]
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 13)  # 13 = tcmCommand
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        # print("haha:", len(cmd_sourceid))
        cmd_userid = self.sourceid
        # print("here:", len(cmd_userid))
        cmd_userid_num = struct.pack('!H', int(len(cmd_userid)/2))
        cmd_tcc_id = struct.pack('!h', opt[0])
        cmd_tcc_soc = struct.pack('!I', opt[1])  # Use a zero for this field and the next to immediately execute the command
        cmd_tcc_frac = struct.pack('!I', opt[2])
        cmd_repeat = b""
        for obj in target:
            cmd_repeat += struct.pack('!H', len(obj)) + utf16be(obj)
            for single_id in target[obj]['ID']:
                if type(single_id) is int:
                    cmd_repeat += struct.pack('!i', single_id)
                elif type(single_id) is str:
                    cmd_repeat += struct.pack('!H', len(single_id)) + utf16be(single_id)
            cmd_repeat += struct.pack('!H', len(target[obj]['Action'])) + utf16be(target[obj]['Action'])
        payloadsize = 2 + 8 + len(cmd_repeat)
        cmd_payloadsize = struct.pack('!I', payloadsize)
        cmd_framesize = struct.pack('!I', 12 + len(cmd_sourceid) + len(cmd_userid) + 4 + payloadsize)
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                              cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                              cmd_userid, cmd_payloadsize, cmd_tcc_id, cmd_tcc_soc,
                              cmd_tcc_frac, cmd_repeat])
        #try:
        self.socket.sendall(cmd_packet)
        # except IOError:
        # pass

    def tcminfo(self, opt=None):
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 10)  # 10 = tcmInfo
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                              cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                              cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationstart(self):
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 18)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationpause(self):
        print("Try to pause");
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 19)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationcontinue(self):
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 20)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationabort(self):
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 21)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 0)
        cmd_framesize = struct.pack('!I', 16 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationnsteps(self, opt):
        # opt = step number
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 22)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 4)
        cmd_payload = struct.pack('!i', opt)
        cmd_framesize = struct.pack('!I', 20 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize, cmd_payload])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmsimulationruntosecond(self, opt):
        # opt = (double) the specified elapsed time
        cmd_key = struct.pack('!B', 111)
        cmd_key = b"".join([cmd_key, struct.pack('!B', 2)])
        cmd_messagetype = struct.pack('!H', 23)
        cmd_sourceid_num = struct.pack('!H', 4)
        cmd_sourceid = utf16be("vpdc")
        cmd_userid = self.sourceid
        cmd_userid_num = struct.pack('!H', len(cmd_userid.decode('utf-16BE')))
        cmd_payloadsize = struct.pack('!I', 8)
        cmd_payload = struct.pack('!d', opt)
        cmd_framesize = struct.pack('!I', 24 + len(cmd_sourceid) + len(cmd_userid))
        cmd_packet = b"".join([cmd_key, cmd_framesize, cmd_messagetype,
                               cmd_sourceid_num, cmd_sourceid, cmd_userid_num,
                               cmd_userid, cmd_payloadsize, cmd_payload])
        try:
            self.socket.sendall(cmd_packet)
        except IOError:
            pass

    def tcmgetfile(self):
        print("TBD")

    def _recv_n_bytes(self, n):
        """ Convenience method for receiving exactly n bytes from self.socket
            (assuming it's open and connected).
        """
        # data = b""
        # while len(data) < n:
        #     print(n)
        #     chunk = self.socket.recv(n - len(data))
        #     if chunk == '':
        #         break
        #     data += chunk
        # return data
        buff = bytearray(n)
        pos = 0
        while pos < n:
            # print(n)
            cr = self.socket.recv_into(memoryview(buff)[pos:])
            if cr == 0:
                raise EOFError
            pos += cr
        return buff

