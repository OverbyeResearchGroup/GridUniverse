<template>
  <div>
    <v-btn @click="query">query</v-btn>
    <v-btn @click="connect">connect</v-btn>
    <v-btn @click="send">send</v-btn>
    <v-card elevation="2">
      <v-textarea
        solo
        name="input-7-4"
        label="Solo textarea"
        v-model="text"
      ></v-textarea>
    </v-card>
  </div>
</template>

<style>
/* .container {
	max-width: 100vw;
	padding: 0px;
	margin: 5px;
} */
</style>

<script>
export default {
  name: "contact",
  components: {},
  data() {
    return {
      text: "",
      pc: null,
      sendChannel: null,
      receiveChannel: null,
    };
  },
  mounted() {
    // console.log('contact mounted')
    // this.$store.commit("query");
    this.$store.state.socket.on("data", (data) => {
      console.log("Data received: ", data);
      this.handleSignalingData(data);
    });

    this.$store.state.socket.on("ready", () => {
      console.log("Ready");
      this.createPeerConnection();
      this.sendOffer();
    });
  },
  methods: {
    query() {
      this.$store.state.socket.emit("query");
    },
    connect() {
      //   this.$store.state.socket.emit("query");
      //   const PC_CONFIG = {};
      this.$store.state.socket.emit("rtc_connect");
    },
    send() {
      this.sendChannel.send(this.text);
    },
    createPeerConnection() {
      const PC_CONFIG = {};
      try {
        this.pc = new RTCPeerConnection(PC_CONFIG);
        if (this.text === "1") {
          this.sendChannel = this.pc.createDataChannel("sendChannel");
          this.sendChannel.onopen = this.handleSendChannelStatusChange;
          this.sendChannel.onclose = this.handleSendChannelStatusChange;
        } else {
          this.pc.ondatachannel = this.receiveChannelCallback;
        }

        this.pc.onicecandidate = this.onIceCandidate;
        // this.pc.onaddstream = this.onAddStream;
        // this.pc.addStream(localStream);
        console.log("PeerConnection created");
      } catch (error) {
        console.error("PeerConnection failed: ", error);
      }
    },
    sendData(data) {
      this.$store.state.socket.emit("data", data);
    },
    sendOffer() {
      console.log("Send offer");
      this.pc.createOffer().then(this.setAndSendLocalDescription, (error) => {
        console.error("Send offer failed: ", error);
      });
    },
    sendAnswer() {
      console.log("Send answer");
      this.pc.createAnswer().then(this.setAndSendLocalDescription, (error) => {
        console.error("Send answer failed: ", error);
      });
    },
    setAndSendLocalDescription(sessionDescription) {
      this.pc.setLocalDescription(sessionDescription);
      console.log("Local description set");
      this.sendData(sessionDescription);
    },
    onIceCandidate(event) {
      if (event.candidate) {
        console.log("ICE candidate");
        this.sendData({
          type: "candidate",
          candidate: event.candidate,
        });
      }
    },
    handleSignalingData(data) {
      switch (data.type) {
        case "offer":
          this.createPeerConnection();
          this.pc.setRemoteDescription(new RTCSessionDescription(data));
          this.sendAnswer();
          break;
        case "answer":
          this.pc.setRemoteDescription(new RTCSessionDescription(data));
          break;
        case "candidate":
          this.pc.addIceCandidate(new RTCIceCandidate(data.candidate));
          break;
      }
    },
    handleSendChannelStatusChange(event) {
      console.log(event);
    },
    handleReceiveChannelStatusChange(event) {
      console.log(event);
    },
    receiveChannelCallback(event) {
      this.receiveChannel = event.channel;
      this.receiveChannel.onmessage = this.handleReceiveMessage;
      this.receiveChannel.onopen = this.handleReceiveChannelStatusChange;
      this.receiveChannel.onclose = this.handleReceiveChannelStatusChange;
    },
    handleReceiveMessage(event) {
      console.log(event);
    },
  },
};
</script>