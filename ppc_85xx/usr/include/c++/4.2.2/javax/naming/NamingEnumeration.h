// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_NamingEnumeration__
#define __javax_naming_NamingEnumeration__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class NamingEnumeration;
    }
  }
}

class javax::naming::NamingEnumeration : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *next () = 0;
  virtual jboolean hasMore () = 0;
  virtual void close () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_NamingEnumeration__ */
