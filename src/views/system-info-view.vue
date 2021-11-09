<template>
  <v-container fill-height fluid grid-list-xl>
    <v-layout wrap>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 255, 255, 0.3)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-clock-outline</v-icon>System Date and Time
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 255, 255, 0.3)" height="85" raised>
          <div
            class="display-3 font-weight-bold"
            align="center"
          >November 29, 2018 at {{ clockTime }}</div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 255, 0, 0.3)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-current-ac</v-icon>Area Frequency
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 255, 0, 0.3)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">{{ areaData[6] }} Hz</div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 0, 255, 0.6)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-battery</v-icon>Area Generation
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 0, 255, 0.6)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">{{ areaData[0] }} MW</div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 255, 0, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-flash</v-icon>Area Load
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 255, 0, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">{{ areaData[2] }} MW</div>
        </v-card>
      </v-flex>
      <!-- <v-flex lg6 xs12>
        <v-card color="rgb(255, 0, 0, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-currency-usd-off</v-icon>Area Losses
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 0, 0, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">{{ areaData[8] }} MW</div>
        </v-card>
      </v-flex> -->
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 255, 127, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-cash-usd-outline</v-icon>Total Cost
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(0, 255, 127, 0.8)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">${{ totalCost }}</div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 127, 80)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">
            <v-icon size="65">mdi-send</v-icon>Export Power
          </div>
        </v-card>
      </v-flex>
      <v-flex lg6 xs12>
        <v-card color="rgb(255, 127, 80)" height="85" raised>
          <div class="display-3 font-weight-bold" align="center">{{ areaData[5] }} MW</div>
        </v-card>
      </v-flex>
      <v-flex lg12>
        <barPlot></barPlot>
      </v-flex>
    </v-layout>
  </v-container>
</template>

<script>
import barPlot from "@/components/barPlot";
import {mapState} from 'vuex'

export default {
  components: {
    barPlot
  },
  computed: {
    ...mapState(["clockTime", "areaData", "totalCost"])
  },
};
</script>
