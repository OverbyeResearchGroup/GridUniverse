<template>
  <div>
    <v-app dark v-if="showDash" class="app">
      <dashboard v-if="showDash"></dashboard>
    </v-app>
    <!-- <v-app class="app"></v-app> -->
    <v-app dark v-else id="login" class="primary">
      <v-content>
        <v-container fluid fill-height>
          <v-layout align-center justify-center>
            <v-flex xs12 sm8 md4 lg4>
              <v-card class="elevation-1 pa-3">
                <v-card-text>
                  <div class="layout column align-center">
                    <img src="../assets/logo.png" alt="Vue Material Admin" width="120" height="120" />
                    <h1 class="flex my-4 primary--text">PowerWeb</h1>
                  </div>

                  <v-form id="step1">
                    <v-text-field
                      append-icon="person"
                      name="login"
                      label="Name"
                      type="text"
                      v-model="model.username"
                    ></v-text-field>
                    <v-text-field
                      append-icon="build"
                      name="simID"
                      label="Simulation ID"
                      :rules="[rules.id]"
                      v-model="simID"
                      v-on:keyup.enter="login"
                    ></v-text-field>
                    <v-layout>
                      <v-flex grow>
                        <v-text-field name="ip" label="IP Address" v-model="ip"></v-text-field>
                      </v-flex>
                      <v-flex xs4 v-if="ds_direct">
                        <v-text-field name="port" label="Port" v-model="port"></v-text-field>
                      </v-flex>
                    </v-layout>
                    <v-layout v-if="!ds_direct">
                      <v-flex xs6>
                        <v-text-field name="pub_port" label="Pub Port" v-model="pub_port"></v-text-field>
                      </v-flex>
                      <v-flex xs6>
                        <v-text-field name="sub_port" label="Sub Port" v-model="sub_port"></v-text-field>
                      </v-flex>
                    </v-layout>
                    <v-select disabled :items="items" label="Area" v-model="area" menu-props="auto"></v-select>
                  </v-form>
                </v-card-text>
                <v-card-actions id="step2">
                  <!-- <v-checkbox label="Administrator" v-model="checkbox"></v-checkbox> -->
                  <v-checkbox label="DS Direct" v-model="ds_direct"></v-checkbox>
                  <v-spacer></v-spacer>
                  <v-btn block color="primary" @click="login" :loading="loading">Login</v-btn>
                </v-card-actions>
              </v-card>
            </v-flex>
          </v-layout>
        </v-container>
      </v-content>
    </v-app>
  </div>
</template>

<style>
styleDash {
  position: "absolute";
  width: "100%";
}
</style>

<style scoped lang="css">
/* #login {
	height: 50%;
	width: 100%;
	position: absolute;
	top: 0;
	left: 0;
	content: '';
	z-index: 0;
} */
</style>

<script>
import { ipcRenderer } from "electron";
import Spinner from "vue-spinkit";
import { encode, decode } from "@msgpack/msgpack";

const dashboard = import("../components/Dashboard");
const loadingComponent = {
  render(h) {
    return <Spinner name="pacman" color="#2243a5" class="loading" />;
  }
};

export default {
  data() {
    return {
      loading: false,
      model: {
        username: "Admin",
        password: "password"
      },
      showDash: false,
      items: Object.keys(this.$store.state.casedetail.content.Area).concat([
        "Not specified"
      ]),
      checkbox: false,
      area: 2, //null
      simID: "000",
      accessCode: null,
      ip: "localhost",
      port: "5557",
      pub_port: "5556",
      sub_port: "5555",
      ds_direct: true,
      rules: {
        id: value => {
          const pattern = /[0-9]/g;
          if (value) {
            if (value.length == 3 && value.match(pattern).length == 3) {
              return true;
            } else {
              return false;
            }
          } else {
            return false;
          }
        }
      }
    };
  },
  methods: {
    login() {
      if (this.checkbox) {
        this.$store.commit("onAdmin");
      }
      if (true) {
        // if (this.ds_direct) {
        //   console.log(this.ip, this.port);
        //   ipcRenderer.send("connect", this.ip, this.port);
        // }
        const config = {
          direct: this.ds_direct,
          ip: this.ip,
          port: this.port,
          pub_port: this.pub_port,
          sub_port: this.sub_port
        };
        ipcRenderer.send("connect", encode(config));
        this.$store.commit("setArea", this.area);
        this.$store.commit("setSimID", "S" + this.simID);
        this.$store.commit("setUsername", this.model.username);
        this.loading = true;
        setTimeout(() => {
          this.showDash = true;
          // this.$router.push('/dashboard');
        }, 1000);
      }
    }
  },
  mounted() {},
  components: {
    Spinner,
    dashboard: () => ({
      component: dashboard,
      // component: new Promise(resolve => {
      // 	setTimeout(() => {
      // 		resolve(dashboard);
      // 	}, 3000);
      // }),
      loading: loadingComponent,
      delay: 0
    })
  }
};
</script>

