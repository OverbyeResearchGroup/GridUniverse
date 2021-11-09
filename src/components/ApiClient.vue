<template>
	<div>{{ info }}</div>
</template>

<script>
import axios from 'axios';

export default {
	name: 'ApiClient',
	props: {
		link: String,
		interval: {
			type: Number,
			default: 0
		}
	},
	data() {
		return {
			info: null
		};
	},
	created() {
		if (this.interval == 0) {
			var session_url = this.link;
			var uname = 'b18f956b3ad8d';
			var pass = 'Mjg0MDE4MjAyNjA3MjUwMzUxNTcxNjkyNTkxMjgyMjU3OTC';
			axios({
				// headers: {
				// 	Authorization:
				// 		'Basic YjE4Zjk1NmIzYWQ4ZDpNamcwTURFNE1qQXlOakEzTWpVd016VXhOVGN4TmpreU5Ua3hNamd5TWpVM09UQw=='
				// },
				// headers: {
				// 	'Content-Type': 'application/x-www-form-urlencoded'
				// },
				method: 'GET',
				url: this.link,
				withCredentials: true,
				auth: {
					username: 'b18f956b3ad8d',
					password: 'Mjg0MDE4MjAyNjA3MjUwMzUxNTcxNjkyNTkxMjgyMjU3OTC'
				}
			}).then(response => (this.info = response));
		} else {
			setInterval(() => {
				axios
					.get(
						this.link,
						{},
						{
							headers: {
								Authorization:
									'Basic YjE4Zjk1NmIzYWQ4ZDpNamcwTURFNE1qQXlOakEzTWpVd016VXhOVGN4TmpreU5Ua3hNamd5TWpVM09UQw=='
							},
							withCredentials: true,
							auth: {
								username: 'b18f956b3ad8d',
								password: 'Mjg0MDE4MjAyNjA3MjUwMzUxNTcxNjkyNTkxMjgyMjU3OTC'
							}
						}
					)
					.then(response => (this.info = response));
			}, this.interval);
		}
	}
};
</script>

<style scoped>
</style>
