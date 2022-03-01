<template>
  <v-card>
    <v-app-bar flat dense color="transparent">
      <v-toolbar-title>
        <h4>{{ title }}</h4>
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
          :headers="headers"
          :items="loads"
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
              <td class="text-xs-center">{{ props.item.MW }}</td>
              <td class="text-xs-center">{{ props.item.Mvar }}</td>
              <td class="text-xs-center">{{ props.item.Vpu }}</td>
              <td class="text-xs-center">{{ props.item.FreqHz }}</td>
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
</style>

<script>
import { mapState } from "vuex";

// let loads = [];

export default {
  props: {
    title: String,
  },
  data() {
    return {
      headers: Object.freeze([
        {
          text: "Load",
          align: "left",
          // sortable: false,
          value: "name",
        },
        { text: "Status", value: "Status" },
        { text: "MW", value: "MW" },
        { text: "Mvar", value: "Mvar" },
        { text: "Vpu", value: "Vpu" },
        { text: "FreqHz", value: "FreqHz" },
        // { text: 'MVA', value: 'MVA' },
        // { text: 'MW setpoint', value: 'MWSet', sortable: false },
        // { text: 'Vpu setpoint', value: 'VpuSet', sortable: false },
        { text: "Actions", value: "Actions", sortable: false },
      ]),
      selected: [],
      anchor: 0,
      loadDataLength: 0,
      defaultRowItems: [
        15,
        30,
        { text: "$vuetify.dataIterator.rowsPerPageAll", value: -1 },
      ],
      loadArray: [],
      loads: [],
      Interval: null,
    };
  },
  methods: {
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.fieldstore) {
        arrlength = this.fieldstore[ele]["Field"].length;
        keyarr = Object.keys(this.areadetail.content[ele]);
        if (ele != "Load") {
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
      for (let i in this.areadetail.content.Load) {
        if (this.areadetail.content.Load[i]["Int.Area Number"] == +this.area) {
          this.loadArray.push(count);
          subID =
            this.areadetail.content.Bus[i.split(",")[0]]["Int.Sub Number"];
          temp.push({
            value: [
              this.areadetail.content.Substation[subID.toString()][
                "Double.Latitude"
              ],
              this.areadetail.content.Substation[subID.toString()][
                "Double.Longitude"
              ],
            ],
            key_cmd: i,
            name: Object.freeze(
              this.areadetail.content.Bus[i.split(",")[0]]["String.Name"] +
                " " +
                this.areadetail.content.Load[i]["String.ID"]
            ),
            Status: 1,
            vStatus: true,
            MW: 0,
            Mvar: 0,
            Vpu: 1,
            FreqHz: 60,
            id_cmd: Object.freeze(this.areadetail.content.Load[i]["String.ID"]),
          });
        }
        count++;
      }
      this.loads = temp;
      if (this.loads.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    updateTable() {
      this.Interval = setInterval(() => {
        try {
          const temp = this.parsedData;
          for (let i in this.loads) {
            this.loads[i].MW =
              temp[this.anchor + 6 + this.loadArray[i] * this.loadDataLength]; // MW is the 6th in the load data
            this.loads[i].Mvar =
              temp[this.anchor + 7 + this.loadArray[i] * this.loadDataLength];
            this.loads[i].Vpu =
              temp[this.anchor + this.loadArray[i] * this.loadDataLength];
            this.loads[i].FreqHz =
              temp[this.anchor + 3 + this.loadArray[i] * this.loadDataLength];
            this.loads[i].Status =
              temp[this.anchor + 5 + this.loadArray[i] * this.loadDataLength];
            if (this.genAction["Load"][this.loads[i].key_cmd] != undefined) {
              if (
                this.currentTime >=
                Math.max(this.genAction["Load"][this.loads[i].key_cmd]) + 3
              ) {
                this.loads[i].vStatus =
                  this.loads[i].Status == 1 ? true : false;
              }
            } else {
              this.loads[i].vStatus = this.loads[i].Status == 1 ? true : false;
            }
          }
        } catch (e) {
          console.log("The raw data are not ready");
        }
      }, 500);
    },
    toggle(item) {
      var command;
      if (item.Status == 1) {
        command = "OPEN";
      } else {
        command = "CLOSE";
      }
      this.$store.commit("setMessage", [
        "Load",
        item.key_cmd + "," + item.id_cmd,
        item.key_cmd + "#" + item.id_cmd,
        command,
      ]);
      this.$store.commit("recordAction", ["Load", item.key_cmd]);
      this.$store.commit("setPublish");
    },
  },
  created() {
    this.loads = [];
    this.preProcess();
    // this.initTable();
  },
  mounted() {
    this.initTable().then(() => this.updateTable());
  },
  computed: {
    ...mapState([
      "fieldstore",
      "areadetail",
      "area",
      "parsedData",
      "genAction",
      "currentTime",
      "status",
    ]),
    disable() {
      if (this.status == "running") {
        return false;
      } else {
        return true;
      }
    },
  },
  watch: {
    selected: function (newval, oldval) {
      this.$store.commit("updateSelectedLoads", newval);
    },
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  },
};
</script>
