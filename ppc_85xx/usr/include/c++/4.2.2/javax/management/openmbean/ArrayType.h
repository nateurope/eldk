// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_openmbean_ArrayType__
#define __javax_management_openmbean_ArrayType__

#pragma interface

#include <javax/management/openmbean/OpenType.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
        class ArrayType;
        class OpenType;
      }
    }
  }
}

class javax::management::openmbean::ArrayType : public ::javax::management::openmbean::OpenType
{
private:
  static ::java::lang::String *getArrayClassName (::java::lang::String *, jint);
public:
  ArrayType (jint, ::javax::management::openmbean::OpenType *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint getDimension () { return dimension; }
  virtual ::javax::management::openmbean::OpenType *getElementOpenType () { return elementType; }
  virtual jint hashCode ();
  virtual jboolean isValue (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = 720504429830309770LL;
  jint __attribute__((aligned(__alignof__( ::javax::management::openmbean::OpenType ))))  dimension;
  ::javax::management::openmbean::OpenType *elementType;
  ::java::lang::Integer *hashCode__;
  ::java::lang::String *string;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_management_openmbean_ArrayType__ */