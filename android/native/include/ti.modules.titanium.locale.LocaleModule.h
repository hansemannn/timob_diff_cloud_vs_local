/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class LocaleModule : public titanium::Proxy
{
public:
	explicit LocaleModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void getCanonicalLocales(const v8::FunctionCallbackInfo<v8::Value>&);
	static void makeLowerCase(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrencyCode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getLocaleCurrencySymbol(const v8::FunctionCallbackInfo<v8::Value>&);
	static void makeUpperCase(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCurrencySymbol(const v8::FunctionCallbackInfo<v8::Value>&);
	static void formatTelephoneNumber(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSupportedCollatorLocales(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSupportedDateTimeFormatLocales(const v8::FunctionCallbackInfo<v8::Value>&);
	static void parseDecimal(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSupportedNumberFormatLocales(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setLanguage(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void setter_language(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_currentLanguage(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_currentLocale(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_currentCountry(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
