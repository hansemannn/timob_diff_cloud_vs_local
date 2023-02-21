/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace xml {

class ElementProxy : public titanium::Proxy
{
public:
	explicit ElementProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void hasAttribute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAttributeNode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAttributeNodeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAttributeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getElementsByTagNameNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAttribute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAttribute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAttributeNode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAttributeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasAttributeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAttributeNode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removeAttribute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAttributeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getElementsByTagName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAttributeNodeNS(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_tagName(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_textContent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

	} // namespace xml
} // titanium
