// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_BASE64__
#define __gnu_java_net_BASE64__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        class BASE64;
      }
    }
  }
}

class gnu::java::net::BASE64 : public ::java::lang::Object
{
private:
  BASE64 ();
public:
  static jbyteArray encode (jbyteArray);
  static jbyteArray decode (jbyteArray);
  static void main (JArray< ::java::lang::String *> *);
private:
  static jbyteArray src;
  static jbyteArray dst;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_BASE64__ */