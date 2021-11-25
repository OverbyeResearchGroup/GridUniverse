<template>
  <!-- Creates a container to store all of our components. -->
  <v-container grid-list-xl text-xs-center fluid>
    <!-- Creating the generation bar chart. -->
    <v-layout row wrap>
      <v-flex lg6 sm12 xs12>
        <pieDistribute :areatotal="areaData[0]"></pieDistribute>
      </v-flex>
      <v-flex lg6 sm12 xs12>
        <v-chart :option="genPie" :theme="theme" autoresize />
      </v-flex>
    </v-layout>
  </v-container>
</template>

<style>
/** For PowerWeb, the size needs to be in pixel format. */
.echarts {
  width: 100%;
  height: 900px;
}
</style>

<script>
// Need to use the ECharts component.
import pieDistribute from "@/components/pieDistribute";
import { mapState } from "vuex";
import { use } from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { BarChart } from "echarts/charts";
import {
  TitleComponent,
  TooltipComponent,
  GridComponent,
  LegendComponent,
} from "echarts/components";
import VChart, { THEME_KEY } from "vue-echarts";

use([
  CanvasRenderer,
  BarChart,
  TitleComponent,
  TooltipComponent,
  GridComponent,
  LegendComponent,
]);

export default {
  name: "genpie",
  components: {
    VChart,
    pieDistribute,
  },
  provide: {
    [THEME_KEY]: "dark",
  },
  data() {
    return {
      // You can manually set the theme for each plot for visibility.
      theme: "dark",
      // These are the options for the Generation Pie Graph
      genName: [],
      genVal: [],
    };
  },
  methods: {
    initGenPlot() {
      console.log(this.$store.state);
      // Initiailizing all the data in the plot.
      for (let i in this.$store.state.genData) {
        this.genName.push(this.$store.state.genData[i]["name"]);
        this.genVal.push({
          name: this.$store.state.genData[i]["name"],
          value: this.$store.state.genData[i]["MW"],
        });
      }
      // These are the options for the generation bar chart.
    },
    // This function is used to update the plot of the generation.
    updateGenPlot() {
      try {
        var temp = [];
        for (let i in this.$store.state.genData) {
          this.genName.push(this.$store.state.genData[i]["name"]);
          temp.push({
            name: this.$store.state.genData[i]["name"],
            value: this.$store.state.genData[i]["MW"],
          });
          this.genVal = temp;
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
  computed: {
    ...mapState(["areaData"]),
    genPie() {
      return {
        title: {
          text: "Current Generation Distribution (By Generator)",
          textStyle: {
            fontSize: 24,
          },
          x: "center",
        },
        grid: {
          right: "3%",
          left: "3%",
          bottom: 100,
        },
        tooltip: {
          trigger: "item",
          formatter: "{a} <br/>{b} : {c} ({d}%)",
        },
        legend: {
          type: "scroll",
          orient: "horizontal",
          bottom: 20,
          data: this.genName,
        },
        series: [
          {
            name: "Current Generation",
            data: this.genVal,
            type: "pie",
          },
        ],
      };
    },
  },
  beforeDestroy() {
    clearInterval(this.Process);
  },
};
</script>