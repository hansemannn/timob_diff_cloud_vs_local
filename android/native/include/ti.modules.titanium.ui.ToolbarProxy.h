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

class ToolbarProxy : public titanium::Proxy
{
public:
	explicit ToolbarProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void getContentInsetEnd(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getContentInsetLeft(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrentContentInsetEnd(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrentContentInsetStart(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrentContentInsetLeft(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getContentInsetStart(const v8::FunctionCallbackInfo<v8::Value>&);
	static void collapseActionView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getContentInsetRight(const v8::FunctionCallbackInfo<v8::Value>&);
	static void dismissPopupMenus(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasExpandedActionView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrentContentInsetRight(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setContentInsetsAbsolute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isOverflowMenuShowing(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hideOverflowMenu(const v8::FunctionCallbackInfo<v8::Value>&);
	static void showOverflowMenu(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setContentInsetsRelative(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

	} // namespace ui
} // titanium
