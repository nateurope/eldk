// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_exception_InvalidClassException__
#define __gnu_classpath_jdwp_exception_InvalidClassException__

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
          class InvalidClassException;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::exception::InvalidClassException : public ::gnu::classpath::jdwp::exception::JdwpException
{
public:
  InvalidClassException (jlong);
  InvalidClassException (::java::lang::Throwable *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_exception_InvalidClassException__ */
