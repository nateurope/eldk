// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_CupsPrintService__
#define __gnu_javax_print_CupsPrintService__

#pragma interface

#include <gnu/javax/print/ipp/IppMultiDocPrintService.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class AttributeSet;
      }
      class DocFlavor;
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        class CupsPrintService;
        namespace ipp
        {
          class IppResponse;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class URI;
    }
  }
}

class gnu::javax::print::CupsPrintService : public ::gnu::javax::print::ipp::IppMultiDocPrintService
{
public:
  CupsPrintService (::java::net::URI *, ::java::lang::String *, ::java::lang::String *);
public:  // actually protected
  virtual ::java::lang::Object *handleSupportedAttributeValuesResponse (::gnu::javax::print::ipp::IppResponse *, ::java::lang::Class *);
public:
  virtual ::java::lang::Object *getDefaultAttributeValue (::java::lang::Class *);
  virtual ::javax::print::attribute::AttributeSet *getUnsupportedAttributes (::javax::print::DocFlavor *, ::javax::print::attribute::AttributeSet *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_CupsPrintService__ */
