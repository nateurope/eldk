// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_TypeNotPresentException__
#define __java_lang_TypeNotPresentException__

#pragma interface

#include <java/lang/RuntimeException.h>

class java::lang::TypeNotPresentException : public ::java::lang::RuntimeException
{
public:
  TypeNotPresentException (::java::lang::String *, ::java::lang::Throwable *);
  virtual ::java::lang::String *typeName () { return typeName__; }
private:
  static const jlong serialVersionUID = -5101214195716534496LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::RuntimeException )))) typeName__;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_TypeNotPresentException__ */
