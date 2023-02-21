/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class IntentProxy : public titanium::Proxy
{
public:
	explicit IntentProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void putExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addFlags(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDoubleExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getStringExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getLongExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getIntExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void putExtraUri(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addCategory(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getBooleanExtra(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getBlobExtra(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_data(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_flags(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_flags(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_action(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_action(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_className(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_packageName(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_type(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_type(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

} // titanium
