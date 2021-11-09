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
  pluginOptions: {
    electronBuilder: {
      builderOptions: {
        win: {
          'signAndEditExecutable': false,
          target: [
            'portable'
          ]
        },
        portable: {
          artifactName: '${name}-${version}.exe'
        },
        extraFiles: [
          {
            "from": "pydist",
            "to": "resources/pydist",
            "filter": ["**/*"]
          }
        ]
      }

    }
  }
}