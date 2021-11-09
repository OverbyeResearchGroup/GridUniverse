import zmq
import random
import sys
import time
import pickle
import msgpack

port = "5556"

context = zmq.Context()
socket = context.socket(zmq.PUB)
socket.bind("tcp://*:%s" % port)

while True:
    topic = b'1000'
    messagedata = random.randrange(1,215) - 80
    print ("%s %d" % (topic, messagedata))
    socket.send_multipart([topic, msgpack.dumps({
        "test": True
    })])
    time.sleep(1)