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

class DocumentProxy : public titanium::Proxy
{
public:
	explicit DocumentProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void createEntityReference(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getElementById(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createAttributeNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createTextNode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createElementNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createCDATASection(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createElement(const v8::FunctionCallbackInfo<v8::Value>&);
	static void importNode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createComment(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getElementsByTagNameNS(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createAttribute(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createDocumentFragment(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createProcessingInstruction(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getElementsByTagName(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_doctype(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_documentElement(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_implementation(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

	} // namespace xml
} // titanium
