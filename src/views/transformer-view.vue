<template>
	<div>
		<v-layout row class="align-center layout px-4 pt-4 app--page-header">
			<div class="page-header-left">
				<h3 class="pr-3">Transformer</h3>
			</div>
			<v-icon larg>view_carousel</v-icon>
			<v-spacer></v-spacer>
			<userInfo></userInfo>
		</v-layout>
		<v-container grid-list-xl text-xs-center fluid>
			<v-layout row wrap>
				<v-flex lg5 sm5 xs12>
					<!-- <v-widget title="Realtime Data" content-bg="white">
						<div slot="widget-content"> -->
					<transformertable title="Realtime Data"></transformertable>
					<!-- </div>
					</v-widget> -->
				</v-flex>
				<v-flex lg7 sm7 xs12>
					<v-layout row wrap>
						<v-flex lg12 sm12 xs12>
							<MapWidget title="Location Assist" height="400px" focus="Transformer"></MapWidget>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<v-widget title="GMD" content-bg="dark">
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
import transformertable from '@/components/TransformerTable';
import VWidget from '@/components/VWidget';
import MapWidget from '@/components/MapWidget';
import userInfo from "@/components/userInfo";

export default {
	name: 'generator',
	components: {
		transformertable,
		VWidget,
		MapWidget,
		userInfo
	}
};
</script>
