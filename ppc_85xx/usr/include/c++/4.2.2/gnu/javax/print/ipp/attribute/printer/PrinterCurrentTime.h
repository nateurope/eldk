// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_printer_PrinterCurrentTime__
#define __gnu_javax_print_ipp_attribute_printer_PrinterCurrentTime__

#pragma interface

#include <javax/print/attribute/DateTimeSyntax.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace printer
            {
              class PrinterCurrentTime;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::printer::PrinterCurrentTime : public ::javax::print::attribute::DateTimeSyntax
{
public:
  PrinterCurrentTime (::java::util::Date *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_printer_PrinterCurrentTime__ */
