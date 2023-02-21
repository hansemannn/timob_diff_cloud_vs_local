/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class Ti2DMatrix : public titanium::Proxy
{
public:
	explicit Ti2DMatrix();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void rotate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void finalValuesAfterInterpolation(const v8::FunctionCallbackInfo<v8::Value>&);
	static void invert(const v8::FunctionCallbackInfo<v8::Value>&);
	static void scale(const v8::FunctionCallbackInfo<v8::Value>&);
	static void multiply(const v8::FunctionCallbackInfo<v8::Value>&);
	static void translate(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // titanium