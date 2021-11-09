<template>
</template>

<script>
import { mapGetters } from 'vuex';
import _ from 'lodash';
import * as math from 'mathjs';

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
		updateAGC() {
			this.Interval =setInterval(() => {
				if (this.$store.state.status == 'running') {
					if (this.$store.state.ACE) {
						var activeunits = [];
						for (let i in this.$store.state.genData) {
							if (this.$store.state.genData[i].AGC) {
								activeunits.push(this.$store.state.genData[i]);
							}
						}
						if (activeunits.length > 0) {
							this.dispatchAGC(activeunits);
						}
					}
				}
			}, 3000);
		},
		dispatchAGC(units) {
			if (units.length > 1) {
				// let sorted_units = _.sortBy(units, 'MarginalCost');
				let sorted_units;
				if (this.$store.state.ACE > 0) {
					sorted_units = _.orderBy(units, ['MarginalCost'], ['asc']);
				} else {
					sorted_units = _.orderBy(units, ['MarginalCost'], ['desc']);
				}
				for (let i in sorted_units) {
					if (
						sorted_units[i].MWSetpoint < sorted_units[i].MWMax &&
						this.$store.state.ACE > 0
					) {
						this.updateSingleAGC(sorted_units[i]);
						break;
					} else if (
						sorted_units[i].MWSetpoint > sorted_units[i].MWMin &&
						this.$store.state.ACE < 0
					) {
						this.updateSingleAGC(sorted_units[i]);
						break;
					}
				}
			} else {
				this.updateSingleAGC(units[0]);
			}
		},
		updateSingleAGC(unit) {
			let new_setpoint, command;
			new_setpoint = Math.min(
				unit.MWMax,
				Math.max(unit.MW + this.$store.state.ACE, 0)
			).toFixed(2);
			if (new_setpoint != unit.MWSetpoint) {
				command = 'Set Power ' + new_setpoint + ' MW';
				this.$store.commit('setMessage', [
					'Gen',
					unit.key + ',' + unit.id,
					unit.key + '#' + unit.id,
					command
				]);
				this.$store.commit('setPublish');
				this.$store.commit('addReportUser', {
					time: this.$store.state.currentTime,
					event: ['AGC', unit.key + ',' + unit.id, command]
				});
			}
		}
	},
	created() {
		this.updateAGC();
	},
	beforeDestroy() {
		clearInterval(this.Interval);
	}
};
</script>

