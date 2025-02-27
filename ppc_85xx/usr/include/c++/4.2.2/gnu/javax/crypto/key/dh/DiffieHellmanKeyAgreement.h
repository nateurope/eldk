// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_DiffieHellmanKeyAgreement__
#define __gnu_javax_crypto_key_dh_DiffieHellmanKeyAgreement__

#pragma interface

#include <gnu/javax/crypto/key/BaseKeyAgreementParty.h>
#include <gcj/array.h>

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
            class DiffieHellmanKeyAgreement;
          }
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
  namespace javax
  {
    namespace crypto
    {
      namespace interfaces
      {
        class DHPrivateKey;
      }
    }
  }
}

class gnu::javax::crypto::key::dh::DiffieHellmanKeyAgreement : public ::gnu::javax::crypto::key::BaseKeyAgreementParty
{
public:  // actually protected
  DiffieHellmanKeyAgreement ();
  virtual jbyteArray engineSharedSecret ();
  virtual void engineReset ();
public:
  static ::java::lang::String *SOURCE_OF_RANDOMNESS;
  static ::java::lang::String *KA_DIFFIE_HELLMAN_OWNER_PRIVATE_KEY;
public:  // actually protected
  ::javax::crypto::interfaces::DHPrivateKey * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::BaseKeyAgreementParty )))) ownerKey;
  ::java::math::BigInteger *ZZ;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_DiffieHellmanKeyAgreement__ */
