// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_jce_params_BlockCipherParameters__
#define __gnu_javax_crypto_jce_params_BlockCipherParameters__

#pragma interface

#include <java/security/AlgorithmParametersSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace jce
        {
          namespace params
          {
            class BlockCipherParameters;
          }
          namespace spec
          {
            class BlockCipherParameterSpec;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::jce::params::BlockCipherParameters : public ::java::security::AlgorithmParametersSpi
{
public:  // actually protected
  virtual jbyteArray engineGetEncoded ();
  virtual jbyteArray engineGetEncoded (::java::lang::String *);
  virtual void engineInit (::java::security::spec::AlgorithmParameterSpec *);
  virtual void engineInit (jbyteArray, ::java::lang::String *);
  virtual void engineInit (jbyteArray);
  virtual ::java::security::spec::AlgorithmParameterSpec *engineGetParameterSpec (::java::lang::Class *);
  virtual ::java::lang::String *engineToString ();
public:
  BlockCipherParameters ();
private:
  static ::java::util::logging::Logger *log;
public:  // actually protected
  ::gnu::javax::crypto::jce::spec::BlockCipherParameterSpec * __attribute__((aligned(__alignof__( ::java::security::AlgorithmParametersSpi )))) cipherSpec;
private:
  static ::java::lang::String *DEFAULT_FORMAT;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_jce_params_BlockCipherParameters__ */
