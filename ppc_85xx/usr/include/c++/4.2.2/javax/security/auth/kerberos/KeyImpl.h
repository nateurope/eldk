// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_kerberos_KeyImpl__
#define __javax_security_auth_kerberos_KeyImpl__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace kerberos
        {
          class KeyImpl;
        }
      }
    }
  }
}

class javax::security::auth::kerberos::KeyImpl : public ::java::lang::Object
{
public:
  KeyImpl (jbyteArray, jint);
  KeyImpl (jcharArray, ::java::lang::String *);
  virtual ::java::lang::String *getAlgorithm () { return algorithm; }
  virtual jbyteArray getEncoded () { return key; }
  virtual ::java::lang::String *getFormat () { return 0; }
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) algorithm;
  jint type;
  jbyteArray key;

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_kerberos_KeyImpl__ */
