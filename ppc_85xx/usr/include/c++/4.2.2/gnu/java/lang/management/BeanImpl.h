// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_management_BeanImpl__
#define __gnu_java_lang_management_BeanImpl__

#pragma interface

#include <javax/management/StandardMBean.h>

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
          class BeanImpl;
        }
      }
    }
  }
}

class gnu::java::lang::management::BeanImpl : public ::javax::management::StandardMBean
{
public:  // actually protected
  BeanImpl (::java::lang::Class *);
  virtual void checkMonitorPermissions ();
  virtual void checkControlPermissions ();
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_management_BeanImpl__ */