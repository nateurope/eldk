// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_MultiDocPrintService__
#define __javax_print_MultiDocPrintService__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class MultiDocPrintService;
      class MultiDocPrintJob;
    }
  }
}

class javax::print::MultiDocPrintService : public ::java::lang::Object
{
public:
  virtual ::javax::print::MultiDocPrintJob *createMultiDocPrintJob () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_MultiDocPrintService__ */
