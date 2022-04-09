<template>
  <div>
    <v-layout row class="align-center layout px-4 pt-4 app--page-header">
      <div class="page-header-left">
        <h3 class="pr-3">Generator</h3>
      </div>
      <v-icon larg>mdi-google-glass</v-icon>
      <v-spacer></v-spacer>
      <userInfo></userInfo>
    </v-layout>
    <v-container grid-list-xl text-xs-center fluid>
      <v-layout row wrap>
        <v-flex lg8 sm8 xs12>
          <v-layout row wrap>
            <v-flex lg6 sm6 xs6>
              <chartStatistic
                id="UTC"
                min="null"
                max="null"
                left="13%"
                title="Current Cost ($/h)"
                icon="attach_money"
                card-color="rgba(63, 81, 181, 0.55)"
                :chart-color="[color.indigo.lighten1]"
                :costData="unitTimeCost"
                type="line"
              ></chartStatistic>
            </v-flex>
            <v-flex lg6 sm6 xs6>
              <chartStatistic
                id="ATC"
                min="null"
                max="null"
                left="8%"
                :precision="1"
                title="Average Total Cost ($/MWh)"
                icon="attach_money"
                card-color="rgba(233, 30, 99, 0.55)"
                :chart-color="[color.pink.darken1, 'rgba(255,255,255,0.3)']"
                :costData="+($store.state.totalCost/$store.state.totalMWh).toFixed(2)"
                type="line"
              ></chartStatistic>
            </v-flex>
          </v-layout>
          <v-layout row wrap>
            <v-flex lg12 sm12 xs12>
              <!-- <v-widget title="Realtime Data" content-bg="white">
              <div slot="widget-content">-->
              <gentable title="Realtime Data"></gentable>
              <!-- </div>
              </v-widget>-->
            </v-flex>
          </v-layout>
        </v-flex>
        <v-flex lg4 sm4 xs12>
          <v-layout row wrap>
            <v-flex>
              <v-layout row wrap>
                <v-flex xs6 white--text>
                  <div class="text-sm-center card-primary">
                    <div class="title pt-4">Total Cost</div>
                    <span class="title" style="color:white">${{ totalCost }}</span>
                  </div>
                </v-flex>
                <v-flex xs6 white--text>
                  <v-tooltip top>
                    <template v-slot:activator="{ on }">
                      <div class="align-center text-sm-center card-green" v-on="on">
                        <div class="title pt-4">ACE</div>
                        <span class="title" style="color:white">{{ ACE.toFixed(2) }}MW</span>
                      </div>
                    </template>
                    <span>The instantaneous difference between a Balancing Authority's net actual and scheduled interchange</span>
                  </v-tooltip>
                </v-flex>
                <v-flex xs6 white--text>
                  <div class="align-center text-sm-center card-orange">
                    <div class="title pt-4">Total Generation</div>
                    <span class="title" style="color:white">{{ areaData[0] }}MW</span>
                  </div>
                </v-flex>
                <v-flex xs6 white--text>
                  <div class="align-center text-sm-center card-pink">
                    <div class="title pt-4">Total Load</div>
                    <span class="title" style="color:white">{{ areaData[2] }}MW</span>
                  </div>
                </v-flex>
              </v-layout>
            </v-flex>
            <v-flex lg12 sm12 xs12>
              <v-widget title="Power Import Schedule" content-bg="dark">
                <div slot="widget-content">
                  <!-- <v-container> -->
                  <v-radio-group v-model="schedule" :mandatory="false">
                    <v-radio label="0MW @ $0/MW" value="0@0"></v-radio>
                    <v-radio label="600MW @ $13/MW" value="600@13"></v-radio>
                    <v-radio label="800MW @ $18/MW" value="800@18"></v-radio>
                    <v-radio label="1200MW @ $19/MW" value="1200@19"></v-radio>
                    <v-radio label="1800MW @ $24/MW" value="1800@24"></v-radio>
                  </v-radio-group>
                  <p>ACE cost is $100/MW</p>
                  <!-- </v-container> -->
                </div>
              </v-widget>
            </v-flex>
            <v-flex xs12>
              <m-widget title="Load Forecast" content-bg="dark">
                <div slot="widget-content">
                  <loadForecast></loadForecast>
                </div>
              </m-widget>
            </v-flex>
            <v-flex lg12 sm12 xs12>
              <v-widget title="Area Generation Overview" content-bg="dark">
                <div slot="widget-content">
                  <pie :areatotal="areaData[0]"></pie>
                </div>
              </v-widget>
            </v-flex>
            <v-flex lg12 sm12 xs12>
              <MapWidget title="Location Assist (Gen)" focus="Gen"></MapWidget>
            </v-flex>
          </v-layout>
        </v-flex>
      </v-layout>
    </v-container>
  </div>
</template>

<style>
/* .container {
	max-width: 100vw;
	padding: 0px;
	margin: 5px;
} */
.cardiv {
  height: 300px;
  width: 100%;
}
.card-primary {
  height: 100px;
  backdrop-filter: blur(12px) saturate(100%);
  -webkit-backdrop-filter: blur(12px) saturate(100%);
  background-color: #37469b44;
  border-radius: 12px;
  border: 1px solid rgba(255, 255, 255, 0.125);
}
.card-green {
  height: 100px;
  backdrop-filter: blur(12px) saturate(100%);
  -webkit-backdrop-filter: blur(12px) saturate(100%);
  background-color: #4caf4f3b;
  border-radius: 12px;
  border: 1px solid rgba(255, 255, 255, 0.125);
}
.card-orange {
  height: 100px;
  backdrop-filter: blur(12px) saturate(100%);
  -webkit-backdrop-filter: blur(12px) saturate(100%);
  background-color: #a5650444;
  border-radius: 12px;
  border: 1px solid rgba(255, 255, 255, 0.125);
}
.card-pink {
  height: 100px;
  backdrop-filter: blur(12px) saturate(100%);
  -webkit-backdrop-filter: blur(12px) saturate(100%);
  background-color: #92174038;
  border-radius: 12px;
  border: 1px solid rgba(255, 255, 255, 0.125);
}

</style>

<script>
// @ is an alias to /src
// import HelloWorld from '@/components/HelloWorld';
// import ApiClient from '@/components/ApiClient';
// import mapchart from '@/components/map';
import gentable from "@/components/GenTable";
import VWidget from "@/components/VWidget";
import MWidget from "@/components/MWidget";
import loadForecast from "@/components/loadForecast";
import chartStatistic from "@/components/chartStatistic2";
import Material from "vuetify/es5/util/colors";
import MapWidget from "@/components/MapWidget";
import pie from "@/components/pie";
import userInfo from "@/components/userInfo";
import { mapState } from "vuex";

export default {
  name: "generator",
  data() {
    return {
      color: Material,
      radios: this.$store.state.schedule
    };
  },
  components: {
    // HelloWorld,
    // ApiClient,
    // mapchart,
    gentable,
    VWidget,
    chartStatistic,
    MapWidget,
    pie,
    MWidget,
    loadForecast,
    userInfo
  },
  computed: {
    ...mapState(["totalCost", "ACE", "areaData", "unitTimeCost", "schedule"])
  },
  watch: {
    radios: function(newVal, oldVal) {
      this.$store.commit("setSchedule", newVal);
      this.$store.commit("addReportUser", {
        time: this.$store.state.currentTime,
        event: ["Schedule", newVal]
      });
    }
  }
};
</script>
