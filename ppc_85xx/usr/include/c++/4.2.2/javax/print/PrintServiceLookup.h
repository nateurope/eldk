// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_PrintServiceLookup__
#define __javax_print_PrintServiceLookup__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class MultiDocPrintService;
      namespace attribute
      {
        class AttributeSet;
      }
      class DocFlavor;
      class PrintService;
      class PrintServiceLookup;
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        class CupsPrintServiceLookup;
      }
    }
  }
}

class javax::print::PrintServiceLookup : public ::java::lang::Object
{
public:
  PrintServiceLookup ();
  static jboolean registerServiceProvider (::javax::print::PrintServiceLookup *);
  static jboolean registerService (::javax::print::PrintService *);
  static JArray< ::javax::print::PrintService *> *lookupPrintServices (::javax::print::DocFlavor *, ::javax::print::attribute::AttributeSet *);
  static JArray< ::javax::print::MultiDocPrintService *> *lookupMultiDocPrintServices (JArray< ::javax::print::DocFlavor *> *, ::javax::print::attribute::AttributeSet *);
  static ::javax::print::PrintService *lookupDefaultPrintService ();
  virtual ::javax::print::PrintService *getDefaultPrintService () = 0;
  virtual JArray< ::javax::print::MultiDocPrintService *> *getMultiDocPrintServices (JArray< ::javax::print::DocFlavor *> *, ::javax::print::attribute::AttributeSet *) = 0;
  virtual JArray< ::javax::print::PrintService *> *getPrintServices () = 0;
  virtual JArray< ::javax::print::PrintService *> *getPrintServices (::javax::print::DocFlavor *, ::javax::print::attribute::AttributeSet *) = 0;
private:
  static ::gnu::javax::print::CupsPrintServiceLookup *systemProvider;
  static ::java::util::HashSet *printServices;
  static ::java::util::HashSet *printServiceLookups;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_PrintServiceLookup__ */
