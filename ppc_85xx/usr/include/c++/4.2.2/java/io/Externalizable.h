// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_Externalizable__
#define __java_io_Externalizable__

#pragma interface

#include <java/lang/Object.h>

class java::io::Externalizable : public ::java::lang::Object
{
public:
  virtual void readExternal (::java::io::ObjectInput *) = 0;
  virtual void writeExternal (::java::io::ObjectOutput *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_io_Externalizable__ */
