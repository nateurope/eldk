// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_management_VMRuntimeMXBeanImpl__
#define __gnu_java_lang_management_VMRuntimeMXBeanImpl__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
        namespace management
        {
          class VMRuntimeMXBeanImpl;
        }
      }
    }
  }
}

class gnu::java::lang::management::VMRuntimeMXBeanImpl : public ::java::lang::Object
{
public: // actually package-private
  static JArray< ::java::lang::String *> *getInputArguments ();
  static ::java::lang::String *getName ();
  static jlong getStartTime ();
  VMRuntimeMXBeanImpl ();
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_management_VMRuntimeMXBeanImpl__ */
