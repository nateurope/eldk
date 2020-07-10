// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_SealedObject__
#define __javax_crypto_SealedObject__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Key;
    }
  }
  namespace javax
  {
    namespace crypto
    {
      class SealedObject;
      class Cipher;
    }
  }
}

class javax::crypto::SealedObject : public ::java::lang::Object
{
public:
  SealedObject (::java::io::Serializable *, ::javax::crypto::Cipher *);
public:  // actually protected
  SealedObject (::javax::crypto::SealedObject *);
public:
  virtual ::java::lang::String *getAlgorithm () { return sealAlg; }
  virtual ::java::lang::Object *getObject (::javax::crypto::Cipher *);
  virtual ::java::lang::Object *getObject (::java::security::Key *);
  virtual ::java::lang::Object *getObject (::java::security::Key *, ::java::lang::String *);
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  ::java::lang::Object *unseal ();
public:  // actually protected
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  encodedParams;
private:
  jbyteArray encryptedContent;
  ::java::lang::String *sealAlg;
  ::java::lang::String *paramsAlg;
  ::javax::crypto::Cipher *sealCipher;
  static const jlong serialVersionUID = 4482838265551344752LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_SealedObject__ */