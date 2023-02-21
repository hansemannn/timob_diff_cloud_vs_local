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

class RemoteViewsProxy : public titanium::Proxy
{
public:
	explicit RemoteViewsProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void setImageViewResource(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setChronometer(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextViewText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setUri(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextColor(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setProgressBar(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setViewVisibility(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setOnClickPendingIntent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setInt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setDouble(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setImageViewUri(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setBoolean(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

	} // namespace android
} // titanium
