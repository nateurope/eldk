// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_assembly_TransformerException__
#define __gnu_javax_crypto_assembly_TransformerException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace assembly
        {
          class TransformerException;
        }
      }
    }
  }
}

class gnu::javax::crypto::assembly::TransformerException : public ::java::lang::Exception
{
public:
  TransformerException ();
  TransformerException (::java::lang::String *);
  TransformerException (::java::lang::Throwable *);
  TransformerException (::java::lang::String *, ::java::lang::Throwable *);
  virtual ::java::lang::Throwable *getCause () { return _exception; }
  virtual void printStackTrace ();
  virtual void printStackTrace (::java::io::PrintStream *);
  virtual void printStackTrace (::java::io::PrintWriter *);
  virtual ::java::lang::String *toString ();
private:
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::Exception )))) _exception;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_assembly_TransformerException__ */
