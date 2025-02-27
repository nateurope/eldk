// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_MacOutputStream__
#define __gnu_javax_crypto_mac_MacOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
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
          class MacOutputStream;
          class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::mac::MacOutputStream : public ::java::io::FilterOutputStream
{
public:
  MacOutputStream (::java::io::OutputStream *, ::gnu::javax::crypto::mac::IMac *);
  virtual ::gnu::javax::crypto::mac::IMac *getMac () { return mac; }
  virtual void setMac (::gnu::javax::crypto::mac::IMac *);
  virtual void on (jboolean);
  virtual void write (jint);
  virtual void write (jbyteArray, jint, jint);
private:
  jboolean __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream ))))  digesting;
  ::gnu::javax::crypto::mac::IMac *mac;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mac_MacOutputStream__ */
