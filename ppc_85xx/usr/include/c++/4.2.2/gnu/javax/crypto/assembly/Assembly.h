// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_assembly_Assembly__
#define __gnu_javax_crypto_assembly_Assembly__

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
        namespace assembly
        {
          class Assembly;
          class Operation;
          class Transformer;
          class Direction;
        }
      }
    }
  }
}

class gnu::javax::crypto::assembly::Assembly : public ::java::lang::Object
{
public:
  Assembly ();
  virtual void addPreTransformer (::gnu::javax::crypto::assembly::Transformer *);
  virtual void addPostTransformer (::gnu::javax::crypto::assembly::Transformer *);
  virtual void init (::java::util::Map *);
  virtual void reset ();
  virtual jbyteArray update (jbyte);
  virtual jbyteArray update (jbyteArray);
  virtual jbyteArray update (jbyteArray, jint, jint);
  virtual jbyteArray lastUpdate ();
  virtual jbyteArray lastUpdate (jbyte);
  virtual jbyteArray lastUpdate (jbyteArray);
  virtual jbyteArray lastUpdate (jbyteArray, jint, jint);
private:
  void wireTransformer (::gnu::javax::crypto::assembly::Transformer *, ::gnu::javax::crypto::assembly::Operation *);
public:
  static ::java::lang::String *DIRECTION;
private:
  ::gnu::javax::crypto::assembly::Direction * __attribute__((aligned(__alignof__( ::java::lang::Object )))) wired;
  ::gnu::javax::crypto::assembly::Transformer *head;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_assembly_Assembly__ */