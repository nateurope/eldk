// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_MultiDoc__
#define __javax_print_MultiDoc__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class MultiDoc;
      class Doc;
    }
  }
}

class javax::print::MultiDoc : public ::java::lang::Object
{
public:
  virtual ::javax::print::Doc *getDoc () = 0;
  virtual ::javax::print::MultiDoc *next () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_MultiDoc__ */
