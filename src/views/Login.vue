<template>
  <div>
    <v-app dark v-if="showDash">
      <dashboard v-if="showDash"></dashboard>
    </v-app>
    <!-- <v-app class="app"></v-app> -->
    <v-app dark v-else id="login" class="primary">
      <v-main>
        <v-container fluid fill-height>
          <v-layout align-center justify-center>
            <v-flex xs12 sm8 md6 lg6>
              <v-card class="mx-auto" max-width="600">
                <v-card-text>
                  <div class="layout column align-center">
                    <img
                      src="../assets/grid.svg"
                      alt="Vue Material Admin"
                      width="120"
                      height="120"
                    />
                    <h1 class="flex my-4 primary--text">Gridverse</h1>
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
                        <v-text-field
                          name="ip"
                          label="IP Address"
                          v-model="ip"
                        ></v-text-field>
                      </v-flex>
                      <v-flex xs4 v-if="ds_direct">
                        <v-text-field
                          name="port"
                          label="Port"
                          v-model="port"
                        ></v-text-field>
                      </v-flex>
                    </v-layout>
                    <v-layout v-if="!ds_direct">
                      <v-flex xs12>
                        <v-text-field
                          name="server_port"
                          label="Server Port"
                          v-model="server_port"
                        ></v-text-field>
                      </v-flex>
                    </v-layout>
                    <v-select
                      disabled
                      :items="items"
                      label="Area"
                      v-model="area"
                      menu-props="auto"
                    ></v-select>
                  </v-form>
                </v-card-text>
                <v-card-actions id="step2" class="pa-5">
                  <!-- <v-checkbox label="Administrator" v-model="checkbox"></v-checkbox> -->
                  <v-checkbox
                    label="Connect to DS"
                    v-model="ds_direct"
                  ></v-checkbox>
                  <v-spacer></v-spacer>
                  <v-btn text color="primary" @click="login" :loading="loading"
                    >Login</v-btn
                  >
                </v-card-actions>
              </v-card>
            </v-flex>
          </v-layout>
        </v-container>
      </v-main>
    </v-app>
  </div>
</template>

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
  },
};

export default {
  data() {
    return {
      loading: false,
      model: {
        username: "Admin",
        password: "password",
      },
      showDash: false,
      items: Object.keys(this.$store.state.casedetail.content.Area).concat([
        "Not specified",
      ]),
      checkbox: false,
      area: 2, //null
      simID: "000",
      accessCode: null,
      ip: "localhost",
      port: "5557",
      server_port: "9999",
      ds_direct: true,
      rules: {
        id: (value) => {
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
        },
      },
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
          server_port: this.server_port,
        };
        if (this.ds_direct) {
          ipcRenderer.send("connect", encode(config));
        }
        this.$store.commit("setLoginInfo", config);
        this.$store.commit("setArea", this.area);
        this.$store.commit("setSimID", "S" + this.simID);
        this.$store.commit("setUsername", this.model.username);
        this.loading = true;
        setTimeout(() => {
          this.showDash = true;
          // this.$router.push('/dashboard');
        }, 1000);
      }
    },
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
      delay: 0,
    }),
  },
};
</script>

