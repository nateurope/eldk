// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_exception_InvalidStringException__
#define __gnu_classpath_jdwp_exception_InvalidStringException__

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
          class InvalidStringException;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::exception::InvalidStringException : public ::gnu::classpath::jdwp::exception::JdwpException
{
public:
  InvalidStringException (::java::lang::String *);
  InvalidStringException (jlong);
  InvalidStringException (::java::lang::Throwable *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_exception_InvalidStringException__ */
