/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace ui {

class ClipboardModule : public titanium::Proxy
{
public:
	explicit ClipboardModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void clearText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setData(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasData(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getData(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clearData(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_text(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_text(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

	} // namespace ui
} // titanium
