<script>
import { mapGetters } from "vuex";
import * as math from "mathjs";

var gens = [];
var areaData = [];
var busData = [];
var busVoltageData = [];
var branchData = [];
var transformerData = [];

export default {
  data() {
    return {
      anchor: null,
      genDataLength: null,
      show: false,
      marginalcost: [],
      gens: null,
      areaData: [],
      areaDataLength: this.$store.state.fieldstore["Area"]['Field'].length,
      busAnchor: 0,
      busDataLength: 0,
      busArrLength: 0,
      formatRiskBuses: [],
      busData: [],
      violateBuses: [],
      branchData: [],
      transformerData: [],
      branchAnchor: 0,
      branchDataLength: 0,
      branchArrLength: 0,
      transformerAnchor: 0,
      transformerDataLength: 0,
      transformerArrLength: 0,
      highRiskLines: {},
      formatRiskLines: [],
      subdata: [],
      linedata: [],
      transformerDict: [],
      subdetail: [],
      busdetail: [],
      area_index: 0,
      genArray: [],
      busArray: [],
      areaBus: {},
      branchArray: [],
      transformerArray: [],
      busIDArray: [4195, 4146, 4056, 4181, 4192, 4039, 4151, 4196, 4073, 4070, 4158, 4140, 4113, 4080, 4004, 4183, 4041],
      busIndexArray: []
    };
  },
  methods: {
    before_init() {
      const temp = this.$store.state.casedetail;
      const areaTemp = this.$store.state.areadetail;
      let count = 0;
      let count_b = 0;
      let otherSub = [];
      let otherBranch = [];
      let longList = [];
      let latList = [];
      // console.log(this.$store.state.area)
      this.area_index = Object.keys(
        this.$store.state.casedetail.content.Area
      ).indexOf(this.$store.state.area.toString());
      if (temp.content.type == "dsmDictionary") {
        for (let ele in temp.content.Substation) {
          if (
            temp.content.Substation[ele]["Int.Area Number"] ==
            +this.$store.state.area
          ) {
            longList.push(temp.content.Substation[ele]["Double.Longitude"]);
            latList.push(temp.content.Substation[ele]["Double.Latitude"]);
            this.subdata.push({
              id: ele,
              name: temp.content.Substation[ele]["String.Name"],
              value: [
                temp.content.Substation[ele]["Double.Longitude"],
                temp.content.Substation[ele]["Double.Latitude"]
              ],
              attributes: { Gen: false, Shunt: false },
              bus: []
            });
          } else {
            otherSub.push({
              name: temp.content.Substation[ele]["String.Name"],
              value: [
                temp.content.Substation[ele]["Double.Longitude"],
                temp.content.Substation[ele]["Double.Latitude"]
              ]
            });
          }
        }
        this.$store.commit("setCenter", [
          math.median(longList),
          math.median(latList)
        ]);
        for (let ele in temp.content.Branch) {
          const fromid = ele.split(",")[0];
          const toid = ele.split(",")[1];
          const coords = [
            [
              temp.content.Substation[
                temp.content.Bus[fromid]["Int.Sub Number"].toString()
              ]["Double.Longitude"],
              temp.content.Substation[
                temp.content.Bus[fromid]["Int.Sub Number"].toString()
              ]["Double.Latitude"]
            ],
            [
              temp.content.Substation[
                temp.content.Bus[toid]["Int.Sub Number"].toString()
              ]["Double.Longitude"],
              temp.content.Substation[
                temp.content.Bus[toid]["Int.Sub Number"].toString()
              ]["Double.Latitude"]
            ]
          ];
          if (
            [
              temp.content.Branch[ele]["FromArea"],
              temp.content.Branch[ele]["ToArea"]
            ].includes(+this.$store.state.area)
          ) {
            this.branchArray.push(count_b);
            this.linedata.push({
              id: ele,
              name:
                temp.content.Substation[
                  temp.content.Bus[fromid]["Int.Sub Number"].toString()
                ]["String.Name"].split("_")[0] +
                "-" +
                temp.content.Substation[
                  temp.content.Bus[toid]["Int.Sub Number"].toString()
                ]["String.Name"].split("_")[0],
              coords: coords,
              count: 1,
              attributes: {
                MVALimit: temp.content.Branch[ele]["Single.MVA Limit"],
                volt: temp.content.Bus[fromid]["Single.Nominal kV"]
              }
            });
          } else {
            if (temp.content.Branch[ele]["Byte.Type"] == 0) {
              otherBranch.push({
                name:
                  temp.content.Substation[
                    temp.content.Bus[fromid]["Int.Sub Number"].toString()
                  ]["String.Name"].split("_")[0] +
                  "-" +
                  temp.content.Substation[
                    temp.content.Bus[toid]["Int.Sub Number"].toString()
                  ]["String.Name"].split("_")[0],
                coords: coords
              });
            }
          }
          count_b++;
        }
        for (let ele in temp.content.Transformer) {
          const fromid = ele.split(",")[0];
          const toid = ele.split(",")[1];
          const coords = [
            [
              temp.content.Substation[
                temp.content.Bus[fromid]["Int.Sub Number"].toString()
              ]["Double.Longitude"],
              temp.content.Substation[
                temp.content.Bus[fromid]["Int.Sub Number"].toString()
              ]["Double.Latitude"]
            ],
            [
              temp.content.Substation[
                temp.content.Bus[toid]["Int.Sub Number"].toString()
              ]["Double.Longitude"],
              temp.content.Substation[
                temp.content.Bus[toid]["Int.Sub Number"].toString()
              ]["Double.Latitude"]
            ]
          ];
          if (
            [
              temp.content.Transformer[ele]["FromArea"],
              temp.content.Transformer[ele]["ToArea"]
            ].includes(+this.$store.state.area)
          ) {
            this.transformerArray.push(count_b);
            this.transformerDict.push({
              id: ele,
              name:
                temp.content.Substation[
                  temp.content.Bus[fromid]["Int.Sub Number"].toString()
                ]["String.Name"].split("_")[0] +
                "-" +
                temp.content.Substation[
                  temp.content.Bus[toid]["Int.Sub Number"].toString()
                ]["String.Name"].split("_")[0],
              coords: coords,
              count: 1,
              attributes: {}
            });
          }
          count_b++;
        }
        for (let i in this.$store.state.areadetail.content.Bus) {
          if (
            this.$store.state.areadetail.content.Bus[i]["Int.Area Number"] ==
            +this.$store.state.area
          ) {
            this.busArray.push(count);
            this.areaBus[i] = this.$store.state.areadetail.content.Bus[i];
          }
          count++;
        }
        this.subdetail = areaTemp.content.Substation;
        this.busdetail = areaTemp.content.Bus;
        const keys = Object.keys(areaTemp.content.Bus);
        this.busIDArray.forEach((e) => {
          this.busIndexArray.push(keys.indexOf(e.toString()));
        });
        const subIndexedArray = Object.keys(areaTemp.content.Substation);
        for (let ele in this.subdetail) {
          this.subdetail[ele].Bus = [];
        }
        for (let ele in areaTemp.content.Gen) {
          this.busdetail[ele.split(",")[0]].Gen = areaTemp.content.Gen[ele];
          this.subdata[
            subIndexedArray.indexOf(
              areaTemp.content.Bus[
                areaTemp.content.Gen[ele]["Int.Bus Number"].toString()
              ]["Int.Sub Number"].toString()
            )
          ].attributes.Gen = true;
        }
        for (let ele in areaTemp.content.Load) {
          this.busdetail[ele.split(",")[0]].Load = areaTemp.content.Load[ele];
        }
        for (let ele in areaTemp.content.Shunt) {
          this.busdetail[ele.split(",")[0]].Shunt = areaTemp.content.Shunt[ele];
          this.subdata[
            subIndexedArray.indexOf(
              areaTemp.content.Bus[
                areaTemp.content.Shunt[ele]["Int.Bus Number"].toString()
              ]["Int.Sub Number"].toString()
            )
          ].attributes.Shunt = true;
        }
        for (let ele in areaTemp.content.Bus) {
          this.subdetail[areaTemp.content.Bus[ele]["Int.Sub Number"]].Bus.push(
            this.busdetail[ele]
          );
        }
        this.$store.commit("setSubData", this.subdata);
        this.$store.commit("setLineData", this.linedata);
        this.$store.commit("setTransformerDict", this.transformerDict);
        this.$store.commit("setOtherArea", {
          Substation: otherSub,
          Branch: otherBranch
        });
        this.$store.commit("updateSubDetail", this.subdetail);
      }
    },
    initRiskBus() {
      var arrlength;
      var keyCaseArr;
      var valueFieldArr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyCaseArr = Object.keys(this.$store.state.areadetail.content[ele]);
        valueFieldArr = Object.values(this.$store.state.fieldstore[ele]);
        if (ele != "Bus") {
          this.busAnchor += arrlength * keyCaseArr.length;
        } else {
          this.busDataLength = arrlength * keyCaseArr.length;
          this.busArrLength = arrlength;
          break;
        }
      }
      // this.statusArray = Array(keyCaseArr.length).fill(1);
    },
    onMonitorRiskBus() {
      let i = 0;
      var key;
      for (let [key, val] of Object.entries(this.areaBus)) {
        if (
          busData[this.busArray[i] * this.busArrLength] <=
            val["Single.Max Limit"] ||
          busData[this.busArray[i] * this.busArrLength] >=
            val["Single.Min Limit"]
        ) {
          // this.highRiskLines[key] = val;
          this.violateBuses[key] = {};
          this.violateBuses[key][
            "name"
          ] = this.$store.state.areadetail.content.Bus[key]["String.Name"];
          this.violateBuses[key]["Vpu"] = busData[
            this.busArray[i] * this.busArrLength
          ];
          this.violateBuses[key]["Max"] = val["Single.Min Limit"];
          this.violateBuses[key]["Min"] = val["Single.Max Limit"];
          this.violateBuses[key]["SubID"] = val["Int.Sub Number"];
          this.violateBuses[key]["value"] = [
            this.$store.state.areadetail.content.Substation[
              val["Int.Sub Number"].toString()
            ]["Double.Longitude"],
            this.$store.state.areadetail.content.Substation[
              val["Int.Sub Number"].toString()
            ]["Double.Latitude"]
          ];
        } else if (key in this.violateBuses) {
          delete this.violateBuses[key];
        }
        i++;
      }
      this.formatRiskBuses = Object.values(this.violateBuses);
      this.$store.commit("setRiskBuses", this.formatRiskBuses);
    },
    initRiskBranch() {
      var arrlength;
      var keyCaseArr;
      var valueFieldArr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyCaseArr = Object.keys(this.$store.state.areadetail.content[ele]);
        valueFieldArr = Object.values(this.$store.state.fieldstore[ele]);
        if (ele != "Branch") {
          this.branchAnchor += arrlength * keyCaseArr.length;
        } else {
          this.branchDataLength = arrlength * keyCaseArr.length;
          this.branchArrLength = arrlength;
          break;
        }
      }
    },
    initRiskTransformer() {
      var arrlength;
      var keyCaseArr;
      var valueFieldArr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyCaseArr = Object.keys(this.$store.state.areadetail.content[ele]);
        valueFieldArr = Object.values(this.$store.state.fieldstore[ele]);
        if (ele != "Transformer") {
          this.transformerAnchor += arrlength * keyCaseArr.length;
        } else {
          this.transformerDataLength = arrlength * keyCaseArr.length;
          this.transformerArrLength = arrlength;
          break;
        }
      }
    },
    onMonitorRiskBranch() {
      let i = 0;
      var key;
      for (let index in this.linedata) {
        key = this.linedata[index].id;
        if (
          branchData[index * this.branchArrLength + 3] >=
          0.85 * this.linedata[index].attributes.MVALimit
        ) {
          this.highRiskLines[key] = {};
          this.highRiskLines[key]["name"] =
            this.$store.state.casedetail.content.Bus[key.split(",")[0]][
              "String.Name"
            ] +
            "-" +
            this.$store.state.casedetail.content.Bus[key.split(",")[1]][
              "String.Name"
            ];
          this.highRiskLines[key]["MVA"] = branchData[
            index * this.branchArrLength + 3
          ];
          this.highRiskLines[key]["Ratio"] = (
            (branchData[index * this.branchArrLength + 3] /
              this.linedata[index].attributes.MVALimit) *
            100
          ).toFixed(2);
          this.highRiskLines[key]["MVALimit"] = this.linedata[
            index
          ].attributes.MVALimit;
          this.highRiskLines[key]["coords"] = this.linedata[index].coords;
        } else if (key in this.highRiskLines) {
          delete this.highRiskLines[key];
        }
        i++;
      }
      this.formatRiskLines = Object.values(this.highRiskLines);
      this.$store.commit("setRiskBranches", this.formatRiskLines);
      this.$store.commit("updateSelectedBranches", this.formatRiskLines);
    },
    initData() {
      let temp = [];
      let subID;
      let count = 0;
      // console.log(this.$store.state.casedetail.content.Gen)
      for (let i in this.$store.state.areadetail.content.Gen) {
        // if (
        // 	this.$store.state.areadetail.content.Gen[i]['Int.Area Number'] ==
        // 	+this.$store.state.area && this.$store.state.areadetail.content.Gen[i]['Single.MW Max Limit'] != 0
        // ) {
        if (
          this.$store.state.areadetail.content.Gen[i]["Int.Area Number"] ==
          +this.$store.state.area
        ) {
          this.genArray.push(count);
          subID = this.$store.state.areadetail.content.Bus[i.split(",")[0]][
            "Int.Sub Number"
          ];
          temp.push({
            value: [
              this.$store.state.areadetail.content.Substation[subID.toString()][
                "Double.Longitude"
              ],
              this.$store.state.areadetail.content.Substation[subID.toString()][
                "Double.Latitude"
              ]
            ],
            key: i,
            name: this.$store.state.areadetail.content.Bus[i.split(",")[0]][
              "String.Name"
            ], //i,
            Status: 1,
            vStatus: 1,
            MWMax: this.$store.state.areadetail.content.Gen[i][
              "Single.MW Max Limit"
            ],
            MWMin: this.$store.state.areadetail.content.Gen[i][
              "Single.MW Min Limit"
            ],
            MW: 0,
            Mvar: 0,
            MWSetpoint: 0,
            VpuSetpoint: 1,
            OperationCost: this.$store.state.areadetail.content.Gen[i][
              "MarginalCostCoefficients"
            ][1],
            MarginalCostCoefficients: this.$store.state.areadetail.content.Gen[
              i
            ]["MarginalCostCoefficients"],
            MarginalCost: this.$store.state.areadetail.content.Gen[i][
              "MarginalCostCoefficients"
            ][0],
            id: this.$store.state.areadetail.content.Gen[i]["String.ID"],
            AGC: false
          });
        }
        count++;
      }
      gens = temp;
      if (gens.length > 1) {
        return Promise.resolve("Table initialized properly");
      } else {
        return Promise.reject("Error in initialization");
      }
    },
    preProcess() {
      let anchor = 0;
      var arrlength;
      var keyarr;

      for (let ele in this.$store.state.fieldstore) {
        arrlength = this.$store.state.fieldstore[ele]['Field'].length;
        keyarr = Object.keys(this.$store.state.areadetail.content[ele]);
        if (ele != "Gen") {
          anchor += arrlength * keyarr.length;
          console.log([ele, anchor]);
        } else {
          break;
        }
      }
      this.anchor = anchor;
      this.genDataLength = arrlength;
    },
    regularLoop() {
      const message = this.rawData;
      this.$store.commit("setCurrentTime", +message["SOC"]);
      this.$store.commit("setCurrentStatus", message["Status"]);
      const temp = message.Data;
      // console.log(temp)
      this.$store.commit("setParsedData", temp);
      areaData = temp.slice(
        this.area_index * this.areaDataLength,
        this.area_index * this.areaDataLength + this.areaDataLength
      );
      busData = temp.slice(
        this.busAnchor,
        this.busAnchor + this.busDataLength
      );
      let tempVoltageData = ["2018/11/29 " + this.$store.state.clockTime];
      this.busIndexArray.forEach((e)=>{
        tempVoltageData.push(busData[9*e] + (Math.random()-0.5)/100); // 9 is the length of fields for bus
      })
      branchData = temp.slice(
        this.branchAnchor,
        this.branchAnchor + this.branchDataLength
      );
      transformerData = temp.slice(
        this.transformerAnchor,
        this.transformerAnchor + this.transformerDataLength
      );
      this.$store.commit("setBranchData", branchData);
      this.$store.commit("setTransformerData", transformerData);
      this.$store.commit("setData", temp);
      this.$store.commit("setAreaData", areaData);
      this.$store.commit("setBusVoltage", tempVoltageData);
      this.$store.commit("setAreaLoad", [
        "2018/11/29 " + this.$store.state.clockTime,
        areaData[2]
      ]);
      for (let i in gens) {
        gens[i].MW =
          temp[this.anchor + 6 + this.genArray[i] * this.genDataLength]; // MW is the 6th in the gen data
        gens[i].Mvar =
          temp[this.anchor + 7 + this.genArray[i] * this.genDataLength];
        gens[i].MWSetpoint =
          temp[this.anchor + 9 + this.genArray[i] * this.genDataLength];
        gens[i].VpuSetpoint =
          temp[this.anchor + 8 + this.genArray[i] * this.genDataLength];
        gens[i].Status =
          temp[this.anchor + 5 + this.genArray[i] * this.genDataLength];
        if (this.$store.state.genAction["Gen"][gens[i].key] != undefined) {
          if (
            this.$store.state.currentTime >=
            Math.max(this.$store.state.genAction["Gen"][gens[i].key]) + 3
          ) {
            gens[i].vStatus = gens[i].Status;
          }
        } else {
          gens[i].vStatus = gens[i].Status;
        }
      }
      // console.log(this.$store.state.genAction)
      this.$store.commit("updateGenData", gens);
    },
    updateMC() {
      for (let i in gens) {
        gens[i].MarginalCost = gens[
          i
        ].MarginalCostCoefficients[0].toFixed(2);
      }
      this.$store.commit("updateGenData", gens);
    },
    updateTotalCost() {
      setInterval(() => {
        let deltaScheduleCost = 0;
        if (this.$store.state.schedule) {
          deltaScheduleCost =
            +this.$store.state.schedule.split("@")[0] *
            +this.$store.state.schedule.split("@")[1];
          this.$store.commit(
            "setACE",
            -(
              +this.$store.state.schedule.split("@")[0] +
              this.$store.state.areaData[6]
            )
          );
        } else {
          this.$store.commit("setACE", -this.$store.state.areaData[6]);
        }
        if (this.$store.state.status === "running") {
          let deltaCost = 0;
          // let temp = 0;
          let deltaMWh = this.$store.state.areaData[2];
          // let deltaMWh = 0;
          // console.log(this.gens);
          for (let i in gens) {
            deltaCost +=
              gens[i].MarginalCostCoefficients[0] * gens[i].MW * 1 +
              gens[i].MarginalCostCoefficients[1];
            // temp += this.gens[i].MW;
            // deltaMWh += this.gens[i].MW;
            // console.log(this.gens[i].MarginalCostCoefficients[0]+this.gens[i].MarginalCostCoefficients[1] *this.gens[i].MW);
          }
          // deltaCost = 0;
          // console.log([temp, this.$store.state.areaData[0]])
          // console.log(deltaCost/this.$store.state.areaData[0])
          deltaCost +=
            math.max(this.$store.state.ACE, 0) * this.$store.state.aceCost +
            deltaScheduleCost;
          // console.log(deltaScheduleCost);
          this.$store.commit("updateUnitTimeCost", +deltaCost.toFixed(0));
          deltaCost = deltaCost / 120;
          deltaMWh = (deltaMWh * 1) / 120;
          this.$store.commit("addCost", +deltaCost.toFixed(0));
          this.$store.commit("addMWh", +deltaMWh.toFixed(2));
          // console.log(deltaCost.toFixed(2));
        }
      }, 500);
    },
    addAreaHelper() {
      const areaHelper = {
        Bus: {
          anchor: this.busAnchor,
          length: this.busArrLength, //For a single bus object, not for the whole bus list
          list: this.busArray
        },
        Gen: {
          anchor: this.anchor,
          length: this.genDataLength,
          list: this.genArray
        },
        Branch: {
          anchor: this.branchAnchor,
          length: this.branchArrLength,
          list: this.branchArray
        },
        Transformer: {
          anchor: this.transformerAnchor,
          length: this.transformerArrLength,
          list: this.transformerArray
        }
      };
      this.$store.commit("setAreaHelper", areaHelper);
    }
  },
  created() {
    this.before_init();
    this.preProcess();
    this.initData();
    this.initRiskBus();
    this.initRiskBranch();
    this.initRiskTransformer();
    this.addAreaHelper();
    this.updateTotalCost();
    setInterval(() => {
      if (this.$store.state.status === "running") {
        this.$store.commit("addReportData", {
          time: this.$store.state.currentTime,
          areaData: areaData
        });
      }
      var status, mwmax;
      let offlineCapacity = 0;
      let index = 0;
      // console.log(this.$store.state.genData)
      for (let i in this.$store.state.genData) {
        status = this.$store.state.genData[i].Status;
        mwmax = this.$store.state.genData[i].MWMax;

        // index += 1;
        if (status == 0 && mwmax != 0) {
          // console.log(val);
          offlineCapacity += this.$store.state.genData[i].MWMax;
        }
      }
      const onlineCapacity = Math.abs(
        Math.round(
          this.$store.state.totalCapacity -
            offlineCapacity -
            this.$store.state.areaData[0]
        )
      );
      this.$store.commit("setGenStat", [onlineCapacity, offlineCapacity]);
    }, 1000);
    setInterval(() => {
      if (this.$store.state.status === "running") {
        if (this.formatRiskBuses.length > 0) {
          this.$store.commit("addReportViolate", {
            time: this.$store.state.currentTime,
            Bus: this.formatRiskBuses
          });
        }
        if (this.formatRiskLines.length > 0) {
          this.$store.commit("addReportViolate", {
            time: this.$store.state.currentTime,
            Branch: this.formatRiskLines
          });
        }
      }
      // this.updateMC();
    }, 5000);
    setInterval(() => {
      if (this.$store.state.status === "running") {
        let count = 0;
        if (this.formatRiskLines.length) {
          for (let ele in this.formatRiskLines) {
            if (+this.formatRiskLines[ele]["Ratio"] > 100) {
              count++;
            }
          }
        }
        const RIndex = Math.round(
          50 *
            (Math.exp(-0.05 * this.formatRiskBuses.length) +
              Math.exp(-0.1 * count))
        );
        this.$store.commit("setRIndex", RIndex);
        this.$store.commit("addReportScore", {
          time: this.$store.state.currentTime,
          RIndex: RIndex,
          TCost: this.$store.state.totalCost
        });
      }
    }, 1000);
  },
  computed: {
    ...mapGetters({
      rawData: "rawData"
    })
  },
  watch: {
    rawData: function() {
      this.regularLoop();
      this.onMonitorRiskBus();
      this.onMonitorRiskBranch();
    }
  },
  render() {
    // We don't need to render
    // anything with this component
    return null;
  }
};
</script>

