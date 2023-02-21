/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class UIModule : public titanium::Proxy
{
public:
	explicit UIModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void convertUnits(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void setter_backgroundColor(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_userInterfaceStyle(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_backgroundImage(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_cutoutSize(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_overrideUserInterfaceStyle(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_overrideUserInterfaceStyle(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_statusBarHeight(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium