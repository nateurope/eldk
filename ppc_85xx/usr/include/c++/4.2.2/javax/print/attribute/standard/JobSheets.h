// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobSheets__
#define __javax_print_attribute_standard_JobSheets__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
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
        namespace standard
        {
          class JobSheets;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobSheets : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  JobSheets (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
private:
  static const jlong serialVersionUID = -4735258056132519759LL;
public:
  static ::javax::print::attribute::standard::JobSheets *NONE;
  static ::javax::print::attribute::standard::JobSheets *STANDARD;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::javax::print::attribute::standard::JobSheets *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_JobSheets__ */
