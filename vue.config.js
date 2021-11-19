// const { dependencies } = require('package.json')
let whiteListedModules = ["@supermap/iclient-leaflet"]

module.exports = {
  // publicPath: '/~zeyumao2/',
  transpileDependencies: [
    'vue-echarts',
    'resize-detector'
  ],
  configureWebpack: {
    // Configuration applied to all builds
    externals: [
      ...Object.keys({}).filter(d => !whiteListedModules.includes(d))]
  },
  // pluginOptions: {
  //   electronBuilder: {
  //     nodeIntegration: true,
  //     contextIsolation: false,
  //     chainWebpackRendererProcess(config) {
  //       config.plugins.delete('workbox')
  //       config.plugins.delete('pwa')
  //     },
  //     builderOptions: {
  //       win: {
  //         'signAndEditExecutable': false,
  //         "icon": "src/assets/grid.ico",
  //         target: [
  //           'portable'
  //         ]
  //       },
  //       portable: {
  //         artifactName: '${name}-${version}.exe'
  //       },
  //       extraFiles: [
  //         {
  //           "from": "pydist",
  //           "to": "resources/pydist",
  //           "filter": ["**/*"]
  //         }
  //       ]
  //     }

  //   }
  // }
}