<template>
  <v-chart :options="option" theme="dark" :autoresize="true"></v-chart>
</template>

<script>
export default {
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
    this.Interval = setInterval(() => {
      this.updateChart();
    }, 1000);
  },
  methods: {
    updateChart() {
      this.option.series[0].data = this.$store.state.areaLoad;
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
