<template>
  <v-chart :options="option" theme="dark" :autoresize="true"></v-chart>
</template>

<script>
import { use } from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { LineChart } from "echarts/charts";
import {
  TitleComponent,
  TooltipComponent,
  GridComponent,
  SingleAxisComponent,
} from "echarts/components";
import VChart, { THEME_KEY } from "vue-echarts";

use([
  CanvasRenderer,
  LineChart,
  TitleComponent,
  TooltipComponent,
  GridComponent,
  SingleAxisComponent,
]);

export default {
  name: "hourlystrip",
  components: {
    VChart,
  },
  provide: {
    [THEME_KEY]: "dark",
  },
  data() {
    return {
      option: {
        title: {
          text: "Hourly Area Load",
          left: "center",
          top: "20",
          textStyle: {
            fontSize: 24
          }
        },
        grid: {
          left: "3%",
          right: "3%",
          top: 80
        },
        xAxis: [
          {
            type: "time",
            boundaryGap: false,
            axisLine: {
              show: false
            }
          }
        ],
        yAxis: {
          type: "value",
          boundaryGap: false,
          axisLine: {
            show: false
          }
        },
        animation: false,
        series: [
          {
            type: "line",
            id: "real",
            name: "Actual Load",
            // showSymbol: false,
            // hoverAnimation: false,
            symbolSize: 10,
            smooth: true,
            sampling: "average",
            itemStyle: {
              color: "rgb(255, 158, 68)"
            },
            lineStyle: {
              type: "solid"
            },
            sampling: "average",
            data: []
          }
        ]
      }
    };
  },
  mounted() {
    this.Interval = setInterval(() => {
      this.updateChart();
    }, 1000);
  },
  methods: {
    updateChart() {
      if (this.$store.state.areaLoad.length <= 119) {
        this.option.series[0].data = this.$store.state.areaLoad;
      } else {
        this.option.series[0].data = this.$store.state.areaLoad.slice(-119);
      }
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  }
};
</script>

<style scoped>
.echarts {
  z-index: 0;
  height: 900px;
  width: 100%;
}
</style>
