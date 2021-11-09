<template>
  <div class="page-header-right">
    <h4 class="pr-1">
      Hi {{username}}
      <status-indicator :negative="alarm" :positive="!alarm" pulse></status-indicator>
    </h4>
  </div>
</template>

<script>
import { mapState } from "vuex";

export default {
  computed: {
    ...mapState(["username", "alarm"])
  }
};
</script>

<style>
</style>