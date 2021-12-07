<template>
  <!-- Creates a container to store all of our components. -->
  <v-container grid-list-xl text-xs-center fluid>
    <!-- Creating the generation bar chart. -->
    <v-layout row wrap>
      <v-flex lg6 sm12 xs12>
        <pieDistribute :areatotal="areaData[0]"></pieDistribute>
      </v-flex>
      <v-flex lg6 sm12 xs12>
        <div id="genpie" class="genpie" />
      </v-flex>
    </v-layout>
  </v-container>
</template>

<style>
/** For PowerWeb, the size needs to be in pixel format. */
.genpie {
  width: 100%;
  height: 900px;
}
</style>

<script>
// Need to use the ECharts component.
import pieDistribute from "@/components/pieDistribute";
import { mapState } from "vuex";
import * as echarts from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { BarChart } from "echarts/charts";
import {
  TitleComponent,
  TooltipComponent,
  GridComponent,
  LegendComponent,
} from "echarts/components";
import darkTheme from "../assets/dark.js";

echarts.use([
  CanvasRenderer,
  BarChart,
  TitleComponent,
  TooltipComponent,
  GridComponent,
  LegendComponent,
]);
echarts.registerTheme('dark', darkTheme);

let chart = null;

export default {
  name: "genpie",
  components: {
    pieDistribute,
  },

  data() {
    return {
      // You can manually set the theme for each plot for visibility.
      theme: "dark",
      // These are the options for the Generation Pie Graph
      genName: [],
      genVal: [],
      genPie: {
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
            id: "gen",
            data: [],
            type: "pie",
          },
        ],
      },
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
        }
        chart.setOption({
          series: [
            {
              id: "gen",
              data: temp,
            },
          ],
        });
      } catch (e) {
        console.log(e);
      }
      // This is the same thing as initializing the plot. I think ideally, we set this so that it
      // only changes the values for the generators that have been changed, but this should be okay
      // for now.
    },
    reload() {
      setTimeout(() => {
        if (chart) {
          chart.resize();
        }
      }, 800);
    },
  },
  mounted() {
    // For every initialization method, you have to call it through mounted.
    this.initGenPlot();
    chart = echarts.init(document.getElementById("genpie"), "dark");
    chart.setOption(this.genPie);
    this.Process = setInterval(() => {
      this.updateGenPlot();
    }, 1000);
    window.addEventListener("resize", this.reload);
  },
  computed: {
    ...mapState(["areaData"]),
  },
  beforeDestroy() {
    clearInterval(this.Process);
  },
  destroyed() {
    window.removeEventListener("resize", this.reload);
  },
};
</script>