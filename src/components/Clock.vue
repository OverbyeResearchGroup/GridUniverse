<template>
    <div id="MyClockDisplay" class="clock"></div>
</template>

<script>
import { mapGetters } from 'vuex';

export default {
    methods: {
        showTime(){
            if(this.$store.state.currentTime) {
                var date = new Date(this.$store.state.currentTime*1000);
                var h = date.getHours(); // 0 - 23
                var m = date.getMinutes(); // 0 - 59
                var s = date.getSeconds(); // 0 - 59
                if(h == 0){
                    h = 12;
				}
				m = (60*h + m) % 24;
                h = (h < 10) ? "0" + h : h;
                m = (m < 10) ? "0" + m : m;
				s = (s < 10) ? "0" + s : s;

				var time = m + ":" + s + ":" + "00";  // In this case, if the m goes from 59 to 0, the display will goes from 11 to 0 which is not what we want
				this.$store.commit('setClock', time);

                // var time = h + ":" + m + ":" + s;
                document.getElementById("MyClockDisplay").innerText = time;
                document.getElementById("MyClockDisplay").textContent = time;
            };
        }
    },
    mounted(){
        this.showTime();
    },
    computed: {
		...mapGetters([
            'getCurrentTime'
            ])
	},
	watch: {
		getCurrentTime: function() {
			this.showTime();
		}
	}
}
</script>

<style>
.clock {
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translateX(-50%) translateY(-50%);
    color: rgb(9, 129, 156);
    font-size: 20px;
    font-family: Orbitron;
    /* letter-spacing: 7px; */
}
</style>
