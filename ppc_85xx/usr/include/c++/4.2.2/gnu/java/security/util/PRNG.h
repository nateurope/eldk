// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_util_PRNG__
#define __gnu_java_security_util_PRNG__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace util
        {
          class PRNG;
        }
        namespace prng
        {
          class IRandom;
        }
      }
    }
  }
}

class gnu::java::security::util::PRNG : public ::java::lang::Object
{
private:
  PRNG (::gnu::java::security::prng::IRandom *);
public:
  static ::gnu::java::security::util::PRNG *getInstance ();
  virtual void nextBytes (jbyteArray);
  virtual void nextBytes (jbyteArray, jint, jint);
private:
  ::gnu::java::security::prng::IRandom * __attribute__((aligned(__alignof__( ::java::lang::Object )))) delegate;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_util_PRNG__ */
