// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_MBeanException__
#define __javax_management_MBeanException__

#pragma interface

#include <javax/management/JMException.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      class MBeanException;
    }
  }
}

class javax::management::MBeanException : public ::javax::management::JMException
{
public:
  MBeanException (::java::lang::Exception *);
  MBeanException (::java::lang::Exception *, ::java::lang::String *);
  virtual ::java::lang::Throwable *getCause () { return reinterpret_cast< ::java::lang::Throwable *> (exception); }
  virtual ::java::lang::Exception *getTargetException () { return exception; }
private:
  static const jlong serialVersionUID = 4066342430588744142LL;
  ::java::lang::Exception * __attribute__((aligned(__alignof__( ::javax::management::JMException )))) exception;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_management_MBeanException__ */
