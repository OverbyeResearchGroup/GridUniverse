<template>
  <div>
    <chatpop
      v-if="chatShow"
      :visible="chatShow"
      :topic="chatTopic"
      @close="chatShow = false"
    ></chatpop>
    <linepop
      v-if="lineshowDialog"
      :visible="lineshowDialog"
      :type="type"
      :id="id"
      :name="name"
      @close="lineshowDialog = false"
    />
    <subpop
      v-if="subshowDialog"
      :visible="subshowDialog"
      :children="children"
      :type="type"
      :id="id"
      :name="name"
      @close="subshowDialog = false"
    />
  </div>
</template>

<script>
import { mapGetters } from "vuex";
import fingerprint from "fingerprintjs2";
import iziToast from "izitoast";
// import Push from "push.js";
import { encode, decode } from "@msgpack/msgpack";
// import { ipcRenderer } from "electron";
import io from "socket.io-client";

var client = {};

export default {
  name: "MqttClient",
  data() {
    return {
      client: null,
      usermessage: "Initialized",
      datamessage: "Initialized",
      clientid: null,
      backend_online: null,
      chatShow: false,
      chatTopic: "",
      id: null,
      type: null,
      lineshowDialog: false,
      subshowDialog: false,
      children: {},
      name: "",
      simID: this.$store.state.simID,
      socket: null,
    };
  },
  props: {
    subtopic: {
      type: Array || String || Object,
      default: () => [
        "ds/data",
        "ds/note",
        "ds/system",
        "user/schedule",
        "user/share",
      ],
    },
    pubtopic: {
      type: String || Array || Object,
      default: "/user/cmd",
    },
    address: {
      type: String,
      default: "localhost:8083/mqtt",
      //default: '104.254.244.143:8083/mqtt'
    },
    qos: {
      type: Number,
      default: 0,
    },
    protocol: {
      type: String,
      default: "ws",
    },
    username: {
      type: String,
      default: "",
    },
    password: {
      type: String,
      default: "",
    },
  },
  created() {
    // this.onInitClient();
    // this.initZMQ();
  },
  mounted() {
    const topics = [
      "/ds/data",
      "/ds/note",
      "/ds/system",
      "/ds/schedule",
      "/ds/share",
      "reply",
    ];
    const info = this.$store.state.loginInfo;
    const options = {
      secure: true,
      reconnect: true,
      rejectUnauthorized: false,
    };
    console.log(window.location.hostname);
    console.log(window.location.href);

    if (info.direct) {
      this.socket = io(`http://localhost:${info.server_port}`, { transports: ["websocket"] });
    } else {
      this.socket = io(`http://${info.ip}:${info.server_port}`, { transports: ["websocket"] });
    }

    this.socket.io.on("error", (error) => {
      console.log(error);
    });

    this.socket.on("connect", () => {
      console.log(this.socket.id); // x8WIv7-mJelg7on_ALbx
      iziToast.success({
        title: "System",
        message: "Connected",
        position: "topRight",
      });
    });

    this.socket.on("disconnect", () => {
      console.log(this.socket.id); // undefined
      iziToast.error({
        title: "System",
        message: "Disconnected",
        position: "topRight",
      });
    });

    topics.forEach((topic) => {
      this.socket.on(topic, (data) => {
        // console.log(topic, data);
        this.onMessage(topic, decode(data));
      });
    });

    this.$store.commit("setSocket", this.socket);
  },
  computed: {
    ...mapGetters([
      "getPubStatus",
      "getNewSubscribe",
      "getNewPublish",
      "startsimtrigger",
      "pausesimtrigger",
      "continuesimtrigger",
      "abortsimtrigger",
      "getSchedule",
      "ViolatedBuses",
      "getQuery",
    ]),
  },
  watch: {
    getPubStatus: function (newVal, oldVal) {
      const temp = {
        user: this.$store.state.username, //this.clientid,
        type: this.$store.state.message[0],
        id: this.$store.state.message[1],
        name: this.$store.state.message[2],
        action: this.$store.state.message[3],
      };
      // ipcRenderer.send(this.simID + "/user/cmd", JSON.stringify(temp));
      this.socket.emit(this.simID + "/user/cmd", temp);
      this.$store.commit("addReportUser", {
        time: this.$store.state.currentTime,
        event: [temp.type, temp.id, temp.action],
      });
      if (temp.type == "Gen" && ["OPEN", "CLOSE"].includes(temp.action)) {
        // console.log(temp)
        const id = temp.name.split("#")[0];
        this.$store.commit(
          "addCost",
          this.$store.state.areadetail.content.Gen[id]["OperationCost"]
        );
      }
    },
    getQuery: function (newVal, oldVal) {
      this.socket.emit("query");
    },
    getNewSubscribe: function (newVal, oldVal) {
      // ipcRenderer.send("subscribe", newVal);
      this.socket.on(newVal, (data) => {
        // console.log(newVal, data);
        this.onMessage(newVal, decode(data));
      });
      iziToast.success({
        title: "System",
        message: "Successfully subscribed to a new topic #" + newVal,
        // color: 'yellow',
        position: "topRight",
      });
    },
    getNewPublish: function (newVal, oldVal) {
      // ipcRenderer.send(
      //   newVal[0],
      //   "User #" + this.$store.state.username + ": " + newVal[1]
      //   // 'User #' + this.clientid + ': ' + newVal[1]
      // );
      this.socket.emit(
        newVal[0],
        "User #" + this.$store.state.username + ": " + newVal[1]
      );
    },
    startsimtrigger: function () {
      if (!this.$store.state.simtime) {
        // ipcRenderer.send(
        //   this.simID + "/user/system",
        //   this.$store.state.username + ":" + "Start"
        // );
        this.socket.emit(
          this.simID + "/user/system",
          this.$store.state.username + ":" + "Start"
        );
      } else {
        // ipcRenderer.send(
        //   this.simID + "/user/system",
        //   this.$store.state.username +
        //     ":" +
        //     "run till seconds " +
        //     this.$store.state.simtime
        // );
        this.socket.emit(
          this.simID + "/user/system",
          this.$store.state.username +
            ":" +
            "run till seconds " +
            this.$store.state.simtime
        );
        this.$store.commit("clearsimtime");
      }
    },
    continuesimtrigger: function () {
      // ipcRenderer.send(
      //   this.simID + "/user/system",
      //   this.$store.state.username + ":" + "Continue"
      // );
      this.socket.emit(
        this.simID + "/user/system",
        this.$store.state.username + ":" + "Continue"
      );
    },
    pausesimtrigger: function () {
      // ipcRenderer.send(
      //   this.simID + "/user/system",
      //   this.$store.state.username + ":" + "Pause"
      // );
      this.socket.emit(
        this.simID + "/user/system",
        this.$store.state.username + ":" + "Pause"
      );
    },
    abortsimtrigger: function () {
      // ipcRenderer.send(
      //   this.simID + "/user/system",
      //   this.$store.state.username + ":" + "Abort"
      // );
      this.socket.emit(
        this.simID + "/user/system",
        this.$store.state.username + ":" + "Abort"
      );
    },
    backend_online: function () {
      iziToast.success({
        title: "System",
        message: "DS is connected",
        // color: 'yellow',
        position: "topRight",
      });
    },
    getSchedule: function (newVal, oldVal) {
      // ipcRenderer.send(
      //   this.simID + "/user/schedule",
      //   JSON.stringify({
      //     user: this.$store.state.username,
      //     type: "Import",
      //     schedule: newVal,
      //   })
      // );
      this.socket.emit(
        this.simID + "/user/schedule",
        JSON.stringify({
          user: this.$store.state.username,
          type: "Import",
          schedule: newVal,
        })
      );
    },
  },
  methods: {
    onInitClient() {
      this.onGetUUID();
      client = mqtt.connect(this.protocol + "://" + this.address, {
        clientId: this.clientid,
        username: this.username,
        password: this.password,
      });
      console.log(this.protocol + "://" + this.address);
      client.on("connect", this.onConnect);
      client.on("message", this.onMessage);
      client.on("close", this.onClose);
      client.on("reconnect", this.onReconnect);
      client.on("offline", this.onOffline);
      client.on("error", this.onError);
      client.on("end", this.onEnd);
    },
    onGetUUID() {
      fingerprint().get((result, components) => {
        this.clientid = result.substring(0, 4);
        this.$store.commit("setUUID", this.clientid);
      });
    },
    onConnect(connack) {
      console.log("Server is connected");
      var topic = this.subtopic;
      topic = topic.map((i) => this.simID + "/" + i);
      client.subscribe(topic);
      console.log(topic);
      iziToast.success({
        title: "System",
        message: "Server is connected",
        // color: 'yellow',
        position: "topRight",
      });
    },
    onMessage(topic, message) {
      var self = this;
      if (topic.includes("ds/data")) {
        this.$store.commit("updateRawData", message);
        this.backend_online = true;
      } else if (topic.includes("ds/note")) {
        const temp = message.toString().split("@");
        this.usermessage = temp[0];
        if (this.$store.state.notMuted) {
          iziToast.warning({
            title: "System",
            message: this.usermessage,
            position: "topCenter",
            timeout: 3000,
            buttons: [
              [
                "<button>What?!</button>",
                function () {
                  if (self.usermessage.includes("Branch")) {
                    self.id = temp[1];
                    self.name = temp[2];
                    self.type = "Branch";
                    self.lineshowDialog = true;
                  } else if (
                    self.usermessage.includes("Load") ||
                    self.usermessage.includes("Gen") ||
                    self.usermessage.includes("Shunt")
                  ) {
                    const busid = temp[1].split(",")[0];
                    self.name = temp[2].split("Bus")[0];
                    self.type = "Substation";
                    var found;
                    // Base on the bus id, find the substation
                    for (let subidx in self.$store.state.subDetail) {
                      found = self.$store.state.subDetail[subidx].Bus.find(
                        function (ele) {
                          if (ele["Int.Bus Number"] == busid) {
                            self.id = subidx;
                            self.children =
                              self.$store.state.subDetail[subidx].Bus;
                            return true;
                          }
                        }
                      );
                      if (found) {
                        self.subshowDialog = true;
                        break;
                      }
                    }
                  }
                },
              ],
            ],
          });
          // Push.create("System", {
          //   body: this.usermessage,
          //   icon: require("../assets/grid.png"),
          //   timeout: 6000,
          //   onClick: function () {
          //     window.focus();
          //     this.close();
          //     if (self.usermessage.includes("Branch")) {
          //       self.id = temp[1];
          //       self.name = temp[2];
          //       self.type = "Branch";
          //       self.lineshowDialog = true;
          //     } else if (
          //       self.usermessage.includes("Load") ||
          //       self.usermessage.includes("Gen") ||
          //       self.usermessage.includes("Shunt")
          //     ) {
          //       const busid = temp[1].split(",")[0];
          //       self.name = temp[2].split("Bus")[0];
          //       self.type = "Substation";
          //       var found;
          //       // Base on the bus id, find the substation
          //       for (let subidx in self.$store.state.subDetail) {
          //         found = self.$store.state.subDetail[subidx].Bus.find(
          //           function (ele) {
          //             if (ele["Int.Bus Number"] == busid) {
          //               self.id = subidx;
          //               self.children = self.$store.state.subDetail[subidx].Bus;
          //               return true;
          //             }
          //           }
          //         );
          //         if (found) {
          //           self.subshowDialog = true;
          //           break;
          //         }
          //       }
          //     }
          //   },
          // });
        }

        this.$store.commit("updatebadge");
        this.$store.commit("updatebadgelist", {
          title: this.usermessage,
          source: "System",
          color: "yellow",
          time: Date.now(),
        });
      } else if (topic.includes("ds/system")) {
        iziToast.warning({
          title: "System",
          message: message.toString(),
          // color: 'yellow',
          position: "topCenter",
          timeout: 6500,
        });
        if (
          [
            "The simulation has been aborted",
            "The system goes blackout",
          ].includes(message.toString())
        ) {
          this.$store.commit("setstartready");
          if (message.toString().includes("blackout")) {
            this.$store.commit("setRIndex", 0);
          }
        } else if (message.toString().includes("The simulation is started")) {
          this.$store.commit("resetClock");
          this.$store.commit("resetReport"); // Reset the report when the simulation starts
          this.$store.commit("resetAreaLoad");
          this.$store.commit("resetBusVoltage");
          this.$store.commit("resetAction");
          this.$store.commit("resetTotalCost"); // Reset the total cost when the simulation starts
          this.$store.commit("setStartTime", +message.toString().split("@")[1]);
          this.$store.commit("setstartdisable");
          this.$store.commit("flipStartToggler");
        } else if (message.toString().includes("The simulation has finished")) {
          this.$store.commit("setSimOver");
        }
        this.$store.commit("updatebadge");
        this.$store.commit("updatebadgelist", {
          title: message.toString(),
          source: "System",
          color: "red",
          time: Date.now(),
        });
      } else if (topic.includes("user/schedule")) {
        const temp = message.toString();
        // this.usermessage = temp;
        this.$store.commit("setSchedule", JSON.parse(temp)["schedule"]);
        iziToast.show({
          title: "Schedule",
          message:
            "The import schedule has been changed to " +
            JSON.parse(temp)["schedule"].split("@")[0] +
            "MW @ $" +
            JSON.parse(temp)["schedule"].split("@")[1] +
            "/MW",
          color: "yellow",
          position: "topCenter",
        });
      } else if (topic.includes("reply")) {
        console.log(topic, message);
      } else {
        iziToast.show({
          title: message.toString().split(":")[0],
          message: message.toString().split(":")[1],
          color: "yellow",
          position: "topCenter",
          buttons: [
            [
              "<button>Chat</button>",
              function () {
                self.chatTopic = topic;
                self.chatShow = true;
              },
            ],
          ],
        });
        this.$store.commit("updatebadge");
        this.$store.commit("updatebadgelist", {
          title: message.toString(),
          source: "user",
          color: "light-blue",
          time: Date.now(),
        });
      }
    },
    onClose() {
      console.log("onClose");
    },
    onReconnect() {
      console.log("onReconnect");
      iziToast.success({
        title: "System",
        message: "Server is being reconnected",
        // color: 'yellow',
        position: "topRight",
      });
    },
    onOffline() {
      console.log("onOffline");
      iziToast.error({
        title: "System",
        message: "Server is disconnected",
        // color: 'yellow',
        position: "topRight",
      });
    },
    onError(error) {
      console.log("onError: " + error);
    },
    onEnd() {
      console.log("onEnd");
    },
  },
  components: {
    chatpop: () => import("./chatpop"),
    linepop: () => import("./linepop"),
    subpop: () => import("./subpop"),
  },
};
</script>

<style scoped>
</style>
