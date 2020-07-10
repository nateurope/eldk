// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_DocPrintJob__
#define __javax_print_DocPrintJob__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class DocPrintJob;
      class Doc;
      class PrintService;
      namespace attribute
      {
        class PrintRequestAttributeSet;
        class PrintJobAttributeSet;
      }
      namespace event
      {
        class PrintJobListener;
        class PrintJobAttributeListener;
      }
    }
  }
}

class javax::print::DocPrintJob : public ::java::lang::Object
{
public:
  virtual void addPrintJobAttributeListener (::javax::print::event::PrintJobAttributeListener *, ::javax::print::attribute::PrintJobAttributeSet *) = 0;
  virtual void addPrintJobListener (::javax::print::event::PrintJobListener *) = 0;
  virtual ::javax::print::attribute::PrintJobAttributeSet *getAttributes () = 0;
  virtual ::javax::print::PrintService *getPrintService () = 0;
  virtual void print (::javax::print::Doc *, ::javax::print::attribute::PrintRequestAttributeSet *) = 0;
  virtual void removePrintJobAttributeListener (::javax::print::event::PrintJobAttributeListener *) = 0;
  virtual void removePrintJobListener (::javax::print::event::PrintJobListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_DocPrintJob__ */
