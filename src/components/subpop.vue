<template>
  <div>
    <v-dialog v-model="show" :key="id" max-width="1000px">
      <v-toolbar color="cyan" dark tabs>
        <v-toolbar-title>{{ name }} {{ volt }} {{ type }}</v-toolbar-title>
        <v-tabs
          slot="extension"
          v-model="currentItem"
          centered
          color="cyan"
          slider-color="yellow"
        >
          <v-tab
            :key="'General'"
            :href="'#tab-General'"
            @click="
              childshow = false;
              atDefault = true;
            "
            >General</v-tab
          >
          <v-tab
            v-for="item in tabs"
            :key="item"
            :href="'#tab-' + item"
            @click="atDefault = false"
            >{{ item }}</v-tab
          >
        </v-tabs>
      </v-toolbar>
      <v-tabs-items v-model="currentItem">
        <v-tab-item :value="'tab-General'" :key="'General'" lazy>
          <v-card>
            <v-card-title class="headline"> Data </v-card-title>
            <v-data-table
              :headers="headers"
              :items="display"
              disable-initial-sort
              hide-actions
              class="elevation-1"
              lazy
            >
              <template slot="items" slot-scope="props">
                <td
                  class="text-xs-right"
                  v-for="item in props.item"
                  :key="item.text"
                >
                  {{ item }}
                </td>
                <!-- <td class="text-xs-right">{{ props.item.GenMvar }}</td>
								<td class="text-xs-right">{{ props.item.LoadMW }}</td>
								<td class="text-xs-right">{{ props.item.LoadMvar }}</td>
								<td class="text-xs-right">{{ props.item.ShuntMW }}</td>
								<td class="text-xs-right">{{ props.item.ShuntMvar }}</td>
								<td class="text-xs-right">{{ props.item.FrequencyAve }}</td> -->
              </template>
            </v-data-table>
          </v-card>
          <v-card>
            <!-- <v-card-title class='headline'>
							Oneline Diagram (In Development)
						</v-card-title> -->
            <!-- <highTopo></highTopo> -->
          </v-card>
        </v-tab-item>
        <v-tab-item
          v-for="(item, index) in tabs"
          :value="'tab-' + item"
          :key="item"
          lazy
        >
          <popchild
            v-if="show"
            :name="item"
            :detail="children[index]"
            :subname="name"
            :show="currentItem"
            lazy
          ></popchild>
        </v-tab-item>
      </v-tabs-items>
    </v-dialog>
  </div>
</template>

<style>
</style>

<script>
// import popchild from './popchild';
import { mapGetters } from "vuex";
// import highTopo from '@/components/highTopo';

export default {
  data() {
    let myList = this.$store.state.fieldstore.Substation["Field"].map(function (
      key
    ) {
      return { text: key, value: key };
    });
    return {
      dropdown: [],
      currentItem: "tab-General",
      display: [],
      atDefault: true,
      childshow: false,
      headers: myList,
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
    },
    volt: {
      type: String,
    },
    children: {},
  },
  computed: {
    ...mapGetters({
      dataflag: "rawData",
    }),
    show: {
      get() {
        return this.visible;
      },
      set(value) {
        if (!value) {
          this.display = [];
          this.childshow = false;
          this.$emit("close");
        }
      },
    },
    tabs: function () {
      let temp = [];
      for (var ele in this.children) {
        temp.push("Bus " + this.children[ele]["Int.Bus Number"].toString());
      }
      return temp;
    },
  },
  methods: {
    getData() {
      const message = this.$store.getters.rawData;
      let anchor = 0;
      var arrlength;
      var keyarr;
	  const temp = message.Data;
      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]["Field"].length;
        keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        if (ele != this.type) {
          anchor += arrlength * keyarr.length;
        } else {
          anchor += arrlength * keyarr.indexOf(this.id);
          break;
        }
        // console.log(Object.keys(this.$store.state.fieldstore).indexOf(ele))
        // console.log(Object.keys(this.$store.state.casedetail.content[ele]).length)
        // console.log(this.$store.state.fieldstore[ele].length)
      }
      const spdata = temp.slice(anchor, anchor + arrlength);
      let container = {};
      for (let e in spdata) {
        container[this.$store.state.fieldstore[this.type]["Field"][e]] =
          spdata[e];
      }
      this.display = [container];
    },
  },
  watch: {
    dataflag: function () {
      if (this.show && this.atDefault) {
        this.getData();
      }
    },
  },
  components: {
    popchild: () => import("./popchild"),
    // highTopo
  },
};
</script>
