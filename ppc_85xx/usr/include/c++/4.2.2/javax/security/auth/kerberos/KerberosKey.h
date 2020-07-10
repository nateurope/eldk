// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_kerberos_KerberosKey__
#define __javax_security_auth_kerberos_KerberosKey__

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
          class KerberosKey;
          class KeyImpl;
          class KerberosPrincipal;
        }
      }
    }
  }
}

class javax::security::auth::kerberos::KerberosKey : public ::java::lang::Object
{
public:
  KerberosKey (::javax::security::auth::kerberos::KerberosPrincipal *, jbyteArray, jint, jint);
  KerberosKey (::javax::security::auth::kerberos::KerberosPrincipal *, jcharArray, ::java::lang::String *);
  virtual ::java::lang::String *getAlgorithm ();
  virtual ::java::lang::String *getFormat ();
  virtual ::javax::security::auth::kerberos::KerberosPrincipal *getPrincipal ();
  virtual jint getKeyType ();
  virtual jint getVersionNumber ();
  virtual jbyteArray getEncoded ();
  virtual void destroy ();
  virtual jboolean isDestroyed ();
private:
  void checkDestroyed ();
public:
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = -4625402278148246993LL;
  ::javax::security::auth::kerberos::KerberosPrincipal * __attribute__((aligned(__alignof__( ::java::lang::Object )))) principal;
  jint versionNum;
  ::javax::security::auth::kerberos::KeyImpl *key;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_kerberos_KerberosKey__ */
