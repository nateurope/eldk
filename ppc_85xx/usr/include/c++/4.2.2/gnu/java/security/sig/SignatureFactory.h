// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_sig_SignatureFactory__
#define __gnu_java_security_sig_SignatureFactory__

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
          class SignatureFactory;
          class ISignature;
        }
      }
    }
  }
}

class gnu::java::security::sig::SignatureFactory : public ::java::lang::Object
{
private:
  SignatureFactory ();
public:
  static ::gnu::java::security::sig::ISignature *getInstance (::java::lang::String *);
  static ::java::util::Set *getNames ();
private:
  static ::java::util::Set *names;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_sig_SignatureFactory__ */
