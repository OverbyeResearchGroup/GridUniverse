// const { dependencies } = require('package.json')
// let whiteListedModules = ["@supermap/iclient-leaflet"]
// const zlib = require('zlib');
const LodashModuleReplacementPlugin = require("lodash-webpack-plugin");
const FileManagerPlugin = require('filemanager-webpack-plugin');

module.exports = {
  // publicPath: '/~zeyumao2/',
  publicPath: './',
  outputDir: 'resources',
  productionSourceMap: false,
  transpileDependencies: [
    'vue-echarts',
    'resize-detector',
    'vuetify'
  ],
  chainWebpack: config => {
    config.plugin("loadshReplace").use(new LodashModuleReplacementPlugin({
      'shorthands': true
    }));
    config.module
      .rule('images')
      .use('image-webpack-loader')
      .loader('image-webpack-loader')
      .options({
        bypassOnDebug: true
      })
      .end()
  },
  configureWebpack: {
    // Configuration applied to all builds
    mode: "production",
    plugins: [
      new FileManagerPlugin({
        events: {
          onEnd: {
            copy: [{ source: './resources/neutralino.js', destination: './resources/js/neutralino.js' }]
          }
        }
      }),
    ],
    optimization: {
      splitChunks: {
        // chunks: 'all'
        cacheGroups: {
          vendor: {//第三方库抽离
            chunks: 'all',
            test: /node_modules/,
            name: 'vendor',
            minChunks: 1,//在分割之前，这个代码块最小应该被引用的次数
            maxInitialRequests: 5,
            minSize: 0,//大于 0 个字节
            priority: 100//权重
          },
          common: {  //公用模块抽离
            chunks: 'all',
            test: /[\\/]src[\\/]js[\\/]/,
            name: 'common',
            minChunks: 2, //在分割之前，这个代码块最小应该被引用的次数
            maxInitialRequests: 5,
            minSize: 0,//大于 0 个字节
            priority: 60
          },
          styles: { //样式抽离
            name: 'styles',
            test: /\.(sa|sc|c)ss$/,
            chunks: 'all',
            enforce: true
          },
          runtimeChunk: {
            name: 'manifest'
          }
        }
      },
      nodeEnv: 'production',
      minimize: true
    },
    // module: {
    //   rules: [
    //     {
    //       test: /\.js$/,
    //       loader: "webpack-remove-debug",
    //     }
    //   ]
    // },
    externals: [
      ...Object.keys({}).filter(d => !whiteListedModules.includes(d))],
  },
  pluginOptions: {
    // electronBuilder: {
    //   nodeIntegration: true,
    //   contextIsolation: false,
    //   chainWebpackRendererProcess(config) {
    //     config.plugins.delete('workbox')
    //     config.plugins.delete('pwa')
    //   },
    //   builderOptions: {
    //     win: {
    //       'signAndEditExecutable': false,
    //       "icon": "src/assets/grid.ico",
    //       target: [
    //         'portable'
    //       ]
    //     },
    //     portable: {
    //       artifactName: '${name}-${version}.exe'
    //     },
    //     extraFiles: [
    //       {
    //         "from": "pydist",
    //         "to": "resources/pydist",
    //         "filter": ["**/*"]
    //       }
    //     ]
    //   }

    // }
  }
}