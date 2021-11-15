<template>
  <v-card>
    <v-app-bar flat dense color="transparent">
      <v-toolbar-title>
        <h4>{{ title }}</h4>
      </v-toolbar-title>
      <v-spacer></v-spacer>
      <v-toolbar-items>
        <v-menu bottom right offset-x>
          <template v-slot:activator="{ on }">
            <v-btn icon v-on="on">
              <v-icon>more_vert</v-icon>
            </v-btn>
            <v-list>
              <v-list-item @click="toggleALL">
                <v-list-item-title>Toggle all AGC</v-list-item-title>
              </v-list-item>
            </v-list>
          </template>
        </v-menu>
      </v-toolbar-items>
    </v-app-bar>
    <v-divider></v-divider>
    <v-card-text class="pa-0">
      <template>
        <v-data-table
          class="fixed-header"
          :headers="headers"
          :items="genData"
          :items-per-page-options="defaultRowItems"
          v-model="selected"
          show-select
          item-key="name"
        >
          <template v-slot:item.MWSetpoint="{ item }">
            <v-edit-dialog
              :return-value.sync="item.MWSetpoint"
              large
              persistent
              @save="savemws(item)"
              @open="openmws(item)"
              @cancel="cancel"
            >
              <div>{{ item.MWSetpoint }}</div>
              <template v-slot:input>
                <div class="mt-3 title">Update MW Setpoint</div>
                <v-text-field
                  v-model="mws"
                  label="Edit"
                  single-line
                  autofocus
                ></v-text-field>
              </template>
            </v-edit-dialog>
          </template>
          <template v-slot:item.Actions="{ item }">
            <v-switch
              class="mt-3"
              v-model="item.vStatus"
              @click.native="toggle(item)"
              :disabled="disable"
            ></v-switch>
          </template>
          <template v-slot:item.AGC="{ item }">
            <v-switch
              class="mt-3"
              v-model="item.AGC"
              :disabled="!item.Status"
            ></v-switch>
          </template>
          <template slot="headerCell" slot-scope="props">
            <v-tooltip bottom>
              <span slot="activator">
                {{ props.header.text }}
              </span>
              <span style="color: white">
                {{ props.header.text }}
              </span>
            </v-tooltip>
          </template>
          <template v-slot:items="props">
            <tr
              :active="props.selected"
              @click="props.selected = !props.selected"
            >
              <td>
                <v-checkbox
                  :input-value="props.selected"
                  primary
                  hide-details
                ></v-checkbox>
              </td>
              <td class="text-xs-left">{{ props.item.name }}</td>
              <td class="text-xs-left">{{ props.item.Status }}</td>
              <td class="text-xs-right">
                <v-chip
                  label
                  small
                  :color="getColorByValue(props.item.MW, props.item.MWMax)"
                  text-color="white"
                  class="chip"
                  >{{ props.item.MW }}</v-chip
                >
              </td>
              <!-- <td class="text-xs-right">{{ props.item.Mvar }}</td> -->
              <td class="text-xs-center">{{ props.item.MarginalCost }}</td>
              <td class="text-xs-center">{{ props.item.OperationCost }}</td>

              <!-- <td class="text-xs-right">
								<v-edit-dialog :return-value.sync="props.item.VpuSetpoint" large lazy @save="savevps(props.item)" @open="openvps(props.item)">
									<div>{{ props.item.VpuSetpoint }}</div>
									<div slot="input" class="mt-3 title">Update Vpu Setpoint</div>
									<v-text-field slot="input" v-model="vps" label="Edit" single-line autofocus></v-text-field>
								</v-edit-dialog>
							</td> -->
              <td class="text-xs-center">{{ props.item.MWMax }}</td>
              <!-- <td class="text-xs-right">{{ props.item.MWMin }}</td> -->
              <!-- <td class="text-xs-center">
                <v-switch
                  class="mt-3"
                  v-model="props.item.vStatus"
                  @click.native="toggle(props.item)"
                  :disabled="disable"
                ></v-switch>
              </td> -->
            </tr>
          </template>
          <!-- <template slot="expand" slot-scope="props">
				<v-card flat>
					<v-card-text>Peek-a-boo!</v-card-text>
				</v-card>
			</template> -->
        </v-data-table>
        <v-snackbar v-model="snack" :timeout="3000" :color="snackColor">
          {{ snackText }}

          <template v-slot:action="{ attrs }">
            <v-btn v-bind="attrs" text @click="snack = false"> Close </v-btn>
          </template>
        </v-snackbar>
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
import { mapGetters, mapState } from "vuex";

export default {
  props: {
    title: String,
  },
  data() {
    return {
      headers: [
        {
          text: "Generator",
          align: "left",
          // sortable: false,
          value: "name",
          width: "10%",
        },
        { text: "Status", value: "Status" },
        { text: "MW", value: "MW" },
        // { text: 'Mvar', value: 'Mvar' },
        { text: "Operation Cost", value: "MarginalCost", align: "left" },
        { text: "Fixed Cost", value: "OperationCost" },
        { text: "MW Setpoint", value: "MWSetpoint", align: "left" },
        // { text: 'Vpu Setpoint', value: 'VpuSetpoint' },
        { text: "MW Max Limit", value: "MWMax" },
        // { text: 'MW Min Limit', value: 'MWMin' },
        // { text: 'MW setpoint', value: 'MWSet', sortable: false },
        // { text: 'Vpu setpoint', value: 'VpuSet', sortable: false },
        { text: "Actions", value: "Actions" },
        { text: "AGC", value: "AGC" },
      ],
      gens: [],
      selected: [],
      anchor: 0,
      genDataLength: 0,
      defaultRowItems: [
        10,
        25,
        { text: "$vuetify.dataIterator.rowsPerPageAll", value: -1 },
      ],
      mws: 0,
      vps: 1,
      switch: false,
      snack: false,
      snackColor: "",
      snackText: "",
    };
  },
  methods: {
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]["Field"].length;
        keyarr = Object.keys(this.$store.state.casedetail.content[ele]);
        if (ele != "Gen") {
          anchor += arrlength * keyarr.length;
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.genDataLength = arrlength;
    },
    initTable() {
      let temp = [];
      let subID;
      console.log(this.$store.state.casedetail.content.Gen);
      for (let i in this.$store.state.casedetail.content.Gen) {
        subID = this.$store.state.casedetail.content.Bus[i]["Int.Sub Number"];
        temp.push({
          value: [
            this.$store.state.casedetail.content.Substation[subID.toString()][
              "Double.Longitude"
            ],
            this.$store.state.casedetail.content.Substation[subID.toString()][
              "Double.Latitude"
            ],
          ],
          key: i,
          name: i,
          Status: 1,
          vStatus: true,
          MWMax:
            this.$store.state.casedetail.content.Gen[i]["Single.MW Max Limit"],
          MWMin:
            this.$store.state.casedetail.content.Gen[i]["Single.MW Min Limit"],
          MW: 0,
          Mvar: 0,
          MWSetpoint: 0,
          VpuSetpoint: 1,
          id: this.$store.state.casedetail.content.Gen[i]["String.ID"],
        });
      }
      this.gens = temp;
      if (this.gens.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      // setInterval(() => {
      try {
        const temp = this.$store.state.parsedData;
        for (let i in this.gens) {
          this.gens[i].MW = temp[this.anchor + 6 + i * this.genDataLength]; // MW is the 6th in the gen data
          this.gens[i].Mvar = temp[this.anchor + 7 + i * this.genDataLength];
          this.gens[i].MWSetpoint =
            temp[this.anchor + 9 + i * this.genDataLength];
          this.gens[i].VpuSetpoint =
            temp[this.anchor + 8 + i * this.genDataLength];
          this.gens[i].Status = temp[this.anchor + 5 + i * this.genDataLength];
          if (
            this.$store.state.genAction["Gen"][this.gens[i].key] != undefined
          ) {
            if (
              this.$store.state.currentTime >=
              Math.max(this.$store.state.genAction["Gen"][this.gens[i].key]) + 3
            ) {
              this.gens[i].vStatus = this.gens[i].Status == 1 ? true : false;
            }
          } else {
            this.gens[i].vStatus = this.gens[i].Status == 1 ? true : false;
          }
        }
      } catch (e) {
        console.log("The raw data are not ready");
      }
      // }, 500);
    },
    savemws(item) {
      this.snack = true;
      this.snackColor = "success";
      this.snackText = "New Setpoint Saved";
      this.mws = Math.min(Math.max(this.mws, 0), item.MWMax);
      const command = "Set Power " + this.mws + " MW";
      this.$store.commit("setMessage", [
        "Gen",
        item.key + "," + item.id,
        item.key + "#" + item.id,
        command,
      ]);
      this.$store.commit("setPublish");
    },
    openmws(item) {
      this.mws = item.MWSetpoint;
    },
    cancel() {
      this.snack = true;
      this.snackColor = "error";
      this.snackText = "Canceled";
    },
    savevps(item) {
      const command = "Set Exciter_Setpoint " + this.vps + " pu";
      this.$store.commit("setMessage", [
        "Gen",
        item.key + "," + item.id,
        item.key + "#" + item.id,
        command,
      ]);
      this.$store.commit("setPublish");
    },
    openvps(item) {
      this.vps = item.VpuSetpoint;
    },
    toggle(item) {
      var command;
      if (item.Status == 1) {
        command = "OPEN";
      } else {
        command = "CLOSE";
      }
      // console.log(item);
      this.$store.commit("setMessage", [
        "Gen",
        item.key + "," + item.id,
        item.key + "#" + item.id,
        command,
      ]);
      this.$store.commit("recordAction", ["Gen", item.key]);
      this.$store.commit("setPublish");
    },
    toggleAGC(item) {
      console.log(item);
      // console.log(this.$store.state.genData)
    },
    toggleALL() {
      this.switch = !this.switch;
      this.$store.commit("toggleALL", this.switch);
    },
    getColorByValue(MW, MAX) {
      var temp = "transparent";
      if (MW > 0) {
        if (MW >= MAX) {
          temp = "red";
        } else if (MW > 0.9 * MAX) {
          temp = "yellow";
        }
      }

      return temp;
    },
  },
  created() {
    // this.preProcess();
    // this.initTable();
  },
  mounted() {
    // this.initTable();
    // this.initTable().then(() => this.updateTable());
  },
  computed: {
    ...mapState(["genData"]),
    disable() {
      if (this.$store.state.status == "running") {
        return false;
      } else {
        return true;
      }
    },
  },
  watch: {
    selected: function (newval, oldval) {
      // console.log(newval);
      this.$store.commit("updateSelectedGens", newval);
    },
  },
};
</script>
