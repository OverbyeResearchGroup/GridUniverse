# py: Python backend for GridVerse

The Python side of GridVerse. `ds_mp.py` is the current backend. It connects to a PowerWorld Dynamics Studio (PWDS) server through the PWDS TCP protocol, registers a data package, polls it once a second, and serves the values to the Vue front end over Socket.IO (eventlet WSGI server). It also forwards user commands and start, pause, continue and abort requests to PWDS, and relays WebRTC signalling messages between clients. `ds_client.py` is an older version of the same logic that talks to the front end over ZeroMQ. The folder also holds build scripts and committed Windows builds of the backend. **Author (git history):** Zeyu Mao, 2021-2022.

## Files

| File | What it does |
|---|---|
| `ds_mp.py` | Current backend. Arguments: `<PWDS host> <PWDS port> <server port>` (defaults `192.168.1.221 5557 9990` unless all three are given). Runs a Socket.IO server (eventlet) on the server port, open to all origins. At start it sends `tcmDictionary` and `tcmGetData` (data package 1000, fields from `config.py`, objects in area 2), then polls `tcmGetDataByID` every second and emits `/ds/data` (msgpack, values rounded to 2 decimals). Handles `S000/user/cmd` (device commands checked against an inline command list, sent as `tcmCommand`) and `S000/user/system` (Start, run till seconds N, Pause, Continue, Abort). Also handles `query`, `register`, `rtc_connect`, `rtc_disconnect` and `data` (WebRTC signalling relay for the contact view). |
| `powerworldDS_eventlet.py` | Class `PowerWorldDS`: PWDS protocol client (message types 0-25, `dsm*` and `tcm*`) using eventlet green sockets with a 1 s timeout. Used by `ds_mp.py`. |
| `powerworldDS.py` | The same client with standard blocking sockets. Used by `ds_client.py`. |
| `ds_client.py` | Older backend. Arguments: `<PWDS host> <PWDS port>` (defaults `192.168.1.221 5557`). Publishes on ZeroMQ PUB `tcp://0.0.0.0:5556`, listens on SUB `tcp://0.0.0.0:5555`, uses data package 9999, and exits when `q` is typed. The current front end does not use ZeroMQ. |
| `config.py` | `config` dict: the fields requested per object type. Same content as `datafields.json`. Rewritten from `datafields.json` when `ENV=DEV` is set. |
| `datafields.json` | Fields per object type (Area 10, Substation 6, Bus 9, Gen 11, Load 8, Shunt 7, Branch 5, Transformer 5). Identical to `src/assets/datafields.json`, so the backend and front end use the same layout. |
| `tcmcommands.json` | Allowed command strings per object type. Not read by the scripts, which carry an inline copy. |
| `test_client.py` | Socket.IO test client. Connects to `http://localhost:9990` and sends `Set Power 220 MW` for the generator at bus 4060, ID 22, every 0.2 s until stopped. |
| `gzip_json.py` | Writes `data.json.gz` from `src/assets/2019GA.json` (hard-coded absolute path). |
| `data.json.gz` | Gzip copy of `src/assets/2019GA.json`. Not read by other code. |
| `build.py` | Runs PyInstaller on `ds_mp.py` (one-file console build with eventlet and dnspython hidden imports), using a hard-coded conda Python and working folder. |
| `ds_mp.spec`, `ds_client.spec` | PyInstaller spec files. `ds_client.spec` sets the output folder to `./pydist`. |
| `*.cert`, `*.key` (5 pairs) | Self-signed certificate and key files added in the commit "Implement SSL. Does not work!" (2021-11-25). The active code does not load them; the SSL wrapper in `ds_mp.py` is commented out. They are public, so do not reuse them. |
| `ds_client.exe`, `dist/`, `output/`, `build/`, `ds_mp.build/`, `ds_mp.dist/`, `ds_mp.onefile-build/` | Committed build outputs: Windows executables of the backend and PyInstaller and Nuitka working folders (Python 3.9.7). |

## Known issues

- `ds_mp.py` needs all three arguments. With fewer, it falls back to the defaults `192.168.1.221 5557 9990`.
- Only Simulation ID `000` is handled (topic prefix `S000` is fixed), and only objects in area number 2 are requested (fixed in `setup_dictionary_data` in both backends).
- If the first connection to PWDS fails, the data task in `ds_mp.py` stops while the Socket.IO server keeps running without data. Restart `ds_mp.py` once PWDS is up.
- `ds_client.py` talks ZeroMQ, but the current front end talks Socket.IO, so the two do not work together.
- `build.py` and `gzip_json.py` use hard-coded `C:\Users\test\...` paths.

## Setup

1. Python 3.9. Install the packages from the root [`requirements.txt`](../requirements.txt) (see the [root README](../README.md), Setup).
2. `test_client.py` needs the Socket.IO client extras: `pip install "python-socketio[client]"`.
3. PyInstaller is only needed to rebuild the `.exe` files: `pip install pyinstaller` (it is a commented line in `requirements.txt` because no script imports it).
4. A PWDS server reachable over TCP.

## Running

From the repository root, with PWDS already running:

```
cd py
python ds_mp.py localhost 5557 9990
```

Replace `localhost 5557` with the PWDS host and port. To rebuild `config.py` from `datafields.json` first, set `ENV=DEV` before starting (`set ENV=DEV` in cmd).

Test without the front end, with `ds_mp.py` running on port 9990:

```
python test_client.py
```

This changes the setpoint of generator 4060 #22 in the running simulation. Stop it with Ctrl+C.

Older ZeroMQ backend: `python ds_client.py <PWDS host> <PWDS port>`, then type `q` and Enter to quit.

Rebuild the backend executable: `pyinstaller ds_mp.spec` from this folder, or edit the paths in `build.py` and run `python build.py`.

## Inputs and outputs

- Input: the PWDS TCP stream (host and port from the command line).
- Input: `config.py` (or `datafields.json` when `ENV=DEV` is set).
- Input: Socket.IO messages from the front end (`S000/user/cmd`, `S000/user/system`, `query`, `register`, `rtc_connect`, `rtc_disconnect`, `data`).
- Output: Socket.IO events to the front end: `/ds/data`, `/ds/system`, `/ds/note`, `S000/ds/note`, `reply`, `OK`, `ready`, `data`.
- Output: commands sent to PWDS; status lines printed to the console.
- Output: `config.py` (with `ENV=DEV`), `data.json.gz` (`gzip_json.py`), `.exe` files (`build.py` or the spec files).
