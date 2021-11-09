<template>
  <div>
      <div v-show="status==='running'">
        <marquee-text :repeat="30" :duration="10">
          <span
            style="background-color: #80e27e; padding-right:30px; box-sizing:border-box;"
          >RUNNING</span>
        </marquee-text>
      </div>
      <div v-show="status==='paused'">
        <marquee-text :repeat="30">
          <span style="background-color: #ffff8b; padding-right:30px; box-sizing:border-box;">PAUSED</span>
        </marquee-text>
      </div>
      <div v-show="status==='initialized'">
        <marquee-text :repeat="30">
          <span
            style="background-color: #ffff8b; padding-right:30px; box-sizing:border-box;"
          >INITIALIZED</span>
        </marquee-text>
      </div>
      <div v-show="status==='aborted'">
        <marquee-text :repeat="30">
          <span
            style="background-color: #be9c91; padding-right:30px; box-sizing:border-box;"
          >ABORTED</span>
        </marquee-text>
      </div>
      <div v-show="status==='finished'">
        <marquee-text :repeat="30">
          <span
            style="background-color: #ff5f52; padding-right:30px; box-sizing:border-box;"
          >FINISHED</span>
        </marquee-text>
      </div>
      <div v-show="status==='offline'">
        <marquee-text :repeat="30" :duration="30">
          <span
            style="background-color: #8e8e8e; padding-right:30px; box-sizing:border-box;"
          >DISCONNECTED</span>
        </marquee-text>
      </div>
      <div v-show="status==='error'">
        <marquee-text :repeat="30" :duration="30">
          <span
            style="background-color: #ff6f60; padding-right:30px; box-sizing:border-box;"
          >DS needs to be reset manually</span>
        </marquee-text>
      </div>
    </div>
</template>

<script>
// import { mapGetters } from 'vuex';
import MarqueeText from "vue-marquee-text-component";
import {mapState} from 'vuex'

export default {
  data() {
    return {
      content: "offline"
    };
  },
  computed: {
    ...mapState(['status'])
  },
  mounted() {},
  components: {
    MarqueeText
  }
};
</script>

<style>
</style>

