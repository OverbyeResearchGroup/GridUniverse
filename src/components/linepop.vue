<template>
  <v-dialog v-model="show" :key="id" width="900">
    <v-toolbar color="cyan" dark tabs>
      <v-toolbar-title>{{ name }} {{ volt }} {{ type }}</v-toolbar-title>
      <v-tabs slot="extension" centered color="cyan" slider-color="yellow">
        <v-tab> General </v-tab>
      </v-tabs>
    </v-toolbar>
    <v-card>
      <v-card-title class="headline"> Data </v-card-title>
      <v-data-table
        :headers="headers"
        :items="display"
        hide-default-footer
        class="elevation-1"
      >
        <template slot="items" slot-scope="props">
          <td class="text-xs-right" v-for="item in props.item" :key="item.text">
            {{ item }}
          </td>
        </template>
      </v-data-table>
      <v-card-title class="headline"> Control </v-card-title>
      <v-overflow-btn
        dense
        :items="dropdown"
        label="Commands"
        segmented
        target="#dropdown-example"
      ></v-overflow-btn>
      <v-card-actions>
        <v-btn color="primary" text @click.stop="show = false">Close</v-btn>
      </v-card-actions>
    </v-card>
  </v-dialog>
</template>

<script>
import { mapGetters } from "vuex";

export default {
  data() {
    let temp = [];
    for (var j in this.$store.state.tcmcommands.Branch) {
      let jj = j;
      temp.push({
        text: this.$store.state.tcmcommands.Branch[j],
        callback: () => {
          this.$store.commit("setMessage", [
            this.type,
            this.id,
            this.name,
            this.$store.state.tcmcommands.Branch[jj],
          ]);
          this.$store.commit("setPublish");
        },
      });
    }
    let myList = this.$store.state.fieldstore.Branch["Field"].map(function (
      key
    ) {
      return { text: key, value: key };
    });
    return {
      dropdown: temp,
      display: [],
      anchor: 0,
      arrlength: null,
      keyarr: null,
      Interval: null,
      headers: myList
    };
  },
  props: {
    visible: {
      type: Boolean,
      default: false,
    },
    type: {
      type: String,
    },
    id: {
      type: String,
    },
    name: {
      type: String,
      default: "NULL",
    },
    volt: {
      type: String,
      default: "",
    },
    data: {
      default: function () {
        return [];
      },
    },
  },
  computed: {
    show: {
      get() {
        return this.visible;
      },
      set(value) {
        if (!value) {
          this.$emit("close");
        }
      },
    },
  },
  methods: {
    init() {
      for (let ele in this.$store.state.fieldstore) {
        this.arrlength = this.$store.state.fieldstore[ele]["Field"].length;
        this.keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        if (ele != this.type) {
          this.anchor += this.arrlength * this.keyarr.length;
        } else {
          this.anchor += this.arrlength * this.keyarr.indexOf(this.id);
          break;
        }
        // console.log(Object.keys(this.$store.state.fieldstore).indexOf(ele))
        // console.log(Object.keys(this.$store.state.casedetail.content[ele]).length)
        // console.log(this.$store.state.fieldstore[ele].length)
      }
    },
    getData() {
      const temp = this.$store.state.parsedData;
      const spdata = this.$store.state.parsedData.slice(
        this.anchor,
        this.anchor + this.arrlength
      );
      // const spdata = this.$store.state.branchData;
      let container = {};
      for (let e in spdata) {
        container[this.$store.state.fieldstore[this.type]["Field"][e]] =
          spdata[e];
      }
      this.display = [container];
    },
  },
  mounted() {
    this.init();
    this.Interval = setInterval(() => {
      this.getData();
    }, 500);
  },
  beforeDestroy() {
    clearInterval(this.Interval);
  },
  // watch: {
  // 	dataflag: function() {
  // 		this.getData();
  // 	}
  // }
};
</script>
