// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_exception_InvalidThreadException__
#define __gnu_classpath_jdwp_exception_InvalidThreadException__

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
          class InvalidThreadException;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::exception::InvalidThreadException : public ::gnu::classpath::jdwp::exception::JdwpException
{
public:
  InvalidThreadException (jlong);
  InvalidThreadException (::java::lang::Throwable *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_exception_InvalidThreadException__ */
