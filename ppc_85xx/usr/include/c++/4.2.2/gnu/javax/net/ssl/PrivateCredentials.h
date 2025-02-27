// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_PrivateCredentials__
#define __gnu_javax_net_ssl_PrivateCredentials__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          class PrivateCredentials;
        }
      }
    }
  }
}

class gnu::javax::net::ssl::PrivateCredentials : public ::java::lang::Object
{
public:
  PrivateCredentials ();
  virtual void add (::java::io::InputStream *, ::java::io::InputStream *);
  virtual ::java::util::List *getPrivateKeys ();
  virtual ::java::util::List *getCertChains () { return certChains; }
  virtual void destroy ();
  virtual jboolean isDestroyed ();
private:
  ::java::lang::String *readLine (::java::io::InputStream *);
  jbyteArray decryptKey (jbyteArray, ::java::lang::String *, jbyteArray);
  jbyteArray deriveKey (jbyteArray, jint);
  jbyteArray toByteArray (::java::lang::String *);
public:
  static ::java::lang::String *BEGIN_DSA;
  static ::java::lang::String *END_DSA;
  static ::java::lang::String *BEGIN_RSA;
  static ::java::lang::String *END_RSA;
private:
  ::java::util::List * __attribute__((aligned(__alignof__( ::java::lang::Object )))) privateKeys;
  ::java::util::List *certChains;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_PrivateCredentials__ */
