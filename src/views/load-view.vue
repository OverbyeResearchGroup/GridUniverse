<template>
	<div>
		<v-layout row class="align-center layout px-4 pt-4 app--page-header">
			<div class="page-header-left">
				<h3 class="pr-3">Load</h3>
			</div>
			<v-icon larg>mdi-lightbulb</v-icon>
			<v-spacer></v-spacer>
			<userInfo></userInfo>
		</v-layout>
		<v-container grid-list-xl text-xs-center fluid>
			<v-layout row wrap>
				<v-flex lg8 sm12 xs12>
					<!-- <v-widget title="Realtime Data" content-bg="white">
						<div slot="widget-content"> -->
					<loadtable title="Realtime Data"></loadtable>
					<!-- </div>
					</v-widget> -->
				</v-flex>
				<v-flex lg4 sm12 xs12>
					<v-layout row wrap>
						<v-flex lg12 sm12 xs12>
							<v-flex lg12 sm12 xs12>
								<MapWidget title="Location Assist (Load)" focus='Load'></MapWidget>
							</v-flex>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<v-widget title="Tool2" content-bg="dark">
								<div slot="widget-content" class='cardiv'>
									<v-card dark color="light-blue">
										<v-card-text class="px-0">Tool2</v-card-text>
									</v-card>
								</div>
							</v-widget>
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
import loadtable from '@/components/LoadTable';
import VWidget from '@/components/VWidget';
import MapWidget from '@/components/MapWidget'
import userInfo from "@/components/userInfo";

export default {
	name: 'generator',
	components: {
		loadtable,
		VWidget,
		MapWidget,
		userInfo
	}
};
</script>
