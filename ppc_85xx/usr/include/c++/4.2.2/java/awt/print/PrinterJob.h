// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_print_PrinterJob__
#define __java_awt_print_PrinterJob__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace print
      {
        class Printable;
        class Pageable;
        class PageFormat;
        class PrinterJob;
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class PrintRequestAttributeSet;
      }
      class PrintService;
    }
  }
}

class java::awt::print::PrinterJob : public ::java::lang::Object
{
public:
  static ::java::awt::print::PrinterJob *getPrinterJob ();
  PrinterJob ();
  virtual jint getCopies () = 0;
  virtual void setCopies (jint) = 0;
  virtual ::java::lang::String *getJobName () = 0;
  virtual void setJobName (::java::lang::String *) = 0;
  virtual ::java::lang::String *getUserName () = 0;
  virtual void cancel () = 0;
  virtual jboolean isCancelled () = 0;
  virtual ::java::awt::print::PageFormat *defaultPage ();
  virtual ::java::awt::print::PageFormat *defaultPage (::java::awt::print::PageFormat *) = 0;
  virtual ::java::awt::print::PageFormat *pageDialog (::java::awt::print::PageFormat *) = 0;
  virtual ::java::awt::print::PageFormat *pageDialog (::javax::print::attribute::PrintRequestAttributeSet *);
  virtual void print () = 0;
  virtual void print (::javax::print::attribute::PrintRequestAttributeSet *);
  virtual jboolean printDialog () = 0;
  virtual jboolean printDialog (::javax::print::attribute::PrintRequestAttributeSet *);
  virtual void setPageable (::java::awt::print::Pageable *) = 0;
  virtual void setPrintable (::java::awt::print::Printable *) = 0;
  virtual void setPrintable (::java::awt::print::Printable *, ::java::awt::print::PageFormat *) = 0;
  virtual ::java::awt::print::PageFormat *validatePage (::java::awt::print::PageFormat *) = 0;
  static JArray< ::javax::print::PrintService *> *lookupPrintServices ();
  virtual ::javax::print::PrintService *getPrintService () { return printer; }
  virtual void setPrintService (::javax::print::PrintService *);
private:
  ::javax::print::PrintService * __attribute__((aligned(__alignof__( ::java::lang::Object )))) printer;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_print_PrinterJob__ */
