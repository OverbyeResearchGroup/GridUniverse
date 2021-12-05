<template>
  <div>
    <div id="areastrip2" class="areastrip2"></div>
  </div>
</template>

<script>
import * as echarts from "echarts/core";
import { CanvasRenderer } from "echarts/renderers";
import { LineChart } from "echarts/charts";
import {
  TitleComponent,
  TooltipComponent,
  LegendComponent,
  GridComponent, 
  SingleAxisComponent,
  DatasetComponent
} from "echarts/components";
import darkTheme from "../assets/dark.js";
echarts.registerTheme('dark', darkTheme);

echarts.use([
  CanvasRenderer,
  LineChart,
  TitleComponent,
  TooltipComponent,
  LegendComponent,
  GridComponent, 
  SingleAxisComponent,
  DatasetComponent
]);


let chart = "";

export default {
  name: "areastrip2",
  components: {
  },
  data() {
    return {
      option: {
        title: [
          {
            text: "System Area Load",
            textAlign: "center",
            top: 20,
            x: "25%",
            textStyle: {
              fontSize: 44
            }
          },
          {
            text: "Hourly Area Load",
            textAlign: "center",
            top: 20,
            x: "75%",
            textStyle: {
              fontSize: 44
            }
          },
          {
            text: "Bus Voltage",
            left: "center",
            top: "55%",
            textStyle: {
              fontSize: 44
            }
          }
        ],
        legend: {
          top: "bottom",
          textStyle: {
            fontSize: 20,
          },
          data: [
            "4195",
            "4146",
            "4056",
            "4181",
            "4192",
            "4039",
            "4151",
            "4196",
            "4073",
            "4070",
            "4158",
            "4140",
            "4113",
            "4080",
            "4004",
            "4183",
            "4041"
          ]
        },
        grid: [
          {
            left: "3%",
            top: 80,
            bottom: "55%",
            width: "45%"
          },
          {
            right: "3%",
            top: 80,
            bottom: "55%",
            width: "45%"
          },
          {
            left: "3%",
            right: "3%",
            top: "60%"
          }
        ],
        xAxis: [
          {
            type: "time",
            boundaryGap: false,
            axisLine: {
              show: false
            }
          },
          {
            type: "time",
            boundaryGap: false,
            axisLine: {
              show: false
            },
            gridIndex: 1
          },
          {
            type: "time",
            boundaryGap: false,
            axisLine: {
              show: false
            },
            gridIndex: 2
          }
        ],
        yAxis: [
          {
            type: "value",
            boundaryGap: false,
            axisLine: {
              show: false
            }
          },
          {
            type: "value",
            boundaryGap: false,
            axisLine: {
              show: false
            },
            gridIndex: 1
          },
          {
            type: "value",
            boundaryGap: false,
            axisLine: {
              show: false
            },
            min: 0,
            max: 1.2,
            gridIndex: 2
          }
        ],
        tooltip: {
            trigger: 'axis'
        },
        animation: false,
        dataset: {
          dimensions: [
            "date",
            "4195",
            "4146",
            "4056",
            "4181",
            "4192",
            "4039",
            "4151",
            "4196",
            "4073",
            "4070",
            "4158",
            "4140",
            "4113",
            "4080",
            "4004",
            "4183",
            "4041"
          ],
          source: []
          // sourceHeader: true
        },
        series: [
          {
            type: "line",
            id: "area",
            name: "Actual Load",
            // symbolSize: 10,
            // smooth: true,
            showSymbol: false,
            sampling: "average",
            itemStyle: {
              color: "rgb(255, 158, 68)"
            },
            lineStyle: {
              type: "solid"
            },
            sampling: "average",
            data: []
          },
          {
            type: "line",
            id: "hourly",
            name: "Hourly Load",
            showSymbol: false,
            // hoverAnimation: false,
            // symbolSize: 10,
            smooth: true,
            sampling: "average",
            itemStyle: {
              color: "rgb(255, 100, 100)"
            },
            lineStyle: {
              type: "solid"
            },
            sampling: "average",
            data: [],
            xAxisIndex: 1,
            yAxisIndex: 1
          },
          {
            type: "line",
            name: "4195",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4195"
            },
            xAxisIndex: 2,
            yAxisIndex: 2,
            markLine: {
                silent: true,
                symbol: 'none',
                label: {
                  show: false
                },
                data: [{
                    yAxis: 0.9
                }, {
                    yAxis: 1.05
                }]
            }
          },
          {
            type: "line",
            name: "4146",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4146"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4056",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4056"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4181",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4181"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4192",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4192"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4039",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4039"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4151",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4151"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4196",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4196"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4073",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4073"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4070",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4070"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4158",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4158"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4140",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4140"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4113",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4113"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4080",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4080"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4004",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4004"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4183",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4183"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          },
          {
            type: "line",
            name: "4041",
            sampling: "average",
            smooth: true,
            showSymbol: false,
            encode: {
              x: "date",
              y: "4041"
            },
            xAxisIndex: 2,
            yAxisIndex: 2
          }
        ]
      }
    };
  },
  mounted() {
    chart = echarts.init(document.getElementById("areastrip2"), "dark");
    this.Interval = setInterval(() => {
      this.updateChart();
    }, 1000);
  },
  methods: {
    updateChart() {
      this.option.series[0].data = this.$store.state.areaLoad;
      if (this.$store.state.areaLoad.length <= 119) {
        this.option.series[1].data = this.$store.state.areaLoad;
      } else {
        this.option.series[1].data = this.$store.state.areaLoad.slice(-119);
      }
      this.option.dataset.source = this.$store.state.busVoltage;
      chart.setOption(this.option);
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  }
};
</script>

<style scoped>
.areastrip2 {
  z-index: 0;
  height: 1080px;
  width: 100%;
}
</style>
