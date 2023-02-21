/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class ActivityProxy : public titanium::Proxy
{
public:
	explicit ActivityProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void startActivityIfNeeded(const v8::FunctionCallbackInfo<v8::Value>&);
	static void sendBroadcast(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setResult(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startActivityFromChild(const v8::FunctionCallbackInfo<v8::Value>&);
	static void sendBroadcastWithPermission(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startActivity(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startActivityForResult(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startNextMatchingActivity(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDecorView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void openOptionsMenu(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setSupportActionBar(const v8::FunctionCallbackInfo<v8::Value>&);
	static void finish(const v8::FunctionCallbackInfo<v8::Value>&);
	static void invalidateOptionsMenu(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDir(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void setter_requestedOrientation(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_window(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_actionBar(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_intent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
