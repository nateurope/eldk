// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_MacInputStream__
#define __gnu_javax_crypto_mac_MacInputStream__

#pragma interface

#include <java/io/FilterInputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
          class MacInputStream;
          class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::mac::MacInputStream : public ::java::io::FilterInputStream
{
public:
  MacInputStream (::java::io::InputStream *, ::gnu::javax::crypto::mac::IMac *);
  virtual ::gnu::javax::crypto::mac::IMac *getMac () { return mac; }
  virtual void setMac (::gnu::javax::crypto::mac::IMac *);
  virtual void on (jboolean);
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
private:
  jboolean __attribute__((aligned(__alignof__( ::java::io::FilterInputStream ))))  digesting;
  ::gnu::javax::crypto::mac::IMac *mac;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mac_MacInputStream__ */
