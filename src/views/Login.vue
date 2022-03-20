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
          :startAsTransparent="true"
          ref="slideshow"
          class="background"
        />
        <v-container fluid fill-height style="position: absolute">
          <v-layout align-center justify-center>
            <v-flex xs12 sm8 md6 lg6>
              <v-card flat class="mx-auto" max-width="600" :color="color">
                <v-card-text>
                  <div class="layout column align-center">
                    <svg
                      xmlns="http://www.w3.org/2000/svg"
                      viewBox="0 0 81.01 76.4"
                      width="120"
                      height="120"
                    >
                      <path
                        d="M40.41 40.7H1.59C0 40.7 0 40.7 0 39.1v-2.59a.86.86 0 0 1 1-1h78.92c.66 0 1.06.33 1.07 1v3.24a.83.83 0 0 1-.93.9H40.41zM27 31.82H1.47c-1.4 0-1.45 0-1.45-1.45v-2.68c0-.68.32-1 1-1h46.42c1.58 0 1.58 0 1.58-1.57V1.6C49 .1 49.1 0 50.57 0h2.31c.77 0 1.19.27 1.12 1.13S54 3 54 4v26c0 1.84 0 1.85-1.8 1.85zM53.93 44.57h25.43c1.52 0 1.64.12 1.65 1.61v2.31c0 .77-.32 1.1-1.06 1.08H33.26c-1.43 0-1.43 0-1.43 1.42v23.77c0 1.57-.07 1.63-1.61 1.63h-2.4c-.8 0-1.19-.37-1.16-1.18V46.64c0-2.07 0-2.07 2-2.07z"
                        fill="#2c86d8"
                        class="svg-elem-1"
                      ></path>
                      <path
                        d="M58.27 53.44h21.08c1.55 0 1.66.1 1.66 1.69v2.41c0 .81-.33 1.09-1.06 1.09H42.14c-1.43 0-1.43 0-1.43 1.43v14.79c0 1.44-.1 1.53-1.51 1.53h-2.31c-1.14 0-1.34-.21-1.34-1.37V55.15c0-1.61.09-1.71 1.75-1.71zM22.49 22.94H1.42c-1.34 0-1.4-.06-1.4-1.42v-2.86a.77.77 0 0 1 .9-.89h37.8c1.42 0 1.42 0 1.42-1.44V1.44c0-1.3.13-1.42 1.44-1.43h2.49c.83 0 1.1.32 1.09 1.1V21.62c0 1.23-.09 1.32-1.31 1.32z"
                        fill="#2c86d8"
                        class="svg-elem-2"
                      ></path>
                      <path
                        d="M18.13 14.05H1.59C.13 14.05 0 13.94 0 12.47V9.79c0-.61.27-.91.89-.9h28.57c1.64 0 1.64 0 1.64-1.69V1.29c0-1.06.2-1.26 1.23-1.27s1.91 0 2.86 0c.73 0 1.07.26 1.07 1v11.83c0 1-.23 1.19-1.31 1.19H18.13zM62.76 62.51h16.72c1.4 0 1.52.13 1.53 1.53v2.41a.93.93 0 0 1-1.08 1.06H51.09c-1.5 0-1.5 0-1.5 1.54v6.19c0 .83-.3 1.19-1.14 1.15s-1.85 0-2.77 0c-.71 0-1.1-.31-1.1-1V63.47c0-.84.53-.92 1.18-.91h17z"
                        fill="#2c86d8"
                        class="svg-elem-3"
                      ></path>
                      <path
                        d="M13.74 0h12.38c1.16 0 1.26.11 1.27 1.27v2.77c0 .92-.34 1.14-1.12 1.13H1.61C.13 5.17 0 5.06 0 3.61v-2C0 0 0 0 1.54 0zM67.24 71.38h12.29c1.33 0 1.47.14 1.48 1.49v2.31c0 .77-.39 1.25-1.23 1.2H55.1c-1.51 0-1.64-.13-1.64-1.63V73.1c0-1.71 0-1.72 1.67-1.72z"
                        fill="#2c86d8"
                        class="svg-elem-4"
                      ></path>
                      <path
                        d="M69.43 22.94H59.27c-1.24 0-1.37-.15-1.37-1.39v-2.5c0-1.11.17-1.28 1.29-1.28h20.42c1.22 0 1.38.17 1.4 1.39v2.49c0 1.09-.2 1.28-1.31 1.28zM69.45 0h10.16C80.83 0 81 .19 81 1.41V3.9c0 .83-.41 1.29-1.3 1.28H59.49C58 5.17 57.9 5 57.9 3.6V1.29c0-1.1.17-1.27 1.3-1.27zM69.56 8.89h10c1.32 0 1.46.15 1.47 1.5v1.94c0 1.56-.17 1.72-1.77 1.72H59.47c-1.44 0-1.57-.14-1.57-1.59v-2.13c0-1.31.12-1.44 1.41-1.44zM69.43 31.82H59.27c-1.24 0-1.37-.14-1.37-1.39v-2.22c0-1.4.15-1.55 1.52-1.55h20c1.45 0 1.63.2 1.64 1.67v1.85c0 1.54-.11 1.64-1.61 1.64zM11.39 58.64h-10c-1.3 0-1.39-.08-1.39-1.43v-2.68c0-.89.31-1.1 1.1-1.09h20.42c1.3 0 1.42.12 1.43 1.42v2.59c0 .86-.36 1.2-1.23 1.19-3.44-.02-6.88 0-10.33 0zM11.46 49.58H1.3C.11 49.57 0 49.49 0 48.33v-2.67c0-.89.31-1.11 1.1-1.1h20.5c1.18 0 1.33.15 1.35 1.32v2.49c0 1.08-.12 1.19-1.25 1.2zM11.4 67.52H1.5C.06 67.52 0 67.47 0 66v-2.4c0-.8.31-1.1 1.09-1.09H21.71c1.12 0 1.22.11 1.23 1.22v2.5c0 1.12-.17 1.28-1.29 1.28zM11.45 76.39H1.3c-1.16 0-1.3-.12-1.3-1.26v-2.59c0-.86.34-1.17 1.2-1.17h20.5c1.15 0 1.24.1 1.25 1.28v2.49c0 1.06-.19 1.23-1.25 1.23-3.42.03-6.83.02-10.25.02z"
                        fill="#04153e"
                        class="svg-elem-5"
                      ></path>
                    </svg>
                    <!-- <img
                      src="../assets/grid.svg"
                      alt="Vue Material Admin"
                      width="120"
                      height="120"
                    /> -->
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

