/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace app {

class PropertiesModule : public titanium::Proxy
{
public:
	explicit PropertiesModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void setBool(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAllProperties(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDouble(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasProperty(const v8::FunctionCallbackInfo<v8::Value>&);
	static void listProperties(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setInt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setDouble(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getInt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getBool(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeProperty(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

	} // namespace app
} // titanium
