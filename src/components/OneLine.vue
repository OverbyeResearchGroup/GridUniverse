<template>
  <div id="chart" class="echarts"></div>
</template>

<script>
import L from "leaflet";
import "leaflet/dist/leaflet.css";
import * as echarts from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { LinesChart, EffectScatterChart, ScatterChart } from "echarts/charts";
import { TooltipComponent } from "echarts/components";
import "../assets/echarts-extension-leaflet.esm.js";
import darkTheme from "../assets/dark.js";
echarts.registerTheme('dark', darkTheme);

echarts.use([
  CanvasRenderer,
  LinesChart,
  EffectScatterChart,
  ScatterChart,
  TooltipComponent,
]);

var chart = "";
var linedata = "";

export default {
  mounted() {
    var echartsOptions = {
      leaflet: {
        // leaflet options (only primitive options, crs/layers/renderer/maxBounds are not allowed here)
        center: [32, -99.4936], //this.$store.state.center, //this.mapCenter,
        maxZoom: 18,
        zoom: 7,
        // maxBoundsViscosity: 1.0,
        // zoomAnimation: false,

        // the following options are from this plugin
        // whether the chart should always re-render when moving/zooming the map
        renderOnMoving: true,
        // whether to enable large mode (it's better to enable when data is large)
        largeMode: false,
      },
      tooltip: {
        show: true,
        trigger: "item",
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
            color: "#616161",
          },
          data: this.$store.state.subData,
          tooltip: {
            confine: true,
            formatter: function (params) {
              return "Substation: " + params.name;
            },
          },
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
            color: "rgb(200, 35, 45)",
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
            formatter: function (params) {
              return "Branch: " + params.name;
            },
          },
          emphasis: {
            lineStyle: {
              width: 2,
              shadowColor: "rgba(144, 144, 255, 0.5)",
              shadowBlur: 10,
            },
          },
          data: this.$store.state.lineData,
        },
        {
          id: "otherSub",
          type: "scatter",
          coordinateSystem: "leaflet",
          //   silent: true,
          blendMode: "lighter",
          symbolSize: 5,
          itemStyle: {
            color: "#616161",
          },
          data: this.$store.state.otherArea.Substation,
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
            color: "rgb(200, 35, 45)",
          },
          effect: {
            // constantSpeed: 20,
            show: true,
            trailLength: 0.1,
            symbolSize: 1,
          },
          data: this.$store.state.otherArea.Branch,
        },
      ],
    };
    // initialize echarts
    chart = echarts.init(document.getElementById("chart"), "dark");
    chart.setOption(echartsOptions);
    var map = chart.getModel().getComponent("leaflet").getMap();
    const url =
      "https://api.mapbox.com/styles/v1/mapbox/dark-v9/tiles/256/{z}/{x}/{y}?access_token={accessToken}";
    const options = {
      accessToken:
        "pk.eyJ1IjoibXp5MjI0MCIsImEiOiJjamttc3VsODYyZmI4M2ttbGxmbzFudGM2In0.0dy22s32n9eth_63nlX1UA",
    };
    L.tileLayer(url, options).addTo(map);
    var legend = L.control({ position: "topright" });
    legend.onAdd = function (map) {
      var div = L.DomUtil.create("div", "legend legend-background");
      let labels = ["<strong>Categories</strong>"];
      const categories = [
        "Substation",
        "Substation w/ generator",
        "Substation w/ shunt",
      ];
      const color = [
        "rgb(34, 47, 151)",
        "rgb(197, 62, 21)",
        "rgb(119, 93, 86)",
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
  },
  methods: {},
};
</script>

<style scoped>
.echarts {
  z-index: 0;
  height: 1000px;
  width: 100%;
}
</style>
