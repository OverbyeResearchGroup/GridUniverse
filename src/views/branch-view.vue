<template>
	<div>
		<v-layout row class="align-center layout px-4 pt-4 app--page-header">
			<div class="page-header-left">
				<h3 class="pr-3">Branch</h3>
			</div>
			<v-icon larg>mdi-currency-usd</v-icon>
			<v-spacer></v-spacer>
			<userInfo></userInfo>
		</v-layout>
		<v-container grid-list-xl text-xs-center fluid>
			<v-layout row wrap>
				<v-flex lg8 sm12 xs12>
					<branchtable title="Realtime Data"></branchtable>
				</v-flex>
				<v-flex lg4 sm12 xs12>
					<v-layout row wrap>
						<v-flex lg12 sm12 xs12>
							<MapWidget title="Location Assist"></MapWidget>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<v-widget title="GMD" content-bg="dark">
								<div slot="widget-header-action">
									<v-switch class="mt-3" v-model="GMDSwitch"></v-switch>
								</div>
								<div slot="widget-content">
									<v-card flat color="transparent">
										<v-card-title>Johnsonville - Nashville</v-card-title>
										<v-subheader>{{lapse}}</v-subheader>
										<v-card-text>
											<v-layout row>
												<v-flex sm9>
													<v-slider v-model="slider" :max="max" :min="min"></v-slider>
												</v-flex>
												<v-flex sm3>
													<v-text-field v-model="slider" suffix="s" class="mt-0" hide-details single-line type="number"></v-text-field>
												</v-flex>
											</v-layout>
										</v-card-text>
									</v-card>
								</div>
							</v-widget>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<bustable title="Violating Buses"></bustable>
						</v-flex>
					</v-layout>
				</v-flex>
			</v-layout>
		</v-container>
	</div>

</template>

<style>
/* .container {
	max-width: 100vw;
	padding: 0px;
	margin: 5px;
} */
</style>

<script>
import branchtable from '@/components/BranchTable';
import bustable from '@/components/RiskBusTable';
import VWidget from '@/components/VWidget';
import MapWidget from '@/components/MapWidget';
import userInfo from "@/components/userInfo";
import { mapGetters, mapState } from 'vuex';

export default {
	name: 'branch',
	data(){
		return {
			min: 0,
			max: 250,
			slider: this.$store.state.slider,
			triggered: false,
			GMDSwitch: false
		}
	},
	components: {
		branchtable,
		VWidget,
		bustable,
		MapWidget,
		userInfo
	},
	computed: {
		...mapState(['lapse']),
		...mapGetters({
			timelapse: 'getLapse'
		})
	},
	watch: {
		timelapse: function() {
			if(this.$store.state.lapse < +this.slider && this.triggered) {
				this.triggered = false;
			};
			if(this.$store.state.lapse >= +this.slider && !this.triggered && this.GMDSwitch) {
				this.$store.commit('setMessage', [
						'Branch',
						'144,101,1',
						'Johnsonville - Nashville',
						'OPEN BOTH'
					]);
					this.$store.commit('setPublish');
				this.triggered = true;
			};
			// this.chart.setOption({series: [{
			// 	id: 'vbus',
			// 	name: 'vbus',
			// 	data: this.$store.state.violatedBuses
			// }]})
		}
	}
};
</script>
