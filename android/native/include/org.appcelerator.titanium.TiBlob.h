/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class TiBlob : public titanium::Proxy
{
public:
	explicit TiBlob();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void imageWithAlpha(const v8::FunctionCallbackInfo<v8::Value>&);
	static void toBase64(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageAsCropped(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageAsCompressed(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageWithTransparentBorder(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageWithRoundedCorner(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageAsResized(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageAsThumbnail(const v8::FunctionCallbackInfo<v8::Value>&);
	static void toString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void toArrayBuffer(const v8::FunctionCallbackInfo<v8::Value>&);
	static void append(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_file(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_size(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_uprightWidth(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_length(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_width(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_nativePath(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_text(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_mimeType(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_type(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_uprightHeight(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_height(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
