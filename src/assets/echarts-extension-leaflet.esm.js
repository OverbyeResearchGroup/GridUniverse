/*!
 * echarts-extension-leaflet 
 * @version 1.0.0
 * @author plainheart
 * 
 * MIT License
 * 
 * Copyright (c) 2021 Zhongxiang.Wang
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */
// import * as echarts from 'echarts/lib/echarts';
import * as echarts from "echarts/core";
import { graphic, matrix, util, version as version$1, ComponentModel, ComponentView, getInstanceByDom } from 'echarts/lib/export/core';
import L, { DomUtil } from 'leaflet';

/* global L */

function dataToCoordSize(dataSize, dataItem) {
  dataItem = dataItem || [0, 0];
  return util.map([0, 1], function (dimIdx) {
    var val = dataItem[dimIdx];
    var halfSize = dataSize[dimIdx] / 2;
    var p1 = [];
    var p2 = [];
    p1[dimIdx] = val - halfSize;
    p2[dimIdx] = val + halfSize;
    p1[1 - dimIdx] = p2[1 - dimIdx] = dataItem[1 - dimIdx];
    return Math.abs(this.dataToPoint(p1)[dimIdx] - this.dataToPoint(p2)[dimIdx]);
  }, this);
}

var excludedOptions = ['layers', 'renderer', 'crs', 'maxBounds'];
var additionalOptions = ['renderOnMoving', 'largeMode', 'echartsLayerZIndex'];

function LeafletCoordSys(map, api) {
  this._map = map;
  this._api = api;
  this._mapOffset = [0, 0];
}

var LeafletCoordSysProto = LeafletCoordSys.prototype;

LeafletCoordSysProto.setZoom = function (zoom) {
  this._zoom = zoom;
};

LeafletCoordSysProto.setCenter = function (center) {
  var latlng = L.latLng(center[0], center[1]);
  this._center = this._map.latLngToLayerPoint(latlng);
};

LeafletCoordSysProto.setMapOffset = function (mapOffset) {
  this._mapOffset = mapOffset;
};

LeafletCoordSysProto.setMap = function (map) {
  this._map = map;
};

LeafletCoordSysProto.getMap = function () {
  return this._map;
};

LeafletCoordSysProto.dataToPoint = function (data) {
  var latlng = L.latLng(data[0], data[1]);

  var px = this._map.latLngToLayerPoint(latlng);

  var mapOffset = this._mapOffset;
  return [px.x - mapOffset[0], px.y - mapOffset[1]];
};

LeafletCoordSysProto.pointToData = function (pt) {
  var mapOffset = this._mapOffset;

  var lnglat = this._map.layerPointToLatLng({
    x: pt[0] + mapOffset[0],
    y: pt[1] + mapOffset[1]
  });

  return [lnglat.lat, lnglat.lng];
};

LeafletCoordSysProto.getViewRect = function () {
  var api = this._api;
  return new graphic.BoundingRect(0, 0, api.getWidth(), api.getHeight());
};

LeafletCoordSysProto.getRoamTransform = function () {
  return matrix.create();
};

LeafletCoordSysProto.prepareCustoms = function () {
  var rect = this.getViewRect();
  return {
    coordSys: {
      // The name exposed to user is always 'cartesian2d' but not 'grid'.
      type: 'leaflet',
      x: rect.x,
      y: rect.y,
      width: rect.width,
      height: rect.height
    },
    api: {
      coord: util.bind(this.dataToPoint, this),
      size: util.bind(dataToCoordSize, this)
    }
  };
};

LeafletCoordSys.create = function (ecModel, api) {
  var leafletCoordSys;
  ecModel.eachComponent('leaflet', function (leafletModel) {
    if (typeof L === 'undefined') {
      throw new Error('Leaflet api is not loaded');
    }

    if (leafletCoordSys) {
      throw new Error('Only one leaflet component can exist');
    }

    var map = leafletModel.getMap();

    if (!map) {
      var root = api.getDom();
      var painter = api.getZr().painter;
      var viewportRoot = painter.getViewportRoot();
      viewportRoot.className = 'leaflet-ec-layer';
      viewportRoot.style.visibility = 'hidden'; // Not support IE8

      var leafletRoot = root.querySelector('.ec-extension-leaflet');

      if (leafletRoot) {
        // Reset viewport left and top, which will be changed
        // in moving handler in LeafletView
        viewportRoot.style.left = '0px';
        viewportRoot.style.top = '0px';
        root.removeChild(leafletRoot);
      }

      leafletRoot = document.createElement('div');
      leafletRoot.className = 'ec-extension-leaflet';
      leafletRoot.style.cssText = 'position:absolute;top:0;left:0;bottom:0;right:0;';
      root.appendChild(leafletRoot);
      var options = util.clone(leafletModel.get());
      util.each(excludedOptions, function (key) {
        if (options.hasOwnProperty(key)) {
          delete options[key];
          console.warn("'".concat(key, "' is not supported because of the cloning policy of ECharts."));
        }
      });
      var echartsLayerZIndex = options.echartsLayerZIndex;
      util.each(additionalOptions, function (key) {
        delete options[key];
      });
      map = L.map(leafletRoot, options);
      map.getPanes().overlayPane.appendChild(viewportRoot);
      viewportRoot.style.zIndex = echartsLayerZIndex;
      viewportRoot.style.visibility = 'visible';
      leafletModel.setMap(map);
      leafletModel.setEChartsLayer(viewportRoot);
      leafletModel.__api = api; // Override

      painter.getViewportRootOffset = function () {
        return {
          offsetLeft: 0,
          offsetTop: 0
        };
      };
    }

    var center = leafletModel.get('center');
    var zoom = leafletModel.get('zoom');

    if (center && zoom) {
      var mapCenter = map.getCenter();
      var mapZoom = map.getZoom();
      var centerOrZoomChanged = leafletModel.centerOrZoomChanged([mapCenter.lat, mapCenter.lng], mapZoom);

      if (centerOrZoomChanged) {
        map.setView(center, zoom);
      }
    }

    leafletCoordSys = new LeafletCoordSys(map, api);
    leafletCoordSys.setMapOffset(leafletModel.__mapOffset || [0, 0]);
    leafletCoordSys.setZoom(zoom);
    leafletCoordSys.setCenter(center);
    leafletModel.coordinateSystem = leafletCoordSys;
  });
  ecModel.eachSeries(function (seriesModel) {
    if (seriesModel.get('coordinateSystem') === 'leaflet') {
      seriesModel.coordinateSystem = leafletCoordSys;
    }
  });
};

LeafletCoordSysProto.dimensions = LeafletCoordSys.dimensions = ['lat', 'lng'];

var isV5 = version$1.split('.')[0] > 4;
function v2Equal(a, b) {
  return a && b && a[0] === b[0] && a[1] === b[1];
}

var LeafletModel = {
  type: 'leaflet',
  setMap: function setMap(map) {
    this.__map = map;
  },
  getMap: function getMap() {
    return this.__map;
  },
  setEChartsLayer: function setEChartsLayer(layer) {
    this.__echartsLayer = layer;
  },
  getEChartsLayer: function getEChartsLayer() {
    return this.__echartsLayer;
  },
  setEChartsLayerVisiblity: function setEChartsLayerVisiblity(visible) {
    this.__echartsLayer.style.visibility = visible ? 'visible' : 'hidden';
  },
  setCenterAndZoom: function setCenterAndZoom(center, zoom) {
    this.option.center = center;
    this.option.zoom = zoom;
  },
  centerOrZoomChanged: function centerOrZoomChanged(center, zoom) {
    var option = this.option;
    return !(v2Equal(center, option.center) && zoom === option.zoom);
  },
  defaultOption: {
    center: [39.90923, 116.397428],
    zoom: 5,
    renderOnMoving: true,
    largeMode: false,
    echartsLayerZIndex: 500
  }
};
var LeafletModel$1 = isV5 ? ComponentModel.extend(LeafletModel) : LeafletModel;

var commonjsGlobal = typeof globalThis !== 'undefined' ? globalThis : typeof window !== 'undefined' ? window : typeof global !== 'undefined' ? global : typeof self !== 'undefined' ? self : {};

/**
 * lodash (Custom Build) <https://lodash.com/>
 * Build: `lodash modularize exports="npm" -o ./`
 * Copyright jQuery Foundation and other contributors <https://jquery.org/>
 * Released under MIT license <https://lodash.com/license>
 * Based on Underscore.js 1.8.3 <http://underscorejs.org/LICENSE>
 * Copyright Jeremy Ashkenas, DocumentCloud and Investigative Reporters & Editors
 */

/** Used as the `TypeError` message for "Functions" methods. */

var FUNC_ERROR_TEXT = 'Expected a function';
/** Used as references for various `Number` constants. */

var NAN = 0 / 0;
/** `Object#toString` result references. */

var symbolTag = '[object Symbol]';
/** Used to match leading and trailing whitespace. */

var reTrim = /^\s+|\s+$/g;
/** Used to detect bad signed hexadecimal string values. */

var reIsBadHex = /^[-+]0x[0-9a-f]+$/i;
/** Used to detect binary string values. */

var reIsBinary = /^0b[01]+$/i;
/** Used to detect octal string values. */

var reIsOctal = /^0o[0-7]+$/i;
/** Built-in method references without a dependency on `root`. */

var freeParseInt = parseInt;
/** Detect free variable `global` from Node.js. */

var freeGlobal = typeof commonjsGlobal == 'object' && commonjsGlobal && commonjsGlobal.Object === Object && commonjsGlobal;
/** Detect free variable `self`. */

var freeSelf = typeof self == 'object' && self && self.Object === Object && self;
/** Used as a reference to the global object. */

var root = freeGlobal || freeSelf || Function('return this')();
/** Used for built-in method references. */

var objectProto = Object.prototype;
/**
 * Used to resolve the
 * [`toStringTag`](http://ecma-international.org/ecma-262/7.0/#sec-object.prototype.tostring)
 * of values.
 */

var objectToString = objectProto.toString;
/* Built-in method references for those with the same name as other `lodash` methods. */

var nativeMax = Math.max,
    nativeMin = Math.min;
/**
 * Gets the timestamp of the number of milliseconds that have elapsed since
 * the Unix epoch (1 January 1970 00:00:00 UTC).
 *
 * @static
 * @memberOf _
 * @since 2.4.0
 * @category Date
 * @returns {number} Returns the timestamp.
 * @example
 *
 * _.defer(function(stamp) {
 *   console.log(_.now() - stamp);
 * }, _.now());
 * // => Logs the number of milliseconds it took for the deferred invocation.
 */

var now = function () {
  return root.Date.now();
};
/**
 * Creates a debounced function that delays invoking `func` until after `wait`
 * milliseconds have elapsed since the last time the debounced function was
 * invoked. The debounced function comes with a `cancel` method to cancel
 * delayed `func` invocations and a `flush` method to immediately invoke them.
 * Provide `options` to indicate whether `func` should be invoked on the
 * leading and/or trailing edge of the `wait` timeout. The `func` is invoked
 * with the last arguments provided to the debounced function. Subsequent
 * calls to the debounced function return the result of the last `func`
 * invocation.
 *
 * **Note:** If `leading` and `trailing` options are `true`, `func` is
 * invoked on the trailing edge of the timeout only if the debounced function
 * is invoked more than once during the `wait` timeout.
 *
 * If `wait` is `0` and `leading` is `false`, `func` invocation is deferred
 * until to the next tick, similar to `setTimeout` with a timeout of `0`.
 *
 * See [David Corbacho's article](https://css-tricks.com/debouncing-throttling-explained-examples/)
 * for details over the differences between `_.debounce` and `_.throttle`.
 *
 * @static
 * @memberOf _
 * @since 0.1.0
 * @category Function
 * @param {Function} func The function to debounce.
 * @param {number} [wait=0] The number of milliseconds to delay.
 * @param {Object} [options={}] The options object.
 * @param {boolean} [options.leading=false]
 *  Specify invoking on the leading edge of the timeout.
 * @param {number} [options.maxWait]
 *  The maximum time `func` is allowed to be delayed before it's invoked.
 * @param {boolean} [options.trailing=true]
 *  Specify invoking on the trailing edge of the timeout.
 * @returns {Function} Returns the new debounced function.
 * @example
 *
 * // Avoid costly calculations while the window size is in flux.
 * jQuery(window).on('resize', _.debounce(calculateLayout, 150));
 *
 * // Invoke `sendMail` when clicked, debouncing subsequent calls.
 * jQuery(element).on('click', _.debounce(sendMail, 300, {
 *   'leading': true,
 *   'trailing': false
 * }));
 *
 * // Ensure `batchLog` is invoked once after 1 second of debounced calls.
 * var debounced = _.debounce(batchLog, 250, { 'maxWait': 1000 });
 * var source = new EventSource('/stream');
 * jQuery(source).on('message', debounced);
 *
 * // Cancel the trailing debounced invocation.
 * jQuery(window).on('popstate', debounced.cancel);
 */


function debounce(func, wait, options) {
  var lastArgs,
      lastThis,
      maxWait,
      result,
      timerId,
      lastCallTime,
      lastInvokeTime = 0,
      leading = false,
      maxing = false,
      trailing = true;

  if (typeof func != 'function') {
    throw new TypeError(FUNC_ERROR_TEXT);
  }

  wait = toNumber(wait) || 0;

  if (isObject(options)) {
    leading = !!options.leading;
    maxing = 'maxWait' in options;
    maxWait = maxing ? nativeMax(toNumber(options.maxWait) || 0, wait) : maxWait;
    trailing = 'trailing' in options ? !!options.trailing : trailing;
  }

  function invokeFunc(time) {
    var args = lastArgs,
        thisArg = lastThis;
    lastArgs = lastThis = undefined;
    lastInvokeTime = time;
    result = func.apply(thisArg, args);
    return result;
  }

  function leadingEdge(time) {
    // Reset any `maxWait` timer.
    lastInvokeTime = time; // Start the timer for the trailing edge.

    timerId = setTimeout(timerExpired, wait); // Invoke the leading edge.

    return leading ? invokeFunc(time) : result;
  }

  function remainingWait(time) {
    var timeSinceLastCall = time - lastCallTime,
        timeSinceLastInvoke = time - lastInvokeTime,
        result = wait - timeSinceLastCall;
    return maxing ? nativeMin(result, maxWait - timeSinceLastInvoke) : result;
  }

  function shouldInvoke(time) {
    var timeSinceLastCall = time - lastCallTime,
        timeSinceLastInvoke = time - lastInvokeTime; // Either this is the first call, activity has stopped and we're at the
    // trailing edge, the system time has gone backwards and we're treating
    // it as the trailing edge, or we've hit the `maxWait` limit.

    return lastCallTime === undefined || timeSinceLastCall >= wait || timeSinceLastCall < 0 || maxing && timeSinceLastInvoke >= maxWait;
  }

  function timerExpired() {
    var time = now();

    if (shouldInvoke(time)) {
      return trailingEdge(time);
    } // Restart the timer.


    timerId = setTimeout(timerExpired, remainingWait(time));
  }

  function trailingEdge(time) {
    timerId = undefined; // Only invoke if we have `lastArgs` which means `func` has been
    // debounced at least once.

    if (trailing && lastArgs) {
      return invokeFunc(time);
    }

    lastArgs = lastThis = undefined;
    return result;
  }

  function cancel() {
    if (timerId !== undefined) {
      clearTimeout(timerId);
    }

    lastInvokeTime = 0;
    lastArgs = lastCallTime = lastThis = timerId = undefined;
  }

  function flush() {
    return timerId === undefined ? result : trailingEdge(now());
  }

  function debounced() {
    var time = now(),
        isInvoking = shouldInvoke(time);
    lastArgs = arguments;
    lastThis = this;
    lastCallTime = time;

    if (isInvoking) {
      if (timerId === undefined) {
        return leadingEdge(lastCallTime);
      }

      if (maxing) {
        // Handle invocations in a tight loop.
        timerId = setTimeout(timerExpired, wait);
        return invokeFunc(lastCallTime);
      }
    }

    if (timerId === undefined) {
      timerId = setTimeout(timerExpired, wait);
    }

    return result;
  }

  debounced.cancel = cancel;
  debounced.flush = flush;
  return debounced;
}
/**
 * Checks if `value` is the
 * [language type](http://www.ecma-international.org/ecma-262/7.0/#sec-ecmascript-language-types)
 * of `Object`. (e.g. arrays, functions, objects, regexes, `new Number(0)`, and `new String('')`)
 *
 * @static
 * @memberOf _
 * @since 0.1.0
 * @category Lang
 * @param {*} value The value to check.
 * @returns {boolean} Returns `true` if `value` is an object, else `false`.
 * @example
 *
 * _.isObject({});
 * // => true
 *
 * _.isObject([1, 2, 3]);
 * // => true
 *
 * _.isObject(_.noop);
 * // => true
 *
 * _.isObject(null);
 * // => false
 */


function isObject(value) {
  var type = typeof value;
  return !!value && (type == 'object' || type == 'function');
}
/**
 * Checks if `value` is object-like. A value is object-like if it's not `null`
 * and has a `typeof` result of "object".
 *
 * @static
 * @memberOf _
 * @since 4.0.0
 * @category Lang
 * @param {*} value The value to check.
 * @returns {boolean} Returns `true` if `value` is object-like, else `false`.
 * @example
 *
 * _.isObjectLike({});
 * // => true
 *
 * _.isObjectLike([1, 2, 3]);
 * // => true
 *
 * _.isObjectLike(_.noop);
 * // => false
 *
 * _.isObjectLike(null);
 * // => false
 */


function isObjectLike(value) {
  return !!value && typeof value == 'object';
}
/**
 * Checks if `value` is classified as a `Symbol` primitive or object.
 *
 * @static
 * @memberOf _
 * @since 4.0.0
 * @category Lang
 * @param {*} value The value to check.
 * @returns {boolean} Returns `true` if `value` is a symbol, else `false`.
 * @example
 *
 * _.isSymbol(Symbol.iterator);
 * // => true
 *
 * _.isSymbol('abc');
 * // => false
 */


function isSymbol(value) {
  return typeof value == 'symbol' || isObjectLike(value) && objectToString.call(value) == symbolTag;
}
/**
 * Converts `value` to a number.
 *
 * @static
 * @memberOf _
 * @since 4.0.0
 * @category Lang
 * @param {*} value The value to process.
 * @returns {number} Returns the number.
 * @example
 *
 * _.toNumber(3.2);
 * // => 3.2
 *
 * _.toNumber(Number.MIN_VALUE);
 * // => 5e-324
 *
 * _.toNumber(Infinity);
 * // => Infinity
 *
 * _.toNumber('3.2');
 * // => 3.2
 */


function toNumber(value) {
  if (typeof value == 'number') {
    return value;
  }

  if (isSymbol(value)) {
    return NAN;
  }

  if (isObject(value)) {
    var other = typeof value.valueOf == 'function' ? value.valueOf() : value;
    value = isObject(other) ? other + '' : other;
  }

  if (typeof value != 'string') {
    return value === 0 ? value : +value;
  }

  value = value.replace(reTrim, '');
  var isBinary = reIsBinary.test(value);
  return isBinary || reIsOctal.test(value) ? freeParseInt(value.slice(2), isBinary ? 2 : 8) : reIsBadHex.test(value) ? NAN : +value;
}

var lodash_debounce = debounce;

var TRANSFORM = DomUtil.testProp(['transform', 'webkitTransform', 'OTransform', 'MozTransform', 'msTransform']);
var REG_TRANSFORM = /translate(3d)?/;
var LeafletView = {
  type: 'leaflet',
  render: function render(leafletModel, ecModel, api) {
    var rendering = true;
    var map = leafletModel.getMap();
    var viewportRoot = api.getZr().painter.getViewportRoot();
    var offsetEl = map.getPanes().mapPane;
    var coordSys = leafletModel.coordinateSystem;
    var renderOnMoving = leafletModel.get('renderOnMoving');
    var largeMode = leafletModel.get('largeMode');

    var moveHandler = function moveHandler(e) {
      if (rendering) {
        return;
      }

      var offsetElStyle = offsetEl.style;
      var offsetX;
      var offsetY;
      var transformStyle = offsetElStyle[TRANSFORM];

      if (transformStyle) {
        transformStyle = transformStyle.replace(REG_TRANSFORM, '').replace('(', '');
        var parts = transformStyle.split(',');
        offsetX = -parseFloat(parts[0], 10);
        offsetY = -parseFloat(parts[1], 10);
      } else {
        offsetX = -parseFloat(offsetElStyle.left, 10);
        offsetY = -parseFloat(offsetElStyle.top, 10);
      }

      var mapOffset = [offsetX || 0, offsetY || 0];
      DomUtil.setTransform(viewportRoot, {
        x: mapOffset[0],
        y: mapOffset[1]
      });
      coordSys.setMapOffset(leafletModel.__mapOffset = mapOffset);
      api.dispatchAction({
        type: 'leafletRoam',
        animation: {
          // compatible with ECharts 5.x
          // no delay for rendering but remain animation of elements
          duration: 0
        }
      });
    };

    this._moveHandler && map.off('move', this._moveHandler, this);
    this._moveEndHandler && map.off('moveend', this._moveEndHandler, this);
    this._moveStartHandler && map.off('movestart', this._moveStartHandler, this);
    this._resizeHandler && map.off('resize', this._resizeHandler, this);

    if (largeMode) {
      moveHandler = lodash_debounce(moveHandler, 20);
    }

    if (renderOnMoving) {
      map.on('move', moveHandler, this);
    } else {
      largeMode && map.on('movestart', this._moveStartHandler = function () {
        setTimeout(function () {
          leafletModel.setEChartsLayerVisiblity(false);
        }, 0);
      }, this);
      map.on('moveend', this._moveEndHandler = function (e) {
        moveHandler();
        largeMode && setTimeout(function () {
          leafletModel.setEChartsLayerVisiblity(true);
        }, largeMode ? 20 : 0);
      }, this);
    }

    var resizeHandler = function resizeHandler() {
      getInstanceByDom(api.getDom()).resize();
    };

    if (largeMode) {
      resizeHandler = lodash_debounce(resizeHandler, 20);
    }

    map.on('resize', resizeHandler, this);
    this._moveHandler = moveHandler;
    this._resizeHandler = resizeHandler;
    rendering = false;
  },
  dispose: function dispose(ecModel) {
    var component = ecModel.getComponent('leaflet');

    if (component) {
      component.getMap().remove();
      component.setMap(null);
      component.setEChartsLayer(null);

      if (component.coordinateSystem) {
        component.coordinateSystem.setMap(null);
        component.coordinateSystem = null;
      }

      delete this._moveHandler;
      delete this._resizeHandler;
      delete this._moveStartHandler;
      delete this._moveEndHandler;
    }
  }
};
var LeafletView$1 = isV5 ? ComponentView.extend(LeafletView) : LeafletView;

var name = "echarts-extension-leaflet";
var version = "1.0.0";

/**
 * Leaflet component extension
 */
function install(registers) {
  // Model
  isV5 ? registers.registerComponentModel(LeafletModel$1) : registers.extendComponentModel(LeafletModel$1); // View

  isV5 ? registers.registerComponentView(LeafletView$1) : registers.extendComponentView(LeafletView$1); // Coordinate System

  registers.registerCoordinateSystem('leaflet', LeafletCoordSys); // Action

  registers.registerAction({
    type: 'leafletRoam',
    event: 'leafletRoam',
    update: 'updateLayout'
  }, function (payload, ecModel) {
    ecModel.eachComponent('leaflet', function (leafletModel) {
      var map = leafletModel.getMap();
      var center = map.getCenter();
      leafletModel.setCenterAndZoom([center.lat, center.lng], map.getZoom());
    });
  });
}

isV5 ? echarts.use(install) : install(echarts);

export { name, version };
