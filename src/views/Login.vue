<template>
  <div>
    <v-app dark v-if="showDash">
      <dashboard v-if="showDash"></dashboard>
    </v-app>
    <!-- <v-app class="app"></v-app> -->
    <v-app dark v-else id="login" class="dark">
      <v-main>
        <vue-displacement-slideshow
          :images="images"
          :displacement="require('../assets/displacement.png')"
          :intensity="0.1"
          :speedIn="0.4"
          :speedOut="0.3"
          ease="expo.inOut"
          :startAsTransparent=true
          ref="slideshow"
          class="background"
        />
        <v-container fluid fill-height style="position: absolute">
          <v-layout align-center justify-center>
            <v-flex xs12 sm8 md6 lg6>
              <v-card flat class="mx-auto" max-width="600" :color="color">
                <v-card-text>
                  <div class="layout column align-center">
                    <img
                      src="../assets/grid.svg"
                      alt="Vue Material Admin"
                      width="120"
                      height="120"
                    />
                    <!-- <h1 class="flex my-4 primary--text">Gridverse</h1> -->

                    <div class="logo-letters-group">
                      <transition-group
                        @leave="loaded"
                        v-on:after-appear="loaded"
                        appear
                      >
                        <span
                          class="logo-letter"
                          v-for="(item, index) in logoName"
                          :key="index"
                          >{{ item }}</span
                        >
                      </transition-group>
                    </div>
                  </div>

                  <v-form id="step1" v-if="show">
                    <v-text-field
                      append-icon="person"
                      name="login"
                      label="Name"
                      type="text"
                      v-model="model.username"
                    ></v-text-field>
                    <!-- <v-text-field
                      append-icon="build"
                      name="simID"
                      label="Simulation ID"
                      :rules="[rules.id]"
                      v-model="simID"
                      v-on:keyup.enter="login"
                    ></v-text-field> -->
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
                          label="DS Port"
                          v-model="port"
                        ></v-text-field>
                      </v-flex>
                    </v-layout>
                    <v-layout>
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
                <v-card-actions id="step2" class="pa-5" v-if="show">
                  <!-- <v-checkbox label="Administrator" v-model="checkbox"></v-checkbox> -->
                  <v-checkbox
                    label="Connect to DS"
                    v-model="ds_direct"
                    disabled
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
        <!-- </vue-displacement-slideshow> -->
      </v-main>
    </v-app>
  </div>
</template>

<style lang="scss" scoped>
/* #login {
	height: 50%;
	width: 100%;
	position: absolute;
	top: 0;
	left: 0;
	content: '';
	z-index: 0;
} */
.background {
  /* background: no-repeat center center fixed;
  background-size: cover;
  height: 100vh;
  z-index: 1; */
  position: absolute;
}

.logo-letters-group {
  font-family: "Avenir", Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  font-size: 15px;
  font-weight: 700;
  color: #000;
  letter-spacing: 3px;

  @for $n from -1 through (9) * -1 {
    span:nth-child(#{abs($n)}) {
      animation-delay: abs($n) * 0.2s + 2s;
    }
  }
}

.logo-letter {
  animation-iteration-count: 1;
  animation-name: fromBlackToBlue;
  animation-duration: 0.3s;
  animation-direction: normal;
  animation-fill-mode: forwards;
}

@keyframes fromBlackToBlue {
  0% {
    color: #000;
  }
  100% {
    color: #81d4fa;
  }
}
</style>

<script>
// import { Command } from "@tauri-apps/api/shell";
// import { resourceDir, currentDir } from "@tauri-apps/api/path";
import Spinner from "vue-spinkit";
import { encode } from "@msgpack/msgpack";
import VueDisplacementSlideshow from "vue-displacement-slideshow";
// import { ipcRenderer } from "electron";

const dashboard = import("../components/Dashboard");
const loadingComponent = {
  render(h) {
    return <Spinner name="pacman" color="#2243a5" class="loading" />;
  },
};

export default {
  data() {
    return {
      logoName: ["G", "R", "I", "D", "V", "E", "R", "S", "E"],
      show: false,
      color: "rgba(0,0,0,0)",
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
      server_port: "9990",
      ds_direct: false,
      bg: null,
      bgId: 0,
      images: [],
      interval: null,
      counter: 0,
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
        clearInterval(this.interval);
        const config = {
          direct: this.ds_direct,
          ip: this.ip,
          port: this.port,
          server_port: this.server_port,
        };
        this.$store.commit("setLoginInfo", config);
        this.$store.commit("setArea", this.area);
        this.$store.commit("setSimID", "S" + this.simID);
        this.$store.commit("setUsername", this.model.username);
        this.loading = true;
        setTimeout(() => {
          this.showDash = true;
          // this.$router.push('/dashboard');
        }, 1000);
        setTimeout(() => {
          this.$store.state.socket.emit("register", this.model.username);
        }, 2000);
      }
    },
    loaded(el) {
      this.counter++;
      if (this.counter === 9) {
        this.$refs.slideshow.next();
        this.show = true;
        this.color = "rgba(0,0,0,0.3)";
        this.$refs.slideshow.removeImage(0);
        this.interval = setInterval(() => {
          this.$refs.slideshow.next();
        }, 8000);
      }
    },
  },
  created() {
    for (var i = 0; i <= 4; i++) {
      this.images.push(require(`../assets/background${i}.jpg`));
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
      delay: 0,
    }),
    VueDisplacementSlideshow,
  },
};
</script>

