// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_InvalidPropertiesFormatException__
#define __java_util_InvalidPropertiesFormatException__

#pragma interface

#include <java/io/IOException.h>

class java::util::InvalidPropertiesFormatException : public ::java::io::IOException
{
public:
  InvalidPropertiesFormatException (::java::lang::String *);
  InvalidPropertiesFormatException (::java::lang::Throwable *);
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 7763056076009360219LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_InvalidPropertiesFormatException__ */
