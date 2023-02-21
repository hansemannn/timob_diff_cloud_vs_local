/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class NetworkModule : public titanium::Proxy
{
public:
	explicit NetworkModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void removeHTTPCookiesForDomain(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeHTTPCookie(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getHTTPCookiesForDomain(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeSystemCookie(const v8::FunctionCallbackInfo<v8::Value>&);
	static void decodeURIComponent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAllSystemCookies(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getHTTPCookies(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAllHTTPCookies(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSystemCookies(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addHTTPCookie(const v8::FunctionCallbackInfo<v8::Value>&);
	static void encodeURIComponent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addSystemCookie(const v8::FunctionCallbackInfo<v8::Value>&);
	static void registerForPushNotifications(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_networkTypeName(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_online(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_remoteNotificationsEnabled(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_networkType(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
