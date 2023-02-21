/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class GestureModule : public titanium::Proxy
{
public:
	explicit GestureModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------

	// Dynamic property accessors ----------------------------------------
	static void getter_orientation(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_portrait(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_landscape(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
