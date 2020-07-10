// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CipherSuite__
#define __gnu_javax_net_ssl_provider_CipherSuite__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      class Mac;
      class Cipher;
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
          class IMac;
        }
        namespace mode
        {
          class IMode;
        }
      }
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
            class ProtocolVersion;
            class CipherSuite;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CipherSuite : public ::java::lang::Object
{
private:
  CipherSuite (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, jint, jint, ::java::lang::String *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  CipherSuite (jbyteArray);
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::CipherSuite *forName (::java::lang::String *);
  static ::java::util::List *availableSuiteNames ();
  static ::gnu::javax::net::ssl::provider::CipherSuite *read (::java::io::InputStream *);
  static ::gnu::javax::crypto::mode::IMode *getCipher (::java::lang::String *);
  static ::javax::crypto::Cipher *getJCECipher (::java::lang::String *);
  static ::gnu::javax::crypto::mac::IMac *getMac (::java::lang::String *);
  static ::javax::crypto::Mac *getJCEMac (::java::lang::String *);
public:
  virtual void write (::java::io::OutputStream *);
public: // actually package-private
  virtual ::gnu::javax::net::ssl::provider::CipherSuite *resolve (::gnu::javax::net::ssl::provider::ProtocolVersion *);
  virtual ::java::lang::String *getCipher () { return cipherName; }
  virtual jint getKeyLength () { return keyLength; }
  virtual ::java::lang::String *getKeyExchange () { return kexName; }
  virtual ::java::lang::String *getSignature () { return sigName; }
  virtual ::java::lang::String *getMac () { return macName; }
  virtual jboolean isExportable () { return exportable; }
  virtual jboolean isStreamCipher () { return isStream; }
  virtual ::java::lang::String *getAuthType ();
  virtual jbyteArray getId () { return id; }
  virtual ::gnu::javax::net::ssl::provider::ProtocolVersion *getVersion () { return version; }
public:
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
private:
  static ::java::util::List *tlsSuiteNames;
  static ::java::util::HashMap *namesToSuites;
public: // actually package-private
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_NULL_WITH_NULL_NULL;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_NULL_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_NULL_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_EXPORT_WITH_RC4_40_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_RC4_128_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_RC4_128_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_DSS_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_DSS_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_DSS_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DH_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_DSS_WITH_AES_256_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_DHE_RSA_WITH_AES_256_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *SSL_RSA_WITH_AES_256_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_NULL_WITH_NULL_NULL;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_NULL_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_NULL_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_EXPORT_WITH_RC4_40_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_RC4_128_MD5;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_RC4_128_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_DSS_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_DES_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_DSS_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_DSS_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DH_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_DSS_WITH_AES_256_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_DHE_RSA_WITH_AES_256_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_CAST_128_CBC_SHA;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_CAST_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_3DES_EDE_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_AES_128_CBC_RMD;
  static ::gnu::javax::net::ssl::provider::CipherSuite *TLS_RSA_WITH_AES_256_CBC_RMD;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) cipherName;
  ::java::lang::String *kexName;
  ::java::lang::String *sigName;
  ::java::lang::String *macName;
  jboolean exportable;
  jboolean isStream;
  jint keyLength;
  jbyteArray id;
  ::java::lang::String *name;
  ::gnu::javax::net::ssl::provider::ProtocolVersion *version;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_CipherSuite__ */