// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_RequestingUserName__
#define __javax_print_attribute_standard_RequestingUserName__

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
          class RequestingUserName;
        }
      }
    }
  }
}

class javax::print::attribute::standard::RequestingUserName : public ::javax::print::attribute::TextSyntax
{
public:
  RequestingUserName (::java::lang::String *, ::java::util::Locale *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -2683049894310331454LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_RequestingUserName__ */
