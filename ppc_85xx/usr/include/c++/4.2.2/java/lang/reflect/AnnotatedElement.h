// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_AnnotatedElement__
#define __java_lang_reflect_AnnotatedElement__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::reflect::AnnotatedElement : public ::java::lang::Object
{
public:
  virtual ::java::lang::annotation::Annotation *getAnnotation (::java::lang::Class *) = 0;
  virtual JArray< ::java::lang::annotation::Annotation *> *getAnnotations () = 0;
  virtual JArray< ::java::lang::annotation::Annotation *> *getDeclaredAnnotations () = 0;
  virtual jboolean isAnnotationPresent (::java::lang::Class *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_reflect_AnnotatedElement__ */
