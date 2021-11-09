<template>
	<v-layout row justify-center>
		<v-dialog v-model="show" max-width="500px">
			<v-card>
				<v-card-title>
					<span class="headline">Start</span>
				</v-card-title>
				<v-card-text>
					<v-container grid-list-md>
						<v-layout wrap>
							<v-flex xs12>
								<v-text-field disabled label="Seconds to stop" v-model.lazy="time" required :rules="[rules.prohibited]" @keyup.enter="enterClicked"></v-text-field>
							</v-flex>
							<!-- <v-flex xs12>
								<v-text-field label="Content" v-model.lazy="content" @keyup.enter="enterClicked"></v-text-field>
							</v-flex> -->
						</v-layout>
					</v-container>
				</v-card-text>
				<v-card-actions>
					<v-spacer></v-spacer>
					<v-btn color="blue darken-1" flat @click.native="activate">Activate</v-btn>
				</v-card-actions>
			</v-card>
		</v-dialog>
	</v-layout>
</template>

<style>

</style>

<script>
export default {
	props: {
		visible: {
			type: Boolean,
			default: false
		},
		topic: {
			default: ''
		}
	},
	data() {
		return {
			content: '',
			time: null,
			rules: {
				prohibited: value =>
					(value != 'data' && value != 'user' && value != 'note') ||
					'Cannot use the reserved topic'
			}
		};
	},
	computed: {
		show: {
			get() {
				return this.visible;
			},
			set(value) {
				if (!value) {
					this.display = [];
					this.childshow = false;
					this.$emit('close');
				}
			}
		}
	},
	methods: {
		activate() {
			if(!this.time){
				if(this.$store.state.status != 'paused'){
					this.$store.commit('trigstartsim');
				} else {
					this.$store.commit('trigcontinuesim');
				}
			} else {
				this.$store.commit('trigsimtoseconds', +this.time);
			}
			this.show = false;
		},
		enterClicked() {
			this.activate();
		}
	}
};
</script>
