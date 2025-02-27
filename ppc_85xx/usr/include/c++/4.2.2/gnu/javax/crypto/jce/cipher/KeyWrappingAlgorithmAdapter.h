// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_jce_cipher_KeyWrappingAlgorithmAdapter__
#define __gnu_javax_crypto_jce_cipher_KeyWrappingAlgorithmAdapter__

#pragma interface

#include <javax/crypto/CipherSpi.h>
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
      class SecureRandom;
      class AlgorithmParameters;
      class Key;
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
          namespace cipher
          {
            class KeyWrappingAlgorithmAdapter;
          }
        }
        namespace kwa
        {
          class IKeyWrappingAlgorithm;
        }
      }
    }
  }
}

class gnu::javax::crypto::jce::cipher::KeyWrappingAlgorithmAdapter : public ::javax::crypto::CipherSpi
{
public:  // actually protected
  KeyWrappingAlgorithmAdapter (::java::lang::String *, jint, jint, ::java::lang::String *);
  virtual jbyteArray engineWrap (::java::security::Key *);
  virtual ::java::security::Key *engineUnwrap (jbyteArray, ::java::lang::String *, jint);
  virtual jint engineGetBlockSize () { return kwaBlockSize; }
  virtual jbyteArray engineGetIV ();
  virtual jint engineGetOutputSize (jint);
  virtual ::java::security::AlgorithmParameters *engineGetParameters ();
  virtual void engineInit (jint, ::java::security::Key *, ::java::security::SecureRandom *);
  virtual void engineInit (jint, ::java::security::Key *, ::java::security::AlgorithmParameters *, ::java::security::SecureRandom *);
  virtual void engineInit (jint, ::java::security::Key *, ::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *);
  virtual void engineSetMode (::java::lang::String *);
  virtual void engineSetPadding (::java::lang::String *);
  virtual jbyteArray engineUpdate (jbyteArray, jint, jint);
  virtual jint engineUpdate (jbyteArray, jint, jint, jbyteArray, jint);
  virtual jbyteArray engineDoFinal (jbyteArray, jint, jint);
  virtual jint engineDoFinal (jbyteArray, jint, jint, jbyteArray, jint);
  virtual jint getOutputSizeForWrap (jint);
  virtual jint getOutputSizeForUnwrap (jint);
private:
  void checkOpMode (jint);
  jbyteArray checkAndGetKekBytes (::java::security::Key *);
  void initAlgorithm (jint, jbyteArray, jbyteArray, ::java::security::SecureRandom *);
  static ::java::util::logging::Logger *log;
  static ::java::lang::String *NO_PADDING;
public:  // actually protected
  ::gnu::javax::crypto::kwa::IKeyWrappingAlgorithm * __attribute__((aligned(__alignof__( ::javax::crypto::CipherSpi )))) kwAlgorithm;
  jint kwaBlockSize;
  jint kwaKeySize;
  ::java::lang::String *supportedMode;
  jint opmode;
public: // actually package-private
  jbyteArray iv;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_jce_cipher_KeyWrappingAlgorithmAdapter__ */
