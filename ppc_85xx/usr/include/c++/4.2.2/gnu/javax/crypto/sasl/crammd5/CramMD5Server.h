// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_crammd5_CramMD5Server__
#define __gnu_javax_crypto_sasl_crammd5_CramMD5Server__

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
          namespace crammd5
          {
            class CramMD5Server;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::crammd5::CramMD5Server : public ::gnu::javax::crypto::sasl::ServerMechanism
{
public:
  CramMD5Server ();
public:  // actually protected
  virtual void initMechanism () { }
  virtual void resetMechanism () { }
public:
  virtual jbyteArray evaluateResponse (jbyteArray);
  virtual jboolean isComplete ();
public:  // actually protected
  virtual ::java::lang::String *getNegotiatedQOP ();
private:
  jcharArray lookupPassword (::java::lang::String *);
  jbyteArray __attribute__((aligned(__alignof__( ::gnu::javax::crypto::sasl::ServerMechanism ))))  msgID;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_crammd5_CramMD5Server__ */
