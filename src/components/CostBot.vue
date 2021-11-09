<template>
</template>

<script>
import { mapGetters } from 'vuex';

export default {
	data() {
		return {
			anchor: null,
			genDataLength: null,
			show: false,
			marginalcost: [],
			gens: null,
			Interval: null
		};
	},
	methods: {
		initData() {
			let temp = [];
			let subID;
			for (let i in this.$store.state.casedetail.content.Gen) {
				subID = this.$store.state.casedetail.content.Bus[i]["Int.Sub Number"];
				temp.push({
					value: [this.$store.state.casedetail.content.Substation[subID.toString()]["Double.Longitude"], this.$store.state.casedetail.content.Substation[subID.toString()]["Double.Latitude"]],
					name: i,
					Status: 1,
					MWMax: this.$store.state.casedetail.content.Gen[i][
						'Single.MW Max Limit'
					],
					MWMin: this.$store.state.casedetail.content.Gen[i][
						'Single.MW Min Limit'
					],
					MW: 0,
					Mvar: 0,
					MWSetpoint: 0,
					VpuSetpoint: 1,
					OperationCost: this.$store.state.casedetail.content.Gen[i][
						'OperationCost'
					],
					MarginalCostCoefficients: this.$store.state.casedetail.content.Gen[i][
						'MarginalCostCoefficients'
					],
					MarginalCost: 0,
					id: this.$store.state.casedetail.content.Gen[i]['String.ID'],
					AGC: false
				});
			}
			this.gens = temp;
			if (this.gens.length > 1) {
				return Promise.resolve('Table initialized properly');
			} else {
				return Promise.reject('Error in initialization');
			}
		},
		preProcess() {
			let anchor = 0;
			var arrlength;
			var keyarr;

			for (let ele in this.$store.state.fieldstore) {
				arrlength = this.$store.state.fieldstore[ele]['Field'].length;
				keyarr = Object.keys(this.$store.state.casedetail.content[ele]);
				if (ele != 'Gen') {
					anchor += arrlength * keyarr.length;
				} else {
					break;
				}
			}
			this.anchor = anchor;
			this.genDataLength = arrlength;
		},
		getMP() {
			const message = this.$store.getters.rawData
			this.$store.commit('setCurrentTime', +message['SOC']);
			this.$store.commit('setCurrentStatus', message['Status']);
			const temp = message.Data;
			for (let i in this.gens) {
				this.gens[i].MW = temp[this.anchor + 6 + i * this.genDataLength]; // MW is the 6th in the gen data
				this.gens[i].Mvar = temp[this.anchor + 7 + i * this.genDataLength];
				this.gens[i].MWSetpoint =
					temp[this.anchor + 10 + i * this.genDataLength];
				this.gens[i].VpuSetpoint =
					temp[this.anchor + 9 + i * this.genDataLength];
				this.gens[i].Status = temp[this.anchor + 5 + i * this.genDataLength];
				this.gens[i].MarginalCost = (
					this.gens[i].MarginalCostCoefficients[0] +
					this.gens[i].MarginalCostCoefficients[1] * 2 * this.gens[i].MW
				).toFixed(2);
			}
			this.$store.commit('updateGenData', this.gens);
		},
		updateTotalCost() {
			this.Interval = setInterval(() => {
				let deltaCost = 0;
				let deltaMWh = 0;
				for (let i in this.gens) {
					deltaCost +=
						this.gens[i].MarginalCostCoefficients[0]*this.gens[i].MW*1+
						this.gens[i].MarginalCostCoefficients[1]*this.gens[i].MW*this.gens[i].MW;
					deltaMWh += this.gens[i].MW;
                }
                this.$store.commit('updateUnitTimeCost',+deltaCost.toFixed(0));
				deltaCost = deltaCost / 120;
                deltaMWh = deltaMWh*1/ 120;
				this.$store.commit('addCost', +deltaCost.toFixed(0));
				this.$store.commit('addMWh', +deltaMWh.toFixed(2));
				// console.log(deltaCost.toFixed(2));
			}, 500);
		}
	},
	created() {
		this.preProcess();
		this.initData();
		this.updateTotalCost();
	},
	computed: {
		...mapGetters({
			dataflag: 'rawData'
		})
	},
	watch: {
		dataflag: function() {
			this.getMP();
		}
	},
	beforeDestroy() {
		clearInterval(this.Interval);
	}
};
</script>

