// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_BaseMac__
#define __gnu_javax_crypto_mac_BaseMac__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
          class BaseMac;
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace hash
        {
          class IMessageDigest;
        }
      }
    }
  }
}

class gnu::javax::crypto::mac::BaseMac : public ::java::lang::Object
{
public:  // actually protected
  BaseMac (::java::lang::String *);
  BaseMac (::java::lang::String *, ::gnu::java::security::hash::IMessageDigest *);
public:
  virtual ::java::lang::String *name () { return name__; }
  virtual jint macSize () { return truncatedSize; }
  virtual void update (jbyte);
  virtual void update (jbyteArray, jint, jint);
  virtual void reset ();
  virtual ::java::lang::Object *clone ();
  virtual void init (::java::util::Map *) = 0;
  virtual jbyteArray digest () = 0;
  virtual jboolean selfTest () = 0;
public:  // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) name__;
  ::gnu::java::security::hash::IMessageDigest *underlyingHash;
  jint truncatedSize;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mac_BaseMac__ */