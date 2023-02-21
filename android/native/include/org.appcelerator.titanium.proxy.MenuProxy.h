/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class MenuProxy : public titanium::Proxy
{
public:
	explicit MenuProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void add(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeItem(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clear(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getItem(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setGroupVisible(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setGroupCheckable(const v8::FunctionCallbackInfo<v8::Value>&);
	static void findItem(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasVisibleItems(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setGroupEnabled(const v8::FunctionCallbackInfo<v8::Value>&);
	static void size(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeGroup(const v8::FunctionCallbackInfo<v8::Value>&);
	static void close(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_items(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
