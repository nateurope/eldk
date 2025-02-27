// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_srp_SecurityContext__
#define __gnu_javax_crypto_sasl_srp_SecurityContext__

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
        namespace sasl
        {
          namespace srp
          {
            class SecurityContext;
            class CALG;
            class IALG;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::srp::SecurityContext : public ::java::lang::Object
{
public: // actually package-private
  SecurityContext (::java::lang::String *, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jboolean, jint, jint, ::gnu::javax::crypto::sasl::srp::IALG *, ::gnu::javax::crypto::sasl::srp::IALG *, ::gnu::javax::crypto::sasl::srp::CALG *, ::gnu::javax::crypto::sasl::srp::CALG *);
  virtual ::java::lang::String *getMdName () { return mdName; }
  virtual jbyteArray getSID () { return sid; }
  virtual jbyteArray getK () { return K; }
  virtual jbyteArray getClientIV () { return cIV; }
  virtual jbyteArray getServerIV () { return sIV; }
  virtual jboolean hasReplayDetection () { return replayDetection; }
  virtual jint getInCounter () { return inCounter; }
  virtual jint getOutCounter () { return outCounter; }
  virtual ::gnu::javax::crypto::sasl::srp::IALG *getInMac () { return inMac; }
  virtual ::gnu::javax::crypto::sasl::srp::IALG *getOutMac () { return outMac; }
  virtual ::gnu::javax::crypto::sasl::srp::CALG *getInCipher () { return inCipher; }
  virtual ::gnu::javax::crypto::sasl::srp::CALG *getOutCipher () { return outCipher; }
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) mdName;
  jbyteArray sid;
  jbyteArray K;
  jbyteArray cIV;
  jbyteArray sIV;
  jboolean replayDetection;
  jint inCounter;
  jint outCounter;
  ::gnu::javax::crypto::sasl::srp::IALG *inMac;
  ::gnu::javax::crypto::sasl::srp::IALG *outMac;
  ::gnu::javax::crypto::sasl::srp::CALG *inCipher;
  ::gnu::javax::crypto::sasl::srp::CALG *outCipher;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_srp_SecurityContext__ */
