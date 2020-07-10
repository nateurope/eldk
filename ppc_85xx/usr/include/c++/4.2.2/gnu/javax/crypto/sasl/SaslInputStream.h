// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_SaslInputStream__
#define __gnu_javax_crypto_sasl_SaslInputStream__

#pragma interface

#include <java/io/InputStream.h>
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
          class SaslInputStream;
        }
      }
    }
  }
  namespace javax
  {
    namespace security
    {
      namespace sasl
      {
        class SaslServer;
        class SaslClient;
      }
    }
  }
}

class gnu::javax::crypto::sasl::SaslInputStream : public ::java::io::InputStream
{
public:
  SaslInputStream (::javax::security::sasl::SaslClient *, ::java::io::InputStream *);
  SaslInputStream (::javax::security::sasl::SaslServer *, ::java::io::InputStream *);
  virtual jint available ();
  virtual void close ();
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
private:
  jbyteArray readSaslBuffer ();
  static ::java::util::logging::Logger *log;
  ::javax::security::sasl::SaslClient * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) client;
  ::javax::security::sasl::SaslServer *server;
  jint maxRawSendSize;
  ::java::io::InputStream *source;
  jbyteArray internalBuf;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_SaslInputStream__ */