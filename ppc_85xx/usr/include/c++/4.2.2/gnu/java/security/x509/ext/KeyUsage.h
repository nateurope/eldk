// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_KeyUsage__
#define __gnu_java_security_x509_ext_KeyUsage__

#pragma interface

#include <gnu/java/security/x509/ext/Extension$Value.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace x509
        {
          namespace ext
          {
            class KeyUsage;
          }
        }
        namespace der
        {
          class BitString;
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::KeyUsage : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  KeyUsage (jbyteArray);
  virtual ::gnu::java::security::der::BitString *getKeyUsage () { return keyUsage; }
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
  static const jint DIGITAL_SIGNATURE = 0L;
  static const jint NON_REPUDIATION = 1L;
  static const jint KEY_ENCIPHERMENT = 2L;
  static const jint DATA_ENCIPHERMENT = 3L;
  static const jint KEY_AGREEMENT = 4L;
  static const jint KEY_CERT_SIGN = 5L;
  static const jint CRL_SIGN = 6L;
  static const jint ENCIPHER_ONLY = 7L;
  static const jint DECIPHER_ONLY = 8L;
private:
  ::gnu::java::security::der::BitString * __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value )))) keyUsage;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_KeyUsage__ */
