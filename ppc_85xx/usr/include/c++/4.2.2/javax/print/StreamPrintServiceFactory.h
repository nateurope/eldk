// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_StreamPrintServiceFactory__
#define __javax_print_StreamPrintServiceFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class StreamPrintService;
      class StreamPrintServiceFactory;
      class DocFlavor;
    }
  }
}

class javax::print::StreamPrintServiceFactory : public ::java::lang::Object
{
public:
  StreamPrintServiceFactory ();
  static JArray< ::javax::print::StreamPrintServiceFactory *> *lookupStreamPrintServiceFactories (::javax::print::DocFlavor *, ::java::lang::String *);
  virtual ::java::lang::String *getOutputFormat () = 0;
  virtual JArray< ::javax::print::DocFlavor *> *getSupportedDocFlavors () = 0;
  virtual ::javax::print::StreamPrintService *getPrintService (::java::io::OutputStream *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_print_StreamPrintServiceFactory__ */