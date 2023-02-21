/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace android {

class NotificationManagerModule : public titanium::Proxy
{
public:
	explicit NotificationManagerModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void cancel(const v8::FunctionCallbackInfo<v8::Value>&);
	static void cancelAll(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createNotificationChannel(const v8::FunctionCallbackInfo<v8::Value>&);
	static void deleteNotificationChannel(const v8::FunctionCallbackInfo<v8::Value>&);
	static void areNotificationsEnabled(const v8::FunctionCallbackInfo<v8::Value>&);
	static void notify(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

	} // namespace android
} // titanium
