// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_VMManagementFactory__
#define __java_lang_management_VMManagementFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::management::VMManagementFactory : public ::java::lang::Object
{
public: // actually package-private
  static JArray< ::java::lang::String *> *getMemoryPoolNames ();
  static JArray< ::java::lang::String *> *getMemoryManagerNames ();
  static JArray< ::java::lang::String *> *getGarbageCollectorNames ();
  VMManagementFactory ();
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_management_VMManagementFactory__ */
