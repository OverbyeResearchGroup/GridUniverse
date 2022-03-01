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
          :items="branches"
          :items-per-page-options="defaultRowItems"
          v-model="selected"
          show-select
          item-key="name"
        >
        <template v-slot:item.Actions="{ item }">
            <v-switch
              class="mt-3"
              v-model="item.vStatus"
              @click.native="toggle(item)"
              :disabled="disable"
            ></v-switch>
          </template>
          <template slot="headerCell" slot-scope="props">
            <!-- <v-tooltip bottom> -->
            <span slot="activator">{{ props.header.text }}</span>
            <!-- </v-tooltip> -->
          </template>
          <template v-slot:items="props">
            <tr :active="props.selected" @click="props.selected = !props.selected">
              <td>
                <v-checkbox :input-value="props.selected" primary hide-details></v-checkbox>
              </td>
              <td class="text-xs-left">{{ props.item.name }}</td>
              <td class="text-xs-left">{{ props.item.vStatus }}</td>
              <td class="text-xs-right">{{ props.item.MWFrom }}</td>
              <td class="text-xs-right">{{ props.item.MvarFrom }}</td>
              <td class="text-xs-right">{{ props.item.MVAFrom }}</td>
              <td class="text-xs-right">{{ props.item.AmpsFrom }}</td>
              <td class="text-xs-right">{{ props.item.MVALimit }}</td>
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
          text: "Branch",
          align: "left",
          // sortable: false,
          value: "name",
          width: "15%"
        },
        { text: "Status", value: "Status" },
        { text: "MWFrom", value: "MWFrom" },
        { text: "MvarFrom", value: "MvarFrom" },
        { text: "MVAFrom", value: "MVAFrom" },
        { text: "AmpsFrom", value: "AmpsFrom" },
        { text: "MVA Limit", value: "MVALimit" },
        { text: "Actions", value: "Actions", sortable: false }
      ],
      branches: [],
      selected: [],
      anchor: 0,
      branchDataLength: 0,
      defaultRowItems: [
        15,
        30,
        { text: "$vuetify.dataIterator.rowsPerPageAll", value: -1 }
      ],
      branchArray: this.$store.state.areaHelper.Branch.list,
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
        if (ele != "Branch") {
          anchor += arrlength * keyarr.length;
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.branchDataLength = arrlength;
    },
    initTable() {
      let temp = [];
      this.anchor = this.$store.state.areaHelper.Branch.anchor;
      this.branchDataLength = this.$store.state.areaHelper.Branch.length;
      // let subID;
      for (let i in this.$store.state.areadetail.content.Branch) {
        if (
          [
            this.$store.state.areadetail.content.Branch[i]["FromArea"],
            this.$store.state.areadetail.content.Branch[i]["ToArea"]
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
              ] + " " + this.$store.state.areadetail.content.Branch[i]["String.CircuitID"],
            id: this.$store.state.areadetail.content.Branch[i][
              "String.CircuitID"
            ],
            Status: 1,
            vStatus: 1,
            MWFrom: 0,
            MvarFrom: 0,
            MVAFrom: 0,
            AmpsFrom: 0,
            MWTo: 0,
            MvarTo: 0,
            MVATo: 0,
            AmpsTo: 0,
            MVALimit: this.$store.state.areadetail.content.Branch[i][
              "Single.MVA Limit"
            ]
          });
        }
      }
      this.branches = temp;
      if (this.branches.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      this.Interval = setInterval(() => {
        try {
          for (let i in this.branches) {
            this.branches[i].Status = this.$store.state.branchData[
              0 + i * this.branchDataLength
            ];
            this.branches[i].MWFrom = this.$store.state.branchData[
              1 + i * this.branchDataLength
            ]; // MW is the 6th in the load data
            this.branches[i].MvarFrom = this.$store.state.branchData[
              2 + i * this.branchDataLength
            ];
            this.branches[i].MVAFrom = this.$store.state.branchData[
              3 + i * this.branchDataLength
            ];
            this.branches[i].AmpsFrom = this.$store.state.branchData[
              4 + i * this.branchDataLength
            ];
            this.branches[i].MWTo = this.$store.state.branchData[
              5 + i * this.branchDataLength
            ]; // MW is the 6th in the load data
            this.branches[i].MvarTo = this.$store.state.branchData[
              6 + i * this.branchDataLength
            ];
            this.branches[i].MVATo = this.$store.state.branchData[
              7 + i * this.branchDataLength
            ];
            this.branches[i].AmpsTo = this.$store.state.branchData[
              8 + i * this.branchDataLength
            ];
            if (
              this.$store.state.genAction["Branch"][this.branches[i].key] !=
              undefined
            ) {
              if (
                this.$store.state.currentTime >=
                Math.max(
                  this.$store.state.genAction["Branch"][this.branches[i].key]
                ) +
                  3
              ) {
                this.branches[i].vStatus = this.branches[i].Status;
              }
            } else {
              this.branches[i].vStatus = this.branches[i].Status;
            }
          }
        } catch (e) {
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
      this.$store.commit("setMessage", ["Branch", item.key, item.key, command]);
      this.$store.commit("recordAction", ["Branch", item.key]);
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
