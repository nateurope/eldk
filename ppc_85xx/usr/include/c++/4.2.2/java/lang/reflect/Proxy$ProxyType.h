// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Proxy$ProxyType__
#define __java_lang_reflect_Proxy$ProxyType__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::reflect::Proxy$ProxyType : public ::java::lang::Object
{
public: // actually package-private
  Proxy$ProxyType (::java::lang::ClassLoader *, JArray< ::java::lang::Class *> *);
public:
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
public: // actually package-private
  ::java::lang::ClassLoader * __attribute__((aligned(__alignof__( ::java::lang::Object )))) loader;
  JArray< ::java::lang::Class *> *interfaces;

  friend class java_lang_reflect_Proxy$ProxyType;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_Proxy$ProxyType__ */