// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_MultiDocPrintJob__
#define __javax_print_MultiDocPrintJob__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class MultiDocPrintJob;
      namespace attribute
      {
        class PrintRequestAttributeSet;
      }
      class MultiDoc;
    }
  }
}

class javax::print::MultiDocPrintJob : public ::java::lang::Object
{
public:
  virtual void print (::javax::print::MultiDoc *, ::javax::print::attribute::PrintRequestAttributeSet *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_MultiDocPrintJob__ */
