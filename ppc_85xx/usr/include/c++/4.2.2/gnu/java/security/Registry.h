// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_Registry__
#define __gnu_java_security_Registry__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        class Registry;
      }
    }
  }
}

class gnu::java::security::Registry : public ::java::lang::Object
{
public:
  static ::java::lang::String *GNU_SECURITY;
  static ::java::lang::String *GNU_CRYPTO;
  static ::java::lang::String *GNU_SASL;
  static ::java::lang::String *VERSION_STRING;
  static ::java::lang::String *ANUBIS_CIPHER;
  static ::java::lang::String *BLOWFISH_CIPHER;
  static ::java::lang::String *DES_CIPHER;
  static ::java::lang::String *KHAZAD_CIPHER;
  static ::java::lang::String *RIJNDAEL_CIPHER;
  static ::java::lang::String *SERPENT_CIPHER;
  static ::java::lang::String *SQUARE_CIPHER;
  static ::java::lang::String *TRIPLEDES_CIPHER;
  static ::java::lang::String *TWOFISH_CIPHER;
  static ::java::lang::String *CAST5_CIPHER;
  static ::java::lang::String *NULL_CIPHER;
  static ::java::lang::String *AES_CIPHER;
  static ::java::lang::String *DESEDE_CIPHER;
  static ::java::lang::String *CAST128_CIPHER;
  static ::java::lang::String *CAST_128_CIPHER;
  static ::java::lang::String *KWA_PREFIX;
  static ::java::lang::String *AES_KWA;
  static ::java::lang::String *AES128_KWA;
  static ::java::lang::String *AES192_KWA;
  static ::java::lang::String *AES256_KWA;
  static ::java::lang::String *RIJNDAEL_KWA;
  static ::java::lang::String *TRIPLEDES_KWA;
  static ::java::lang::String *DESEDE_KWA;
  static ::java::lang::String *WHIRLPOOL_HASH;
  static ::java::lang::String *RIPEMD128_HASH;
  static ::java::lang::String *RIPEMD160_HASH;
  static ::java::lang::String *SHA160_HASH;
  static ::java::lang::String *SHA256_HASH;
  static ::java::lang::String *SHA384_HASH;
  static ::java::lang::String *SHA512_HASH;
  static ::java::lang::String *TIGER_HASH;
  static ::java::lang::String *HAVAL_HASH;
  static ::java::lang::String *MD5_HASH;
  static ::java::lang::String *MD4_HASH;
  static ::java::lang::String *MD2_HASH;
  static ::java::lang::String *RIPEMD_128_HASH;
  static ::java::lang::String *RIPEMD_160_HASH;
  static ::java::lang::String *SHA_1_HASH;
  static ::java::lang::String *SHA1_HASH;
  static ::java::lang::String *SHA_HASH;
  static ::java::lang::String *ECB_MODE;
  static ::java::lang::String *CTR_MODE;
  static ::java::lang::String *ICM_MODE;
  static ::java::lang::String *OFB_MODE;
  static ::java::lang::String *CBC_MODE;
  static ::java::lang::String *CFB_MODE;
  static ::java::lang::String *EAX_MODE;
  static ::java::lang::String *PKCS5_PAD;
  static ::java::lang::String *PKCS7_PAD;
  static ::java::lang::String *TBC_PAD;
  static ::java::lang::String *EME_PKCS1_V1_5_PAD;
  static ::java::lang::String *SSL3_PAD;
  static ::java::lang::String *TLS1_PAD;
  static ::java::lang::String *ISO10126_PAD;
  static ::java::lang::String *ARCFOUR_PRNG;
  static ::java::lang::String *RC4_PRNG;
  static ::java::lang::String *ICM_PRNG;
  static ::java::lang::String *MD_PRNG;
  static ::java::lang::String *UMAC_PRNG;
  static ::java::lang::String *PBKDF2_PRNG_PREFIX;
  static ::java::lang::String *CSPRNG_PRNG;
  static ::java::lang::String *FORTUNA_PRNG;
  static ::java::lang::String *FORTUNA_GENERATOR_PRNG;
  static ::java::lang::String *DSS_KPG;
  static ::java::lang::String *RSA_KPG;
  static ::java::lang::String *DH_KPG;
  static ::java::lang::String *SRP_KPG;
  static ::java::lang::String *DSA_KPG;
  static ::java::lang::String *DSS_SIG;
  static ::java::lang::String *RSA_SIG_PREFIX;
  static ::java::lang::String *RSA_PSS_ENCODING;
  static ::java::lang::String *RSA_PSS_SIG;
  static ::java::lang::String *RSA_PKCS1_V1_5_ENCODING;
  static ::java::lang::String *RSA_PKCS1_V1_5_SIG;
  static ::java::lang::String *DSA_SIG;
  static ::java::lang::String *DH_KA;
  static ::java::lang::String *ELGAMAL_KA;
  static ::java::lang::String *SRP6_KA;
  static ::java::lang::String *SRP_SASL_KA;
  static ::java::lang::String *SRP_TLS_KA;
  static ::java::lang::String *HMAC_NAME_PREFIX;
  static ::java::lang::String *OMAC_PREFIX;
  static ::java::lang::String *UHASH32;
  static ::java::lang::String *UMAC32;
  static ::java::lang::String *TMMH16;
  static ::java::lang::String *RAW_ENCODING;
  static ::java::lang::String *X509_ENCODING;
  static ::java::lang::String *PKCS8_ENCODING;
  static ::java::lang::String *ASN1_ENCODING;
  static ::java::lang::String *RAW_ENCODING_SHORT_NAME;
  static ::java::lang::String *X509_ENCODING_SORT_NAME;
  static ::java::lang::String *PKCS8_ENCODING_SHORT_NAME;
  static ::java::lang::String *ASN1_ENCODING_SHORT_NAME;
  static const jint RAW_ENCODING_ID = 1L;
  static const jint X509_ENCODING_ID = 2L;
  static const jint PKCS8_ENCODING_ID = 3L;
  static const jint ASN1_ENCODING_ID = 4L;
  static ::java::lang::String *DSA_OID_STRING;
  static ::java::lang::String *RSA_OID_STRING;
  static ::java::lang::String *DH_OID_STRING;
  static jbyteArray MAGIC_RAW_DSS_PUBLIC_KEY;
  static jbyteArray MAGIC_RAW_DSS_PRIVATE_KEY;
  static jbyteArray MAGIC_RAW_DSS_SIGNATURE;
  static jbyteArray MAGIC_RAW_RSA_PUBLIC_KEY;
  static jbyteArray MAGIC_RAW_RSA_PRIVATE_KEY;
  static jbyteArray MAGIC_RAW_RSA_PSS_SIGNATURE;
  static jbyteArray MAGIC_RAW_RSA_PKCS1V1_5_SIGNATURE;
  static jbyteArray MAGIC_RAW_DH_PUBLIC_KEY;
  static jbyteArray MAGIC_RAW_DH_PRIVATE_KEY;
  static jbyteArray MAGIC_RAW_SRP_PUBLIC_KEY;
  static jbyteArray MAGIC_RAW_SRP_PRIVATE_KEY;
  static ::java::lang::String *SASL_PREFIX;
  static ::java::lang::String *SASL_USERNAME;
  static ::java::lang::String *SASL_PASSWORD;
  static ::java::lang::String *SASL_AUTH_INFO_PROVIDER_PKGS;
  static ::java::lang::String *SASL_AUTHORISATION_ID;
  static ::java::lang::String *SASL_PROTOCOL;
  static ::java::lang::String *SASL_SERVER_NAME;
  static ::java::lang::String *SASL_CALLBACK_HANDLER;
  static ::java::lang::String *SASL_CHANNEL_BINDING;
  static const jint SASL_ONE_BYTE_MAX_LIMIT = 255L;
  static const jint SASL_TWO_BYTE_MAX_LIMIT = 65535L;
  static const jint SASL_FOUR_BYTE_MAX_LIMIT = 2147483383L;
  static const jint SASL_BUFFER_MAX_LIMIT = 2147483643L;
  static ::java::lang::String *SASL_ANONYMOUS_MECHANISM;
  static ::java::lang::String *SASL_CRAM_MD5_MECHANISM;
  static ::java::lang::String *SASL_PLAIN_MECHANISM;
  static ::java::lang::String *SASL_SRP_MECHANISM;
  static ::java::lang::String *SASL_HMAC_MD5_IALG;
  static ::java::lang::String *SASL_HMAC_SHA_IALG;
  static ::java::lang::String *QOP_AUTH;
  static ::java::lang::String *QOP_AUTH_INT;
  static ::java::lang::String *QOP_AUTH_CONF;
  static ::java::lang::String *STRENGTH_HIGH;
  static ::java::lang::String *STRENGTH_MEDIUM;
  static ::java::lang::String *STRENGTH_LOW;
  static ::java::lang::String *SERVER_AUTH_TRUE;
  static ::java::lang::String *SERVER_AUTH_FALSE;
  static ::java::lang::String *REUSE_TRUE;
  static ::java::lang::String *REUSE_FALSE;
  static jbyteArray GKR_MAGIC;
  static const jint GKR_PRIVATE_KEYS = 1L;
  static const jint GKR_PUBLIC_CREDENTIALS = 2L;
  static const jint GKR_CERTIFICATES = 4L;
  static const jint GKR_HMAC_MD5_128 = 0L;
  static const jint GKR_HMAC_SHA_160 = 1L;
  static const jint GKR_HMAC_MD5_96 = 2L;
  static const jint GKR_HMAC_SHA_96 = 3L;
  static const jint GKR_CIPHER_AES_128_OFB = 0L;
  static const jint GKR_CIPHER_AES_128_CBC = 1L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_java_security_Registry__ */
