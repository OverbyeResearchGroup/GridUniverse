import socketio
import json

# standard Python
sio = socketio.Client()

@sio.event
def connect():
    print("I'm connected!")

@sio.event
def connect_error(data):
    print("The connection failed!")

@sio.event
def disconnect():
    print("I'm disconnected!")

@sio.event
def message(data):
    print('I received a message!')

@sio.on('/ds/data')
def on_message(data):
    print(data)



sio.connect('http://localhost:9999')

# sio.emit('S000/user/cmd', json.dumps({'type': 'bar'}))
