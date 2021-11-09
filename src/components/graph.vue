<template v-model="show">
  <div :id="id"></div>
</template>

<script>
import vis from 'vis';
import 'vis/dist/vis-timeline-graph2d.min.css';

let chart = null;

export default {
	props: {
		id: String,
		data: [String, Number],
		visible: Boolean
	},
	data() {
		return {
			itv: null
		};
	},
	methods: {},
	computed: {
		show: {
			get() {
				return this.visible;
			},
			set(value) {
				if (!value) {
					// this.display = [];
					// this.childshow = false;
					this.$emit('close');
				}
			}
		}
	},
	mounted() {
		// container IS finished rendering to the DOM
		var DELAY = 2000; // delay in ms to add new data points

		// var strategy = document.getElementById('container');

		// create a graph2d with an (currently empty) dataset
		var self = this;
		var container = document.getElementById(this.id);
		var dataset = new vis.DataSet();
		var min, max;
		switch (this.id) {
			case 'Freq':
				min = 59.9;
				max = 60.1;
				break;
			case 'GenMW':
				min = 1000;
				max = 4000;
				break;
			case 'LoadMW':
				min = 1000;
				max = 4000;
				break;
			default:
				min = -1000;
				max = 1000;
		}
		var options = {
			height: '200px',
			start: vis.moment().add(-30, 'seconds'), // changed so its faster
			end: vis.moment(),
			dataAxis: {
				width: '20px',
				left: {
					range: {
						min: min,
						max: max
					},
					format: function(value) {
						return '' + value.toFixed(1);
					}
				}
			},
			drawPoints: {
				style: 'circle' // square, circle
			},
			shaded: {
				orientation: 'bottom' // top, bottom
			}
		};
		chart = new vis.Graph2d(container, dataset, options);

		// a function to generate data points
		// function y(x) {
		// 	return (Math.sin(x / 2) + Math.cos(x / 4)) * 5;
		// }

		function renderStep() {
			// move the window (you can think of different strategies).
			var now = vis.moment();
			var range = chart.getWindow();
			var interval = range.end - range.start;
			if (now > range.end) {
				chart.setWindow(now - 0.1 * interval, now + 0.9 * interval);
			}
			setTimeout(renderStep, DELAY);
		}
		renderStep();

		/**
		 * Add a new datapoint to the graph
		 */
		function addDataPoint() {
			if (self.visible == true) {
				// add a new data point to the dataset
				var now = vis.moment();
				dataset.add({
					x: now,
					y: self.data
					// y: y(now / 1000)
				});

				// remove all data points which are no longer visible
				var range = chart.getWindow();
				var interval = range.end - range.start;
				var oldIds = dataset.getIds({
					filter: function(item) {
						return item.x < range.start - interval;
					}
				});
				dataset.remove(oldIds);

				// setTimeout(addDataPoint, DELAY);
			}
		}
		this.itv = setInterval(() => {
			addDataPoint();
		}, DELAY);
	},
	beforeDestroy(){
		clearInterval(this.itv);
		chart.destroy();
		chart = null;
	}
};
</script>
