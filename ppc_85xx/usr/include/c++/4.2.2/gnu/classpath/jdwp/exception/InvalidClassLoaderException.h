// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_exception_InvalidClassLoaderException__
#define __gnu_classpath_jdwp_exception_InvalidClassLoaderException__

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
          class InvalidClassLoaderException;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::exception::InvalidClassLoaderException : public ::gnu::classpath::jdwp::exception::JdwpException
{
public:
  InvalidClassLoaderException (jlong);
  InvalidClassLoaderException (::java::lang::Throwable *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_exception_InvalidClassLoaderException__ */
