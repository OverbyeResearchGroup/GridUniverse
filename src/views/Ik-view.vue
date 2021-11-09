<template>
	<div>
		<v-layout row class="align-center layout px-4 pt-4 app--page-header">
			<div class="page-header-left">
				<h3 class="pr-3">Under Development</h3>
			</div>
			<v-breadcrumbs divider="-">
				<v-breadcrumbs-item>
					<v-icon larg>mdi-lightbulb</v-icon>
				</v-breadcrumbs-item>
			</v-breadcrumbs>
			<v-spacer></v-spacer>
			<userInfo></userInfo>
		</v-layout>
		<v-container grid-list-xl text-xs-center fluid>
			<v-layout row wrap>
				<v-flex lg8 sm12 xs12>
					<v-widget title="Cluster Map" content-bg="white">
						<div slot="widget-content">
                            <IkMap ref="map"></IkMap>
						</div>
					</v-widget>
				</v-flex>
				<v-flex lg4 sm12 xs12>
					<v-layout row wrap>
						<v-flex lg12 sm12 xs12>
							<v-widget title="Settings" content-bg="white">
								<div slot="widget-content" class='cardiv'>
									<v-layout row wrap>
                                        <v-flex lg10 sm10 xs10>
                                            <v-text-field
                                                label="Number of Cluster" v-model="cluster"
                                            ></v-text-field>
                                        </v-flex>
                                        <v-flex lg2 sm2 xs2>
                                            <div class="text-xs-center">
                                                <div>
                                                    <v-btn color="primary" fab small dark @click="draw">
                                                        <v-icon>edit</v-icon>
                                                    </v-btn>
                                                </div>
                                            </div>
                                        </v-flex>
                                        <v-flex xs12 v-show="inProgress">
                                            <v-progress-linear :indeterminate="true"></v-progress-linear>
                                        </v-flex>
									</v-layout>
								</div>
							</v-widget>
						</v-flex>
						<v-flex lg12 sm12 xs12>
							<v-widget title="Tool2" content-bg="white">
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
import IkMap from '@/components/IkMap';
import VWidget from '@/components/VWidget';
import userInfo from "@/components/userInfo";

export default {
	name: 'generator',
	data() {
		return {
			cluster: null,
			inProgress: false
		};
	},
	components: {
		IkMap,
		VWidget,
		userInfo
	},
	methods: {
		draw() {
			this.$nextTick(() => {
                // this.inProgress = true;
                this.$refs.map.redraw(this.cluster);
			});
		}
	}
};
</script>
