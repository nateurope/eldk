// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_Beans__
#define __java_beans_Beans__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class Beans;
      class AppletInitializer;
      namespace beancontext
      {
        class BeanContext;
      }
    }
  }
}

class java::beans::Beans : public ::java::lang::Object
{
public:
  Beans ();
  static ::java::lang::Object *instantiate (::java::lang::ClassLoader *, ::java::lang::String *);
  static ::java::lang::Object *instantiate (::java::lang::ClassLoader *, ::java::lang::String *, ::java::beans::beancontext::BeanContext *);
  static ::java::lang::Object *instantiate (::java::lang::ClassLoader *, ::java::lang::String *, ::java::beans::beancontext::BeanContext *, ::java::beans::AppletInitializer *);
  static ::java::lang::Object *getInstanceOf (::java::lang::Object *, ::java::lang::Class *);
  static jboolean isInstanceOf (::java::lang::Object *, ::java::lang::Class *);
  static jboolean isGuiAvailable ();
  static jboolean isDesignTime ();
  static void setGuiAvailable (jboolean);
  static void setDesignTime (jboolean);
public: // actually package-private
  static jboolean designTime;
  static jboolean guiAvailable;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_Beans__ */
