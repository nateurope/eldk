// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_management_ClassLoadingMXBeanImpl__
#define __gnu_java_lang_management_ClassLoadingMXBeanImpl__

#pragma interface

#include <gnu/java/lang/management/BeanImpl.h>

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
          class ClassLoadingMXBeanImpl;
        }
      }
    }
  }
}

class gnu::java::lang::management::ClassLoadingMXBeanImpl : public ::gnu::java::lang::management::BeanImpl
{
public:
  ClassLoadingMXBeanImpl ();
  virtual jint getLoadedClassCount ();
  virtual jlong getTotalLoadedClassCount ();
  virtual jlong getUnloadedClassCount ();
  virtual jboolean isVerbose ();
  virtual void setVerbose (jboolean);

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_management_ClassLoadingMXBeanImpl__ */
