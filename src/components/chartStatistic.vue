<template>
  <v-card :color="cardColor" :dark="computeCardDark">
    <v-card-title>
      <div class="layout row ma-0">
        <div class="subheading">{{title}}</div>
        <v-spacer></v-spacer>
        <div class="subheading">${{dispData}}</div>
      </div>
    </v-card-title>
    <v-card-media class="white--text">
      <div :id="id" class="chart"></div>
    </v-card-media>
  </v-card>
</template>

<script>
import echarts from 'echarts';
import numeral from 'numeral';
// var numeral = require('numeral');

export default {
	props: {
		icon: String,
		title: String,
		costData: [Number, String],
		caption: String,
		value: Number,
        color: String,
        id: String,
		gradient: {
			type: Boolean,
			default: false
		},
		cardColor: {
			type: String,
			default: 'white'
		},
        chartColor: Array,
        min: [String, null],
        max: [String, null]
	},
	data() {
		return {
			chart: null,
			dataSeries: [],
			Process: null
		};
	},
	computed: {
		computeCardDark() {
			return this.cardColor !== 'white';
        },
        dispData(){
            return numeral(this.costData).format('0,0');
        }
	},
	methods: {
		initChart() {
			this.chart = echarts.init(document.getElementById(this.id));
			this.chart.setOption({
				tooltip: {
					trigger: 'axis',
					formatter: function(params) {
						return (params[0].name + ": " + params[0].value);
					},
					axisPointer: {
						animation: false
                    },
                    confine: true
				},
				xAxis: {
					show: false,
                    min: this.min,
                    max: this.max
					// type: 'value',
				},
				yAxis: {
					show: false,
                    min: this.min,
                    max: this.max
					// type: 'value',
					// boundaryGap: ['0%','100%'],
				},
				grid: { top: '5%', left: '0', bottom: '0', right: '0' },
				color: this.chartColor,
				series: [
					{
						type: 'line',
						id: 'line',
						name: 'line',
						smooth: true,
						data: []
					}
				]
			});
		}
	},
	mounted() {
		this.initChart();
	},
	beforeDestroy(){
		this.chart.clear();
	},
	watch: {
		costData: {
			handler: function(newval, oldval) {
				if(newval == 0) {
					this.dataSeries = []
				}
				var today = new Date();
				// var time = today.getTime();
				var time =
					today.getHours() +
					':' +
					today.getMinutes() +
					':' +
					today.getSeconds();
				this.dataSeries.push({ name: time, value: newval });
				if (this.dataSeries.length > 60) {
					this.dataSeries.shift();
				}
				this.chart.setOption({
					series: [
						{
							data: this.dataSeries
						}
					]
				});
			}
		}
	}
};
</script>

<style>
.chart {
	height: 100px;
	width: 100%;
}
</style>
