// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_MemoryManagerMXBean__
#define __java_lang_management_MemoryManagerMXBean__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::management::MemoryManagerMXBean : public ::java::lang::Object
{
public:
  virtual JArray< ::java::lang::String *> *getMemoryPoolNames () = 0;
  virtual ::java::lang::String *getName () = 0;
  virtual jboolean isValid () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_management_MemoryManagerMXBean__ */
