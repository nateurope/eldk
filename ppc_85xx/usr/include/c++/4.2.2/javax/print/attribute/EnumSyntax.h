// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_EnumSyntax__
#define __javax_print_attribute_EnumSyntax__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class EnumSyntax;
      }
    }
  }
}

class javax::print::attribute::EnumSyntax : public ::java::lang::Object
{
public:  // actually protected
  EnumSyntax (jint);
public:
  virtual jint getValue () { return value; }
  virtual ::java::lang::Object *clone ();
  virtual jint hashCode () { return value; }
  virtual ::java::lang::String *toString ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable () { return 0; }
  virtual ::java::lang::Object *readResolve ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable () { return 0; }
  virtual jint getOffset ();
private:
  static const jlong serialVersionUID = -2739521845085831642LL;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_EnumSyntax__ */