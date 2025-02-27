// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_CRLFOutputStream__
#define __gnu_java_net_CRLFOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class CRLFOutputStream;
      }
    }
  }
}

class gnu::java::net::CRLFOutputStream : public ::java::io::FilterOutputStream
{
public:
  CRLFOutputStream (::java::io::OutputStream *);
  virtual void write (jint);
  virtual void write (jbyteArray);
  virtual void write (jbyteArray, jint, jint);
  virtual void write (::java::lang::String *);
  virtual void writeln ();
public: // actually package-private
  static ::java::lang::String *US_ASCII;
public:
  static const jint CR = 13L;
  static const jint LF = 10L;
  static jbyteArray CRLF;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream ))))  last;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_CRLFOutputStream__ */
