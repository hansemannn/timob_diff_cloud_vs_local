/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class UtilsModule : public titanium::Proxy
{
public:
	explicit UtilsModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void sha1(const v8::FunctionCallbackInfo<v8::Value>&);
	static void base64decode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void md5HexDigest(const v8::FunctionCallbackInfo<v8::Value>&);
	static void sha256(const v8::FunctionCallbackInfo<v8::Value>&);
	static void base64encode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void arrayTest(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // titanium
