<template>
<div>
  <!-- <v-card v-if="showGraph">
    <graph :id="name" :data="subTitle"></graph>
  </v-card> -->
  <v-card @mouseover="disable = false" @mouseout="disable = true">
    <v-card-text class="pa-0 ma-0">
      <v-container class="pa-0 ma-0">
        <v-layout row wrap>
          <v-flex :class=containerStyle>
            <graph v-if="showGraph" :visible="showGraph" :id="name" :data="subTitle"></graph>
            <div v-else class="layout column ma-0 justify-center align-center">
              <!-- <v-icon size="24px" :color="color">{{icon}}</v-icon> -->
			        <img :src="img" />
            </div>
          </v-flex>
          <v-flex white--text :class="color">
              <v-layout row wrap>
                  <v-flex sm12 xs12>
                      <div class="text-sm-center pt-3">
                        <div class="caption">{{ title }}</div>
                        <span class="headline" dark>{{ subTitle }}</span>
                    </div>
                  </v-flex>
                  <v-flex sm12 xs12 class="pa-0 ma-0">
                     <v-layout align-end justify-end>
                         <v-btn icon depressed :disabled='disable' @click="showGraph = !showGraph">
                            <v-icon dark>mdi-chart-line-variant</v-icon>
                    </v-btn>
                     </v-layout>
                  </v-flex>
              </v-layout>
          </v-flex>
          <!-- <div class="sm6 xs6 flex text-sm-center py-3 white--text" :class="color">
            <div class="caption">{{ title }}</div>
            <span class="headline">{{ subTitle }}</span>
            <div class="text-sm-right py-0"> -->
                <!-- <v-spacer></v-spacer> -->
                <!-- <v-btn icon>
                    <v-icon dark>mdi-chart-line-variant</v-icon>
                </v-btn>
            </div>
          </div> -->
        </v-layout>
      </v-container>
    </v-card-text>
  </v-card>
</div>
</template>

<style>
.vis-panel {
	box-sizing: content-box;
}
</style>

<script>
import graph from './graph';

export default {
	props: {
		icon: String,
		title: String,
		subTitle: [String, Number],
		color: String,
		name: String,
		img: String
	},
	data() {
		return {
			disable: true,
			showGraph: false,
			containerStyle: 'sm6 xs6'
		};
	},
	mounted() {
		// this.visTest();
	},
	watch: {
		showGraph: function() {
			if (this.showGraph) {
				this.containerStyle = 'sm12 xs12';
			} else {
				this.containerStyle = 'sm6 xs6';
			}
		}
	},
	components: {
		graph
	}
};
</script>
