<template>
	<div>
		<chart></chart>
	</div>

</template>

<style>
/* .chart {
	height: 800px;
	width: 800px;
} */
</style>

<script>
// @ is an alias to /src
// import HelloWorld from '@/components/HelloWorld';
// import ApiClient from '@/components/ApiClient';
// import mapchart from '@/components/map';
import chart from '@/components/puremap';

export default {
	name: 'home',
	components: {
		// HelloWorld,
		// ApiClient,
		// mapchart,
		chart
	}
};
</script>
