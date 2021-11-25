<template>
  <div id="chart" class="echarts"></div>
</template>

<script>
import * as echarts from 'echarts/core';
import { LineChart } from 'echarts/charts';
import {
  TitleComponent,
  TooltipComponent,
  GridComponent,
  DatasetComponent,
  LegendComponent,
  SingleAxisComponent
} from 'echarts/components';
import { CanvasRenderer } from 'echarts/renderers';

echarts.use([
  TitleComponent,
  TooltipComponent,
  GridComponent,
  LegendComponent,
  DatasetComponent,
  SingleAxisComponent,
  LineChart,
  CanvasRenderer
]);

var chart = "";
var option = {
  title: {
    text: "Bus Voltage",
    left: "center",
    top: "20",
    textStyle: {
      fontSize: 48
    }
  },
  grid: {
    left: "3%",
    right: "3%",
    top: 80
  },
  legend: {
      top: 'bottom',
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
    },
    min: 0,
    max: 1.2
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
      name:'4195',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4195"
      }
    },
    {
      type: "line",
      name:'4146',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4146"
      }
    },
    {
      type: "line",
      name:'4056',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4056"
      }
    },
    {
      type: "line",
      name:'4181',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4181"
      }
    },
    {
      type: "line",
      name:'4192',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4192"
      }
    },
    {
      type: "line",
      name:'4039',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4039"
      }
    },
    {
      type: "line",
      name:'4151',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4151"
      }
    },
    {
      type: "line",
      name:'4196',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4196"
      }
    },
    {
      type: "line",
      name:'4073',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4073"
      }
    },
    {
      type: "line",
      name:'4070',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4070"
      }
    },
    {
      type: "line",
      name:'4158',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4158"
      }
    },
    {
      type: "line",
      name:'4140',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4140"
      }
    },
    {
      type: "line",
      name:'4113',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4113"
      }
    },
    {
      type: "line",
      name:'4080',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4080"
      }
    },
    {
      type: "line",
      name:'4004',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4004"
      }
    },
    {
      type: "line",
      name:'4183',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4183"
      }
    },
    {
      type: "line",
      name:'4041',
      sampling: "average",
      smooth: true,
      showSymbol: false,
      encode: {
        x: "date",
        y: "4041"
      }
    }
  ]
};

export default {
  mounted() {
    chart = echarts.init(document.getElementById("chart"), 'dark');
    this.$once("hook:beforeDestroy", function() {
      echarts.dispose(chart);
    });
    chart.setOption(option);
    this.Interval = setInterval(() => {
      this.updateChart();
    }, 2000);
  },
  methods: {
    updateChart() {
      option.dataset.source = this.$store.state.busVoltage;
      chart.setOption(option);
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
