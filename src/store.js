import Vue from "vue";
import Vuex from "vuex";
import datafield from "./assets/datafields.json";
import tcmcommands from "./assets/tcmcommands.json";
// import casedetail from './assets/150G.json';
import casedetail from "./assets/2019GA.json";
// import casedetail from './assets/test.json';
import areadetail from "./assets/2019GAR.json";
import notificationSystem from "./assets/notificationsettings";
// import casedetail from './assets/150.json'

let rawData = [];

Vue.use(Vuex);

export default new Vuex.Store({
    state: {
        username: "",
        toPublish: 0,
        message: "",
        UUID: "",
        fieldstore: datafield,
        tcmcommands: tcmcommands,
        casedetail: casedetail,
        areadetail: areadetail,
        rawdata: {},
        newsubscribe: [],
        newpublish: [],
        startsim: 0,
        pausesim: 0,
        continuesim: 0,
        abortsim: 0,
        ready4start: false,
        page: "Home",
        notificationSystem,
        badge: 0,
        badgelist: [],
        badgeShow: false,
        subDetail: {},
        busDetail: {},
        totalCapacity: (function() {
            var temp = 0;
            for (let ele in areadetail.content.Gen) {
                if (casedetail.content.Gen[ele]["Single.MW Max Limit"] != 0) {
                    temp += casedetail.content.Gen[ele]["Single.MW Max Limit"];
                }
            }
            return temp;
        })(),
        violatedLines: [],
        violatedBuses: [],
        selectedShunts: [],
        selectedGens: [],
        selectedLoads: [],
        alarm: [],
        totalCost: 0,
        genData: [],
        totalMWh: 0,
        unitTimeCost: null,
        ACE: 30, // for test,
        isAdmin: false,
        simtime: null,
        slider: 150,
        startTime: null,
        currentTime: null,
        lapse: null,
        status: "offline",
        report: {
            name: null,
            user: [],
            data: [],
            score: [],
            violate: [],
            comment: null
        },
        areaData: [],
        areaLoad: [],
        busVoltage: [],
        data: [],
        riskBuses: [],
        riskBranches: [],
        notMuted: true,
        area: null,
        subData: null,
        lineData: null,
        transformerDict: null,
        areaHelper: null,
        otherArea: null,
        parsedData: null,
        center: null,
        showTour: true,
        simID: null,
        branchData: null,
        transformerData: null,
        aceCost: 100,
        schedule: "0@0",
        genStat: [],
        rIndex: 100,
        simOver: 0,
        genAction: { Gen: {}, Load: {}, Shunt: {}, Branch: {} },
        clockTime: null,
        updateToggler: false,
        startToggler: false,
        loginInfo: {},
        query: 0,
        socket: null
    },
    getters: {
        rawData(state){
            state.updateToggler;
            return rawData;
        },
        getQuery(state){
            return state.query;
        },
        getPubStatus(state) {
            return state.toPublish;
        },
        getMessage(state) {
            return state.message;
        },
        getDataUpdate(state) {
            return state.rawdata;
        },
        getNewSubscribe(state) {
            return state.newsubscribe;
        },
        getNewPublish(state) {
            return state.newpublish;
        },
        startsimtrigger(state) {
            return state.startsim;
        },
        pausesimtrigger(state) {
            return state.pausesim;
        },
        continuesimtrigger(state) {
            return state.continuesim;
        },
        abortsimtrigger(state) {
            return state.abortsim;
        },
        page(state) {
            return state.page;
        },
        getBadge(state) {
            return state.badge;
        },
        getViolatedLines(state) {
            return state.violatedLines;
        },
        getViolatedBuses(state) {
            return state.violatedBuses;
        },
        getSelectedShunts(state) {
            return state.selectedShunts;
        },
        getSelectedGens(state) {
            return state.selectedGens;
        },
        getSelectedLoads(state) {
            return state.selectedLoads;
        },
        getCurrentTime(state) {
            return state.currentTime;
        },
        getLapse(state) {
            return state.lapse;
        },
        getStatus(state) {
            return state.status;
        },
        getSchedule(state) {
            return state.schedule;
        },
        getSimOver(state) {
            return state.simOver;
        },
        getStartToggler(state){
            return state.startToggler;
        }
    },
    mutations: {
        setSocket(state, socket) {
            state.socket = socket;
        },
        flipStartToggler(state){
            state.startToggler = !state.startToggler;
        },
        updateRawData(state, payload) {
            rawData = payload;
            state.updateToggler = !state.updateToggler;
        },
        setUsername(state, payload) {
            state.username = payload;
        },
        setPublish(state) {
            state.toPublish++;
        },
        reset(state) {
            state.toPublish = 0;
        },
        setMessage(state, payload) {
            state.message = payload;
        },
        query(state){
            state.query++;
        },
        setUUID(state, payload) {
            state.UUID = payload;
        },
        updateConfig(state, payload) {
            state.casedetail = payload;
        },
        setnewsubscribe(state, payload) {
            state.newsubscribe = payload;
        },
        setnewpublish(state, payload) {
            state.newpublish = payload;
        },
        trigstartsim(state) {
            state.startsim++;
        },
        trigcontinuesim(state) {
            state.continuesim++;
        },
        trigsimtoseconds(state, payload) {
            state.simtime = payload;
            state.startsim++;
        },
        trigpausesim(state) {
            state.pausesim++;
        },
        trigabortsim(state) {
            state.abortsim++;
        },
        clearsimtime(state) {
            state.simtime = null;
        },
        setstartready(state) {
            state.ready4start = true;
        },
        setstartdisable(state) {
            state.ready4start = false;
        },
        setpage(state, payload) {
            state.page = payload;
        },
        updatebadge(state) {
            state.badge++;
            state.badgeShow = true;
        },
        resetbadge(state) {
            state.badge = 0;
            state.badgeShow = false;
        },
        updatebadgelist(state, payload) {
            state.badgelist.unshift(payload);
        },
        resetbadgelist(state) {
            state.badgelist = [];
        },
        updateSubDetail(state, payload) {
            state.subDetail = payload;
        },
        updateBusDetail(state, payload) {
            state.busDetail = payload;
        },
        addLine(state, payload) {
            state.violatedLines.push(payload);
        },
        removeLine(state, payload) {
            state.violatedLines.pop(payload);
        },
        updateSelectedBranches(state, payload) {
            state.violatedLines = payload;
        },
        updateVBuses(state, payload) {
            state.violatedBuses = payload;
        },
        updateSelectedShunts(state, payload) {
            state.selectedShunts = payload;
        },
        updateSelectedGens(state, payload) {
            state.selectedGens = payload;
        },
        updateSelectedLoads(state, payload) {
            state.selectedLoads = payload;
        },
        triggerAlarm(state, payload) {
            if (!(payload in state.alarm)) {
                state.alarm.push(payload);
            }
        },
        dismissAlarm(state, payload) {
            if (payload in state.alarm) {
                state.alarm.pop(payload);
            }
        },
        updateGenData(state, payload) {
            state.genData = payload;
        },
        addCost(state, payload) {
            state.totalCost = state.totalCost + payload;
        },
        resetTotalCost(state) {
            state.totalCost = 0;
            state.totalMWh = 0;
            state.genData = state.genData.map(e => {
                e.AGC = false;
                return e;
            });
        },
        addMWh(state, payload) {
            state.totalMWh = state.totalMWh + payload;
        },
        updateUnitTimeCost(state, payload) {
            state.unitTimeCost = payload;
        },
        toggleALL(state, payload) {
            for (let i in state.genData) {
                if (state.genData[i].Status) {
                    state.genData[i].AGC = payload;
                }
            }
        },
        onAdmin(state) {
            state.isAdmin = true;
        },
        setStartTime(state, payload) {
            state.startTime = payload;
        },
        setCurrentTime(state, payload) {
            state.currentTime = payload;
            if (state.startTime) {
                state.lapse = +(state.currentTime - state.startTime);
            }
        },
        setCurrentStatus(state, payload) {
            state.status = payload;
        },
        setReportName(state, payload) {
            state.report.name = payload;
        },
        addReportData(state, payload) {
            state.report.data.push(payload);
        },
        addReportScore(state, payload) {
            state.report.score.push(payload);
        },
        addReportUser(state, payload) {
            state.report.user.push(payload);
        },
        addReportViolate(state, payload) {
            state.report.violate.push(payload);
        },
        setReportComment(state, payload) {
            state.report.comment = payload;
        },
        resetReport(state) {
            state.report = {
                name: null,
                user: [],
                data: [],
                score: [],
                violate: [],
                comment: null
            };
        },
        setAreaData(state, payload) {
            state.areaData = payload;
        },
        setData(state, payload) {
            state.data = payload;
        },
        setRiskBuses(state, payload) {
            state.riskBuses = payload;
        },
        setRiskBranches(state, payload) {
            state.riskBranches = payload;
        },
        toggleMute(state) {
            state.notMuted = !state.notMuted;
        },
        setArea(state, payload) {
            state.area = payload;
        },
        setLoginInfo(state, payload){
            state.loginInfo = payload;
        },
        setSubData(state, payload) {
            state.subData = payload;
        },
        setLineData(state, payload) {
            state.lineData = payload;
        },
        setTransformerDict(state, payload) {
            state.transformerDict = payload;
        },
        setAreaHelper(state, payload) {
            state.areaHelper = payload;
        },
        setOtherArea(state, payload) {
            state.otherArea = payload;
        },
        setParsedData(state, payload) {
            state.parsedData = payload;
        },
        setCenter(state, payload) {
            state.center = payload;
        },
        disableTour(state) {
            state.showTour = false;
        },
        setSimID(state, payload) {
            state.simID = payload;
        },
        setBranchData(state, payload) {
            state.branchData = payload;
        },
        setTransformerData(state, payload) {
            state.transformerData = payload;
        },
        setSchedule(state, payload) {
            state.schedule = payload;
        },
        setACE(state, payload) {
            state.ACE = payload;
        },
        setGenStat(state, payload) {
            state.genStat = payload;
        },
        setRIndex(state, payload) {
            state.rIndex = payload;
        },
        setSimOver(state) {
            state.simOver++;
        },
        recordAction(state, payload) {
            if (state.genAction[payload[0]][payload[1]]) {
                state.genAction[payload[0]][payload[1]].push(state.currentTime);
            } else {
                state.genAction[payload[0]][payload[1]] = [state.currentTime];
            }
        },
        resetAction(state) {
            state.genAction = { Gen: {}, Load: {}, Shunt: {}, Branch: {} };
        },
        setAreaLoad(state, payload) {
            if (state.status == "running") {
                state.areaLoad.push(payload);
            }
        },
        setBusVoltage(state, payload) {
            if (state.status == "running") {
				// if (state.busVoltage.length == 0){
				// 	state.busVoltage.push()
				// }
				state.busVoltage.push(payload);
                // try {
                //     state.busVoltage[0].push(payload[0]);
                //     for (let i in payload[1]) {
                //         state.busVoltage[i].push(payload[1][i]);
                //     }
                // } catch (error) {
                //     state.busVoltage.push(['Bus', payload[0]]);
                //     for (let i in payload[1]) {
                //         state.busVoltage.push([i, payload[1][i]]);
                //     }
                // }
            }
        },
        resetAreaLoad(state) {
            state.areaLoad = [];
        },
        resetBusVoltage(state) {
            state.busVoltage = [];
        },
        setClock(state, payload) {
            state.clockTime = payload;
        },
        resetClock(state, payload) {
            state.clockTime = "10:00:00";
        }
    },
    actions: {
        updatemessage({ commit }, payload) {
            commit("setMessage", payload);
        }
    }
});
