// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_OperatingSystemMXBean__
#define __java_lang_management_OperatingSystemMXBean__

#pragma interface

#include <java/lang/Object.h>

class java::lang::management::OperatingSystemMXBean : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *getArch () = 0;
  virtual jint getAvailableProcessors () = 0;
  virtual ::java::lang::String *getName () = 0;
  virtual ::java::lang::String *getVersion () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_management_OperatingSystemMXBean__ */
