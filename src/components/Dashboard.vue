// Dashboard.vue

<template>
  <div>
    <v-navigation-drawer fixed app clipped mobile-break-point="300" width="160" v-model="drawer">
      <v-toolbar flat class="transparent">
        <v-list dense expand class="pa-0" id="step1">
          <div id="step4">
            <v-list-tile avatar :key="'clock'">
              <Clock></Clock>
            </v-list-tile>
          </div>
          <v-list-tile avatar :key="'home'" @click="$store.commit('setpage', 'Home')">
            <v-list-tile-avatar>
              <v-icon>mdi-home</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Transmission</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'generator'" @click="$store.commit('setpage', 'generator')">
            <v-list-tile-avatar>
              <v-icon>mdi-google-glass</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Generator</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'load'" @click="$store.commit('setpage', 'load')">
            <v-list-tile-avatar>
              <v-icon>mdi-lightbulb</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Load</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'shunt'" @click="$store.commit('setpage', 'shunt')">
            <v-list-tile-avatar>
              <v-icon>mdi-currency-usd</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Shunt</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'branch'" @click="$store.commit('setpage', 'branch')">
            <v-list-tile-avatar>
              <v-icon>linear_scale</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Lines</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>

          <v-list-tile avatar :key="'areastrip'" @click="$store.commit('setpage', 'areastrip')">
            <v-list-tile-avatar>
              <v-icon>linear_scale</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Area</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>

          <v-list-tile avatar :key="'gic'" @click="$store.commit('setpage', 'gic')">
            <v-list-tile-avatar>
              <v-icon>linear_scale</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>GIC</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>

          <v-list-tile avatar :key="'sanddance'" @click="$store.commit('setpage', 'sanddance')">
            <v-list-tile-avatar>
              <v-icon>linear_scale</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>SandDance</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <!-- <v-list-tile avatar :key="'hourlystrip'" @click="$store.commit('setpage', 'hourlystrip')">
						<v-list-tile-avatar>
							<v-icon>linear_scale</v-icon>
						</v-list-tile-avatar>

						<v-list-tile-content>
							<v-list-tile-title>HourlyStrip</v-list-tile-title>
						</v-list-tile-content>
					</v-list-tile>
					<v-list-tile avatar :key="'busstrip'" @click="$store.commit('setpage', 'busstrip')">
						<v-list-tile-avatar>
							<v-icon>linear_scale</v-icon>
						</v-list-tile-avatar>

						<v-list-tile-content>
							<v-list-tile-title>BusStrip</v-list-tile-title>
						</v-list-tile-content>
          </v-list-tile>-->
          <v-list-tile avatar :key="'oneline'" @click="$store.commit('setpage', 'oneline')">
            <v-list-tile-avatar>
              <v-icon>linear_scale</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>OneLine</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile
            avatar
            :key="'generationVis'"
            @click="$store.commit('setpage', 'generationVis')"
          >
            <v-list-tile-avatar>
              <v-icon>mdi-chart-bar</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Gen. Bar</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile
            avatar
            :key="'generationPie'"
            @click="$store.commit('setpage', 'generationPie')"
          >
            <v-list-tile-avatar>
              <v-icon>mdi-chart-pie</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Gen. Pie</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'sysInfo'" @click="$store.commit('setpage', 'sysInfo')">
            <v-list-tile-avatar>
              <v-icon>mdi-file-document-box-multiple</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Sys. Info</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>

          <v-list-tile avatar :key="'transformer'" @click="$store.commit('setpage', 'transformer')">
						<v-list-tile-avatar>
							<v-icon>view_carousel</v-icon>
						</v-list-tile-avatar>

						<v-list-tile-content>
							<v-list-tile-title>Transformer</v-list-tile-title>
						</v-list-tile-content>
          </v-list-tile>
          
          <v-list-tile avatar :key="'chat'" @click="dialog=true">
            <v-list-tile-avatar>
              <v-icon>chat</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Chat</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <!-- <v-list-tile avatar :key="'start'" v-if="ready4start" @click="$store.commit('trigstartsim')"> -->
          <v-list-tile avatar :key="'start'" @click="startDialog=true">
            <v-list-tile-avatar>
              <v-icon>play_arrow</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Start</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <!-- <v-list-tile avatar :key="'pause'" @click="$store.commit('trigpausesim')">
						<v-list-tile-avatar>
							<v-icon>mdi-pause</v-icon>
						</v-list-tile-avatar>
						<v-list-tile-content>
							<v-list-tile-title>pause</v-list-tile-title>
						</v-list-tile-content>
          </v-list-tile>-->
          <v-list-tile avatar :key="'abort'" @click="$store.commit('trigabortsim')">
            <!-- <v-list-tile avatar :key="'start'" @click="startDialog=true"> -->
            <v-list-tile-avatar>
              <v-icon>mdi-stop</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Abort</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile
            avatar
            :key="'admin'"
            v-if="isAdmin"
            @click="$store.commit('setpage', 'admin')"
          >
            <v-list-tile-avatar>
              <v-icon>supervisor_account</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Admin</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-list-tile avatar :key="'report'" @click="reportDialog=true">
            <v-list-tile-avatar>
              <v-icon>save_alt</v-icon>
            </v-list-tile-avatar>

            <v-list-tile-content>
              <v-list-tile-title>Report</v-list-tile-title>
            </v-list-tile-content>
          </v-list-tile>
          <v-spacer></v-spacer>
          <v-list-tile avatar :key="'index'">
            <div class="clock pt-5">RIndex: {{rIndex}}</div>
          </v-list-tile>
          <!-- <v-list-tile avatar :key="'IkMap'" @click="$store.commit('setpage', 'IkView')">
						<v-list-tile-avatar>
							<v-icon>highlight_off</v-icon>
						</v-list-tile-avatar>

						<v-list-tile-content>
							<v-list-tile-title>DoNotClick</v-list-tile-title>
						</v-list-tile-content>
          </v-list-tile>-->
        </v-list>
      </v-toolbar>
    </v-navigation-drawer>
    <v-toolbar color="blue darken-3" v-if="showToolbar" dark app clipped-left fixed>
      <v-toolbar-side-icon @click.stop="drawer = !drawer"></v-toolbar-side-icon>
      <v-toolbar-title class="white--text">
        <button v-on:click="$store.commit('setpage','Home')">PowerWeb Cloud</button>
        <div class="subheading">Powered by PowerWorld Dynamics Studio and EMQ</div>
      </v-toolbar-title>
      <!-- <v-toolbar-items>
      </v-toolbar-items>-->
      <v-spacer></v-spacer>
      <v-btn icon @click="handleFullScreen()">
        <v-icon>fullscreen</v-icon>
      </v-btn>
      <v-menu
        offset-y
        origin="center center"
        class="elelvation-1"
        :nudge-bottom="14"
        transition="scale-transition"
        v-model="show"
      >
        <v-btn icon flat slot="activator" @click="$store.commit('resetbadge')">
          <v-badge color="red" overlap v-model="badgeShow">
            <span slot="badge">{{badge}}</span>
            <v-icon medium>notifications</v-icon>
          </v-badge>
        </v-btn>
        <NotificationList v-on:changeHeight="changeHeight"></NotificationList>
      </v-menu>
    </v-toolbar>
    <v-content>
      <div id="step3" v-if="showToolbar">
        <marquee></marquee>
      </div>
      <div class="page-wrapper" id="step2">
        <component v-bind:is="page"></component>
      </div>

      <!-- <router-view/> -->
    </v-content>
    <MqttClient></MqttClient>
    <DataProcessing></DataProcessing>
    <!-- <CostBot></CostBot> -->
    <AGCBot></AGCBot>
    <chatpop v-if="dialog" :visible="dialog" @close="dialog=false"></chatpop>
    <startpop v-if="startDialog" :visible="startDialog" @close="startDialog=false"></startpop>
    <reportpop v-if="reportDialog" :visible="reportDialog" @close="reportDialog=false"></reportpop>
  </div>
</template>

<script>
// import Home from './views/Home';

import generator from "../views/generator-view";
import load from "../views/load-view";
import shunt from "../views/shunt-view";
import admin from "../views/admin-view";
import branch from "../views/branch-view";
import transformer from "../views/new-transformer-view";
// import areastrip from './AreaStrip'
import gic from "../views/gic-view.vue";
import areastrip from "./AreaStrip2";
import hourlystrip from "./HourlyStrip";
import busstrip from "./BusStrip";
import oneline from "./OneLine";
import sanddance from "./SandDance";
import generationVis from "../views/generation-bar-view";
import generationPie from "../views/generation-pie-view";
import sysInfo from "../views/system-info-view";
// import chatpop from './components/chatpop';
import MqttClient from "./MqttClient";
import Util from "../util";
import DataProcessing from "./DataProcessing";
// import CostBot from './CostBot';
import AGCBot from "./AGCBot";
import marquee from "./marquee";
import Clock from "./Clock";
import { mapGetters, mapState } from "vuex";
// import NotificationList from './components/NotificationList';

export default {
  data() {
    return {
      drawer: true,
      dialog: false,
      show: false,
      startDialog: false,
      reportDialog: false,
      showToolbar: true
    };
  },
  computed: {
    ...mapState(["rIndex", "badge", "ready4start", "isAdmin", "badgeShow"]),
    ...mapGetters({
      simOverFlag: "getSimOver"
    }),
    page() {
      return this.$store.getters.page;
    }
  },
  components: {
    chatpop: () => import("./chatpop"),
    startpop: () => import("./startpop"),
    reportpop: () => import("./reportpop"),
    MqttClient,
    Home: () => import("../views/Home"),
    IkView: () => import("../views/Ik-view"),
    generator: generator,
    load: load,
    shunt: shunt,
    admin,
    NotificationList: () => import("./NotificationList"),
    // CostBot,
    AGCBot,
    branch,
    gic,
    transformer,
    areastrip,
    hourlystrip,
    busstrip,
    oneline,
    sanddance,
    marquee,
    Clock,
    generationVis,
    generationPie,
    sysInfo,
    DataProcessing
  },
  methods: {
    handleFullScreen() {
      Util.toggleFullScreen();
    },
    changeHeight(e) {
      this.showToolbar = false;
    }
  },
  watch: {
    show: function(newVal, Val) {
      if (newVal == false) {
        this.$store.commit("resetbadgelist");
      }
    },
    simOverFlag: function() {
      this.reportDialog = true;
    }
  },
  mounted() {
    // var intro = introJs();
    // intro.setOptions({
    // 	showStepNumbers: false,
    // 	// overlayOpacity: 0.1,
    // 	steps: [
    // 		{
    // 			intro: 'Welcome to the 460 final lab!'
    // 		},
    // 		{
    // 			element: document.querySelector('#step1'),
    // 			intro:
    // 				'You can switch pages, start/stop the simulation and get your report here.',
    // 			position: 'right'
    // 		},
    // 		// {
    // 		// 	element: document.querySelectorAll('#step2'),
    // 		// 	intro: "Here are the widgets showing the real-time data and events of the simulation.",
    // 		// 	position: 'right'
    // 		// },
    // 		{
    // 			element: '#step3',
    // 			intro: 'This marquee shows the status of the current simulation.',
    // 			position: 'bottom'
    // 		},
    // 		{
    // 			element: '#step4',
    // 			intro:
    // 				'This digital clock shows the simulation time (not the actual local time).',
    // 			position: 'bottom',
    // 			highlightClass: 'customHighlightClass'
    // 		}
    // 	]
    // });
    // intro.start();
  }
};
</script>

<style lang="stylus">
// .anchorBLff0000
// display: none;
.customHighlightClass {
  opacity: 0.2;
}

.listHighlightClass {
  opacity: 0.2;
  height: 600px;
}

.page-wrapper {
  min-height: calc(100vh - 64px - 50px - 81px);
}
</style>
