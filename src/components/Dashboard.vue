// Dashboard.vue

<template>
  <div>
    <v-app-bar clipped-left app v-if="showToolbar">
      <v-app-bar-nav-icon @click.stop="drawer = !drawer"></v-app-bar-nav-icon>
      <v-toolbar-title class="white--text pt-3">
        <button v-on:click="$store.commit('setpage', 'Home')">Gridverse</button>
        <div>
          <p class="font-weight-thin text-subtitle-2">
            Powered by PowerWorld Dynamics Studio and EMQ
          </p>
        </div>
      </v-toolbar-title>
      <!-- <v-toolbar-items>
      </v-toolbar-items>-->
      <v-spacer></v-spacer>
      <v-btn icon @click="handleFullScreen()">
        <v-icon>fullscreen</v-icon>
      </v-btn>
      <v-menu left bottom v-model="menu_model">
        <template v-slot:activator="{ on }">
          <v-btn icon text v-on="on" @click="$store.commit('resetbadge')">
            <v-badge color="red" overlap v-model="badgeShow">
              <span slot="badge">{{ badge }}</span>
              <v-icon medium>notifications</v-icon>
            </v-badge>
          </v-btn>
        </template>
        <NotificationList v-if="menu_model" v-on:changeHeight="changeHeight"></NotificationList>
      </v-menu>
    </v-app-bar>

    <v-navigation-drawer fixed app clipped width="160" v-model="drawer">
      <v-list dense id="step1">
        <div id="step4">
          <v-list-item :key="'clock'">
            <Clock></Clock>
          </v-list-item>
        </div>
        <v-list-item :key="'home'" @click="$store.commit('setpage', 'Home')">
          <v-list-item-avatar>
            <v-icon>home</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Transmission</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item
          :key="'generator'"
          @click="$store.commit('setpage', 'generator')"
        >
          <v-list-item-avatar>
            <v-icon>bolt</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Generator</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item :key="'load'" @click="$store.commit('setpage', 'load')">
          <v-list-item-avatar>
            <v-icon>tungsten</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Load</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item :key="'shunt'" @click="$store.commit('setpage', 'shunt')">
          <v-list-item-avatar>
            <v-icon>attach_money </v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Shunt</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item
          :key="'branch'"
          @click="$store.commit('setpage', 'branch')"
        >
          <v-list-item-avatar>
            <v-icon>show_chart</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Lines</v-list-item-title>
          </v-list-item-content>
        </v-list-item>

        <v-list-item
          :key="'areastrip'"
          @click="$store.commit('setpage', 'areastrip')"
        >
          <v-list-item-avatar>
            <v-icon>area_chart</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Area</v-list-item-title>
          </v-list-item-content>
        </v-list-item>

        <!-- <v-list-item :key="'gic'" @click="$store.commit('setpage', 'gic')">
          <v-list-item-avatar>
            <v-icon>linear_scale</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>GIC</v-list-item-title>
          </v-list-item-content>
        </v-list-item> -->

        <!-- <v-list-item
          :key="'sanddance'"
          @click="$store.commit('setpage', 'sanddance')"
        >
          <v-list-item-avatar>
            <v-icon>mdi-chart-line-stacked</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>SandDance</v-list-item-title>
          </v-list-item-content>
        </v-list-item> -->
        <!-- <v-list-item :key="'hourlystrip'" @click="$store.commit('setpage', 'hourlystrip')">
						<v-list-item-avatar>
							<v-icon>linear_scale</v-icon>
						</v-list-item-avatar>

						<v-list-item-content>
							<v-list-item-title>HourlyStrip</v-list-item-title>
						</v-list-item-content>
					</v-list-item>
					<v-list-item :key="'busstrip'" @click="$store.commit('setpage', 'busstrip')">
						<v-list-item-avatar>
							<v-icon>linear_scale</v-icon>
						</v-list-item-avatar>

						<v-list-item-content>
							<v-list-item-title>BusStrip</v-list-item-title>
						</v-list-item-content>
          </v-list-item>-->
        <v-list-item
          :key="'oneline'"
          @click="$store.commit('setpage', 'oneline')"
        >
          <v-list-item-avatar>
            <v-icon>area_chart</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>OneLine</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item
          :key="'generationVis'"
          @click="$store.commit('setpage', 'generationVis')"
        >
          <v-list-item-avatar>
            <v-icon>bar_chart</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Gen. Bar</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item
          :key="'generationPie'"
          @click="$store.commit('setpage', 'generationPie')"
        >
          <v-list-item-avatar>
            <v-icon>pie_chart</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Gen. Pie</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-list-item
          :key="'sysInfo'"
          @click="$store.commit('setpage', 'sysInfo')"
        >
          <v-list-item-avatar>
            <v-icon>dns</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Sys. Info</v-list-item-title>
          </v-list-item-content>
        </v-list-item>

        <!-- <v-list-item
          :key="'transformer'"
          @click="$store.commit('setpage', 'transformer')"
        >
          <v-list-item-avatar>
            <v-icon>view_carousel</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Transformer</v-list-item-title>
          </v-list-item-content>
        </v-list-item> -->

        <v-list-item :key="'chat'" @click="dialog = true">
          <v-list-item-avatar>
            <v-icon>chat</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Chat</v-list-item-title>
          </v-list-item-content>
        </v-list-item>

        <!-- <v-list-item :key="'contact'" @click="$store.commit('setpage', 'contact')">
          <v-list-item-avatar>
            <v-icon>chat</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Contact</v-list-item-title>
          </v-list-item-content>
        </v-list-item> -->
        <!-- <v-list-item :key="'start'" v-if="ready4start" @click="$store.commit('trigstartsim')"> -->
        <v-list-item :key="'start'" @click="startDialog = true">
          <v-list-item-avatar>
            <v-icon>play_arrow</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Start</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <!-- <v-list-item :key="'pause'" @click="$store.commit('trigpausesim')">
						<v-list-item-avatar>
							<v-icon>mdi-pause</v-icon>
						</v-list-item-avatar>
						<v-list-item-content>
							<v-list-item-title>pause</v-list-item-title>
						</v-list-item-content>
          </v-list-item>-->
        <v-list-item :key="'abort'" @click="$store.commit('trigabortsim')">
          <!-- <v-list-item :key="'start'" @click="startDialog=true"> -->
          <v-list-item-avatar>
            <v-icon>close</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Abort</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <!-- <v-list-item
          :key="'admin'"
          v-if="isAdmin"
          @click="$store.commit('setpage', 'admin')"
        >
          <v-list-item-avatar>
            <v-icon>supervisor_account</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Admin</v-list-item-title>
          </v-list-item-content>
        </v-list-item> -->
        <v-list-item :key="'report'" @click="reportDialog = true">
          <v-list-item-avatar>
            <v-icon>summarize</v-icon>
          </v-list-item-avatar>

          <v-list-item-content>
            <v-list-item-title>Report</v-list-item-title>
          </v-list-item-content>
        </v-list-item>
        <v-spacer></v-spacer>
        <v-list-item :key="'index'">
          <div class="pl-3 pt-5">RIndex: {{ rIndex }}</div>
        </v-list-item>
        <!-- <v-list-item :key="'IkMap'" @click="$store.commit('setpage', 'IkView')">
						<v-list-item-avatar>
							<v-icon>highlight_off</v-icon>
						</v-list-item-avatar>

						<v-list-item-content>
							<v-list-item-title>DoNotClick</v-list-item-title>
						</v-list-item-content>
          </v-list-item>-->
      </v-list>
    </v-navigation-drawer>

    <v-main>
      <div id="step3" v-if="showToolbar">
        <marquee></marquee>
      </div>
      <div class="page-wrapper" id="step2">
        <component v-bind:is="page"></component>
      </div>

      <!-- <router-view/> -->
    </v-main>
    <MqttClient></MqttClient>
    <DataProcessing></DataProcessing>
    <!-- <CostBot></CostBot> -->
    <AGCBot></AGCBot>
    <chatpop v-if="dialog" :visible="dialog" @close="dialog = false"></chatpop>
    <startpop
      v-if="startDialog"
      :visible="startDialog"
      @close="startDialog = false"
    ></startpop>
    <reportpop
      v-if="reportDialog"
      :visible="reportDialog"
      @close="reportDialog = false"
    ></reportpop>
  </div>
</template>

<script>
// import generator from "../views/generator-view";
// import load from "../views/load-view";
// import shunt from "../views/shunt-view";
// import admin from "../views/admin-view";
// import branch from "../views/branch-view";
// import areastrip from "./AreaStrip2";
// import hourlystrip from "./HourlyStrip";
// import busstrip from "./BusStrip";
// import oneline from "./OneLine";
// import sanddance from "./SandDance";
// import generationVis from "../views/generation-bar-view";
// import generationPie from "../views/generation-pie-view";
// import sysInfo from "../views/system-info-view";
// import chatpop from './components/chatpop';
import MqttClient from "./MqttClient";
import Util from "../util";
import DataProcessing from "./DataProcessing";
// import CostBot from './CostBot';
import AGCBot from "./AGCBot";
import marquee from "./marquee";
import Clock from "./Clock";
import { mapGetters, mapState } from "vuex";
import contact from "../views/contact.vue";
// import NotificationList from './components/NotificationList';

export default {
  data() {
    return {
      drawer: true,
      dialog: false,
      show: false,
      startDialog: false,
      reportDialog: false,
      showToolbar: true,
      menu_model: false
    };
  },
  computed: {
    ...mapState(["rIndex", "badge", "ready4start", "isAdmin", "badgeShow"]),
    ...mapGetters({
      simOverFlag: "getSimOver",
    }),
    page() {
      return this.$store.getters.page;
    },
  },
  components: {
    chatpop: () => import("./chatpop"),
    startpop: () => import("./startpop"),
    reportpop: () => import("./reportpop"),
    MqttClient,
    Home: () => import("../views/Home"),
    // IkView: () => import("../views/Ik-view"),
    generator: () => import("../views/generator-view.vue"),
    load: () => import("../views/load-view.vue"),
    shunt: () => import("../views/shunt-view.vue"),
    // admin,
    NotificationList: () => import("./NotificationList"),
    // CostBot,
    AGCBot,
    branch: () => import("../views/branch-view.vue"),
    // gic,
    // transformer,
    areastrip: () => import("./AreaStrip2.vue"),
    hourlystrip: () => import("./HourlyStrip.vue"),
    busstrip: () => import("./BusStrip.vue"),
    oneline: () => import("./OneLine.vue"),
    // sanddance: () => import("./SandDance.vue"),
    marquee,
    Clock,
    generationVis: () => import("../views/generation-bar-view.vue"),
    generationPie: () => import("../views/generation-pie-view.vue"),
    sysInfo: () => import("../views/system-info-view.vue"),
    DataProcessing,
    contact,
  },
  methods: {
    handleFullScreen() {
      Util.toggleFullScreen();
    },
    changeHeight(e) {
      this.showToolbar = false;
    },
  },
  watch: {
    show: function (newVal, Val) {
      if (newVal == false) {
        this.$store.commit("resetbadgelist");
      }
    },
    simOverFlag: function () {
      this.reportDialog = true;
    },
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
  },
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
