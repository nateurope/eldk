// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_sig_SignatureCodecFactory__
#define __gnu_java_security_sig_SignatureCodecFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace sig
        {
          class SignatureCodecFactory;
          class ISignatureCodec;
        }
      }
    }
  }
}

class gnu::java::security::sig::SignatureCodecFactory : public ::java::lang::Object
{
private:
  SignatureCodecFactory ();
public:
  static ::gnu::java::security::sig::ISignatureCodec *getInstance (::java::lang::String *);
  static ::gnu::java::security::sig::ISignatureCodec *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::gnu::java::security::sig::ISignatureCodec *getInstance (::java::lang::String *, jint);
  static ::java::util::Set *getNames ();
private:
  static ::gnu::java::security::sig::ISignatureCodec *getRawCodec (::java::lang::String *);
  static ::gnu::java::security::sig::ISignatureCodec *getX509Codec (::java::lang::String *);
  static ::java::util::Set *names;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_sig_SignatureCodecFactory__ */
