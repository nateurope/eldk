// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_PrinterMakeAndModel__
#define __javax_print_attribute_standard_PrinterMakeAndModel__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>

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
          class PrinterMakeAndModel;
        }
      }
    }
  }
}

class javax::print::attribute::standard::PrinterMakeAndModel : public ::javax::print::attribute::TextSyntax
{
public:
  PrinterMakeAndModel (::java::lang::String *, ::java::util::Locale *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = 4580461489499351411LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_PrinterMakeAndModel__ */
