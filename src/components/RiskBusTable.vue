<template>
	<v-card>
		<v-toolbar card dense color="transparent">
			<v-toolbar-title>
				<h4> {{title}} </h4>
			</v-toolbar-title>
			<v-spacer></v-spacer>
			<v-btn icon>
				<v-icon>more_vert</v-icon>
			</v-btn>
		</v-toolbar>
		<v-divider></v-divider>
		<v-card-text class="pa-0">
			<template>
				<v-data-table :headers="headers" :items="riskBuses" :rows-per-page-items="defaultRowItems" v-model="selected" select-all disable-initial-sort item-key="name">
				<!-- <v-data-table :headers="headers" :items="formatRiskBuses" v-model="selected" hide-actions select-all item-key="name"> -->
					<template slot="headerCell" slot-scope="props">
						<v-tooltip bottom>
							<span slot="activator">
								{{ props.header.text }}
							</span>
							<span>
								{{ props.header.text }}
							</span>
						</v-tooltip>
					</template>
					<template v-slot:items="props">
						<tr :active="props.selected" @click="props.selected = !props.selected">
							<td>
								<v-checkbox :input-value="props.selected" primary hide-details></v-checkbox>
							</td>
							<td class="text-xs-left">{{ props.item.name }}</td>
							<td class="text-xs-right">
								<v-chip label small :color="getColorByValue(props.item.Vpu)" text-color="white">{{ props.item.Vpu }}</v-chip>
							</td>
							<td class="text-xs-right">{{ props.item.Max }}</td>
							<td class="text-xs-right">{{ props.item.Min }}</td>
						</tr>
					</template>
					<template slot="no-data">
						<v-card dark color="success">
							<v-card-text>
								Currently no violating buses!
							</v-card-text>
						</v-card>
					</template>
				</v-data-table>
			</template>
			<v-divider></v-divider>
		</v-card-text>
	</v-card>
</template>

<style>
/* table.v-table tbody td:first-child,
table.v-table tbody td:not(:first-child),
table.v-table tbody th:first-child,
table.v-table tbody th:not(:first-child),
table.v-table thead td:first-child,
table.v-table thead td:not(:first-child),
table.v-table thead th:first-child,
table.v-table thead th:not(:first-child) {
	padding: 0 10px;
}
.tablediv {
	z-index: 0;
	height: 300px;
	width: 100%;
} */
</style>

<script>
import {mapState} from 'vuex'

export default {
	props: {
		data: Array,
		title: String
	},
	data() {
		return {
			headers: [
				{
					text: 'Bus',
					align: 'left',
					// sortable: false,
					value: 'name'
				},
				{ text: 'Vpu', value: 'Vpu' },
				{ text: 'Max', value: 'Max' },
				{ text: 'Min', value: 'Min' }
			],
			buses: [],
			formatRiskBuses: [],
			anchor: 0,
			dataLength: 0,
			arrLength: 0,
			violateBuses: [],
			selected: [],
			defaultRowItems: [
				10,
				30,
				{ text: '$vuetify.dataIterator.rowsPerPageAll', value: -1 }
			]
		};
	},
	computed: {
		...mapState(['riskBuses'])
	},
	methods: {
		initMonitor() {
			var arrlength;
			var keyCaseArr;
			var valueFieldArr;

			for (let ele in this.$store.state.fieldstore) {
				arrlength = this.$store.state.fieldstore[ele]['Field'].length;
				keyCaseArr = Object.keys(this.$store.state.casedetail.content[ele]);
				valueFieldArr = Object.values(this.$store.state.fieldstore[ele]);
				if (ele != 'Bus') {
					this.anchor += arrlength * keyCaseArr.length;
				} else {
					this.dataLength = arrlength * keyCaseArr.length;
					this.statusIndex = valueFieldArr.indexOf('Status');
					this.mwfromIndex = valueFieldArr.indexOf('MWFrom');
					this.arrLength = arrlength;
					break;
				}
			}
			this.statusArray = Array(keyCaseArr.length).fill(1);
		},
		onMonitor() {
			const temp = this.$store.getters.rawData;
			const busData = temp.slice(this.anchor, this.anchor + this.dataLength);
			let i = 0;
			var key;
			for (let [key, val] of Object.entries(
				this.$store.state.casedetail.content.Bus
			)) {
				if (
					busData[i] <= val['Single.Max Limit'] ||
					busData[i] >= val['Single.Min Limit']
				) {
					// this.highRiskLines[key] = val;
					this.violateBuses[key] = {};
					this.violateBuses[key]['name'] = key;
					this.violateBuses[key]['Vpu'] = busData[i];
					this.violateBuses[key]['Max'] = val['Single.Min Limit'];
					this.violateBuses[key]['Min'] = val['Single.Max Limit'];
					this.violateBuses[key]['SubID'] = val['Int.Sub Number'];
					this.violateBuses[key]['value'] = [
						this.$store.state.casedetail.content.Substation[
							val['Int.Sub Number'].toString()
						]['Double.Longitude'],
						this.$store.state.casedetail.content.Substation[
							val['Int.Sub Number'].toString()
						]['Double.Latitude']
					];
				} else if (key in this.violateBuses) {
					delete this.violateBuses[key];
				}
				i += this.arrLength;
			}
			this.formatRiskBuses = Object.values(this.violateBuses);
		},
		getColorByValue(value) {
			var temp;
			if (value >= 1.1) {
				temp = 'red';
			} else if (value < 0.9) {
				temp = 'blue';
			}
			return temp;
		},
		toggleAll() {
			if (this.selected.length) this.selected = [];
			else this.selected = this.desserts.slice();
		}
	},
	created() {
		// this.initTable();
	},
	mounted() {
		// this.initMonitor();
		// setInterval(() => {
		// 	this.onMonitor();
		// }, 1000);
	},
	watch: {
		selected: function(newval,oldval) {
			// console.log(newval);
			this.$store.commit('updateVBuses', newval);
		},
		data: function(newval, oldval) {
			if (this.data.length>0) {
				this.$store.commit('triggerAlarm', 'Bus')
			} else {
				this.$store.commit('dismissAlarm', 'Bus')
			}
		}
	}
};
</script>
