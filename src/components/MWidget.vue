<template>
  <div id="v-widget">
    <v-card>
      <v-app-bar
        color="transparent"
        flat
        dense
        v-if="enableHeader"
      >
        <v-toolbar-title>
          <h4>{{title}}</h4>
        </v-toolbar-title>
        <v-spacer></v-spacer>
        <slot name="widget-header-action"></slot>
        <v-btn
          icon
          @click="restore"
        >
          <v-icon>restore</v-icon>
        </v-btn>
      </v-app-bar>
      <v-divider v-if="enableHeader"></v-divider>
      <slot name="widget-content"></slot>
    </v-card>
  </div>
</template>

<style scoped>
.theme--dark.v-card {
  backdrop-filter: blur(12px) saturate(100%);
  -webkit-backdrop-filter: blur(12px) saturate(100%);
  background-color: rgba(17, 25, 40, 0.7);
}
</style>

<script>
export default {
	name: 'm-widget',
	props: {
		title: {
			type: String
		},
		enableHeader: {
			type: Boolean,
			default: true
		},
		contentBg: {
			type: String,
			default: 'white'
		}
	},

	data() {
		return {};
	},
	computed: {},
	methods: {
		restore() {
			this.$emit('clicked');
		}
	}
};
</script>
