// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SSLSocketOutputStream__
#define __gnu_javax_net_ssl_provider_SSLSocketOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
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
          namespace provider
          {
            class SSLSocketOutputStream;
            class SSLSocket;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::SSLSocketOutputStream : public ::java::io::FilterOutputStream
{
public: // actually package-private
  SSLSocketOutputStream (::java::io::OutputStream *, ::gnu::javax::net::ssl::provider::SSLSocket *);
  SSLSocketOutputStream (::java::io::OutputStream *, ::gnu::javax::net::ssl::provider::SSLSocket *, jboolean);
public:
  virtual void write (jint);
  virtual void write (jbyteArray);
  virtual void write (jbyteArray, jint, jint);
private:
  void checkAlert ();
  ::gnu::javax::net::ssl::provider::SSLSocket * __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream )))) socket;
  jboolean checkHandshake;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_SSLSocketOutputStream__ */
