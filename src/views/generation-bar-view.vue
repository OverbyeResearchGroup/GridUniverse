<template>
  <div>
    <barPlot></barPlot>
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
import barPlot from '@/components/barPlot'

export default {
  name: 'vis',
  components: {
    barPlot
  },
}
</script>