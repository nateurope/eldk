// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_ServiceUI__
#define __javax_print_ServiceUI__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class ServiceUI;
      namespace attribute
      {
        class PrintRequestAttributeSet;
      }
      class DocFlavor;
      class PrintService;
    }
  }
  namespace java
  {
    namespace awt
    {
      class GraphicsConfiguration;
    }
  }
}

class javax::print::ServiceUI : public ::java::lang::Object
{
public:
  ServiceUI ();
  static ::javax::print::PrintService *printDialog (::java::awt::GraphicsConfiguration *, jint, jint, JArray< ::javax::print::PrintService *> *, ::javax::print::PrintService *, ::javax::print::DocFlavor *, ::javax::print::attribute::PrintRequestAttributeSet *);

  static ::java::lang::Class class$;
};

#endif /* __javax_print_ServiceUI__ */
