// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_RuntimeOperationsException__
#define __javax_management_RuntimeOperationsException__

#pragma interface

#include <javax/management/JMRuntimeException.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      class RuntimeOperationsException;
    }
  }
}

class javax::management::RuntimeOperationsException : public ::javax::management::JMRuntimeException
{
public:
  RuntimeOperationsException (::java::lang::RuntimeException *);
  RuntimeOperationsException (::java::lang::RuntimeException *, ::java::lang::String *);
  virtual ::java::lang::Throwable *getCause () { return reinterpret_cast< ::java::lang::Throwable *> (runtimeException); }
  virtual ::java::lang::RuntimeException *getTargetException () { return runtimeException; }
private:
  static const jlong serialVersionUID = -8408923047489133588LL;
  ::java::lang::RuntimeException * __attribute__((aligned(__alignof__( ::javax::management::JMRuntimeException )))) runtimeException;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_management_RuntimeOperationsException__ */
