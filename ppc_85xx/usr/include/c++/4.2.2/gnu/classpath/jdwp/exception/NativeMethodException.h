// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_exception_NativeMethodException__
#define __gnu_classpath_jdwp_exception_NativeMethodException__

#pragma interface

#include <gnu/classpath/jdwp/exception/JdwpException.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace exception
        {
          class NativeMethodException;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::exception::NativeMethodException : public ::gnu::classpath::jdwp::exception::JdwpException
{
public:
  NativeMethodException (jlong);
  NativeMethodException (::java::lang::Throwable *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_exception_NativeMethodException__ */
