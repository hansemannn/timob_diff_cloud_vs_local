/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class TiViewProxy : public titanium::Proxy
{
public:
	explicit TiViewProxy();

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
	static void hideKeyboard(const v8::FunctionCallbackInfo<v8::Value>&);
	static void insertAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void show(const v8::FunctionCallbackInfo<v8::Value>&);
	static void blur(const v8::FunctionCallbackInfo<v8::Value>&);
	static void focus(const v8::FunctionCallbackInfo<v8::Value>&);
	static void animate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void remove(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAllChildren(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hide(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getViewById(const v8::FunctionCallbackInfo<v8::Value>&);
	static void toImage(const v8::FunctionCallbackInfo<v8::Value>&);
	static void convertPointToView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void replaceAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addClass(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_parent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_backgroundFocusedColor(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_backgroundColor(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_keepScreenOn(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_keepScreenOn(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_center(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_center(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_backgroundDisabledColor(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_backgroundSelectedColor(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_rect(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_size(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_children(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_width(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_width(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_height(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_height(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

} // titanium
