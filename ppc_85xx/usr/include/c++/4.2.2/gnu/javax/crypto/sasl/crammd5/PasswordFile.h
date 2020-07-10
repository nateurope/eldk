// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_crammd5_PasswordFile__
#define __gnu_javax_crypto_sasl_crammd5_PasswordFile__

#pragma interface

#include <java/lang/Object.h>
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
          namespace crammd5
          {
            class PasswordFile;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::crammd5::PasswordFile : public ::java::lang::Object
{
public:
  PasswordFile ();
  PasswordFile (::java::io::File *);
  PasswordFile (::java::lang::String *);
  virtual void add (::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String *> *);
  virtual void changePasswd (::java::lang::String *, ::java::lang::String *);
  virtual JArray< ::java::lang::String *> *lookup (::java::lang::String *);
  virtual jboolean contains (::java::lang::String *);
private:
  void update ();
  void checkCurrent ();
  void readPasswd (::java::io::InputStream *);
  void savePasswd ();
  static ::java::lang::String *DEFAULT_FILE;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::lang::Object )))) entries;
  ::java::io::File *passwdFile;
  jlong lastmod;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_crammd5_PasswordFile__ */
