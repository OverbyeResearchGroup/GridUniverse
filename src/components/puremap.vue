/* eslint-disable */
<template>
  <div>
    <v-layout row class="align-center layout px-4 pt-4 app--page-header">
      <div class="page-header-left">
        <h3 class="pr-3">Overview</h3>
      </div>
      <v-icon larg>home</v-icon>
      <v-spacer></v-spacer>
      <userInfo></userInfo>
    </v-layout>
    <!-- <v-container grid-list-xs text-xs-center> -->
    <v-container grid-list-xl text-xs-center fluid>
      <v-layout row wrap>
        <!-- mini statistic start -->
        <v-flex lg3 sm6 xs12>
          <mini-statistic
            :name="'GenMW'"
            icon="fa fa-facebook"
            title="Total Generation (MW)"
            :sub-title="areaData[0]"
            color="indigo"
            :img="require('../assets/icons8-factory-64.png')"
            id="step5"
          ></mini-statistic>
        </v-flex>
        <v-flex lg3 sm6 xs12>
          <mini-statistic
            :name="'LoadMW'"
            icon="fa fa-google"
            title="Total Load (MW)"
            :sub-title="areaData[2]"
            color="red"
            :img="require('../assets/kitchen-set.png')"
          ></mini-statistic>
        </v-flex>
        <v-flex lg3 sm6 xs12>
          <mini-statistic
            :name="'Freq'"
            icon="fa fa-twitter"
            title="Average Frequency (Hz)"
            :sub-title="areaData[6]"
            color="light-blue"
            :img="require('../assets/icons8-frequency-64.png')"
          ></mini-statistic>
        </v-flex>
        <v-flex lg3 sm6 xs12>
          <mini-statistic
            :name="'ExportMW'"
            icon="fa fa-instagram"
            title="Export Power (MW)"
            :sub-title="areaData[5]"
            color="purple"
            :img="require('../assets/export.png')"
          ></mini-statistic>
        </v-flex>
        <v-flex lg8 sm8 xs12>
          <m-widget title="Interactive Site Map" content-bg="white" @clicked="restore">
            <!-- <v-flex d-flex xs8 style="height: auto;"> -->
            <div slot="widget-content" id="main" class="chart">
              <!-- <div class="legend">
								<status-indicator></status-indicator>Substation &nbsp; <status-indicator active></status-indicator>Substation with generator  &nbsp; <status-indicator intermediary></status-indicator>Substation with shunt
              </div>-->
              <!-- <div id="main" class="chart"></div> -->
            </div>
          </m-widget>
        </v-flex>
        <v-flex lg4 sm4 xs12>
          <v-layout row wrap>
            <!-- <v-flex lg12 sm12 xs12>
							<chartStatistic id="TC" min="dataMin" max="dataMax" title="Total Cost" icon="attach_money" card-color="indigo" :chart-color="[color.indigo.lighten1]" :costData='$store.state.totalCost.toFixed(2)' type="line"></chartStatistic>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<v-widget title="Area Generation Overview" content-bg="white">
								<div slot="widget-content">
									<pie :areatotal="areaData[0]"></pie>
								</div>
							</v-widget>
            </v-flex>-->
            <v-flex xs12>
              <m-widget title="Load Forecast" content-bg="white">
                <div slot="widget-content">
                  <loadForecast></loadForecast>
                </div>
              </m-widget>
            </v-flex>
            <v-flex lg12 sm12 xs12>
              <branchTable title="High-load Branches" :tabledata="riskBranches"></branchTable>
            </v-flex>
            <!-- <v-flex xs12>
							<m-widget title="Substation OneLine Diagram" content-bg="white">
								<div slot="widget-content">
									<highTopo></highTopo>
								</div>
							</m-widget>
            </v-flex>-->
          </v-layout>
        </v-flex>
      </v-layout>
    </v-container>
    <linepop
      v-if="lineshowDialog"
      :visible="lineshowDialog"
      :type="type"
      :id="id"
      :name="name"
      :volt="volt"
      @close="lineshowDialog=false"
    />
    <subpop
      v-if="subshowDialog"
      :visible="subshowDialog"
      :children="children"
      :type="type"
      :id="id"
      :name="name"
      :volt="volt"
      @close="subshowDialog=false"
    />
  </div>
</template>
<style scoped>
.chart {
  z-index: 0;
  height: 700px;
  width: 100%;
}
/* .legend {
	z-index: 0;
	height: 30px;
	width: 100%;
} */
.cardiv {
  height: 300px;
  width: 100%;
}
.status-indicator {
  --status-indicator-color: rgb(34, 47, 151);
  --status-indicator-color-active: rgb(197, 62, 21);
  --status-indicator-color-intermediary: rgb(119, 93, 86);
}
</style>

<script>
// import echarts from 'echarts';
// import 'echarts-gl/dist/echarts-gl';
// import 'echarts-leaflet';
// import linepop from './linepop';
// import subpop from './subpop';
import _ from "lodash";
import { mapGetters, mapState } from "vuex";
import MWidget from "@/components/MWidget";
import VWidget from "@/components/VWidget";
import MiniStatistic from "@/components/MiniStat";
import pie from "@/components/pie";
import branchTable from "@/components/RiskBranchTable";
import chartStatistic from "@/components/chartStatistic";
import Material from "vuetify/es5/util/colors";
import loadForecast from "@/components/loadForecast";
import userInfo from "@/components/userInfo";
// import highTopo from '@/components/highTopo';
// import L from 'leaflet';
// import '@supermap/iclient-leaflet';
// import {tiledMapLayer} from '@supermap/iclient-leaflet';
// import _ from 'lodash';
// mapboxgl.accessToken =
// 	'pk.eyJ1IjoibXp5MjI0MCIsImEiOiJjamttc3VsODYyZmI4M2ttbGxmbzFudGM2In0.0dy22s32n9eth_63nlX1UA';

// var L = require('leaflet');
// require('@supermap/iclient-leaflet');

var chart = "";
var map = "";
var linedata = "";

export default {
  name: "TEST",
  data() {
    return {
      color: Material,
      linedata: [],
      subdata: [],
      subdetail: [],
      busdetail: [],
      subshowDialog: false,
      lineshowDialog: false,
      children: {},
      type: "",
      id: "",
      name: "",
      volt: "",
      config: null,
      commands: [],
      anchor: 0,
      dataLength: 0,
      statusIndex: null,
      mwfromIndex: null,
      branchArrLength: null,
      statusArray: [],
      mwfromArray: [],
      openLineData: [],
      branchToOpenBranch: {},
      highRiskLines: {},
      formatRiskLines: [],
      mapCenter: [27.4241, -98.4936],
      Interval: null
    };
  },
  methods: {
    initdraw(id) {
      const url = "https://{s}.tile.openstreetmap.fr/hot/{z}/{x}/{y}.png";
      const options = {};
      map = L.map("main", {
        // crs: L.CRS.EPSG4326,
        center: this.mapCenter, //this.$store.state.center, //this.mapCenter,
        maxZoom: 18,
        zoom: 8
      });
      L.tileLayer(url, options).addTo(map);
      var legend = L.control({ position: "topright" });
      legend.onAdd = function(map) {
        var div = L.DomUtil.create("div", "legend legend-background");
        let labels = ["<strong>Categories</strong>"];
        const categories = [
          "Substation",
          "Substation w/ generator",
          "Substation w/ shunt"
        ];
        const color = [
          "rgb(34, 47, 151)",
          "rgb(197, 62, 21)",
          "rgb(119, 93, 86)"
        ];
        for (var i = 0; i < categories.length; i++) {
          div.innerHTML +=
            '<span class="circle" style="background:' +
            color[i] +
            '"></span>' +
            categories[i] +
            "<br>";
        }
        // div.innerHTML = labels.join('<br>');
        // console.log(div)
        return div;
      };
      legend.addTo(map);
      // L.supermap.tiledMapLayer(url, option).addTo(map);
      var echartsOptions = {
        // legend: {
        // 	formatter: 'Substation',
        // 	data: []
        // },
        tooltip: {
          show: true,
          trigger: "item"
        },
        series: [
          {
            id: "sub",
            type: "effectScatter",
            name: "sub",
            coordinateSystem: "leaflet",
            // coordinateSystem: 'bmap',
            symbol: "circle",
            symbolSize: function(value, params) {
              if (params.data.attributes.Gen) {
                return 12;
              } else if (params.data.attributes.Shunt) {
                return 10;
              } else {
                return 8;
              }
            },
            showEffectOn: "emphasis",
            zlevel: 5,
            // progressive: 40,
            // progressiveThreshold: 200,
            // zindex: 2,
            data: [],
            tooltip: {
              confine: true,
              formatter: function(params) {
                return "Substation: " + params.name;
              }
            },
            itemStyle: {
              color: function(params) {
                if (
                  params.data.attributes.Gen &&
                  params.data.attributes.Shunt
                ) {
                  console.log("wow you are lucky!");
                  return {
                    type: "radial",
                    x: 0.5,
                    y: 0.5,
                    r: 0.5,
                    colorStops: [
                      {
                        offset: 0,
                        color: "#ff5722"
                      },
                      {
                        offset: 1,
                        color: "#8d6e63"
                      }
                    ],
                    globalCoord: false
                  };
                } else if (params.data.attributes.Gen) {
                  return "#ff5722";
                } else if (params.data.attributes.Shunt) {
                  return "#8d6e63";
                } else {
                  return "#283593";
                }
              }
            }
          },
          {
            id: "lines",
            name: "lines",
            type: "lines",
            coordinateSystem: "leaflet",
            animation: false,
            // progressive: 100,
            // progressiveThreshold: 200,
            symbol: ["none", "arrow"],
            symbolSize: 10,
            zlevel: 1,
            // coordinateSystem: 'bmap',
            silent: false,
            // effect: {
            // 	show: true,
            // 	constantSpeed: 20,
            // 	symbol: 'arrow',
            // 	symbolSize: 7,
            // 	trailWidth: 2,
            // 	trailLength: 0,
            // 	trailOpacity: 1,
            // 	spotIntensity: 10
            // },
            label: {
              normal: {
                show: true,
                position: "middle",
                // formatter: 'YES',
                formatter: params => {
                  const limit = params.data.attributes.MVALimit;
                  const value = params.data.attributes.MVA;
                  const percentage = ((value * 100) / limit).toFixed(0);
                  var richText;
                  if (percentage >= 100) {
                    richText = "{overload|" + percentage.toString() + "%}";
                  } else if (percentage >= 90) {
                    if (map.getZoom() >= 10) {
                      richText =
                        "{zoomInDanger|" + percentage.toString() + "%}";
                    } else {
                      richText = "{indanger|" + percentage.toString() + "%}";
                    }
                  } else {
                    if (map.getZoom() >= 10) {
                      richText = "{zoomInSafe|" + percentage.toString() + "%}";
                    } else {
                      richText = "{safe|" + percentage.toString() + "%}";
                    }
                  }
                  return richText;
                },
                rich: {
                  overload: {
                    fontSize: 18,
                    color: "#ba000d"
                  },
                  indanger: {
                    fontSize: 15,
                    color: "#ffd600"
                  },
                  safe: {
                    fontSize: 8,
                    color: "#1b5e20"
                  },
                  zoomInSafe: {
                    fontSize: 16,
                    color: "#1b5e20"
                  },
                  zoomInDanger: {
                    fontSize: 16,
                    color: "#ffd600"
                  }
                }
              }
            },
            // blendMode: 'lighter',
            // polyline: true,
            lineStyle: {
              width: 1,
              // color: 'rgb(200, 40, 0)',
              color: function(params) {
                let temp;
                // console.log(params.data.attributes.volt)
                switch (params.data.attributes.volt) {
                  case 230:
                    temp = "#3949ab";
                    break;
                  case 500:
                    temp = "#e53935";
                    break;
                  case 115:
                    temp = "#1565c0";
                    break;
                  case 13.8:
                    temp = "#7c4dff";
                    break;
                }
                // console.log(params.data.attributes.volt);
                return temp;
              },
              opacity: 1
            },
            tooltip: {
              // position: [10, 10],
              confine: true,
              formatter: function(params) {
                return "Branch: " + params.name;
              }
            },
            emphasis: {
              lineStyle: {
                width: 2,
                shadowColor: "rgba(144, 144, 255, 0.5)",
                shadowBlur: 10
              }
            },
            data: []
          },
          {
            id: "openLines",
            name: "openLines",
            type: "lines",
            coordinateSystem: "leaflet",
            zlevel: 1,
            // coordinateSystem: 'bmap',
            silent: false,
            // blendMode: 'lighter',
            // polyline: true,
            lineStyle: {
              width: 1,
              color: "rgb(200, 40, 0)",
              type: "dashed",
              opacity: 1
            },
            tooltip: {
              formatter: function(params) {
                return "Branch: " + params.name;
              }
            },
            emphasis: {
              lineStyle: {
                width: 2,
                shadowColor: "rgba(144, 144, 255, 0.5)",
                shadowBlur: 10
              }
            },
            data: []
          },
          {
            id: "violatedLines",
            name: "violatedLines",
            type: "lines",
            coordinateSystem: "leaflet",
            silent: true,
            zlevel: 2,
            z: 2,
            // symbol: 'pin',
            // symbolSize: 30,
            lineStyle: {
              width: 10,
              color: "#f44336",
              // type: 'dotted',
              shadowColor: "#ffcdd2",
              shadowBlur: 20,
              opacity: 0.5
            },
            label: {
              show: false,
              position: "middle",
              color: "black",
              // fontWeight: 'bold',
              formatter: function(params) {
                return "Branch#" + params.name;
              }
            },
            data: []
          },
          {
            id: "otherSub",
            type: "scatter",
            coordinateSystem: "leaflet",
            silent: true,
            large: true,
            largeThreshold: 1,
            blendMode: "lighter",
            // progressive: 100,
            // progressiveThreshold: 500,
            symbolSize: 5,
            itemStyle: {
              color: "#616161"
            },
            data: this.$store.state.otherArea.Substation
          },
          {
            id: "otherBranch",
            type: "lines",
            coordinateSystem: "leaflet",
            silent: true,
            large: true,
            largeThreshold: 1,
            blendMode: "lighter",
            // progressive: 100,
            // progressiveThreshold: 500,
            // zindex: 5,
            lineStyle: {
              color: "#757575"
            },
            data: this.$store.state.otherArea.Branch
          }
        ]
      };
      var layerOptions = {
        loadWhileAnimating: false,
        attribution: ""
      };
      chart = L.supermap.echartsLayer(echartsOptions, layerOptions); // _ec is the echartsInstance
      console.log(chart);
      console.log(map);
      var EL = chart.addTo(map);
    },
    getData() {
      this.subdata = this.$store.state.subData;
      linedata = _.cloneDeep(this.$store.state.lineData);
      this.subdetail = this.$store.state.subDetail;
    },
    onDrawSub() {
      let temp = chart._echartsOptions;
      temp.series[0].data = this.subdata;
      temp.series[1].data = linedata;
      chart.setOption(temp);
      var self = this;
      // this.map.events.on({
      // 	"click": function(params) {
      // 		console.log(params);
      // 	}
      // })
      chart._ec.on("click", function(params) {
        // console.log(params);
        if (params.seriesName == "sub") {
          self.type = "Substation";
          self.name = params.name;
          self.id = params.data.id;
          self.volt = "";
          self.children = self.subdetail[+params.data.id].Bus;
          self.subshowDialog = true;
        } else if (params.seriesName == "lines") {
          self.type = "Branch";
          self.name = params.name;
          self.id = params.data.id;
          self.volt = params.data.attributes.volt.toString() + "kV";
          self.lineshowDialog = true;
        } else if (params.seriesName == "openLines") {
          self.type = "Branch";
          self.name = params.name;
          self.id = params.data.id;
          self.volt = params.data.attributes.volt.toString() + "kV";
          self.lineshowDialog = true;
        }
      });
    },
    onDrawLines() {
      chart.setOption({
        series: [
          {
            id: "lines",
            data: linedata
          }
        ]
      });
    },
    initUpdateLines() {
      this.anchor = this.$store.state.areaHelper.Branch.anchor;
      this.branchArrLength = this.$store.state.areaHelper.Branch.length;
      this.dataLength =
        Object.keys(this.$store.state.areadetail.content["Branch"]).length *
        this.branchArrLength;
      this.statusArray = Array(
        this.$store.state.areaHelper.Branch.list.length
      ).fill(1);
    },
    updateLinesCycle: function() {
      this.Interval = setInterval(() => {
        // this.updateLines();
        if (this.$store.state.status === "running") {
          this.updateLines();
        }
        // console.log(this.$store.state.totalCost);
      }, 1500);
    },
    updateLines() {
      const branchData = this.$store.state.branchData;
      // let branchIndex;
      let statusTemp = [];
      let branchChanged = false;
      let i = 0;
      const branchArray = this.$store.state.areaHelper.Branch.list;
      const branchArrLength = this.$store.state.areaHelper.Branch.length;
      var key;
      let fromID, toID, coords;
      for (let index in linedata) {
        // statusTemp.push(branchData[i]);
        statusTemp.push(branchData[index * branchArrLength]);
        linedata[index].attributes.MVA =
          branchData[index * branchArrLength + 3];
        linedata[index].attributes.MVFrom =
          branchData[index * branchArrLength + 1];
        // branchIndex = i / this.branchArrLength;
        fromID = linedata[index].id.split(",")[0];
        toID = linedata[index].id.split(",")[1];
        if (linedata[index].attributes.MVFrom > 0) {
          // console.log(this.linedata[index].attributes.MVA)
          linedata[index].coords = [
            [
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[fromID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Longitude"],
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[fromID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Latitude"]
            ],
            [
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[toID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Longitude"],
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[toID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Latitude"]
            ]
          ];
        } else if (linedata[index].attributes.MVFrom < 0) {
          // console.log('NO')
          linedata[index].coords = [
            [
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[toID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Longitude"],
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[toID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Latitude"]
            ],
            [
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[fromID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Longitude"],
              this.$store.state.casedetail.content.Substation[
                this.$store.state.casedetail.content.Bus[fromID][
                  "Int.Sub Number"
                ].toString()
              ]["Double.Latitude"]
            ]
          ];
        }
        // if ([0, 2, 3].includes(branchData[index * branchArrLength]))
        // {
        if (
          this.statusArray[index] == 1 &&
          [0, 2, 3].includes(branchData[index * branchArrLength])
        ) {
          // Branch opened
          this.updateLineOpen(index);
          branchChanged = true;
          // } else if (branchData[index * branchArrLength] == 1) {
        } else if (
          [0, 2, 3].includes(this.statusArray[index]) &&
          branchData[index * branchArrLength] == 1
        ) {
          // Branch closed
          this.updateLineClose(index);
          branchChanged = true;
        }
        key = linedata[index].id;
        // console.log(key);
        if (
          branchData[index * branchArrLength + 3] >=
          0.85 * linedata[index].attributes.MVALimit
        ) {
          // this.highRiskLines[key] = val;
          this.highRiskLines[key] = {};
          this.highRiskLines[key]["name"] = key;
          this.highRiskLines[key]["MVA"] =
            branchData[index * branchArrLength + 3];
          this.highRiskLines[key]["Ratio"] = (
            (branchData[index * branchArrLength + 3] /
              linedata[index].attributes.MVALimit) *
            100
          ).toFixed(2);
          this.highRiskLines[key]["MVALimit"] =
            linedata[index].attributes.MVALimit;
          this.highRiskLines[key]["coords"] = linedata[index].coords;
        } else if (key in this.highRiskLines) {
          delete this.highRiskLines[key];
        }
        i += this.branchArrLength;
      }
      this.formatRiskLines = Object.values(this.highRiskLines);
      let tempOption = chart._echartsOptions;
      tempOption.series[1].data = linedata;
      tempOption.series[2].data = this.openLineData;
      // console.log(tempOption)
      chart.setOption(tempOption);
      this.statusArray = statusTemp;
      // }
    },
    updateLineOpen(branchIndex) {
      const temp = _.cloneDeep(linedata[branchIndex]);
      this.openLineData.push(temp);
      linedata[branchIndex]["coords"] = [temp.coords[0], temp.coords[0]];
    },
    updateLineClose(branchIndex) {
      for (let i in this.openLineData) {
        if (this.openLineData[i].id == linedata[branchIndex].id) {
          linedata[branchIndex].coords = this.openLineData[i].coords;
          this.openLineData.splice(i, 1);
          break;
        }
      }
    },
    restore() {
      map.flyTo(this.mapCenter, 8, {
        animate: true,
        duration: 1.5
      });
    }
  },
  created() {},
  mounted() {
    this.initUpdateLines();
    this.getData();
    this.initdraw("main");
    this.onDrawSub();
    // // this.onDrawLines();
    // this.updateLines();
    this.updateLinesCycle();
    if (this.$store.state.showTour) {
      var intro = introJs();
      intro.setOptions({
        showStepNumbers: false,
        // overlayOpacity: 0.1,
        steps: [
          {
            intro:
              "Welcome to the final lab! For better performance, please use Chrome or Firefox."
          }
        ]
      });
      this.$store.commit("disableTour");
      intro.start();
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
    try {
      chart.remove();
      map.remove();
    } catch (err) {
      console.log("The chart instance cannot be cleared");
    }
  },
  // watch: {
  // 	highRiskLines: function() {
  // 		console.log(this.highRiskLines);
  // 	}
  // },
  computed: {
    ...mapState(["areaData", "riskBranches"]),
    ...mapGetters({
      ViolatedLines: "getViolatedLines"
    })
  },
  watch: {
    // ViolatedLines: function() {
    // 	// console.log(this.$store.state.violatedLines);
    // 	let temp = this.chart._echartsOptions;
    // 	temp.series[3].data = this.$store.state.violatedLines;
    // 	this.chart.setOption(temp);
    // }
  },
  components: {
    linepop: () => import("./linepop"),
    subpop: () => import("./subpop"),
    VWidget,
    MWidget,
    MiniStatistic,
    pie,
    branchTable,
    chartStatistic,
    loadForecast,
    userInfo
  }
};
</script>

