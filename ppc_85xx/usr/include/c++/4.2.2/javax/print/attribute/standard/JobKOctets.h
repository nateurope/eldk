// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobKOctets__
#define __javax_print_attribute_standard_JobKOctets__

#pragma interface

#include <javax/print/attribute/IntegerSyntax.h>

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
          class JobKOctets;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobKOctets : public ::javax::print::attribute::IntegerSyntax
{
public:
  JobKOctets (jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -8959710146498202869LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_JobKOctets__ */
