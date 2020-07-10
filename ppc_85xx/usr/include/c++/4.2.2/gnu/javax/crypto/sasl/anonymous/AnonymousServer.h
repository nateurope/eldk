// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_anonymous_AnonymousServer__
#define __gnu_javax_crypto_sasl_anonymous_AnonymousServer__

#pragma interface

#include <gnu/javax/crypto/sasl/ServerMechanism.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace sasl
        {
          namespace anonymous
          {
            class AnonymousServer;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::anonymous::AnonymousServer : public ::gnu::javax::crypto::sasl::ServerMechanism
{
public:
  AnonymousServer ();
public:  // actually protected
  virtual void initMechanism () { }
  virtual void resetMechanism () { }
public:
  virtual jbyteArray evaluateResponse (jbyteArray);

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_anonymous_AnonymousServer__ */
