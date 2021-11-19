'use strict'
import path from 'path'
import { app, protocol, BrowserWindow, ipcMain } from 'electron'
import {
  createProtocol,
  /* installVueDevtools */
} from 'vue-cli-plugin-electron-builder/lib'
// const zmq = require("zeromq")
import { encode, decode } from "@msgpack/msgpack"

const isDevelopment = process.env.NODE_ENV !== 'production'

// app.commandLine.appendSwitch("no-proxy-server")

// Keep a global reference of the window object, if you don't, the window will
// be closed automatically when the JavaScript object is garbage collected.
let win

// Change the default app name
if (process.platform === 'win32') {
  app.setAppUserModelId("Gridverse");
}

// Scheme must be registered before the app is ready
protocol.registerSchemesAsPrivileged([{ scheme: 'app', privileges: { secure: true, standard: true } }])

function createWindow() {
  // Create the browser window.
  win = new BrowserWindow({
    width: 800, height: 600, icon: path.join(__static, 'grid.ico'),
    autoHideMenuBar: true,
    webPreferences: {
      nodeIntegration: true,
      contextIsolation: false
    }
  })

  if (process.env.WEBPACK_DEV_SERVER_URL) {
    // Load the url of the dev server if in development mode
    win.loadURL(process.env.WEBPACK_DEV_SERVER_URL)
    if (!process.env.IS_TEST) win.webContents.openDevTools()
  } else {
    createProtocol('app')
    // Load the index.html when not in development
    win.loadURL('app://./index.html')
  }

  win.on('closed', () => {
    win = null
  })
}

// Prepare the Python process that will be running with the Node
var util = require("util");
util.log('Self-check: Logging is working properly');
let pyProc = null
let pyPort = null

const createPyProc = (ip, port, server_port) => {
  // let script = path.join(__dirname, '../py', 'ds_client.py')  // for development only
  let script = path.join(__dirname, '../pydist', 'ds_client')
  util.log(script);
  // pyProc = require('child_process').spawn("C:/Users/test/anaconda3/python.exe", [script, ip, port]) // for development
  pyProc = require('child_process').execFile(script, [ip, port, server_port])
  pyProc.stdout.on('data', function (chunk) {
    var textChunk = chunk.toString('utf8');// buffer to string
    util.log(textChunk);
  });

  pyProc.stderr.on('data', function (data) {
    console.error(data.toString());
  });
  if (pyProc != null) {
    console.log('child process success')
  }
}

// // Set the pusher and subscriber as global so that the ipcMain can call it from elsewhere
// const push = new zmq.Publisher
// const sub = new zmq.Subscriber

// Implement the async sleep function
const sleep = (milliseconds) => {
  return new Promise(resolve => setTimeout(resolve, milliseconds))
}

// async function zmq_run(ip, pub_port, sub_port) {
//   sub.connect(`tcp://${ip}:${pub_port}`)
//   sub.subscribe(encode("/ds/data"))
//   sub.subscribe(encode("/ds/note"))
//   sub.subscribe(encode("/ds/system"))
//   sub.subscribe(encode("/ds/schedule"))
//   sub.subscribe(encode("/ds/share"))
//   util.log(`Subscriber connected to port ${pub_port}`)

//   await sleep(1000)
//   push.connect(`tcp://${ip}:${sub_port}`)
//   util.log(`Pusher connected to port ${sub_port}`)

//   for await (const [topic, msg] of sub) {
//     // util.log("received a message related to:", decode(topic))
//     win.webContents.send(decode(topic), decode(msg))
//   }
// }

const exitPyProc = () => {
  const { exec } = require('child_process');
  exec('taskkill /f /t /im ds_client.exe', (err, stdout, stderr) => {
    if (err) {
      console.log(err)
      return;
    }
    console.log(`stdout: ${stdout}`);
    console.log(`stderr: ${stderr}`);
  });
  pyProc = null
  pyPort = null
}


// Quit when all windows are closed.
app.on('window-all-closed', () => {
  // On macOS it is common for applications and their menu bar
  // to stay active until the user quits explicitly with Cmd + Q
  if (process.platform !== 'darwin') {
    if (pyProc != null) {
      exitPyProc()
    }
    app.quit()
  }
})

app.on('activate', () => {
  // On macOS it's common to re-create a window in the app when the
  // dock icon is clicked and there are no other windows open.
  if (win === null) {
    createWindow()
  }
})

// This method will be called when Electron has finished
// initialization and is ready to create browser windows.
// Some APIs can only be used after this event occurs.
app.on('ready', async () => {
  if (isDevelopment && !process.env.IS_TEST) {
    // Install Vue Devtools
    // Devtools extensions are broken in Electron 6.0.0 and greater
    // See https://github.com/nklayman/vue-cli-plugin-electron-builder/issues/378 for more info
    // Electron will not launch with Devtools extensions installed on Windows 10 with dark mode
    // If you are not using Windows 10 dark mode, you may uncomment these lines
    // In addition, if the linked issue is closed, you can upgrade electron and uncomment these lines
    // try {
    //   await installVueDevtools()
    // } catch (e) {
    //   console.error('Vue Devtools failed to install:', e.toString())
    // }

  }
  createWindow()
})

// // Register the channel that the IPCMain will be listening
ipcMain.once('connect', (event, config) => {
  const config_object = decode(config);
  if (config_object.direct == true) {
    createPyProc(config_object.ip, config_object.port, config_object.server_port);
  }

})

// ipcMain.on('S000/user/system', async (event, msg) => {
//   util.log(msg);
//   await push.send(['S000/user/system', msg]);
// })

// ipcMain.on('S000/user/cmd', async (event, msg) => {
//   util.log(msg);
//   await push.send(['S000/user/cmd', msg]);
// })

// ipcMain.on('subscribe', (event, msg) => {
//   util.log(msg);
//   sub.subscribe(msg);
// })

// Exit cleanly on request from parent process in development mode.
if (isDevelopment) {
  if (process.platform === 'win32') {
    process.on('message', data => {
      if (data === 'graceful-exit') {
        app.quit()
      }
    })
  } else {
    process.on('SIGTERM', () => {
      app.quit()
    })
  }
}
