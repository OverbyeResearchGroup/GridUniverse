/* eslint-disable */
<template>
  <div>
    <linepop
      :visible="lineshowDialog"
      :type="type"
      :id="id"
      :name="name"
      :volt="volt"
      @close="lineshowDialog = false"
    />
    <subpop
      :visible="subshowDialog"
      :children="children"
      :type="type"
      :id="id"
      :name="name"
      :volt="volt"
      @close="subshowDialog = false"
    />
    <subpop
      :visible="areashowDialog"
      :type="type"
      @close="areashowDialog = false"
    />
    <div id="main" class="chart"></div>
  </div>
</template>

<script>
// require('echarts/extension/bmap/bmap');
// import * as echarts from "echarts";
// import 'echarts-gl/dist/echarts-gl';
import linepop from "./linepop";
import subpop from "./subpop";

import { cloneDeep } from "lodash";
// mapboxgl.accessToken =
// 	'pk.eyJ1IjoibXp5MjI0MCIsImEiOiJjamttc3VsODYyZmI4M2ttbGxmbzFudGM2In0.0dy22s32n9eth_63nlX1UA';

export default {
  name: "IkMap",
  data() {
    return {
      chart: "",
      linedata: [],
      selectlinedata: [], //To contain only selected lines for drawing
      subdata: [],
      subdetail: [],
      temp: [],
      temp2: [],
      busdetail: [],
      subshowDialog: false,
      lineshowDialog: false,
      areashowDialog: false,
      children: {},
      type: "",
      id: "",
      name: "",
      volt: "",
      config: null,
      commands: [],
      case: {},
      numClusters: 9,
      colorpicker: [],
      linethickness: [1, 1],
      branchFromToCoord: [],
      polyLonLatData: [],
      FinalClustering: [],
      results: [],
      shapeNodeOrder: [],
      allCenterSSArray2: [],
      zoomRatio: 1.2,
      initZoom: 7,
      currentZoom: this.initZoom,
      defaultrenderCenter: [-99.9018, 31.9686], // Texas center
      //defaultrenderCenter: [-86.3663, 35.8542], // Tennessee center
      renderCenter: [-99.9018, 31.9686],
      anchor: 0,
      arrlength: 0,
      tieLines: [],
      nonTieLines: [],
      violatedBasins: [],
      zoomInFlag: [],
      zoomOutFlag: false,
      projection: {},
      interval: null,
      originalSub: null,
    };
  },
  methods: {
    initdraw(id) {
      // this.chart = echarts.init(document.getElementById('main'));
      var self = this;
      // this.chart.hideLoading();
      this.chart.setOption(
        {
          animation: false,
          bmap: {
            center: this.renderCenter,
            zoom: this.initZoom,
            roam: true,
            mapStyle: {
              styleJson: [
                {
                  featureType: "water",
                  elementType: "all",
                  stylers: {
                    color: "#044161", //'#044161'
                  },
                },

                {
                  featureType: "boundary",
                  elementType: "geometry",
                  stylers: {
                    color: "#064f85",
                  },
                },

                {
                  featureType: "railway",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "highway",
                  elementType: "geometry",
                  stylers: {
                    color: "#004981",
                    visibility: "off",
                  },
                },

                {
                  featureType: "highway",
                  elementType: "geometry.fill",
                  stylers: {
                    color: "#005b96",
                    lightness: 1,
                    visibility: "off",
                  },
                },

                {
                  featureType: "highway",
                  elementType: "labels",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "arterial",
                  elementType: "geometry",
                  stylers: {
                    color: "#004981",
                  },
                },

                {
                  featureType: "arterial",
                  elementType: "geometry.fill",
                  stylers: {
                    color: "#00508b",
                  },
                },

                {
                  featureType: "poi",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "green",
                  elementType: "all",
                  stylers: {
                    color: "#056197",
                    visibility: "off",
                  },
                },

                {
                  featureType: "subway",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "manmade",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "local",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "arterial",
                  elementType: "labels",
                  stylers: {
                    visibility: "off",
                  },
                },

                {
                  featureType: "boundary",
                  elementType: "geometry.fill",
                  stylers: {
                    color: "#029fd4",
                  },
                },

                {
                  featureType: "building",
                  elementType: "all",
                  stylers: {
                    color: "#1a5787",
                  },
                },

                {
                  featureType: "label",
                  elementType: "all",
                  stylers: {
                    visibility: "off",
                  },
                },
              ],
            },
          },
          series: [
            {
              id: "sub",
              type: "scatter",
              name: "sub",
              coordinateSystem: "bmap",
              large: true,
              largeThreshold: 800,
              symbol: "circle",
              symbolSize: 6,
              // symbolSize: (_, params) => this.Ongetsubstationsize(_, params),
              showEffectOn: "emphasis",
              // zindex: 2,
              data: [],
              label: {
                color: "blue",
                show: false,
                formatter: (res) => {
                  return res.data.name.split("_")[0];
                },
              },
              itemStyle: {
                color: "rgb(25, 0, 128)",
                // color: res => this.Ongetsubstatcolor(res)
              },
            },
            {
              id: "lines",
              name: "lines",
              type: "lines",
              coordinateSystem: "bmap",
              progressive: 50,
              progressiveThreshold: 500,
              // animationDuration: 1000,
              // large: true,
              // largeThreshold: 800,
              silent: true,
              zlevel: 3,
              effect: {
                show: true,
                constantSpeed: 10,
                symbol: "arrow",
                symbolSize: 5,
                // trailWidth: 2,
                trailLength: 0,
                // trailOpacity: 1,
                // spotIntensity: 10,
                color: "red",
                loop: true,
              },
              blendMode: "lighter",
              // polyline: true,
              lineStyle: {
                width: 1,
                color: "rgb(200, 40, 0)", //return this.selectdata[+res.data.attributes['color']];
                opacity: 1,
              },
              emphasis: {
                lineStyle: {
                  width: 2,
                  shadowColor: "rgba(144, 144, 255, 0.5)",
                  shadowBlur: 10,
                },
              },
              data: [],
            },
            {
              id: "clusterShape",
              type: "custom",
              name: "clusterShape",
              coordinateSystem: "bmap",
              animation: false,
              zlevel: 4,
              renderItem: this.onrenderClusterShape,
              data: [],
            },
            // {
            // 	id: 'clusterShape',
            // 	type: 'custom',
            // 	name: 'clusterShape',
            // 	coordinateSystem: 'bmap',
            // 	animation: false
            // }
          ],
        },
        true
      );

      var basinID;
      var miniResults = [];

      this.chart.on("bmapRoam", () => this.onRoam());
      this.chart.on("click", function (params) {
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
        } else if (params.seriesName == "clusterShape") {
          basinID = params.value;
          self.zoomInFlag = [true, basinID];

          self.renderCenter = [
            self.results[basinID].centroid[0],
            self.results[basinID].centroid[1],
          ];

          self.type = "Area " + params.value.toString();
          var tmp = self.chart.getOption();

          tmp.bmap[0].center = self.renderCenter;
          tmp.bmap[0].zoom = 10; //self.currentZoom*2;

          self.chart.setOption(tmp);

          miniResults = self.onMiniCluster(basinID);
          // console.log(miniResults);
        }
      });
      // Reset default rendering center
      // this.chart.on('dblclick', function(params) {
      // 	var tmp = self.chart.getOption();

      // 	tmp.bmap[0].center = self.defaultrenderCenter;
      // 	tmp.bmap[0].zoom = self.initZoom;
      // 	self.chart.setOption(tmp);
      // });
    },
    getData() {
      const temp = this.$store.state.casedetail;
      this.case = temp;
      //console.log(temp.content);
      if (temp.content.type == "dsmDictionary") {
        for (let ele in temp.content.Substation) {
          this.subdata.push({
            id: ele,
            name: temp.content.Substation[ele]["String.Name"],
            value: [
              temp.content.Substation[ele]["Double.Longitude"],
              temp.content.Substation[ele]["Double.Latitude"],
            ],
            attributes: {
              clustergp: -1,
              clustercenter: false,
              tielinenode: false,
            },
            bus: [],
          });
        }
        this.originalSub = cloneDeep(this.subdata);
        for (let ele in temp.content.Branch) {
          if (temp.content.Branch[ele]["Byte.Type"] == 0) {
            const fromid = ele.split(",")[0];
            const toid = ele.split(",")[1];
            const coords = [
              this.subdata[temp.content.Bus[fromid]["Int.Sub Number"] - 1]
                .value,
              this.subdata[temp.content.Bus[toid]["Int.Sub Number"] - 1].value,
            ];
            this.branchFromToCoord.push(coords);
            this.linedata.push({
              id: ele,
              name:
                this.subdata[
                  temp.content.Bus[fromid]["Int.Sub Number"] - 1
                ].name.split("_")[0] +
                "-" +
                this.subdata[
                  temp.content.Bus[toid]["Int.Sub Number"] - 1
                ].name.split("_")[0],
              coords: coords,
              count: 1,
              attributes: {
                MVALimit: temp.content.Branch[ele]["Single.MVA Limit"],
                volt: temp.content.Bus[fromid]["Single.Nominal kV"],
                tieline: false,
              },
            });
          }
        }
        //console.log(this.subdata);
        //console.log(this.branchFromToCoord);
        //console.log(temp.content.Branch);
        this.subdetail = temp.content.Substation;
        this.busdetail = temp.content.Bus;
        for (let ele in this.subdetail) {
          this.subdetail[ele].Bus = [];
        }
        for (let ele in temp.content.Gen) {
          this.busdetail[ele].Gen = temp.content.Gen[ele];
        }
        for (let ele in temp.content.Load) {
          this.busdetail[ele].Load = temp.content.Load[ele];
        }
        for (let ele in temp.content.Shunt) {
          this.busdetail[ele].Shunt = temp.content.Shunt[ele];
        }
        for (let ele in temp.content.Bus) {
          this.subdetail[temp.content.Bus[ele]["Int.Sub Number"]].Bus.push(
            this.busdetail[ele]
          );
        }
      }
    },
    onDrawSub(data) {
      var temp = this.chart.getOption();
      temp.series[0].data = data;
      this.chart.setOption(temp);
      // this.chart.setOption({
      // 	series: [
      // 		{
      // 			id: 'sub',
      // 			data: data
      // 		}
      // 	]
      // });
      // var self = this;
    },
    onDrawLines() {
      this.chart.setOption({
        series: [
          {
            id: "sub",
            data: [],
          },
          {
            id: "lines",
            // type: 'lines',
            data: this.selectlinedata,
            color: "black",
          },
          {
            id: "clusterShape",
            // type: 'custom',
            name: "clusterShape",
            // coordinateSystem: 'bmap',
            // animation: false,
            // zlevel: 4,
            // renderItem: this.onrenderClusterShape,
            data: Array.apply(null, { length: this.numClusters }).map(
              Number.call,
              Number
            ),
          },
        ],
      });
    },
    onRoam() {
      // Obtain current zoom level
      this.currentZoom = this.chart.getOption().bmap[0].zoom;
      // console.log(this.chart.getOption().bmap[0].zoom);
    },

    onCluster() {
      var AllSubStatXY = [];
      var projection = {};

      for (let ele in this.case.content.Substation) {
        const ID = this.case.content.Substation[ele]["Int.Number"];
        const X = this.case.content.Substation[ele]["Double.Longitude"];
        //Math.cos(this.case.content.Substation[ele]['Double.Latitude']) *
        //Math.cos(this.case.content.Substation[ele]['Double.Longitude']);
        const Y = this.case.content.Substation[ele]["Double.Latitude"];
        //Math.cos(this.case.content.Substation[ele]['Double.Latitude']) *
        //Math.sin(this.case.content.Substation[ele]['Double.Longitude']);
        AllSubStatXY.push([X, Y]);
        projection[X.toString() + "," + Y.toString()] = ID;
      }

      var clusterMaker = require("clusters");
      //number of clusters, defaults to undefined
      clusterMaker.k(this.numClusters);

      //number of iterations (higher number gives more time to converge), defaults to 1000
      clusterMaker.iterations(100);

      //data from which to identify clusters, defaults to []
      clusterMaker.data(AllSubStatXY);
      var results = clusterMaker.clusters();
      this.results = results;
      //console.log(results);

      var kCentroidX;
      var kCentroidY;
      var candidateSSX;
      var candidateSSY;
      var candidateSS;
      var candidateSS2;
      var allCenterSSArray = [];
      var allCenterSSArray2 = [];
      var distance = require("euclidean-distance");
      var distBtwCandSSCentroid;
      var minClusDistance = 999;
      var count = -1;

      for (let ele in results) {
        kCentroidX =
          Math.cos(results[ele].centroid[0]) *
          Math.cos(results[ele].centroid[1]);
        kCentroidY =
          Math.sin(results[ele].centroid[0]) *
          Math.cos(results[ele].centroid[1]);
        minClusDistance = 999;

        for (let j in results[ele].points) {
          count += 1;
          candidateSSX =
            Math.cos(results[ele].points[j][0]) *
            Math.cos(results[ele].points[j][1]);
          candidateSSY =
            Math.sin(results[ele].points[j][0]) *
            Math.cos(results[ele].points[j][1]);
          distBtwCandSSCentroid = distance(
            [kCentroidX, kCentroidY],
            [candidateSSX, candidateSSY]
          );

          // Search for actual substation closest to cluster centroids
          if (distBtwCandSSCentroid < minClusDistance) {
            minClusDistance = distBtwCandSSCentroid;
            candidateSS = j; // store center for each cluster
            candidateSS2 = count;
          }

          // Initially assume all nodes in cluster to be non-center
          Math.distance = this.FinalClustering.push([
            projection[
              results[ele].points[j][0].toString() +
                "," +
                results[ele].points[j][1].toString()
            ],
            ele,
            "notCenter",
          ]);
        }
        this.projection = projection;
        // Stores the node closest to the kmeans cluster center
        allCenterSSArray2.push(candidateSS2);
        allCenterSSArray.push(candidateSS);
      }
      this.allCenterSSArray2 = allCenterSSArray2;
      //console.log(this.FinalClustering);
      //console.log(allCenterSSArray);
      //console.log(this.allCenterSSArray2);
      //console.log(count);

      // Now update center in all clusters

      for (let j = 0; j < this.numClusters; j++) {
        const ele = allCenterSSArray2[j];
        this.FinalClustering[ele][2] = "Center";
        this.subdata[
          this.FinalClustering[ele][0] - 1
        ].attributes.clustercenter = true;
      }
      //this.chart.setOption()

      for (let j = 0; j < this.numClusters; j++) {
        const ele = allCenterSSArray[j];
        results[j].points[ele][2] = "Center";
      }

      // Distinguish between tielines and non-tielines
      var tieLines = [];
      var nonTieLines = [];
      var idx;
      var idx1;
      var idx2;
      var clusterfromid;
      var clustertoid;
      var templinedata = [];

      for (let ele in this.case.content.Branch) {
        const fromid = ele.split(",")[0];
        const toid = ele.split(",")[1];

        const frBusSubStation = this.case.content.Bus[fromid]["Int.Sub Number"];
        const toBusSubStation = this.case.content.Bus[toid]["Int.Sub Number"];

        idx = this.FinalClustering.map(function (el) {
          return el[0];
        }).indexOf(frBusSubStation);

        if (idx !== -1) {
          clusterfromid = this.FinalClustering[idx][1];
        }

        idx = this.FinalClustering.map(function (el) {
          return el[0];
        }).indexOf(toBusSubStation);
        if (idx !== -1) {
          clustertoid = this.FinalClustering[idx][1];
        }

        if ((clusterfromid !== null) & (clustertoid !== null)) {
          if (clusterfromid == clustertoid) {
            nonTieLines.push([ele, clusterfromid, fromid, toid]);

            const coords = [
              this.subdata[frBusSubStation - 1].value,
              this.subdata[toBusSubStation - 1].value,
            ];
            //	Set select linedata not to be rendered
            // this.selectlinedata.push({
            // 	id: ele,
            // 	name:
            // 		this.subdata[frBusSubStation - 1].name.split('_')[0] +
            // 		'-' +
            // 		this.subdata[toBusSubStation - 1].name.split('_')[0],
            // 	coords: [[0, 0], [0, 0]], //coords,
            // 	count: 1,
            // 	attributes: {
            // 		MVALimit: this.case.content.Branch[ele]['Single.MVA Limit'],
            // 		volt: this.case.content.Bus[fromid]['Single.Nominal kV'],
            // 		tieline: false
            // 	},
            // 	lineStyle: {
            // 		opacity: 0
            // 	}
            // });
          } else {
            // Define tielines
            tieLines.push([ele, clusterfromid, clustertoid, fromid, toid]);

            const coords = [
              this.subdata[frBusSubStation - 1].value,
              this.subdata[toBusSubStation - 1].value,
            ];
            // Set select linedata to be rendered
            this.selectlinedata.push({
              id: ele,
              name:
                this.subdata[frBusSubStation - 1].name.split("_")[0] +
                "-" +
                this.subdata[toBusSubStation - 1].name.split("_")[0],
              coords: coords,
              count: 1,
              attributes: {
                MVALimit: this.case.content.Branch[ele]["Single.MVA Limit"],
                volt: this.case.content.Bus[fromid]["Single.Nominal kV"],
                tieline: true,
              },
              lineStyle: {
                opacity: 1,
              },
            });

            // Set 'tielinenode' attribute of subdata nodes
            this.subdata[frBusSubStation - 1].attributes.tielinenode = true;
            this.subdata[toBusSubStation - 1].attributes.tielinenode = true;
          }
        }
      }
      this.tieLines = tieLines;
      this.nonTieLines = nonTieLines;
      // console.log(this.tieLines);

      //console.log(this.selectlinedata);
      //console.log(this.linethickness);

      // Update subdata
      var Projection1 = {};
      var clusteridx;
      for (let ele in this.case.content.Substation) {
        Projection1 = [
          this.case.content.Substation[ele]["Double.Longitude"],
          this.case.content.Substation[ele]["Double.Latitude"],
        ];

        for (let cluster in results) {
          for (let coordindex in results[cluster].points) {
            if (
              results[cluster].points[coordindex][0] ==
                this.case.content.Substation[ele]["Double.Longitude"] &&
              results[cluster].points[coordindex][1] ==
                this.case.content.Substation[ele]["Double.Latitude"]
            ) {
              clusteridx = cluster;
              //console.log(clusteridx);
              break;
            }
          }
        }

        this.subdata[ele - 1].attributes.clustergp = clusteridx;
      }

      // Obtain convex hull for all clusters
      this.onobtainClusterLongLat();
    },

    onMiniCluster(basinID) {
      var AllSubStatXY = [];
      var ID;

      for (let ele in this.results[basinID].points) {
        ID =
          this.projection[
            this.results[basinID].points[ele][0].toString() +
              "," +
              this.results[basinID].points[ele][1].toString()
          ];
        //ID = ID-1
        const X = this.case.content.Substation[ID]["Double.Longitude"];
        const Y = this.case.content.Substation[ID]["Double.Latitude"];
        AllSubStatXY.push([X, Y]);
      }

      var miniResults = [];
      var clusterMaker = require("clusters");
      //number of clusters, defaults to undefined
      clusterMaker.k(this.numClusters);

      //number of iterations (higher number gives more time to converge), defaults to 1000
      clusterMaker.iterations(100);

      //data from which to identify clusters, defaults to []
      clusterMaker.data(AllSubStatXY);

      miniResults = clusterMaker.clusters();

      return miniResults;
      //console.log(miniResults)
    },

    Ongetsubstatcolor(res) {
      return this.colorpicker[+res.data.attributes.clustergp];
    },
    onColorPick() {
      for (let j = 0; j < this.numClusters; j++) {
        this.colorpicker.push(
          "rgba(" +
            Math.round(Math.random() * 255).toString() +
            "," +
            Math.round(Math.random() * 255).toString() +
            "," +
            Math.round(Math.random() * 255).toString() +
            ", 0.6)"
        );
      }
    },

    Ongetsubstationsize(_, params) {
      var size;
      if (params.data.attributes.clustercenter) {
        size = 10;
      } else {
        size = 10;
      }
      return size;
    },

    ongetBoundaryDataPoints(
      clusterNodeCoordinateArray,
      conClusterLongLatArray,
      clusterID
    ) {
      var topNodes2 = [];
      var shapeOrder = [];

      var rowIdx;
      var NodeLong;
      var NodeLat;
      //console.log(clusterID)
      //console.log(conClusterLongLatArray)
      //console.log(clusterNodeCoordinateArray)
      if (clusterNodeCoordinateArray.length > 2) {
        rowIdx = conClusterLongLatArray[0][0];
        NodeLong = clusterNodeCoordinateArray[rowIdx][1];
        NodeLat = clusterNodeCoordinateArray[rowIdx][2];
        topNodes2.push([NodeLong, NodeLat]);

        for (let e = 1; e < conClusterLongLatArray.length; e++) {
          rowIdx = conClusterLongLatArray[e][0];

          NodeLong = clusterNodeCoordinateArray[rowIdx][1];
          NodeLat = clusterNodeCoordinateArray[rowIdx][2];
          topNodes2.push([NodeLong, NodeLat]);
        }

        shapeOrder = topNodes2;
      } else {
        for (let e in clusterNodeCoordinateArray) {
          NodeLong = clusterNodeCoordinateArray[e][1];
          NodeLat = clusterNodeCoordinateArray[e][2];
          topNodes2.push([NodeLong, NodeLat]);
        }

        shapeOrder = topNodes2;
      }

      //console.log(shapeOrder);
      return shapeOrder;
    },

    onarrayDifference(arrayA, arrayB) {
      var _difference = new Set(arrayA);
      for (var elem of arrayB) {
        _difference.delete(elem);
      }
      return _difference;
    },

    sortFunction(b, a) {
      if (a[0] === b[0]) {
        return 0;
      } else {
        return a[0] < b[0] ? -1 : 1;
      }
    },

    onobtainClusterLongLat() {
      //console.log('here')
      var count = -1;
      var cluStatus;
      var SSID;
      var SSIDLONG;
      var SSIDLAT;
      var X;
      var Y;
      var clusID1;
      var coord = [];
      var ClusterLongLatArray = [];
      var conClusterLongLatArray = [];
      var clusterShapeOrder = [];
      var clusterContainer = [];
      //require('convex-hull')(points)
      var ch = require("convex-hull");

      for (let clusID = 0; clusID < this.numClusters; clusID++) {
        const clusID1 = clusID;
        ClusterLongLatArray = [];
        conClusterLongLatArray = [];

        for (let ele in this.FinalClustering) {
          //this.case.content.Substation) {
          count = count + 1;
          if (count > this.FinalClustering.length - 1) {
            break;
          }

          //console.log(count);
          if (this.FinalClustering[count][1] == clusID1.toString()) {
            SSID = this.FinalClustering[count][0] - 1;
            SSIDLONG = this.subdata[SSID].value[0];
            SSIDLAT = this.subdata[SSID].value[1];

            ClusterLongLatArray.push([SSID, SSIDLONG, SSIDLAT]);
            conClusterLongLatArray.push([SSIDLONG, SSIDLAT]);
          } else {
            count = count - 1;
            break;
          }
        }
        clusterContainer.push(ClusterLongLatArray);

        clusterShapeOrder = this.ongetBoundaryDataPoints(
          ClusterLongLatArray,
          ch(conClusterLongLatArray),
          clusID
        );
        this.shapeNodeOrder.push(clusterShapeOrder);
      }
      //console.log(ch(conClusterLongLatArray))
    },

    onrenderClusterShape(params, api) {
      const clusID = params.dataIndex;
      var alpha = 1;
      const shapeNodeOrder = this.shapeNodeOrder[clusID];

      // Set alpha upon zoom-in
      if (this.zoomInFlag[0] == true && clusID == this.zoomInFlag[1]) {
        alpha = 0.6;
      }

      var points = [];
      var baseColor = "hsla(56, 50%, 50%, 1)";

      for (let j = 0; j < shapeNodeOrder.length; j++) {
        // for (let j in shapeNodeOrder) {
        points.push(api.coord(shapeNodeOrder[j]));
      }

      // Check if cluster is a violated basin
      if (this.violatedBasins.includes(clusID)) {
        baseColor = "hsla(15, 50%, 50%, " + alpha.toString() + ")"; //0.6)';
      }

      return {
        type: "polygon",
        shape: {
          points: echarts.graphic.clipPointsByRect(points, {
            x: params.coordSys.x,
            y: params.coordSys.y,
            width: params.coordSys.width,
            height: params.coordSys.height,
          }),
        },
        style: api.style({
          fill: baseColor,
        }),
      };
    },
    onFindBranchSegment() {
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        this.arrlength = this.$store.state.fieldstore[ele]["Field"].length;
        keyarr = Object.keys(this.$store.state.casedetail.content[ele]);

        if (ele != "Branch") {
          this.anchor += this.arrlength * keyarr.length;
        } else {
          break;
        }
      }
    },
    onMonitor() {
      const temp = this.$store.state.data;
      var branchMVALimit;
      var rtMVA;
      var idx = -1;
      var rowidx;
      var violatedBasins = [];

      for (let e in this.$store.state.casedetail.content.Branch) {
        idx++;

        branchMVALimit =
          this.$store.state.casedetail.content.Branch[e]["Single.MVA Limit"];
        rtMVA = temp[this.anchor + 3 + idx * this.arrlength];

        // Check if branch is a tieline
        rowidx = this.tieLines
          .map(function (el) {
            return el[0];
          })
          .indexOf(e);

        if (rtMVA > branchMVALimit) {
          // If overloaded branch is tieline
          if (rowidx != -1) {
            violatedBasins.push(+this.tieLines[rowidx][1]);
            violatedBasins.push(+this.tieLines[rowidx][2]);
          }
          // If overloaded branch is a non-tieline
          else {
            rowidx = this.nonTieLines
              .map(function (el) {
                return el[0];
              })
              .indexOf(e);

            violatedBasins.push(+this.nonTieLines[rowidx][1]);
          }
        }
      }

      this.violatedBasins = violatedBasins;

      // Re-render chart
      var tmp = this.chart.getOption();
      this.chart.setOption(tmp);
    },
    redraw(cluster_number) {
      this.$nextTick(() => {
        if (this.interval) {
          clearInterval(this.interval);
        }
        if (cluster_number == 0 || !cluster_number) {
          this.onDrawFullTopo();
        } else {
          this.reInitParameters();
          this.numClusters = +cluster_number;
          this.onCluster();
          // this.initdraw('main');
          this.onDrawLines();
          this.interval = setInterval(() => {
            this.onMonitor();
          }, 5000);
        }

        // this.chart.showLoading();
      });
    },
    reInitParameters() {
      this.FinalClustering = [];
      this.selectlinedata = [];
      this.shapeNodeOrder = [];
    },
    onDrawFullTopo() {
      this.chart.setOption({
        series: [
          {
            id: "sub",
            data: this.originalSub,
          },
          {
            id: "lines",
            data: this.linedata,
          },
          {
            id: "clusterShape",
            data: [],
          },
        ],
      });
    },
  },

  mounted() {
    this.chart = echarts.init(document.getElementById("main"));
    this.onColorPick();
    this.getData();
    this.onFindBranchSegment();
    this.initdraw("main");
    this.onDrawFullTopo();
    // this.redraw(1);
    // this.onCluster();
    // this.initdraw('main');
    // //this.onDrawSub();
    // this.onDrawLines();
    // this.chart.on('bmapRoam', e => {
    // 	var temp = this.chart.getOption();
    // });
    // this.onFindBranchSegment();
    // setInterval(() => {
    // 	this.onMonitor();
    // }, 5000);
  },
  components: {
    linepop,
    subpop,
  },
};
</script>
<style scoped>
* {
  margin: 0;
  padding: 0;
  list-style: none;
}
.chart {
  z-index: 0;
  height: 700px;
  width: 100%;
}
</style>
