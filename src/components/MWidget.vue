<template>
  <div id="v-widget">
    <v-card>
      <v-toolbar
        color="transparent"
        flat
        dense
        card
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
      </v-toolbar>
      <v-divider v-if="enableHeader"></v-divider>
      <slot name="widget-content"></slot>
    </v-card>
  </div>
</template>

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
