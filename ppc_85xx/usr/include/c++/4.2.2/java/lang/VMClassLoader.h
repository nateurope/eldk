// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_VMClassLoader__
#define __java_lang_VMClassLoader__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class BootClassLoader;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class URL;
    }
    namespace security
    {
      class ProtectionDomain;
      class Permission;
    }
  }
}

class java::lang::VMClassLoader : public ::java::lang::Object
{
public: // actually package-private
  static ::java::lang::Class *defineClass (::java::lang::ClassLoader *, ::java::lang::String *, jbyteArray, jint, jint, ::java::security::ProtectionDomain *);
  static void resolveClass (::java::lang::Class *) { }
  static ::java::lang::Class *loadClass (::java::lang::String *, jboolean);
  static ::java::net::URL *getResource (::java::lang::String *);
  static ::java::util::Enumeration *getResources (::java::lang::String *);
  static ::java::lang::Package *getPackage (::java::lang::String *);
  static JArray< ::java::lang::Package *> *getPackages ();
  static void definePackageForNative (::java::lang::String *);
  static ::java::lang::Class *getPrimitiveClass (jchar);
  static jboolean defaultAssertionStatus ();
  static ::java::util::Map *packageAssertionStatus ();
  static ::java::util::Map *classAssertionStatus ();
  static ::java::lang::ClassLoader *getSystemClassLoaderInternal ();
  static void initBootLoader (::java::lang::String *);
  static void initialize (::java::lang::String *);
  static ::java::lang::Class *nativeFindClass (::java::lang::String *);
  static ::java::lang::ClassLoader *getSystemClassLoader ();
  VMClassLoader ();
  static ::java::security::Permission *protectionDomainPermission;
  static ::java::security::ProtectionDomain *unknownProtectionDomain;
  static ::java::util::HashMap *definedPackages;
  static ::gnu::gcj::runtime::BootClassLoader *bootLoader;
private:
  static ::java::util::HashSet *tried_libraries;
  static jint lib_control;
  static const jint LIB_FULL = 0L;
  static const jint LIB_CACHE = 1L;
  static const jint LIB_NEVER = 2L;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_VMClassLoader__ */
