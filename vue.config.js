// const { dependencies } = require('package.json')
// let whiteListedModules = ["@supermap/iclient-leaflet"]
const LodashModuleReplacementPlugin = require("lodash-webpack-plugin");

module.exports = {
  // publicPath: '/~zeyumao2/',
  transpileDependencies: [
    'vue-echarts',
    'resize-detector',
    'vuetify'
  ],
  chainWebpack: (config) => {
    config.plugin("loadshReplace").use(new LodashModuleReplacementPlugin());
  },
  configureWebpack: {
    // Configuration applied to all builds
    optimization: {
      splitChunks: {
        chunks: 'all'
      },
      nodeEnv: 'production',
      minimize: true
    },
    externals: [
      ...Object.keys({}).filter(d => !whiteListedModules.includes(d))]
  },
  pluginOptions: {
    electronBuilder: {
      nodeIntegration: true,
      contextIsolation: false,
      chainWebpackRendererProcess(config) {
        config.plugins.delete('workbox')
        config.plugins.delete('pwa')
      },
      builderOptions: {
        win: {
          'signAndEditExecutable': false,
          "icon": "src/assets/grid.ico",
          "compression": "maximum",
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
