<template>
  <div>
    <v-layout row class="align-center layout px-4 pt-4 app--page-header">
      <div class="page-header-left">
        <h3 class="pr-3">GIC</h3>
      </div>
      <v-icon larg>wifi_tethering</v-icon>
      <v-spacer></v-spacer>
      <div class="page-header-right">
        <h4 class="pr-1">
          Hi {{ $store.state.username }}
          <status-indicator
            :negative="$store.state.alarm"
            :positive="!$store.state.alarm"
            pulse
          ></status-indicator>
        </h4>
      </div>
    </v-layout>
    <v-container grid-list-xl text-xs-center fluid>
      <v-layout row wrap>
        <v-flex lg12 sm12 xs12>
          <v-layout row wrap>
            <v-flex lg12 sm12 xs12>
              <div id="v-widget">
                <v-card>
                  <v-app-bar color="transparent" flat dense v-if="enableHeader">
                    <v-toolbar-title>
                      <h4>{{ chartTitle }}</h4>
                    </v-toolbar-title>
                    <v-spacer></v-spacer>
                  </v-app-bar>
                  <v-divider v-if="enableHeader"></v-divider>
                  <slot name="widget-content"></slot>
                  <div id="map" class="gicChart"></div>
                </v-card>
              </div>
            </v-flex>
            <!-- <v-flex lg12 sm12 xs12>
							<v-widget title="GMD" content-bg="dark"> </v-widget>
            </v-flex>-->
          </v-layout>
        </v-flex>
      </v-layout>
    </v-container>
  </div>
</template>

<style scoped>
table.v-table tbody td:first-child,
table.v-table tbody td:not(:first-child),
table.v-table tbody th:first-child,
table.v-table tbody th:not(:first-child),
table.v-table thead td:first-child,
table.v-table thead td:not(:first-child),
table.v-table thead th:first-child,
table.v-table thead th:not(:first-child) {
  padding: 0 10px;
}

.chip {
  width: 60px;
}
.fixed-header table {
  table-layout: fixed;
}

.fixed-header th {
  /* background-color: #fff; just for LIGHT THEME, change it to #474747 for DARK */
  position: sticky;
  top: 0;
  z-index: 10;
}

.fixed-header tr.datatable__progress th {
  top: 56px;
}

.fixed-header .table__overflow {
  overflow: auto;
  height: 100%;
}
.gicChart {
  z-index: 0;
  height: 600px;
}
</style>

<script>
import "echarts-leaflet";
import GeoJSON from "geojson";

export default {
  // props: {
  // 	title: String
  // },
  data() {
    return {
      title: "Realtime Data",
      chartTitle: "GIC Electric Field",
      enableHeader: {
        type: Boolean,
        default: true,
      },
      contentBg: {
        type: String,
        default: "white",
      },
      focus: {
        type: String,
      },
      height: {
        type: String,
        default: "300px",
      },
      headers: [
        {
          text: "Transformer",
          align: "left",
          // sortable: false,
          value: "name",
          width: "15%",
        },
        // { text: 'Phase', align: 'left', value: 'Degree' },
        // { text: 'Tap', align: 'left', value: 'Ratio' },
        { text: "kV", value: "kV" },
        { text: "Temperature", value: "Temperature" },
        { text: "GICNeutralCurrent", value: "GICNeutralCurrent" },
        { text: "GICMvarLosses", value: "GICMvarLosses" },
        { text: "GICIEff", value: "GICIEff" },
      ],
      Transformers: [],
      selected: [],
      anchor: 0,
      TransformerDataLength: 0,
      defaultRowItems: [
        15,
        30,
        { text: "$vuetify.dataIterator.rowsPerPageAll", value: -1 },
      ],
      TransformerArray: this.$store.state.areaHelper.Transformer.list,
      chart: {},
      subdata: [],
      linedata: [],
      subdetail: [],
      busdetail: [],
      mapCenter: [27.4241, -98.4936],
      map: null,
      mapStyle: {
        width: "100%",
        height: this.height,
      },
      transData: [],
      substationArray: [],
      substationFieldIndex: {
        GICElectricFieldVKM: this.$store.state.fieldstore["Substation"][
          "Field"
        ].findIndex((x) => x === "GICElectricFieldVKM"),
      },
      contoursLayer: {},
      interval: {},
    };
  },
  methods: {
    initdraw() {
      let heatmapData = [];
      for (let ele in this.$store.state.transformerDict) {
        heatmapData.push([
          this.$store.state.transformerDict[ele].coords[0][0],
          this.$store.state.transformerDict[ele].coords[0][1],
          100,
        ]);
      }
      // console.log(this.$store.state.transformerDict)
      const url = "https://{s}.tile.openstreetmap.fr/hot/{z}/{x}/{y}.png";
      const options = {
        // redirect: true,
        // time: '',
        // maxZoom: 8,
        // tilematrixset: 'GoogleMapsCompatible_Level',
        // format: 'jpg',
        // attribution:
        // 	'&copy; <a href="http://www.openstreetmap.org/copyright">OpenStreetMap</a>, Tiles courtesy of <a href="http://hot.openstreetmap.org/" target="_blank">Humanitarian OpenStreetMap Team</a>'
      };
      this.map = window.L.map("map", {
        // crs: L.CRS.EPSG4326,
        center: this.mapCenter, //this.$store.state.center, //this.mapCenter,
        maxZoom: 18,
        zoom: 8,
      });
      window.L.tileLayer(url, options).addTo(this.map);
      let legend = window.L.control({ position: "bottomleft" });
      legend.onAdd = function (map) {
        var div = window.L.DomUtil.create("div", "legend legend-background");
        let labels = ["<strong>Categories</strong>"];
        const categories = ["0", "0.1", "0.5", "1", "2", "3", "4", "5"];
        const color = [
          "#FFEDA0",
          "#FED976",
          "#FEB24C",
          "#FD8D3C",
          "#FC4E2A",
          "#E31A1C",
          "#BD0026",
          "#800026",
        ];
        for (var i = 0; i < categories.length; i++) {
          div.innerHTML +=
            '<span class="circle" style="float:left;background:' +
            color[i] +
            '"></span>' +
            categories[i] +
            "<br>";
        }
        // div.innerHTML = labels.join('<br>');
        // console.log(div)
        return div;
      };
      legend.addTo(this.map);
      // var legend = window.L.control({ position: 'bottomleft' });
      // legend.onAdd = function(map) {
      // 	var div = window.L.DomUtil.create('div', 'legend legend-background');
      // 	let labels = ['<strong>Categories</strong>']
      // 	const categories = [
      // 			'Positive Neutral Current',
      // 			'Negative Neutral Current'
      // 		];
      // 	const color = ['rgba(0, 200, 0, 0.5)', 'rgba(0, 0, 200, 0.5)']
      // 	for (var i = 0; i < categories.length; i++) {
      // 		div.innerHTML += '<span class="circle" style="background:' + color[i] + '"></span>' + categories[i] + '<br>';
      // 	}
      // 	// div.innerHTML = labels.join('<br>');
      // 	// console.log(div)
      // 	return div;
      // };
      // legend.addTo(this.map);
      // this.chart = echarts.init(document.getElementById('map'));
      var echartsOptions = {
        animation: false,
        tooltip: {
          show: false,
          trigger: "item",
        },
        visualMap: {
          show: false,
          top: "top",
          min: 50,
          max: 300,
          seriesIndex: 7,
          calculable: true,
          inRange: {
            color: ["#000080", "blue", "green", "yellow", "red"],
          },
        },
        series: [
          {
            id: "transformer",
            type: "effectScatter",
            name: "transformer",
            coordinateSystem: "leaflet",
            symbol: "circle",
            symbolSize: 4,
            // showEffectOn: 'emphasis',
            // zindex: 2,
            zlevel: 3,
            progressive: 100,
            progressiveThreshold: 200,
            data: this.Substations, //this.$store.state.subData,
            itemStyle: {
              color: "rgba(0,0,200,0.6)",
            },
          },
          // {
          // 	id: 'heatmap',
          // 	type: 'heatmap',
          // 	coordinateSystem: 'leaflet',
          // 	data: [], //heatmapData, //[[-98.4, 27.6, 5]],
          // 	pointSize: 10,
          // 	blurSize: 20
          // }
        ],
      };
      var layerOptions = {
        loadWhileAnimating: false,
        attribution: "",
      };
      this.chart = window.L.supermap.echartsLayer(echartsOptions, layerOptions); // _ec is the echartsInstance
      var EL = this.chart.addTo(this.map);

      // var ramdompts_ipl = window.turf.randomPoint(25, {
      // 	bbox: [-98, 28.0, -94, 31.0]
      // });
      // console.log(ramdompts_ipl)
      // window.turf.featureEach(ramdompts_ipl, function(point) {
      // 	point.properties.GICElectricFieldVKM = Math.random() * 25;
      // });
      var t0 = performance.now();
      let ramdompts_ipl = GeoJSON.parse(this.Substations, { Point: "value" });
      var t1 = performance.now();
      console.log("JSON TO GEOJSON: " + (t1 - t0));
      console.log(ramdompts_ipl);
      // var tin = turf.tin(ramdompts_ipl, 'obs');
      var contours_pts = window.turf.interpolate(ramdompts_ipl, 4, {
        gridType: "points",
        property: "GICElectricFieldVKM",
        units: "miles",
      });
      t1 = performance.now();
      console.log("JSON TO INTERPOLATION: " + (t1 - t0));
      var contours = window.turf.isobands(
        contours_pts,
        [0, 0.1, 0.5, 1, 2, 3, 4, 5],
        {
          zProperty: "GICElectricFieldVKM",
        }
      );
      t1 = performance.now();
      console.log("JSON TO ISOBANDS: " + (t1 - t0));
      function getColor(x) {
        return x < 0.1
          ? "#FFEDA0"
          : x < 0.5
          ? "#FED976"
          : x < 1
          ? "#FEB24C"
          : x < 2
          ? "#FD8D3C"
          : x < 3
          ? "#FC4E2A"
          : x < 4
          ? "#E31A1C"
          : x < 5
          ? "#BD0026"
          : "#800026";
      }
      this.contoursLayer = window.L.geoJson(contours, {
        // onEachFeature: function(feature, layer) {
        // 	layer.bindPopup(feature.properties.obs);
        // },
        style: function (feature) {
          return {
            interactive: false,
            fillColor: getColor(
              parseInt(feature.properties.GICElectricFieldVKM.split("-")[0])
            ),
            weight: 0.5,
            color: "#bd0026",
            opacity: 1,
          };
        },
      }).addTo(this.map);
      t1 = performance.now();
      console.log("JSON TO CONTOUR IN MAP: " + (t1 - t0));
      // console.log(tin);
      // var ecModel = this.chart._model;
      // var leafletMap;
      // ecModel.eachComponent('leaflet', function(leafletModel) {
      // 	if (leafletMap == null) {
      // 		// console.log(leafletModel)
      // 		leafletMap = leafletModel.__map;
      // 	}
      // });
      // leafletMap.zoomControl.remove();
    },
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]["Field"].length;
        keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        console.log(ele);
        if (ele != "Substation") {
          anchor += arrlength * keyarr.length;
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.substationDataLength = arrlength;
    },
    initTable() {
      let temp = [];
      let subid;
      // this.anchor = this.$store.state.areaHelper.Transformer.anchor;
      // this.SubstationDataLength = this.$store.state.areaHelper.Transformer.length;
      // let subID;
      for (let i in this.$store.state.areadetail.content.Substation) {
        if (
          this.$store.state.areadetail.content.Substation[i][
            "Int.Area Number"
          ] == +this.$store.state.area
        ) {
          temp.push({
            value: [
              this.$store.state.areadetail.content.Substation[i][
                "Double.Longitude"
              ],
              this.$store.state.areadetail.content.Substation[i][
                "Double.Latitude"
              ],
            ],
            // key: i,
            name: this.$store.state.areadetail.content.Substation[i][
              "String.Name"
            ],
            GICElectricFieldVKM: 0, //0
          });
        }
      }
      this.Substations = temp;
      if (this.Substations.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      this.interval = setInterval(() => {
        try {
          if (this.$store.state.status === "running") {
            const tempData = this.$store.state.parsedData;
            // let temp = this.chart._echartsOptions;
            for (let i in this.Substations) {
              // console.log(tempData[this.anchor + this.substationFieldIndex['GICElectricFieldVKM'] - 1 + i * this.substationDataLength])
              // console.log(tempData[this.anchor + this.substationFieldIndex['GICElectricFieldVKM'] + i * this.substationDataLength])
              // temp.series[0].data[i]['GICElectricFieldVKM'] =
              // 	tempData[
              // 		this.anchor +
              // 			this.substationFieldIndex['GICElectricFieldVKM'] +
              // 			i * this.substationDataLength
              // 	];
              this.Substations[i]["GICElectricFieldVKM"] =
                tempData[
                  this.anchor +
                    this.substationFieldIndex["GICElectricFieldVKM"] +
                    i * this.substationDataLength
                ].toFixed(2);
            }
            // this.chart.setOption(temp);
            // var t0 = performance.now();
            let ramdompts_ipl = GeoJSON.parse(this.Substations, {
              Point: "value",
            });
            // var t1 = performance.now();
            // console.log('JSON TO GEOJSON: ' + (t1 - t0));
            // console.log(ramdompts_ipl);
            // var contours_pts = turf.tin(ramdompts_ipl, 'GICElectricFieldVKM');
            var contours_pts = window.turf.interpolate(ramdompts_ipl, 4, {
              gridType: "points",
              property: "GICElectricFieldVKM",
              units: "miles",
            });
            // t1 = performance.now();
            // console.log('JSON TO INTERPOLATION: ' + (t1 - t0));
            var contours = window.turf.isobands(
              contours_pts,
              [0, 0.1, 0.5, 1, 2, 3, 4, 5, 6],
              {
                zProperty: "GICElectricFieldVKM",
              }
            );
            // t1 = performance.now();
            // console.log('JSON TO ISOBANDS: ' + (t1 - t0));
            function getColor(x) {
              return x < 0.1
                ? "#FFEDA0"
                : x < 0.5
                ? "#FED976"
                : x < 1
                ? "#FEB24C"
                : x < 2
                ? "#FD8D3C"
                : x < 3
                ? "#FC4E2A"
                : x < 4
                ? "#E31A1C"
                : x < 5
                ? "#BD0026"
                : x < 6
                ? "#800026"
                : "#800026";
            }
            this.map.removeLayer(this.contoursLayer);
            this.contoursLayer = window.L.geoJson(contours, {
              style: function (feature) {
                // console.log(feature.properties.GICElectricFieldVKM)
                return {
                  interactive: false,
                  fillColor: getColor(
                    parseFloat(
                      feature.properties.GICElectricFieldVKM.split("-")[0]
                    )
                  ),
                  fillOpacity: 0.5,
                  weight: 0.5,
                  color: "#bd0026",
                  opacity: 0,
                };
              },
            }).addTo(this.map);
            // t1 = performance.now();
            // console.log('JSON TO CONTOUR IN MAP: ' + (t1 - t0));
          }
        } catch (e) {
          console.log(e);
          console.log("The raw data are not ready");
        }
      }, 500);
    },
    toggle(item) {
      var command;
      if (item.vStatus) {
        item.vStatus = 1;
        command = "CLOSE BOTH";
      } else {
        item.vStatus = 0;
        command = "OPEN BOTH";
      }
      // console.log(item);
      this.$store.commit("setMessage", [
        "Transformers",
        item.key,
        item.key,
        command,
      ]);
      this.$store.commit("recordAction", ["Transformers", item.key]);
      this.$store.commit("setPublish");
    },
  },
  created() {
    this.preProcess();
    // this.initTable();
  },
  mounted() {
    this.initTable().then(() => this.updateTable());
    this.initdraw();
  },
  beforeDestroy() {
    clearInterval(this.interval);
    this.updateTable = () => {};
  },
  watch: {},
  computed: {},
};
</script>