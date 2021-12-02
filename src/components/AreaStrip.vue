<template>
  <div id="areastrip" class="areastrip"></div>
</template>

<script>
import * as echarts from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { LineChart } from "echarts/charts";
import {
  TitleComponent,
  GridComponent,
  TooltipComponent,
  SingleAxisComponent,
} from "echarts/components";
import darkTheme from "../assets/dark.js";
echarts.registerTheme('dark', darkTheme);

echarts.use([
  CanvasRenderer,
  LineChart,
  GridComponent,
  TitleComponent,
  TooltipComponent,
  SingleAxisComponent
]);

let chart = "";

export default {
  name: "areastrip",
  components: {
  },
  data() {
    return {
      option: {
        title: {
          text: 'System Area Load',
          left: 'center',
          top: '20',
          textStyle: {
            fontSize: 24
          }
        },
        grid: {
          left: '3%',
          right: '3%',
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
        series: [
          {
            type: "line",
            id: "real",
            name: "Actual Load",
            symbolSize: 10,
            // smooth: true,
            sampling: "average",
            itemStyle: {
              color: "rgb(255, 158, 68)"
            },
            lineStyle: {
              type: 'dashed'
            },
            sampling: 'average',
            data: []
          }
        ]
      }
    };
  },
  mounted() {
    chart = echarts.init(document.getElementById("areastrip"), "dark");
    chart.setOption(this.option);
    this.Interval = setInterval(() => {
      this.updateChart();
    }, 1000);
  },
  methods: {
    updateChart() {
      // this.option.series[0].data = this.$store.state.areaLoad;
      chart.setOption({
        series: [
          {
            id: "real",
            data: this.$store.state.areaLoad
          }
        ]
      });
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  }
};
</script>

<style scoped>
.areastrip {
  z-index: 0;
  height: 900px;
  width: 100%;
}
</style>
