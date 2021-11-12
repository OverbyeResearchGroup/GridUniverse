<template>
  <v-container
    grid-list-md
    text-xs-center
  >
    <v-layout
      row
      wrap
    >
      <v-flex xs12>
        <div id="vis"></div>
      </v-flex>
      <!-- <v-flex lg2 xs12>
        <v-btn @click="change">test</v-btn>
      </v-flex> -->
    </v-layout>
  </v-container>
</template>

<script>
// import * as SandDance from "@msrvida/sanddance";
// SandDance.use(window.vega, window.deck, window.deck, window.luma);
import * as deck from "@deck.gl/core";
import * as layers from "@deck.gl/layers";
import * as luma from "@luma.gl/core";
import * as vega from "vega";
import SandDanceVue, { SandDance } from "@msrvida/sanddance-vue";

SandDance.use(vega, deck, layers, luma);

var scatterplotTest = {};
var data, insight;
var buses;

export default {
  data() {
    return {
      Interval: "",
      anchor: 0,
      loadDataLength: 0,
      loadArray: []
    };
  },
  created() {
    this.preProcess();
  },
  mounted() {
    this.initTable();
    this.init();
    this.Interval = setInterval(() => {
      this.change();
    }, 5000);
  },
  methods: {
    init() {
      scatterplotTest.viewer = new SandDance.Viewer(
        document.getElementById("vis"),
        {
          hideSidebarControls: true
        }
      );
      scatterplotTest.viewer.options.colors.axisLine = [255, 255, 255, 255];
      scatterplotTest.viewer.options.colors.axisText = [255, 255, 255, 255];
      scatterplotTest.viewer.options.colors.hoveredCube = [255, 255, 255, 255];
      // scatterplotTest.viewer.vegaSpec.autosize = "pad";
      // console.log(scatterplotTest.viewer.vegaSpec)
      var glDiv = scatterplotTest.viewer.presenter.getElement(
        SandDance.VegaDeckGl.PresenterElement.gl
      );
      insight = {
        colorBin: "quantize",
        columns: {
          color: "Vpu",
          sort: "FreqHz",
          uid: "Id",
          x: "Longitude",
          y: "Latitude",
          z: "LoadMW",
          size: "LoadMW",
          group: "GenMW"
        },
        facets: null, //null,
        hideLegend: false,
        signaValues: null,
        view: "2d",
        scheme: "redblue", //redblue
        size: {
          height: glDiv.offsetHeight,
          width: glDiv.offsetWidth
        },
        chart: "scatterplot"
      };

      scatterplotTest.viewer.render(insight, buses);
    },
    change() {
      this.updateTable();
      if (insight["chart"] == "barchartV") {
        insight["chart"] = "density";
      } else if (insight["chart"] == "scatterplot") {
        insight["chart"] = "barchartV";
      } else if (insight["chart"] == "density") {
        insight["chart"] = "scatterplot";
      }
      scatterplotTest.viewer.render(insight, buses);
      //   scatterplotTest.viewer.colorContexts[0].legend.rows['6'].label = "≥ 1.05";
      console.log(scatterplotTest.viewer);
    },
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        if (ele != "Bus") {
          anchor += arrlength * keyarr.length;
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.loadDataLength = arrlength;
    },
    initTable() {
      let temp = [];
      let count = 0;
      let subID;
      for (let i in this.$store.state.areadetail.content.Bus) {
        if (
          this.$store.state.areadetail.content.Bus[i]["Int.Area Number"] ==
          +this.$store.state.area
        ) {
          this.loadArray.push(count);
          subID = this.$store.state.areadetail.content.Bus[i]["Int.Sub Number"];
          temp.push({
            Id: i,
            "Symbol(vega_id)": i,
            Latitude: this.$store.state.areadetail.content.Substation[
              subID.toString()
            ]["Double.Latitude"],
            Longitude: this.$store.state.areadetail.content.Substation[
              subID.toString()
            ]["Double.Longitude"],
            name:
              this.$store.state.areadetail.content.Bus[i.split(",")[0]][
                "String.Name"
              ] +
              " " +
              i.split(",")[1],
            Status: 1,
            Vpu: 1,
            FreqHz: 60,
            GenMW: 0,
            GenMvar: 0,
            LoadMW: 0
          });
        }
        count++;
      }
      buses = temp;
      if (buses.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      try {
        const temp = this.$store.state.parsedData;
        for (let i in buses) {
          buses[i].Vpu =
            temp[this.anchor + this.loadArray[i] * this.loadDataLength];
          buses[i].Vangle =
            temp[this.anchor + 1 + this.loadArray[i] * this.loadDataLength];
          buses[i].FreqHz =
            temp[this.anchor + 2 + this.loadArray[i] * this.loadDataLength];
          buses[i].Status =
            temp[this.anchor + 3 + this.loadArray[i] * this.loadDataLength];
          buses[i].GenMW =
            temp[this.anchor + 4 + this.loadArray[i] * this.loadDataLength];
          buses[i].GenMvar =
            temp[this.anchor + 5 + this.loadArray[i] * this.loadDataLength];
          buses[i].LoadMW =
            temp[this.anchor + 6 + this.loadArray[i] * this.loadDataLength];
        }
      } catch (e) {
        console.log("The raw data are not ready");
      }
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  }
};
</script>

<style>
.deckgl-overlay .label {
  color: white;
}
.sanddance-gl {
  border: 1px solid #ccc;
  float: left;
  height: 1080px;
  width: 90%;
  margin-right: 1em;
}
/* .sanddance-panel {
  display: none;
} */
.sanddance-tooltip table {
  background: #333;
  color: #fff;
  font-size: smaller;
  margin: 1em;
  min-width: 16em;
  padding: 6px;
  position: absolute;
}

.sanddance-tooltip td {
  text-align: left;
  vertical-align: top;
  width: 75%;
}

.sanddance-tooltip td:first-child {
  width: 25%;
}
</style>
