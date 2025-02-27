// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrintFlavorException__
#define __gnu_javax_print_PrintFlavorException__

#pragma interface

#include <javax/print/PrintException.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        class PrintFlavorException;
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      class DocFlavor;
    }
  }
}

class gnu::javax::print::PrintFlavorException : public ::javax::print::PrintException
{
public:
  PrintFlavorException (JArray< ::javax::print::DocFlavor *> *);
  PrintFlavorException (::java::lang::Exception *, JArray< ::javax::print::DocFlavor *> *);
  PrintFlavorException (::java::lang::String *, JArray< ::javax::print::DocFlavor *> *);
  PrintFlavorException (::java::lang::String *, ::java::lang::Exception *, JArray< ::javax::print::DocFlavor *> *);
  virtual JArray< ::javax::print::DocFlavor *> *getUnsupportedFlavors () { return flavors; }
private:
  JArray< ::javax::print::DocFlavor *> * __attribute__((aligned(__alignof__( ::javax::print::PrintException )))) flavors;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_PrintFlavorException__ */
