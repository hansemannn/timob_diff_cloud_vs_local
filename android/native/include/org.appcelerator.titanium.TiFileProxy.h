/**
 * TiDev Titanium Mobile
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace titanium {

class TiFileProxy : public titanium::Proxy
{
public:
	explicit TiFileProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void spaceAvailable(const v8::FunctionCallbackInfo<v8::Value>&);
	static void extension(const v8::FunctionCallbackInfo<v8::Value>&);
	static void resolve(const v8::FunctionCallbackInfo<v8::Value>&);
	static void modifiedAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createFile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createTimestamp(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createdAt(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createDirectory(const v8::FunctionCallbackInfo<v8::Value>&);
	static void writeLine(const v8::FunctionCallbackInfo<v8::Value>&);
	static void copy(const v8::FunctionCallbackInfo<v8::Value>&);
	static void write(const v8::FunctionCallbackInfo<v8::Value>&);
	static void modificationTimestamp(const v8::FunctionCallbackInfo<v8::Value>&);
	static void deleteFile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void move(const v8::FunctionCallbackInfo<v8::Value>&);
	static void read(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isFile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDirectoryListing(const v8::FunctionCallbackInfo<v8::Value>&);
	static void readLine(const v8::FunctionCallbackInfo<v8::Value>&);
	static void rename(const v8::FunctionCallbackInfo<v8::Value>&);
	static void exists(const v8::FunctionCallbackInfo<v8::Value>&);
	static void deleteDirectory(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isDirectory(const v8::FunctionCallbackInfo<v8::Value>&);
	static void append(const v8::FunctionCallbackInfo<v8::Value>&);
	static void open(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_parent(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_readonly(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_hidden(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_size(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_symbolicLink(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_name(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_nativePath(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_executable(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_writable(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // titanium
