// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_CRLFInputStream__
#define __gnu_java_net_CRLFInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class CRLFInputStream;
      }
    }
  }
}

class gnu::java::net::CRLFInputStream : public ::java::io::InputStream
{
public:
  CRLFInputStream (::java::io::InputStream *);
  virtual jint read ();
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);
private:
  jint indexOfCRLF (jbyteArray, jint, jint);
public:
  static const jint CR = 13L;
  static const jint LF = 10L;
public:  // actually protected
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) in;
private:
  jboolean doReset;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_CRLFInputStream__ */