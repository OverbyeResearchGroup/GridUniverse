// App.vue

<template>
	<v-app dark>
		<Login></Login>
		<!-- <Spinner v-if="loading" name="pacman" color="#2243a5" class="loading" />
		<dashboard v-bind:style="styleDashboard"></dashboard> -->
	</v-app>
</template>

<script>
import Spinner from 'vue-spinkit';
import Login from './views/Login';
const dashboard = import('./components/Dashboard');
const loadingComponent = {
	render(h) {
		return <Spinner name="pacman" color="#2243a5" class="loading" />;
	}
};
// const loadingComponent = { template: `<h1>Loading...</h1>` }
// import dashboard from './components/Dashboard';

export default {
	data() {
		return {
			loading: true,
			styleDashboard: {
				position: 'absolute',
				filter: 'blur(5px)',
				width: '100%'
			}
		};
	},
	components: {
		Spinner: Spinner,
		Login,
		dashboard: () => ({
			component: dashboard,
			component: new Promise(resolve => {
				setTimeout(() => {
					resolve(dashboard);
				}, 3000);
			}),
			loading: loadingComponent,
			delay: 0
		})
	},
	mounted() {
		setTimeout(() => {
			this.loading = false;
		}, 3000);
		setTimeout(() => {
			this.styleDashboard = {
				position: 'absolute',
				width: '100%'
			};
		}, 3200);
	}
};
</script>

<style>
.anchorBL {
	display: none;
}
.loading {
	position: fixed;
	z-index: 999;
	height: 2em;
	width: 2em;
	overflow: show;
	margin: auto;
	top: 0;
	left: 0;
	bottom: 0;
	right: 0;
}
.circle {
	height: 10px;
	width: 10px;
	border-radius: 50%;
	display: inline-block;
}
.legend-background {
	background: rgba(0,0,0,0.5)
}
/* .dashboard {
	filter:blur(5px);
} */
</style>

