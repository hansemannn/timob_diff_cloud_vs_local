/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {
	namespace database {

class TiResultSetProxy : public titanium::Proxy
{
public:
	explicit TiResultSetProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void next(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fieldName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void field(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fieldByName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getFieldByName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getField(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isValidRow(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getFieldName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void close(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_fieldCount(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_rowCount(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_validRow(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

	} // namespace database
} // titanium
