// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_TrivialHostnameVerifier__
#define __javax_net_ssl_TrivialHostnameVerifier__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class TrivialHostnameVerifier;
        class SSLSession;
      }
    }
  }
}

class javax::net::ssl::TrivialHostnameVerifier : public ::java::lang::Object
{
public:
  virtual jboolean verify (::java::lang::String *, ::javax::net::ssl::SSLSession *);
public: // actually package-private
  TrivialHostnameVerifier ();
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_net_ssl_TrivialHostnameVerifier__ */
