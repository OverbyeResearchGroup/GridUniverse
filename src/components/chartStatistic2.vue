<template>
	<v-card :color="cardColor" :dark="computeCardDark">
		<v-card-title>
			<div class="layout row ma-0">
				<div class="headline">{{title}}</div>
				<v-spacer></v-spacer>
				<div class="subheading">${{dispData}}</div>
			</div>
		</v-card-title>
		<div :id="id" class="chart"></div>
		<!-- <v-card-media class="white--text">
			<div :id="id" class="chart"></div>
		</v-card-media> -->
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
		max: [String, null],
		left: String,
		precision: {
			default: 0,
			type: Number
		}
	},
	data() {
		return {
			chart: null,
			dataSeries: [],
			index: 0,
			Process: null
		};
	},
	computed: {
		computeCardDark() {
			return this.cardColor !== 'white';
		},
		dispData() {
			return numeral(this.costData).format('0,0');
		}
	},
	methods: {
		initChart() {
			this.chart = echarts.init(document.getElementById(this.id));
			var self = this;
			this.chart.setOption({
				tooltip: {
					trigger: 'axis',
					formatter: function(params) {
						return params[0].name + ': ' + params[0].value[1];
					},
					axisPointer: {
						animation: false
					},
					confine: true
				},
				xAxis: {
					show: false,
					type: 'value',
					// splitLine: {
					// 	show: false
					// }
					min: 'dataMin',
					max: 'dataMax'
					// type: 'value',
				},
				yAxis: {
					show: true,
					type: 'value',
					splitLine: {
						show: false
					},
					min: function(value) {
						// console.log(self)
						return (value.min * 0.99).toFixed(self.precision);
					},
					max: function(value) {
						return (value.max * 1.01).toFixed(self.precision);
					},
					axisLine: {
						lineStyle: { color: 'rgba(255,255,255,1)' }
					}
					// boundaryGap: [0, '100%'],
					// splitLine: {
					// 	show: false
					// }
					// boundaryGap: [0, '100%']
					// type: 'value',
					// boundaryGap: ['0%','100%'],
				},
				grid: { top: '5%', left: this.left, bottom: '5%', right: '0' },
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
		},
		updateATC() {
			this.Process = setInterval(() => {
				if (this.$store.state.status == 'running') {
					var today = new Date();
					var time =
						today.getHours() +
						':' +
						today.getMinutes() +
						':' +
						today.getSeconds();
					// console.log(this.dataSeries);
					this.dataSeries.push({
						name: this.index.toString(),
						value: [this.index, this.costData]
					});
					this.index++;
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
			}, 1000);
		},
		resizeChart() {
			window.addEventListener("resize", () => { this.chart.resize();});
			// window.onresize = () => {
			// 	console.log('resizing!')
			// 	console.log(this.chart)
			// 	if (this.chart) {
			// 		console.log('YES')
			// 		this.chart.resize();
			// 	}
			// };
		}
	},
	mounted() {
		this.initChart();
		this.resizeChart();
		this.updateATC();
	},
	beforeDestroy() {
		clearInterval(this.Process);
		this.chart.clear();
	},
	watch: {}
};
</script>

<style>
.chart {
	height: 100px;
	width: 100%;
}
/* .subheading {
	color: white;
} */
</style>
