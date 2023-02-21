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

class ListSectionProxy : public titanium::Proxy
{
public:
	explicit ListSectionProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void updateItemAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void deleteItemsAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setItems(const v8::FunctionCallbackInfo<v8::Value>&);
	static void replaceItemsAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getItemAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void appendItems(const v8::FunctionCallbackInfo<v8::Value>&);
	static void insertItemsAt(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_filteredItemCount(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_items(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_itemCount(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

	} // namespace ui
} // titanium
