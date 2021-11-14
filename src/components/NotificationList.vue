<template>
	<v-card class="elevation-0">
		<v-app-bar flat dense color="transparent">
			<v-toolbar-title>
				<h4>Notification</h4>
			</v-toolbar-title>
		</v-app-bar>
		<v-divider></v-divider>
		<v-card-text class="pa-0">
			<v-list three-line dense class="pa-0">
				<template v-for="(item, index) in $store.state.badgelist">
					<v-subheader v-if="item.header" :key="item.header">{{ item.header }}</v-subheader>
					<v-list-item v-else :key="item.time" @click="handleClick">
						<v-list-item-avatar :color="item.color">
							<v-icon dark>{{item.icon}}</v-icon>
						</v-list-item-avatar>
						<v-list-item-content class="list_tile_sub_title">
							<v-list-item-subtitle v-html="item.title"></v-list-item-subtitle>
						</v-list-item-content>
						<v-list-item-action class="caption">
							{{timeAgo.format(item.time, {gradation: canonical})}}
						</v-list-item-action>
					</v-list-item>
					<v-divider :key="index"></v-divider>
				</template>
			</v-list>
			<v-divider></v-divider>
			<v-btn block text class="ma-0" @click="cleanclear">Clear</v-btn>
			<v-divider></v-divider>
			<v-btn block text class="ma-0" @click="toggleMute"> {{mute}} </v-btn>
			<v-divider></v-divider>
			<v-btn block text class="ma-0" @click="demo">Demo</v-btn>
		</v-card-text>
	</v-card>
</template>

<style scoped>
.list_tile_sub_title {
	max-width: 400px;
}
</style>

<script>
import TimeAgo from 'javascript-time-ago';
import en from 'javascript-time-ago/locale/en';
import { canonical } from 'javascript-time-ago/gradation';

TimeAgo.locale(en);

export default {
	data: function() {
		return {
			// items: this.$store.state.badgelist
			timeAgo: new TimeAgo('en-US'),
			canonical: canonical,
			mute: 'mute'
		};
	},
	methods: {
		handleClick: e => {
			console.log(e);
		},
		cleanclear: function() {
			console.log('Yeah');
			this.$store.commit('resetbadgelist');
		},
		toggleMute(){
			this.$store.commit('toggleMute');
			if(this.mute === 'mute') {
				this.mute = 'unmute'
			} else if (this.mute === 'unmute') {
				this.mute = 'mute'
			}
		},
		demo(){
			this.$emit('changeHeight', '0');
		}
	},
	mounted() {

	}
};
</script>
