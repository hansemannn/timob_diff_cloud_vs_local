/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class QuickSettingsServiceProxy : public titanium::Proxy
{
public:
	explicit QuickSettingsServiceProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void getLabel(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isSecure(const v8::FunctionCallbackInfo<v8::Value>&);
	static void updateTile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void unlockAndRun(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startActivityAndCollapse(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getIcon(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setIcon(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getState(const v8::FunctionCallbackInfo<v8::Value>&);
	static void showDialog(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isLocked(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setState(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setLabel(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_icon(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_icon(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_state(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_state(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_label(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_label(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

} // titanium
