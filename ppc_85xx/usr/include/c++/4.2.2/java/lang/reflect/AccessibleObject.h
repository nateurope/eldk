// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_AccessibleObject__
#define __java_lang_reflect_AccessibleObject__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::reflect::AccessibleObject : public ::java::lang::Object
{
public:  // actually protected
  AccessibleObject ();
public:
  virtual jboolean isAccessible () { return flag; }
  static void setAccessible (JArray< ::java::lang::reflect::AccessibleObject *> *, jboolean);
  virtual void setAccessible (jboolean);
private:
  static void checkPermission ();
  void secureSetAccessible (jboolean);
public:
  virtual ::java::lang::annotation::Annotation *getAnnotation (::java::lang::Class *);
  virtual JArray< ::java::lang::annotation::Annotation *> *getAnnotations ();
  virtual JArray< ::java::lang::annotation::Annotation *> *getDeclaredAnnotations ();
  virtual jboolean isAnnotationPresent (::java::lang::Class *);
public: // actually package-private
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  flag;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_AccessibleObject__ */
