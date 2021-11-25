<template>
  <!-- Creates a container to store all of our components. -->
  <v-container grid-list-xl text-xs-center fluid>
    <!-- Creating the generation bar chart. -->
    <v-layout row wrap>
      <v-flex lg12 sm12 xs12>
        <v-chart :option="genBar" :theme="theme" autoresize />
      </v-flex>
    </v-layout>
  </v-container>
</template>

<style>
/** For PowerWeb, the size needs to be in pixel format. */
.echarts {
  width: 100%;
  height: 800px;
}
</style>

<script>
import { use } from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { BarChart } from "echarts/charts";
import {
  TitleComponent,
  TooltipComponent,
  GridComponent,
  SingleAxisComponent,
} from "echarts/components";
import VChart, { THEME_KEY } from "vue-echarts";

use([
  CanvasRenderer,
  BarChart,
  TitleComponent,
  TooltipComponent,
  GridComponent,
  SingleAxisComponent,
]);

export default {
  name: "barplot",
  components: {
    VChart,
  },
  provide: {
    [THEME_KEY]: "dark",
  },
  data() {
    return {
      // You can manually set the theme for each plot for visibility.
      theme: "dark",
      // These are the options for the Generation Bar Graph
      genXaxis: [],
      genYaxis: [],
      maxGen: [],
    };
  },
  methods: {
    initGenPlot() {
      // Initiailizing all the data in the plot.
      // console.log(this.$store.state.genData);
      for (let i in this.$store.state.genData) {
        this.genXaxis.push(this.$store.state.genData[i]["name"]);
        this.genYaxis.push(this.$store.state.genData[i]["MW"]);
        this.maxGen.push(this.$store.state.genData[i]["MWMax"]);
      }
      // These are the options for the generation bar chart.
    },
    // This function is used to update the plot of the generation.
    updateGenPlot() {
      try {
        var temp = [];
        for (let i in this.$store.state.genData) {
          temp.push(this.$store.state.genData[i]["MW"]);
          this.genYaxis = temp;
        }
      } catch (e) {
        console.log(e);
      }
      // This is the same thing as initializing the plot. I think ideally, we set this so that it
      // only changes the values for the generators that have been changed, but this should be okay
      // for now.
    },
  },
  mounted() {
    // For every initialization method, you have to call it through mounted.
    this.initGenPlot();
    this.Process = setInterval(() => {
      this.updateGenPlot();
    }, 1000);
  },
  beforeDestroy() {
    clearInterval(this.Process);
  },
  computed: {
    genBar() {
      return {
        title: {
          text: "Current Generation",
          left: "center",
          textStyle: {
            fontSize: 48,
          },
        },
        grid: {
          right: "3%",
          left: "3%",
          bottom: 100,
        },
        xAxis: {
          type: "category",
          data: this.genXaxis,
          axisLabel: {
            rotate: 90,
            inside: true,
            fontWeight: "bold",
            fontSize: 16,
          },
          z: 3,
        },
        yAxis: {
          type: "value",
          axisLine: {
            show: false,
          },
        },
        tooltip: {
          trigger: "axis",
        },
        series: [
          {
            name: "Current Generation",
            data: this.genYaxis,
            type: "bar",
          },
          {
            name: "Maximum Generation",
            data: this.maxGen,
            type: "bar",
            itemStyle: {
              color: "none",
              borderColor: "#ddd",
              borderWidth: 3,
              borderRadius: 0,
            },
            barGap: "-100%",
            barCategoryGap: "40%",
          },
        ],
      };
    },
  },
};
</script>