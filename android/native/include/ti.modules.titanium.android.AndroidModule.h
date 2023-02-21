/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class AndroidModule : public titanium::Proxy
{
public:
	explicit AndroidModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void unregisterBroadcastReceiver(const v8::FunctionCallbackInfo<v8::Value>&);
	static void requestPermissions(const v8::FunctionCallbackInfo<v8::Value>&);
	static void registerBroadcastReceiver(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createBroadcastIntent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isServiceRunning(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createServiceIntent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startService(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createService(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createIntentChooser(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasPermission(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stopService(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createIntent(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_R(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_rootActivity(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_currentActivity(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
