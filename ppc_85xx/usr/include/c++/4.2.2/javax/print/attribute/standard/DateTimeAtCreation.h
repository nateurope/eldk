// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_DateTimeAtCreation__
#define __javax_print_attribute_standard_DateTimeAtCreation__

#pragma interface

#include <javax/print/attribute/DateTimeSyntax.h>

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
          class DateTimeAtCreation;
        }
      }
    }
  }
}

class javax::print::attribute::standard::DateTimeAtCreation : public ::javax::print::attribute::DateTimeSyntax
{
public:
  DateTimeAtCreation (::java::util::Date *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -2923732231056647903LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_DateTimeAtCreation__ */
