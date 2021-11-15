<template>
  <v-card>
    <v-app-bar flat dense color="transparent">
      <v-toolbar-title>
        <h4>{{title}}</h4>
      </v-toolbar-title>
      <v-spacer></v-spacer>
      <v-btn icon>
        <v-icon>more_vert</v-icon>
      </v-btn>
    </v-app-bar>
    <v-divider></v-divider>
    <v-card-text class="pa-0">
      <template>
        <v-data-table
          class="fixed-header"
          :headers="headers"
          :items="Transformers"
          :items-per-page-options="defaultRowItems"
          v-model="selected"
          show-select
          item-key="name"
        >
          <template slot="headerCell" slot-scope="props">
            <!-- <v-tooltip bottom> -->
            <span slot="activator">{{ props.header.text }}</span>
            <!-- </v-tooltip> -->
          </template>
          <template slot="items" slot-scope="props">
            <tr :active="props.selected">
              <td>
                <v-checkbox
                  v-model="props.selected"
                  primary
                  hide-details
                  @click="props.selected = !props.selected"
                ></v-checkbox>
              </td>
              <td class="text-xs-left">{{ props.item.name }}</td>
              <td class="text-xs-left">{{ props.item.Phase }}</td>
              <td class="text-xs-right">{{ props.item.Tap }}</td>
              <td class="text-xs-right">{{ props.item.Temperature }}</td>
            </tr>
          </template>
          <!-- <template slot="expand" slot-scope="props">
				<v-card flat>
					<v-card-text>Peek-a-boo!</v-card-text>
				</v-card>
          </template>-->
        </v-data-table>
      </template>
      <v-divider></v-divider>
    </v-card-text>
  </v-card>
</template>

<style scoped>
table.v-table tbody td:first-child,
table.v-table tbody td:not(:first-child),
table.v-table tbody th:first-child,
table.v-table tbody th:not(:first-child),
table.v-table thead td:first-child,
table.v-table thead td:not(:first-child),
table.v-table thead th:first-child,
table.v-table thead th:not(:first-child) {
  padding: 0 10px;
}

.chip {
  width: 60px;
}
.fixed-header table {
  table-layout: fixed;
}

.fixed-header th {
  background-color: #fff; /* just for LIGHT THEME, change it to #474747 for DARK */
  position: sticky;
  top: 0;
  z-index: 10;
}

.fixed-header tr.datatable__progress th {
  top: 56px;
}

.fixed-header .table__overflow {
  overflow: auto;
  height: 100%;
}
</style>

<script>
export default {
  props: {
    title: String
  },
  data() {
    return {
      headers: [
        {
          text: "Transformer",
          align: "left",
          // sortable: false,
          value: "name",
          width: "15%"
        },
        { text: "Phase", align: "left", value: "Degree" },
        { text: "Tap", align: "left", value: "Ratio" },
        { text: "Temperature", value: "Fahrenheit" }
      ],
      Transformers: [],
      selected: [],
      anchor: 0,
      TransformerDataLength: 0,
      defaultRowItems: [
        15,
        30,
        { text: "$vuetify.dataIterator.rowsPerPageAll", value: -1 }
      ],
      TransformerArray: this.$store.state.areaHelper.Transformer.list,
      Interval: null
    };
  },
  methods: {
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        console.log(ele);
        if (ele != "Transformer") {
          anchor += arrlength * keyarr.length;
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.transformerDataLength = arrlength;
    },
    initTable() {
      let temp = [];
      this.anchor = this.$store.state.areaHelper.Transformer.anchor;
      this.TransformerDataLength = this.$store.state.areaHelper.Transformer.length;
      // let subID;
      for (let i in this.$store.state.areadetail.content.Transformer) {
        if (
          [
            this.$store.state.areadetail.content.Transformer[i]["FromArea"],
            this.$store.state.areadetail.content.Transformer[i]["ToArea"]
          ].includes(+this.$store.state.area)
        ) {
          temp.push({
            value: false, //[this.$store.state.areadetail.content.Substation[subID.toString()]["Double.Longitude"], this.$store.state.areadetail.content.Substation[subID.toString()]["Double.Latitude"]],
            key: i,
            name:
              this.$store.state.casedetail.content.Bus[i.split(",")[0]][
                "String.Name"
              ] +
              "-" +
              this.$store.state.casedetail.content.Bus[i.split(",")[1]][
                "String.Name"
              ],
            id: this.$store.state.areadetail.content.Transformer[i][
              "String.CircuitID"
            ],
            Phase: 0,
            Tap: 1,
            Temperature: null
          });
        }
      }
      this.Transformers = temp;
      if (this.Transformers.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      this.Interval = setInterval(() => {
        try {
          for (let i in this.Transformers) {
            this.Transformers[i].Phase = this.$store.state.transformerData[
              0 + i * this.TransformerDataLength
            ];
            this.Transformers[i].Tap = this.$store.state.transformerData[
              1 + i * this.TransformerDataLength
            ]; // MW is the 6th in the load data
            this.Transformers[i].Temperature = 100;
          }
        } catch (e) {
          console.log(e);
          console.log("The raw data are not ready");
        }
      }, 500);
    },
    toggle(item) {
      var command;
      if (item.vStatus) {
        item.vStatus = 1;
        command = "CLOSE BOTH";
      } else {
        item.vStatus = 0;
        command = "OPEN BOTH";
      }
      // console.log(item);
      this.$store.commit("setMessage", [
        "Transformers",
        item.key,
        item.key,
        command
      ]);
      this.$store.commit("recordAction", ["Transformers", item.key]);
      this.$store.commit("setPublish");
    }
  },
  created() {
    // this.preProcess();
    // this.initTable();
  },
  mounted() {
    this.initTable().then(() => this.updateTable());
  },
  watch: {
    selected: function(newval, oldval) {
      this.$store.commit("updateSelectedShunts", newval);
    }
  },
  computed: {
    disable() {
      if (this.$store.state.status == "running") {
        return false;
      } else {
        return true;
      }
    }
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  }
};
</script>
