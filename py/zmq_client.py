import sys
import zmq
import msgpack
import time

port = "5555"

# Socket to talk to server
context = zmq.Context()
socket = context.socket(zmq.PUB)

socket.connect("tcp://127.0.0.1:%s" % port)

# # Subscribe to a topic
# topicfilter = "S000/user/cmd"
# socket.subscribe(topicfilter)

# Process 5 updates
total_value = 0
while True:
    time.sleep(1)
    # [topic, msg] = socket.recv_multipart()
    # topic = msgpack.loads(topic)
    # msg = msgpack.loads(msg)
    # print(topic, msg)
    socket.send_multipart([msgpack.dumps("S000/user/cmd"), msgpack.dumps(
        "hahah")])
