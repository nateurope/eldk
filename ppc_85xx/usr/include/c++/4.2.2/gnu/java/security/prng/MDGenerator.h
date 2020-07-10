// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_prng_MDGenerator__
#define __gnu_java_security_prng_MDGenerator__

#pragma interface

#include <gnu/java/security/prng/BasePRNG.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace prng
        {
          class MDGenerator;
        }
        namespace hash
        {
          class IMessageDigest;
        }
      }
    }
  }
}

class gnu::java::security::prng::MDGenerator : public ::gnu::java::security::prng::BasePRNG
{
public:
  MDGenerator ();
  virtual void setup (::java::util::Map *);
  virtual void fillBlock ();
  virtual void addRandomByte (jbyte);
  virtual void addRandomBytes (jbyteArray, jint, jint);
  virtual ::java::lang::Object *clone ();
  static ::java::lang::String *MD_NAME;
  static ::java::lang::String *SEEED;
private:
  ::gnu::java::security::hash::IMessageDigest * __attribute__((aligned(__alignof__( ::gnu::java::security::prng::BasePRNG )))) md;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_prng_MDGenerator__ */
