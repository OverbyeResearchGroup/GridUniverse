<template>
  <div id="chart" class="echarts"></div>
</template>

<script>
// import L from "leaflet";
// import "@supermap/iclient-leaflet";

var chart = "";
var map = "";
var linedata = "";

export default {
  mounted() {
    const url =
      "https://api.mapbox.com/styles/v1/mapbox/dark-v9/tiles/256/{z}/{x}/{y}?access_token={accessToken}";
    const options = {
      accessToken:
        "pk.eyJ1IjoibXp5MjI0MCIsImEiOiJjamttc3VsODYyZmI4M2ttbGxmbzFudGM2In0.0dy22s32n9eth_63nlX1UA"
    };
    map = L.map("chart", {
      // crs: L.CRS.EPSG4326,
      center: [32, -99.4936], //this.$store.state.center, //this.mapCenter,
      maxZoom: 18,
      zoom: 7
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
          //   large: true,
          //   largeThreshold: 1,
          blendMode: "lighter",
          symbolSize: 5,
          itemStyle: {
            color: "#616161"
          },
          data: this.$store.state.subData,
          tooltip: {
            confine: true,
            formatter: function(params) {
              return "Substation: " + params.name;
            }
          }
        },
        {
          id: "lines",
          name: "lines",
          type: "lines",
          coordinateSystem: "leaflet",
          animation: true,
          // large: true,
          // largeThreshold: 1,
          progressive: 400,
          progressiveThreshold: 1000,
          zlevel: 1,
          blendMode: "lighter",
          lineStyle: {
            width: 2,
            color: "rgb(200, 35, 45)"
          },
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
          // blendMode: 'lighter',
          // polyline: true,
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
          data: this.$store.state.lineData
        },
        {
          id: "otherSub",
          type: "scatter",
          coordinateSystem: "leaflet",
          //   silent: true,
          blendMode: "lighter",
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
          //   silent: true,
          // large: true,
          // largeThreshold: 1,
          progressive: 400,
          progressiveThreshold: 1000,
          blendMode: "lighter",
          zlevel: 1,
          lineStyle: {
            width: 2,
            color: "rgb(200, 35, 45)"
          },
          effect: {
            // constantSpeed: 20,
            show: true,
            trailLength: 0.1,
            symbolSize: 1
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
    var EL = chart.addTo(map);
  },
  methods: {}
};
</script>

<style scoped>
.echarts {
  z-index: 0;
  height: 1000px;
  width: 100%;
}
</style>
