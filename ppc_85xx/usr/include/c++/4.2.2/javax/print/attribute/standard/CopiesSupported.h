// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_CopiesSupported__
#define __javax_print_attribute_standard_CopiesSupported__

#pragma interface

#include <javax/print/attribute/SetOfIntegerSyntax.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
          class CopiesSupported;
        }
      }
    }
  }
}

class javax::print::attribute::standard::CopiesSupported : public ::javax::print::attribute::SetOfIntegerSyntax
{
public:
  CopiesSupported (jint);
  CopiesSupported (jint, jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = 6927711687034846001LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_CopiesSupported__ */