// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_GarbageCollectorMXBean__
#define __java_lang_management_GarbageCollectorMXBean__

#pragma interface

#include <java/lang/Object.h>

class java::lang::management::GarbageCollectorMXBean : public ::java::lang::Object
{
public:
  virtual jlong getCollectionCount () = 0;
  virtual jlong getCollectionTime () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_management_GarbageCollectorMXBean__ */
