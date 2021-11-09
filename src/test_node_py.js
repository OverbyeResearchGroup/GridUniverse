// test_node_py.js
const path = require('path');
var util = require("util");
util.log('readingin');

let port = '4242';

let script = path.join(__dirname, '../pydist', 'ds_client', 'ds_client')
let pyProc = require('child_process').execFile(script, ["localhost", "5557"])
// let script = path.join(__dirname, '../py', 'ds_client.py')
  // let script = path.join(__dirname, '../pydist', 'ds_client', 'ds_client')
util.log(script);
// let pyProc = require('child_process').spawn('python', [script, "localhost", "5557"])

// pyProc.stdout.on('data', function (chunk) {
//     var textChunk = chunk.toString('utf8');// buffer to string
//     util.log(textChunk);
// });

// pyProc.stderr.on('data', function(data) {
//     console.error(data.toString());
// });
pyProc.stdout.pipe(process.stdout);
pyProc.stderr.pipe(process.stderr);

if (pyProc != null) {
    console.log('child process success')
}