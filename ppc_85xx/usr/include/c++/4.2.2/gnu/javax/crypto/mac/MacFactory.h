// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_MacFactory__
#define __gnu_javax_crypto_mac_MacFactory__

#pragma interface

#include <java/lang/Object.h>

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
          class MacFactory;
          class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::mac::MacFactory : public ::java::lang::Object
{
private:
  MacFactory ();
public:
  static ::gnu::javax::crypto::mac::IMac *getInstance (::java::lang::String *);
  static ::java::util::Set *getNames ();
private:
  static ::java::util::Set *names;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mac_MacFactory__ */
