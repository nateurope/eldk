// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_PrinterStateReasons__
#define __javax_print_attribute_standard_PrinterStateReasons__

#pragma interface

#include <java/util/HashMap.h>

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
          class PrinterStateReasons;
          class Severity;
        }
      }
    }
  }
}

class javax::print::attribute::standard::PrinterStateReasons : public ::java::util::HashMap
{
public:
  PrinterStateReasons ();
  PrinterStateReasons (jint, jfloat);
  PrinterStateReasons (jint);
  PrinterStateReasons (::java::util::Map *);
  virtual ::java::util::Set *printerStateReasonSet (::javax::print::attribute::standard::Severity *);
  virtual ::java::lang::Object *put (::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -3731791085163619457LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_PrinterStateReasons__ */
