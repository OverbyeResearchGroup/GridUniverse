
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 829 > 0
static unsigned char *bytecode_data[829];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$base_protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$client_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$client_proto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$client_reqrep(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$client_ws(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$cookiejar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$formdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$hdrs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$http_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$http_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$http_websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$http_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$locks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$multipart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$payload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$payload_streamer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$resolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$tcp_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$tracing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$typedefs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_app(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_fileresponse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_middlewares(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_routedef(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_runner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_urldispatcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$web_ws(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiohttp$worker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_aiosignal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_async_timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_cmp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_funcs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_make(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_next_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_version_info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$setters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_bidict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_delegating(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_dup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_frozenbidict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_frozenordered(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_iter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_mut(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_named(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_orderedbase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_orderedbidict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bidict$metadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$md(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$aiohttp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$asgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$eventlet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$gevent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$gevent_uwsgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$sanic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$threading(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$async_drivers$tornado(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$asyncio_client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$asyncio_server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$asyncio_socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$packet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$payload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_engineio$static_files(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$convenience(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$corolocal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$BaseHTTPServer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$MySQLdb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$OpenSSL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$OpenSSL$SSL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$OpenSSL$crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$OpenSSL$tsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$OpenSSL$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$Queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$SocketServer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$_socket_nodns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$builtin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$os(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$select(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$selectors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$ssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$subprocess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$thread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$threading(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$green$zmq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenio$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenio$py2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenio$py3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$greenthread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$epolls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$hub(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$kqueue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$poll(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$pyevent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$selects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$hubs$timer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$patcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$semaphore(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$support$greendns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$support$greenlets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$support$psycopg2_patcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$tpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eventlet$wsgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_frozenlist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$logging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$protocols(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$protocols$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$resource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$utf8validator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_greenlet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_msgpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_msgpack$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_msgpack$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_msgpack$fallback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multidict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multidict$_abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multidict$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multidict$_multidict_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_powerworldDS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_aiopika_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_pubsub_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_redis_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$asyncio_server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$base_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$kafka_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$kombu_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$msgpack_packet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$packet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$pubsub_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$redis_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$tornado(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_socketio$zmq_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_abnf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_app(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_cookiejar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_handshake(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_logging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_ssl_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yarl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yarl$_quoting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yarl$_quoting_py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yarl$_url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$advice(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$declarations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$ro(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$verify(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_msi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_zoneinfo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"aiohttp", modulecode_aiohttp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"aiohttp._helpers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"aiohttp._http_parser", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"aiohttp._http_writer", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"aiohttp._websocket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"aiohttp.abc", modulecode_aiohttp$abc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.base_protocol", modulecode_aiohttp$base_protocol, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.client", modulecode_aiohttp$client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.client_exceptions", modulecode_aiohttp$client_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.client_proto", modulecode_aiohttp$client_proto, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.client_reqrep", modulecode_aiohttp$client_reqrep, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.client_ws", modulecode_aiohttp$client_ws, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.connector", modulecode_aiohttp$connector, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.cookiejar", modulecode_aiohttp$cookiejar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.formdata", modulecode_aiohttp$formdata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.hdrs", modulecode_aiohttp$hdrs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.helpers", modulecode_aiohttp$helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.http", modulecode_aiohttp$http, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.http_exceptions", modulecode_aiohttp$http_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.http_parser", modulecode_aiohttp$http_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.http_websocket", modulecode_aiohttp$http_websocket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.http_writer", modulecode_aiohttp$http_writer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.locks", modulecode_aiohttp$locks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.log", modulecode_aiohttp$log, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.multipart", modulecode_aiohttp$multipart, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.payload", modulecode_aiohttp$payload, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.payload_streamer", modulecode_aiohttp$payload_streamer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.resolver", modulecode_aiohttp$resolver, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.streams", modulecode_aiohttp$streams, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.tcp_helpers", modulecode_aiohttp$tcp_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.tracing", modulecode_aiohttp$tracing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.typedefs", modulecode_aiohttp$typedefs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web", modulecode_aiohttp$web, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_app", modulecode_aiohttp$web_app, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_exceptions", modulecode_aiohttp$web_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_fileresponse", modulecode_aiohttp$web_fileresponse, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_log", modulecode_aiohttp$web_log, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_middlewares", modulecode_aiohttp$web_middlewares, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_protocol", modulecode_aiohttp$web_protocol, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_request", modulecode_aiohttp$web_request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_response", modulecode_aiohttp$web_response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_routedef", modulecode_aiohttp$web_routedef, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_runner", modulecode_aiohttp$web_runner, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_server", modulecode_aiohttp$web_server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_urldispatcher", modulecode_aiohttp$web_urldispatcher, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.web_ws", modulecode_aiohttp$web_ws, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiohttp.worker", modulecode_aiohttp$worker, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"aiosignal", modulecode_aiosignal, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"async_timeout", modulecode_async_timeout, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"attr", modulecode_attr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"attr._cmp", modulecode_attr$_cmp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._compat", modulecode_attr$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._config", modulecode_attr$_config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._funcs", modulecode_attr$_funcs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._make", modulecode_attr$_make, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._next_gen", modulecode_attr$_next_gen, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr._version_info", modulecode_attr$_version_info, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr.converters", modulecode_attr$converters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr.exceptions", modulecode_attr$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr.filters", modulecode_attr$filters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr.setters", modulecode_attr$setters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"attr.validators", modulecode_attr$validators, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict", modulecode_bidict, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"bidict._abc", modulecode_bidict$_abc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._base", modulecode_bidict$_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._bidict", modulecode_bidict$_bidict, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._delegating", modulecode_bidict$_delegating, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._dup", modulecode_bidict$_dup, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._exc", modulecode_bidict$_exc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._frozenbidict", modulecode_bidict$_frozenbidict, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._frozenordered", modulecode_bidict$_frozenordered, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._iter", modulecode_bidict$_iter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._mut", modulecode_bidict$_mut, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._named", modulecode_bidict$_named, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._orderedbase", modulecode_bidict$_orderedbase, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._orderedbidict", modulecode_bidict$_orderedbidict, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict._typing", modulecode_bidict$_typing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bidict.metadata", modulecode_bidict$metadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.md", modulecode_charset_normalizer$md, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"config", modulecode_config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dns", NULL, 0, 630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dns._asyncbackend", NULL, 1, 2763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns._asyncio_backend", NULL, 2, 5322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns._curio_backend", NULL, 3, 4133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns._immutable_attr", NULL, 4, 2164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns._immutable_ctx", NULL, 5, 2164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns._trio_backend", NULL, 6, 4298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.asyncbackend", NULL, 7, 2662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.asyncquery", NULL, 8, 11406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.asyncresolver", NULL, 9, 5862, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.dnssec", NULL, 10, 14703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.e164", NULL, 11, 3159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.edns", NULL, 12, 9845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.entropy", NULL, 13, 3182, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.enum", NULL, 14, 2400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.exception", NULL, 15, 4710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.flags", NULL, 16, 2056, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.grange", NULL, 17, 1059, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.immutable", NULL, 18, 2358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.inet", NULL, 19, 3634, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.ipv4", NULL, 20, 1329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.ipv6", NULL, 21, 3331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.message", NULL, 22, 41798, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.name", NULL, 23, 28348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.namedict", NULL, 24, 2992, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.node", NULL, 25, 5853, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.opcode", NULL, 26, 2379, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.query", NULL, 27, 30064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rcode", NULL, 28, 3043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdata", NULL, 29, 20719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdataclass", NULL, 30, 2681, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdataset", NULL, 31, 14211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdatatype", NULL, 32, 5998, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes", NULL, 33, 300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dns.rdtypes.ANY", NULL, 34, 474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dns.rdtypes.ANY.AFSDB", NULL, 35, 772, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.AMTRELAY", NULL, 36, 2521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.AVC", NULL, 37, 443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CAA", NULL, 38, 1986, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CDNSKEY", NULL, 39, 522, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CDS", NULL, 40, 440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CERT", NULL, 41, 2658, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CNAME", NULL, 42, 651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.CSYNC", NULL, 43, 2089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.DLV", NULL, 44, 440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.DNAME", NULL, 45, 649, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.DNSKEY", NULL, 46, 519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.DS", NULL, 47, 437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.EUI48", NULL, 48, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.EUI64", NULL, 49, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.GPOS", NULL, 50, 3298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.HINFO", NULL, 51, 1812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.HIP", NULL, 52, 2634, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.ISDN", NULL, 53, 1998, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.LOC", NULL, 54, 7749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.MX", NULL, 55, 437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.NINFO", NULL, 56, 449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.NS", NULL, 57, 437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.NSEC", NULL, 58, 1972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.NSEC3", NULL, 59, 3003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.NSEC3PARAM", NULL, 60, 2074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.OPENPGPKEY", NULL, 61, 1632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.OPT", NULL, 62, 2344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.PTR", NULL, 63, 440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.RP", NULL, 64, 1648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.RRSIG", NULL, 65, 3672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.RT", NULL, 66, 455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.SMIMEA", NULL, 67, 455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.SOA", NULL, 68, 2152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.SPF", NULL, 69, 443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.SSHFP", NULL, 70, 1950, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.TKEY", NULL, 71, 2733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.TLSA", NULL, 72, 449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.TSIG", NULL, 73, 3172, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.TXT", NULL, 74, 443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.URI", NULL, 75, 2563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.ANY.X25", NULL, 76, 1606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.CH", NULL, 77, 217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dns.rdtypes.CH.A", NULL, 78, 1665, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN", NULL, 79, 288, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dns.rdtypes.IN.A", NULL, 80, 1512, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.AAAA", NULL, 81, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.APL", NULL, 82, 3694, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.DHCID", NULL, 83, 1557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.HTTPS", NULL, 84, 451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.IPSECKEY", NULL, 85, 2448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.KX", NULL, 86, 454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.NAPTR", NULL, 87, 2868, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.NSAP", NULL, 88, 1778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.NSAP_PTR", NULL, 89, 462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.PX", NULL, 90, 2164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.SRV", NULL, 91, 2364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.SVCB", NULL, 92, 448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.IN.WKS", NULL, 93, 2556, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.dnskeybase", NULL, 94, 2408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.dsbase", NULL, 95, 2168, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.euibase", NULL, 96, 2110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.mxbase", NULL, 97, 3114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.nsbase", NULL, 98, 2070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.svcbbase", NULL, 99, 16955, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.tlsabase", NULL, 100, 2066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.txtbase", NULL, 101, 2512, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rdtypes.util", NULL, 102, 6289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.renderer", NULL, 103, 7591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.resolver", NULL, 104, 41633, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.reversename", NULL, 105, 2946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.rrset", NULL, 106, 6796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.serial", NULL, 107, 2928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.set", NULL, 108, 7822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.tokenizer", NULL, 109, 16334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.transaction", NULL, 110, 14879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.tsig", NULL, 111, 10247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.tsigkeyring", NULL, 112, 1644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.ttl", NULL, 113, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.update", NULL, 114, 8262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.version", NULL, 115, 547, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.versioned", NULL, 116, 14389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.wire", NULL, 117, 3027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.xfr", NULL, 118, 6375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.zone", NULL, 119, 31872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dns.zonefile", NULL, 120, 7088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"engineio", modulecode_engineio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"engineio.async_drivers", modulecode_engineio$async_drivers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"engineio.async_drivers.aiohttp", modulecode_engineio$async_drivers$aiohttp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.asgi", modulecode_engineio$async_drivers$asgi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.eventlet", modulecode_engineio$async_drivers$eventlet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.gevent", modulecode_engineio$async_drivers$gevent, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.gevent_uwsgi", modulecode_engineio$async_drivers$gevent_uwsgi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.sanic", modulecode_engineio$async_drivers$sanic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.threading", modulecode_engineio$async_drivers$threading, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.async_drivers.tornado", modulecode_engineio$async_drivers$tornado, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.asyncio_client", modulecode_engineio$asyncio_client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.asyncio_server", modulecode_engineio$asyncio_server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.asyncio_socket", modulecode_engineio$asyncio_socket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.client", modulecode_engineio$client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.exceptions", modulecode_engineio$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.json", modulecode_engineio$json, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.middleware", modulecode_engineio$middleware, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.packet", modulecode_engineio$packet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.payload", modulecode_engineio$payload, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.server", modulecode_engineio$server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.socket", modulecode_engineio$socket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"engineio.static_files", modulecode_engineio$static_files, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet", modulecode_eventlet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.convenience", modulecode_eventlet$convenience, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.corolocal", modulecode_eventlet$corolocal, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.event", modulecode_eventlet$event, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green", modulecode_eventlet$green, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.green.BaseHTTPServer", modulecode_eventlet$green$BaseHTTPServer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.MySQLdb", modulecode_eventlet$green$MySQLdb, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.OpenSSL", modulecode_eventlet$green$OpenSSL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.green.OpenSSL.SSL", modulecode_eventlet$green$OpenSSL$SSL, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.OpenSSL.crypto", modulecode_eventlet$green$OpenSSL$crypto, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.OpenSSL.tsafe", modulecode_eventlet$green$OpenSSL$tsafe, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.OpenSSL.version", modulecode_eventlet$green$OpenSSL$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.Queue", modulecode_eventlet$green$Queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.SocketServer", modulecode_eventlet$green$SocketServer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green._socket_nodns", modulecode_eventlet$green$_socket_nodns, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.builtin", modulecode_eventlet$green$builtin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.os", modulecode_eventlet$green$os, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.select", modulecode_eventlet$green$select, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.selectors", modulecode_eventlet$green$selectors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.socket", modulecode_eventlet$green$socket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.ssl", modulecode_eventlet$green$ssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.subprocess", modulecode_eventlet$green$subprocess, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.thread", modulecode_eventlet$green$thread, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.threading", modulecode_eventlet$green$threading, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.time", modulecode_eventlet$green$time, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.green.zmq", modulecode_eventlet$green$zmq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.greenio", modulecode_eventlet$greenio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.greenio.base", modulecode_eventlet$greenio$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.greenio.py2", modulecode_eventlet$greenio$py2, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.greenio.py3", modulecode_eventlet$greenio$py3, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.greenpool", modulecode_eventlet$greenpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.greenthread", modulecode_eventlet$greenthread, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs", modulecode_eventlet$hubs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.hubs.epolls", modulecode_eventlet$hubs$epolls, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.hub", modulecode_eventlet$hubs$hub, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.kqueue", modulecode_eventlet$hubs$kqueue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.poll", modulecode_eventlet$hubs$poll, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.pyevent", modulecode_eventlet$hubs$pyevent, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.selects", modulecode_eventlet$hubs$selects, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.hubs.timer", modulecode_eventlet$hubs$timer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.lock", modulecode_eventlet$lock, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.patcher", modulecode_eventlet$patcher, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.queue", modulecode_eventlet$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.semaphore", modulecode_eventlet$semaphore, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.support", modulecode_eventlet$support, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"eventlet.support.greendns", modulecode_eventlet$support$greendns, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.support.greenlets", modulecode_eventlet$support$greenlets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.support.psycopg2_patcher", modulecode_eventlet$support$psycopg2_patcher, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.timeout", modulecode_eventlet$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.tpool", modulecode_eventlet$tpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.websocket", modulecode_eventlet$websocket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"eventlet.wsgi", modulecode_eventlet$wsgi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"frozenlist", modulecode_frozenlist, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"frozenlist._frozenlist", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"gevent", NULL, 121, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"gevent._abstract_linkable", NULL, 122, 10327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._compat", NULL, 123, 5284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._config", NULL, 124, 20415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ffi", NULL, 125, 778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"gevent._ffi.callback", NULL, 126, 1608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ffi.loop", NULL, 127, 19126, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ffi.watcher", NULL, 128, 19375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._fileobjectcommon", NULL, 129, 18922, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._fileobjectposix", NULL, 130, 10428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._greenlet_primitives", NULL, 131, 2872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._hub_local", NULL, 132, 2786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._hub_primitives", NULL, 133, 12023, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ident", NULL, 134, 2088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._imap", NULL, 135, 6226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._interfaces", NULL, 136, 11633, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._monitor", NULL, 137, 8047, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._semaphore", NULL, 138, 13032, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._socket2", NULL, 139, 8017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._socket3", NULL, 140, 16239, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._socketcommon", NULL, 141, 16963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ssl2", NULL, 142, 11333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._ssl3", NULL, 143, 20346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._sslgte279", NULL, 144, 18673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._tblib", NULL, 145, 10034, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._threading", NULL, 146, 4914, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._tracer", NULL, 147, 4818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._util", NULL, 148, 9137, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._util_py2", NULL, 149, 622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent._waiter", NULL, 150, 6931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.baseserver", NULL, 151, 13052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.builtins", NULL, 152, 2719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.contextvars", NULL, 153, 9733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.core", NULL, 154, 538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.event", NULL, 155, 15232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.events", NULL, 156, 15280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.exceptions", NULL, 157, 4652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.fileobject", NULL, 158, 2861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.greenlet", NULL, 159, 33189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.hub", NULL, 160, 22968, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.libuv", NULL, 161, 286, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"gevent.libuv._corecffi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"gevent.libuv.loop", NULL, 162, 12847, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.libuv.watcher", NULL, 163, 19301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.local", NULL, 164, 12961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.lock", NULL, 165, 11072, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.monkey", NULL, 166, 35256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.os", NULL, 167, 13930, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.pool", NULL, 168, 24087, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.pywsgi", NULL, 169, 39460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.queue", NULL, 170, 21159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver", NULL, 171, 7086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"gevent.resolver._addresses", NULL, 172, 2965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver.ares", NULL, 173, 9403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver.blocking", NULL, 174, 1521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver.thread", NULL, 175, 2803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver_ares", NULL, 176, 582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.resolver_thread", NULL, 177, 598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.select", NULL, 178, 7642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.selectors", NULL, 179, 5596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.server", NULL, 180, 8587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.socket", NULL, 181, 3186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.ssl", NULL, 182, 894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.subprocess", NULL, 183, 43412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing", NULL, 184, 4141, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"gevent.testing.errorhandler", NULL, 185, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.exception", NULL, 186, 499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.flaky", NULL, 187, 2957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.hub", NULL, 188, 1917, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.leakcheck", NULL, 189, 5338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.modules", NULL, 190, 2533, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.openfiles", NULL, 191, 4947, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.params", NULL, 192, 788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.patched_tests_setup", NULL, 193, 27113, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.resources", NULL, 194, 3163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.six", NULL, 195, 1016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.skipping", NULL, 196, 3677, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.sockets", NULL, 197, 1303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.support", NULL, 198, 3646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.sysinfo", NULL, 199, 3690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.testcase", NULL, 200, 14072, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.testing.util", NULL, 201, 16268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.thread", NULL, 202, 3155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.threading", NULL, 203, 5638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.threadpool", NULL, 204, 23142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.time", NULL, 205, 542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.timeout", NULL, 206, 11207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.util", NULL, 207, 19494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gevent.win32util", NULL, 208, 2654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"geventwebsocket", modulecode_geventwebsocket, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"geventwebsocket._compat", modulecode_geventwebsocket$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.exceptions", modulecode_geventwebsocket$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.handler", modulecode_geventwebsocket$handler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.logging", modulecode_geventwebsocket$logging, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.protocols", modulecode_geventwebsocket$protocols, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"geventwebsocket.protocols.base", modulecode_geventwebsocket$protocols$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.resource", modulecode_geventwebsocket$resource, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.server", modulecode_geventwebsocket$server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.utf8validator", modulecode_geventwebsocket$utf8validator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.utils", modulecode_geventwebsocket$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"geventwebsocket.websocket", modulecode_geventwebsocket$websocket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"greenlet", modulecode_greenlet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"greenlet._greenlet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"msgpack", modulecode_msgpack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"msgpack._version", modulecode_msgpack$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"msgpack.exceptions", modulecode_msgpack$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"msgpack.fallback", modulecode_msgpack$fallback, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multidict", modulecode_multidict, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"multidict._abc", modulecode_multidict$_abc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multidict._compat", modulecode_multidict$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multidict._multidict", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"multidict._multidict_py", modulecode_multidict$_multidict_py, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pkg_resources", NULL, 209, 100408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 210, 162, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 211, 20479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 212, 524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 213, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 214, 1122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 215, 2876, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._typing", NULL, 216, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 217, 9283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 218, 4060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 219, 20559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.utils", NULL, 220, 1629, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 221, 13296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 222, 201316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 223, 2851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"powerworldDS", modulecode_powerworldDS, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio", modulecode_socketio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"socketio.asgi", modulecode_socketio$asgi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_aiopika_manager", modulecode_socketio$asyncio_aiopika_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_client", modulecode_socketio$asyncio_client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_manager", modulecode_socketio$asyncio_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_namespace", modulecode_socketio$asyncio_namespace, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_pubsub_manager", modulecode_socketio$asyncio_pubsub_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_redis_manager", modulecode_socketio$asyncio_redis_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.asyncio_server", modulecode_socketio$asyncio_server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.base_manager", modulecode_socketio$base_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.client", modulecode_socketio$client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.exceptions", modulecode_socketio$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.kafka_manager", modulecode_socketio$kafka_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.kombu_manager", modulecode_socketio$kombu_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.middleware", modulecode_socketio$middleware, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.msgpack_packet", modulecode_socketio$msgpack_packet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.namespace", modulecode_socketio$namespace, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.packet", modulecode_socketio$packet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.pubsub_manager", modulecode_socketio$pubsub_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.redis_manager", modulecode_socketio$redis_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.server", modulecode_socketio$server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.tornado", modulecode_socketio$tornado, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"socketio.zmq_manager", modulecode_socketio$zmq_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket", modulecode_websocket, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"websocket._abnf", modulecode_websocket$_abnf, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._app", modulecode_websocket$_app, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._cookiejar", modulecode_websocket$_cookiejar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._core", modulecode_websocket$_core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._exceptions", modulecode_websocket$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._handshake", modulecode_websocket$_handshake, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._http", modulecode_websocket$_http, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._logging", modulecode_websocket$_logging, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._socket", modulecode_websocket$_socket, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._ssl_compat", modulecode_websocket$_ssl_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._url", modulecode_websocket$_url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"websocket._utils", modulecode_websocket$_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"yarl", modulecode_yarl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"yarl._quoting", modulecode_yarl$_quoting, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"yarl._quoting_c", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"yarl._quoting_py", modulecode_yarl$_quoting_py, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"yarl._url", modulecode_yarl$_url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope", modulecode_zope, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"zope.event", modulecode_zope$event, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"zope.interface", modulecode_zope$interface, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"zope.interface._compat", modulecode_zope$interface$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface._zope_interface_coptimizations", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"zope.interface.advice", modulecode_zope$interface$advice, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.declarations", modulecode_zope$interface$declarations, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.exceptions", modulecode_zope$interface$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.interface", modulecode_zope$interface$interface, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.interfaces", modulecode_zope$interface$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.ro", modulecode_zope$interface$ro, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"zope.interface.verify", modulecode_zope$interface$verify, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__future__", NULL, 224, 4089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_aix_support", NULL, 225, 3009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 226, 1190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootsubprocess", NULL, 227, 2208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 228, 31701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 229, 5451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 230, 4161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 231, 7734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 232, 11546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 233, 4619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 234, 74446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 235, 3464, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 236, 15978, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 237, 6469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 238, 7687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 239, 5738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 240, 25229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 241, 63377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 242, 52269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 243, 6785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 244, 735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 245, 51987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 246, 1873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 247, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 248, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 249, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 250, 6602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 251, 28066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 252, 2518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 253, 2289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 254, 11794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 255, 14394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 256, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 257, 24314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 258, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 259, 8481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 260, 2171, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 261, 29796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 262, 21521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 263, 4125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 264, 20551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 265, 7299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 266, 24154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.threads", NULL, 267, 943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 268, 12211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 269, 8534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 270, 24600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 271, 4468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 272, 15999, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 273, 16418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 274, 24503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 275, 12928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 276, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 277, 11508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 278, 5058, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 279, 26994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 280, 26445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 281, 10149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 282, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 283, 12639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 284, 9879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 285, 33851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 286, 6421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 287, 48055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 288, 31700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 289, 3223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 290, 12551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 291, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 292, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 293, 22287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 294, 20705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 295, 5725, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 296, 45832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 297, 19501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 298, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 299, 6937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 300, 4393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 301, 11812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 302, 16436, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 303, 9799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 304, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 305, 255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 306, 4691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 307, 1865, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 308, 2145, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 309, 8635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 310, 5068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 311, 23148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 312, 58060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 313, 4187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 314, 7878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 315, 160573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 316, 59584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 317, 15783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 318, 340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 319, 12879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 320, 6550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 321, 6461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 322, 33150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 323, 13889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 324, 429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 325, 3568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 326, 3551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_msi", NULL, 327, 19733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 328, 12188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 329, 8508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 330, 3844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 331, 4763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 332, 16154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 333, 10396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 334, 4293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 335, 4872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 336, 2045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 337, 10175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 338, 13503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 339, 2248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 340, 2983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 341, 1673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 342, 5045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 343, 2096, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 344, 8416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 345, 14443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 346, 5192, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 347, 3492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 348, 6617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 349, 8599, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 350, 159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 351, 2679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 352, 5780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 353, 34311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 354, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 355, 6880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 356, 10588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 357, 5946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 358, 9798, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 359, 2278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 360, 17475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 361, 14670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 362, 3404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 363, 12154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 364, 8404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 365, 6747, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 366, 15553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 367, 7304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 368, 5088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 369, 75969, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 370, 1621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 371, 5645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 372, 79746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 373, 12348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 374, 14771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 375, 3202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 376, 11416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 377, 7323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 378, 1585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 379, 5874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 380, 10572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 381, 12548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 382, 16395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 383, 21929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 384, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 385, 37799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 386, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 387, 1424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 388, 2589, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 389, 1010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 390, 1869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 391, 1247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 392, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 393, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 394, 1274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 395, 5709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 396, 9602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 397, 7637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 398, 9550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 399, 3851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 400, 6293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 401, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 402, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 403, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 404, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 405, 3222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 406, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 407, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 408, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 409, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 410, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 411, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 412, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 413, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 414, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 415, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 416, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 417, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 418, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 419, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 420, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 421, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 422, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 423, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 424, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 425, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 426, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 427, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 428, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 429, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 430, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 431, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 432, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 433, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 434, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 435, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 436, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 437, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 438, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 439, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 440, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 441, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 442, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 443, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 444, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 445, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 446, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 447, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 448, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 449, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 450, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 451, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 452, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 453, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 454, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 455, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 456, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 457, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 458, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 459, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 460, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 461, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 462, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 463, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 464, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 465, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 466, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 467, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 468, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 469, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 470, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 471, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 472, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 473, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 474, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 475, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 476, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 477, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 478, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 479, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 480, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 481, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 482, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 483, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 484, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 485, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 486, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 487, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 488, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 489, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 490, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 491, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 492, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 493, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 494, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 495, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 496, 1676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 497, 1489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 498, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 499, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 500, 6272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 501, 2359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 502, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 503, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 504, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 505, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 506, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 507, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 508, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 509, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 510, 4835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 511, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 512, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 513, 4728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 514, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 515, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 516, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 517, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 518, 4507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 519, 3195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 520, 3043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 521, 25983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 522, 8585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 523, 13753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 524, 3905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 525, 17502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 526, 18012, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 527, 28657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 528, 28239, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 529, 3987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 530, 6223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 531, 4163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 532, 18036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 533, 4507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"graphlib", NULL, 534, 7531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 535, 18457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 536, 6654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 537, 14003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 538, 6763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 539, 3079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 540, 50484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 541, 10818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http", NULL, 542, 6367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 543, 35398, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 544, 53468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 545, 15253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 546, 34377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 547, 42375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 548, 4103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 549, 9814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 550, 3787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 551, 28931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 552, 45133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._common", NULL, 553, 1662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 554, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 555, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 556, 21584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 557, 6354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 558, 9285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 559, 81342, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 560, 3371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 561, 62456, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 562, 12247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 563, 9771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 564, 11094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 565, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 566, 2690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 567, 879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 568, 256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 569, 4840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 570, 6111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 571, 6218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 572, 12133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 573, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 574, 1622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 575, 1237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 576, 621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 577, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 578, 3269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 579, 2764, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 580, 1091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 581, 1639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 582, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 583, 2400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 584, 934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 585, 742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 586, 746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 587, 2861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 588, 3863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 589, 2741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 590, 4345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 591, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 592, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 593, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 594, 1509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 595, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 596, 1520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 597, 663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 598, 3055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 599, 5289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 600, 896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 601, 769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 602, 3013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 603, 881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 604, 981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 605, 4178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 606, 1348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 607, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 608, 2207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 609, 753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 610, 1086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 611, 1104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 612, 1961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 613, 803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 614, 1637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 615, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 616, 1365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 617, 1762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 618, 4539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 619, 1791, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 620, 1507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 621, 5818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 622, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 623, 2487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 624, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 625, 1537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 626, 8652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 627, 5568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 628, 121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 629, 5092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 630, 5670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 631, 1494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 632, 6443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 633, 9685, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 634, 1852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 635, 15136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 636, 1225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 637, 24258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 638, 20606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 639, 3990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 640, 34659, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 641, 66282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 642, 23220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 643, 43861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 644, 12057, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 645, 60563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 646, 6472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 647, 16006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 648, 16091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib", NULL, 649, 15836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 650, 49594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 651, 2346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 652, 7957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 653, 608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 654, 25623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 655, 12983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 656, 3819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 657, 2548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 658, 8380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 659, 7598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 660, 40880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 661, 25101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 662, 3420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 663, 10972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 664, 10157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 665, 8248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 666, 5247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 667, 5420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 668, 14405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 669, 7060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 670, 6684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 671, 11351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 672, 11470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 673, 3746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 674, 31726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 675, 14505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 676, 1709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 677, 12282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 678, 5186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 679, 13747, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 680, 47906, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 681, 31609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 682, 44688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 683, 47475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 684, 47062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 685, 67070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 686, 7758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 687, 18529, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 688, 26460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 689, 23510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 690, 13620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 691, 10292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 692, 16793, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 693, 14353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 694, 23715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 695, 7327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 696, 10412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 697, 85279, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 698, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 699, 430835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 700, 10826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 701, 5710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 702, 22006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 703, 14325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 704, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 705, 5769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 706, 8472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 707, 6596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 708, 2143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 709, 17208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 710, 9507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 711, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 712, 37977, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 713, 2786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"site", NULL, 714, 13817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 715, 26487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 716, 35893, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 717, 6956, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 718, 29136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 719, 25478, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 720, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 721, 2461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 722, 1886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 723, 15016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 724, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 725, 21566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 726, 44555, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 727, 4335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 728, 31942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 729, 7128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 730, 9949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 731, 269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 732, 44109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 733, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 734, 2542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 735, 11129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 736, 16276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 737, 7028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 738, 63037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 739, 18294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 740, 23329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 741, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"this", NULL, 742, 1222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 743, 42048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 744, 11719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 745, 176005, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 746, 2238, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 747, 1141, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 748, 1619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 749, 1462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 750, 11250, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 751, 12581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 752, 6345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 753, 3045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 754, 2146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 755, 10973, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 756, 79230, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 757, 56714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 758, 2459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 759, 17128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 760, 19702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 761, 20364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 762, 17898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 763, 129499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 764, 9184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 765, 71535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 766, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest._log", NULL, 767, 2486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.async_case", NULL, 768, 4196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 769, 47971, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 770, 14481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 771, 7475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 772, 77936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 773, 7254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 774, 7029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 775, 2205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 776, 10067, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 777, 4401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 778, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 779, 2789, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 780, 34848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 781, 72210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 782, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 783, 7290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 784, 3629, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 785, 22473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 786, 15372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 787, 13568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 788, 17836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 789, 20248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 790, 17097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 791, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 792, 16339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 793, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 794, 5264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 795, 5358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 796, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 797, 8206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 798, 646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 799, 5492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 800, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 801, 2813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 802, 27273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 803, 2704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 804, 56274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 805, 10654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 806, 12440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 807, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 808, 2397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 809, 8377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 810, 56203, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 811, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 812, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 813, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 814, 3154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 815, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 816, 12545, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 817, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 818, 12886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 819, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 820, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 821, 34532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 822, 29338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 823, 5948, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 824, 58857, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo", NULL, 825, 765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"zoneinfo._common", NULL, 826, 3069, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._tzpath", NULL, 827, 4010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._zoneinfo", NULL, 828, 15431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 228, 31701},
    {"_compression", 230, 4161},
    {"_weakrefset", 238, 7687},
    {"abc", 239, 5738},
    {"ast", 242, 52269},
    {"base64", 273, 16418},
    {"bz2", 277, 11508},
    {"codecs", 285, 33851},
    {"collections", 287, -48055},
    {"collections.abc", 288, 31700},
    {"contextlib", 297, 19501},
    {"copyreg", 300, 4393},
    {"dis", 317, 15783},
    {"encodings", 399, -3851},
    {"encodings.aliases", 400, 6293},
    {"encodings.ascii", 401, 1846},
    {"encodings.base64_codec", 402, 2333},
    {"encodings.big5", 403, 1374},
    {"encodings.big5hkscs", 404, 1384},
    {"encodings.bz2_codec", 405, 3222},
    {"encodings.charmap", 406, 2856},
    {"encodings.cp037", 407, 2387},
    {"encodings.cp1006", 408, 2463},
    {"encodings.cp1026", 409, 2391},
    {"encodings.cp1125", 410, 8094},
    {"encodings.cp1140", 411, 2377},
    {"encodings.cp1250", 412, 2414},
    {"encodings.cp1251", 413, 2411},
    {"encodings.cp1252", 414, 2414},
    {"encodings.cp1253", 415, 2427},
    {"encodings.cp1254", 416, 2416},
    {"encodings.cp1255", 417, 2435},
    {"encodings.cp1256", 418, 2413},
    {"encodings.cp1257", 419, 2421},
    {"encodings.cp1258", 420, 2419},
    {"encodings.cp273", 421, 2373},
    {"encodings.cp424", 422, 2417},
    {"encodings.cp437", 423, 7811},
    {"encodings.cp500", 424, 2387},
    {"encodings.cp720", 425, 2484},
    {"encodings.cp737", 426, 8133},
    {"encodings.cp775", 427, 7841},
    {"encodings.cp850", 428, 7472},
    {"encodings.cp852", 429, 7849},
    {"encodings.cp855", 430, 8102},
    {"encodings.cp856", 431, 2449},
    {"encodings.cp857", 432, 7452},
    {"encodings.cp858", 433, 7442},
    {"encodings.cp860", 434, 7790},
    {"encodings.cp861", 435, 7805},
    {"encodings.cp862", 436, 7994},
    {"encodings.cp863", 437, 7805},
    {"encodings.cp864", 438, 7949},
    {"encodings.cp865", 439, 7805},
    {"encodings.cp866", 440, 8138},
    {"encodings.cp869", 441, 7829},
    {"encodings.cp874", 442, 2515},
    {"encodings.cp875", 443, 2384},
    {"encodings.cp932", 444, 1376},
    {"encodings.cp949", 445, 1376},
    {"encodings.cp950", 446, 1376},
    {"encodings.euc_jis_2004", 447, 1390},
    {"encodings.euc_jisx0213", 448, 1390},
    {"encodings.euc_jp", 449, 1378},
    {"encodings.euc_kr", 450, 1378},
    {"encodings.gb18030", 451, 1380},
    {"encodings.gb2312", 452, 1378},
    {"encodings.gbk", 453, 1372},
    {"encodings.hex_codec", 454, 2320},
    {"encodings.hp_roman8", 455, 2588},
    {"encodings.hz", 456, 1370},
    {"encodings.idna", 457, 5562},
    {"encodings.iso2022_jp", 458, 1391},
    {"encodings.iso2022_jp_1", 459, 1395},
    {"encodings.iso2022_jp_2", 460, 1395},
    {"encodings.iso2022_jp_2004", 461, 1401},
    {"encodings.iso2022_jp_3", 462, 1395},
    {"encodings.iso2022_jp_ext", 463, 1399},
    {"encodings.iso2022_kr", 464, 1391},
    {"encodings.iso8859_1", 465, 2386},
    {"encodings.iso8859_10", 466, 2391},
    {"encodings.iso8859_11", 467, 2485},
    {"encodings.iso8859_13", 468, 2394},
    {"encodings.iso8859_14", 469, 2412},
    {"encodings.iso8859_15", 470, 2391},
    {"encodings.iso8859_16", 471, 2393},
    {"encodings.iso8859_2", 472, 2386},
    {"encodings.iso8859_3", 473, 2393},
    {"encodings.iso8859_4", 474, 2386},
    {"encodings.iso8859_5", 475, 2387},
    {"encodings.iso8859_6", 476, 2431},
    {"encodings.iso8859_7", 477, 2394},
    {"encodings.iso8859_8", 478, 2425},
    {"encodings.iso8859_9", 479, 2386},
    {"encodings.johab", 480, 1376},
    {"encodings.koi8_r", 481, 2438},
    {"encodings.koi8_t", 482, 2349},
    {"encodings.koi8_u", 483, 2424},
    {"encodings.kz1048", 484, 2401},
    {"encodings.latin_1", 485, 1858},
    {"encodings.mac_arabic", 486, 7705},
    {"encodings.mac_croatian", 487, 2433},
    {"encodings.mac_cyrillic", 488, 2423},
    {"encodings.mac_farsi", 489, 2367},
    {"encodings.mac_greek", 490, 2407},
    {"encodings.mac_iceland", 491, 2426},
    {"encodings.mac_latin2", 492, 2567},
    {"encodings.mac_roman", 493, 2424},
    {"encodings.mac_romanian", 494, 2434},
    {"encodings.mac_turkish", 495, 2427},
    {"encodings.mbcs", 496, 1676},
    {"encodings.oem", 497, 1489},
    {"encodings.palmos", 498, 2414},
    {"encodings.ptcp154", 499, 2508},
    {"encodings.punycode", 500, 6272},
    {"encodings.quopri_codec", 501, 2359},
    {"encodings.raw_unicode_escape", 502, 1727},
    {"encodings.rot_13", 503, 2966},
    {"encodings.shift_jis", 504, 1384},
    {"encodings.shift_jis_2004", 505, 1394},
    {"encodings.shift_jisx0213", 506, 1394},
    {"encodings.tis_620", 507, 2476},
    {"encodings.undefined", 508, 2060},
    {"encodings.unicode_escape", 509, 1707},
    {"encodings.utf_16", 510, 4835},
    {"encodings.utf_16_be", 511, 1615},
    {"encodings.utf_16_le", 512, 1615},
    {"encodings.utf_32", 513, 4728},
    {"encodings.utf_32_be", 514, 1508},
    {"encodings.utf_32_le", 515, 1508},
    {"encodings.utf_7", 516, 1536},
    {"encodings.utf_8", 517, 1595},
    {"encodings.utf_8_sig", 518, 4507},
    {"encodings.uu_codec", 519, 3195},
    {"encodings.zlib_codec", 520, 3043},
    {"enum", 521, 25983},
    {"functools", 528, 28239},
    {"genericpath", 529, 3987},
    {"heapq", 537, 14003},
    {"importlib", 550, -3787},
    {"importlib._bootstrap", 551, 28931},
    {"importlib._bootstrap_external", 552, 45133},
    {"importlib.machinery", 555, 927},
    {"inspect", 559, 81342},
    {"io", 560, 3371},
    {"keyword", 567, 879},
    {"linecache", 639, 3990},
    {"locale", 640, 34659},
    {"ntpath", 675, 14505},
    {"opcode", 678, 5186},
    {"operator", 679, 13747},
    {"os", 681, 31609},
    {"quopri", 701, 5710},
    {"re", 703, 14325},
    {"reprlib", 704, 5270},
    {"sre_compile", 723, 15016},
    {"sre_constants", 724, 6280},
    {"sre_parse", 725, 21566},
    {"stat", 727, 4335},
    {"stringprep", 730, 9949},
    {"struct", 731, 269},
    {"threading", 743, 42048},
    {"token", 758, 2459},
    {"tokenize", 759, 17128},
    {"types", 764, 9184},
    {"warnings", 787, 13568},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

