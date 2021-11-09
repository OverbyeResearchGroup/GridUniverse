import sys
import zmq
import pickle
import msgpack
import time

port = "5555"

# Socket to talk to server
context = zmq.Context()
socket = context.socket(zmq.PUSH)

socket.connect("tcp://127.0.0.1:%s" % port)

# # Subscribe to a topic
# topicfilter = "1000"
# socket.subscribe(topicfilter)

# Process 5 updates
total_value = 0
while True:
    time.sleep(1)
    socket.send(b"yes!")
    print("Sent", flush=True)
