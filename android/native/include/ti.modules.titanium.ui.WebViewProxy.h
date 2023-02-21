/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace ui {

class WebViewProxy : public titanium::Proxy
{
public:
	explicit WebViewProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void resume(const v8::FunctionCallbackInfo<v8::Value>&);
	static void evalJS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setBasicAuthentication(const v8::FunctionCallbackInfo<v8::Value>&);
	static void canGoBack(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setHtml(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stopLoading(const v8::FunctionCallbackInfo<v8::Value>&);
	static void release(const v8::FunctionCallbackInfo<v8::Value>&);
	static void pause(const v8::FunctionCallbackInfo<v8::Value>&);
	static void canGoForward(const v8::FunctionCallbackInfo<v8::Value>&);
	static void goBack(const v8::FunctionCallbackInfo<v8::Value>&);
	static void reload(const v8::FunctionCallbackInfo<v8::Value>&);
	static void goForward(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createPDF(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_zoomLevel(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_zoomLevel(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_requestHeaders(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_requestHeaders(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_enableZoomControls(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_enableZoomControls(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_progress(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_html(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_html(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_userAgent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_userAgent(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_pluginState(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_pluginState(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_disableContextMenu(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_disableContextMenu(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

	} // namespace ui
} // titanium
