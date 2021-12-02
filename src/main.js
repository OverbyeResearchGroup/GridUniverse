import Vue from 'vue';
import App from './App.vue';
import router from './router';
import store from './store';
import Vuetify from 'vuetify/lib';
import './registerServiceWorker';
import 'vuetify/dist/vuetify.min.css';
import 'material-design-icons-iconfont/dist/material-design-icons.css'
import 'izitoast/dist/css/iziToast.css';
import StatusIndicator from 'vue-status-indicator'


const opts = {
	icons: {
		iconfont: 'md',
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

Vue.use(Vuetify);
Vue.use(StatusIndicator);
// Vue.use(Tabs);
// Vue.use(TabPane);


new Vue({
    router,
    store,
    vuetify: new Vuetify(opts),
    render: h => h(App),
    components: { App },
    template: '<App/>'
}).$mount('#app');
