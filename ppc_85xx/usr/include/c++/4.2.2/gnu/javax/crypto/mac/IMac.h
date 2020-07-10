// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_IMac__
#define __gnu_javax_crypto_mac_IMac__

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
          class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::mac::IMac : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *name () = 0;
  virtual jint macSize () = 0;
  virtual void init (::java::util::Map *) = 0;
  virtual void update (jbyte) = 0;
  virtual void update (jbyteArray, jint, jint) = 0;
  virtual jbyteArray digest () = 0;
  virtual void reset () = 0;
  virtual jboolean selfTest () = 0;
  virtual ::java::lang::Object *clone () = 0;
  static ::java::lang::String *MAC_KEY_MATERIAL;
  static ::java::lang::String *TRUNCATED_SIZE;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_javax_crypto_mac_IMac__ */
