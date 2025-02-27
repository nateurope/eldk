// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_DiffieHellmanSender__
#define __gnu_javax_crypto_key_dh_DiffieHellmanSender__

#pragma interface

#include <gnu/javax/crypto/key/dh/DiffieHellmanKeyAgreement.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
            class DiffieHellmanSender;
          }
          class OutgoingMessage;
          class IncomingMessage;
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::javax::crypto::key::dh::DiffieHellmanSender : public ::gnu::javax::crypto::key::dh::DiffieHellmanKeyAgreement
{
public:  // actually protected
  virtual void engineInit (::java::util::Map *);
  virtual ::gnu::javax::crypto::key::OutgoingMessage *engineProcessMessage (::gnu::javax::crypto::key::IncomingMessage *);
private:
  ::gnu::javax::crypto::key::OutgoingMessage *sendRandomSecret (::gnu::javax::crypto::key::IncomingMessage *);
  ::gnu::javax::crypto::key::OutgoingMessage *computeSharedSecret (::gnu::javax::crypto::key::IncomingMessage *);
public:
  DiffieHellmanSender ();
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::dh::DiffieHellmanKeyAgreement )))) x;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_DiffieHellmanSender__ */
