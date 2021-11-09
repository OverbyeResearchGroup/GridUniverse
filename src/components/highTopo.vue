<template>
	<div id="testTopo" class="orangetest">
		<!-- <div class="topo"></div> -->
	</div>
</template>

<script>
// import * as ht from "../../static/utils/core/ht";

export default {
	data() {
		return {};
	},
	methods: {
		init() {
			let displayUrl = 'json/system.json';
			let fitContent = true;
			var gv = new ht.graph.GraphView();
			let dataModel = gv.dm();
			var view = gv.getView();
			view.className = 'topo';
			var parent = document.getElementById('testTopo');
			console.log(parent);
			parent.appendChild(view);
			// dataModel.enableDataBindings();
			// dataModel.enableAnimat();
			gv.setMovableFunc(function(data) {
				return false;
			});
			gv.enableEvent();

			ht.Default.xhrLoad(displayUrl, function(text) {
				let json = ht.Default.parse(text);
				dataModel.deserialize(json);

				// dataModel.initFunc(graphView)// 初始化函数
				// dataModel.initDataSource() // 数据源

				if (fitContent) {
					gv.fitContent(true, 20);
					window.addEventListener(
						'resize',
						function() {
							gv.fitContent(true, 20);
						},
						false
					);
				}
			});
			gv.getCanvas().style.left = '0';
			console.log('Finish rendering');

			// var gv = new ht.graph.GraphView();
			// var node = new ht.Node();
			// node.setPosition(20, 20);
			// node.setName('node');
			// gv.getDataModel().add(node);
			// var view = gv.getView();
			// view.className = 'topo';
			// var parent = document.getElementById('testTopo');
			// console.log(parent);
			// parent.appendChild(view);
			// gv.addBottomPainter(function(g) {
			// 	var viewRect = gv.getViewRect();
			// 	var zoom = gv.getZoom();
			// 	var startX = viewRect.x;
			// 	var endX = startX + viewRect.width;
			// 	var startY = viewRect.y;
			// 	var endY = startY + viewRect.height;
			// 	g.save();
			// 	g.beginPath();
			// 	g.fillStyle = '#ddd';
			// 	for (var i = startX, ii = 0; i < endX; i += 10 / zoom, ii++) {
			// 		for (var j = startY, jj = 0; j < endY; j += 10 / zoom, jj++) {
			// 			if ((ii % 2 != 0 && jj % 2 != 0) || (ii % 2 == 0 && jj % 2 == 0)) {
			// 				g.rect(i, j, 10 / zoom, 10 / zoom);
			// 			}
			// 		}
			// 	}
			// 	g.fill();
			// 	g.restore();
			// });
			// gv.getCanvas().style.left = '0';
			// console.log('Finish rendering');
		}
	},
	created() {},
	mounted() {
		this.init();
	}
};
</script>

<style>
.topo {
	position: absolute;
	/* left: 0;
	right: 0;
	top: 0;
	bottom: 0; */
	/* background-color: rgb(255, 255, 255); */
	height: 500px;
	width: 100%;
}

.orangetest {
	height: 500px;
	width: 100%;
	background-color: rgb(0, 0, 0);
}
</style>
