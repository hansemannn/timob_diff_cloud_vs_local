/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class TitaniumModule : public titanium::Proxy
{
public:
	explicit TitaniumModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void localize(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clearInterval(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTimeout(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stringFormatDate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stringFormat(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setInterval(const v8::FunctionCallbackInfo<v8::Value>&);
	static void alert(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stringFormatCurrency(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clearTimeout(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stringFormatTime(const v8::FunctionCallbackInfo<v8::Value>&);
	static void testThrow(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stringFormatDecimal(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_userAgent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_buildDate(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_buildTimestamp(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_buildHash(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_version(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
