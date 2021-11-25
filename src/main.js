import Vue from 'vue';
import App from './App.vue';
import router from './router';
import store from './store';
import Vuetify from 'vuetify';
import './registerServiceWorker';
import 'vuetify/dist/vuetify.min.css';
import '@mdi/font/css/materialdesignicons.css'
import 'material-design-icons-iconfont/dist/material-design-icons.css'
import ElementUI from 'element-ui';
import 'element-theme-dark';
// import 'element-ui/lib/theme-chalk/index.css';
import 'izitoast/dist/css/iziToast.css';
// import 'vue-status-indicator/styles.css'
import StatusIndicator from 'vue-status-indicator'
// import VueIntro from 'vue-introjs';

// import L from 'leaflet'
// import 'leaflet/dist/leaflet.css'
// import '@supermap/iclient-leaflet'

const opts = {
	icons: {
		iconfont: 'mdi'
	},
	theme: {dark: true},
	options: {
		themeVariations: ['primary', 'secondary', 'accent'],
		extra: {
			mainToolbar: {
				color: 'primary'
			},
			sideToolbar: {},
			sideNav: 'primary',
			mainNav: 'primary lighten-1',
			bodyBg: ''
		}
	}
}

// Vue.use(L)
// Vue.component('v-chart', ECharts)
Vue.use(ElementUI);
Vue.use(Vuetify);
Vue.use(StatusIndicator);
// Vue.use(VueIntro);


new Vue({
	router,
	store,
	vuetify: new Vuetify(opts),
	render: h => h(App),
	components: { App },
	template: '<App/>'
}).$mount('#app');
