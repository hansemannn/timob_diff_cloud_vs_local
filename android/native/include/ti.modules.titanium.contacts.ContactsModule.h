/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class ContactsModule : public titanium::Proxy
{
public:
	explicit ContactsModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void getPeopleWithName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void showContacts(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAllPeople(const v8::FunctionCallbackInfo<v8::Value>&);
	static void save(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createPerson(const v8::FunctionCallbackInfo<v8::Value>&);
	static void removePerson(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getPersonByIdentifier(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasContactsPermissions(const v8::FunctionCallbackInfo<v8::Value>&);
	static void requestContactsPermissions(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_contactsAuthorization(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
