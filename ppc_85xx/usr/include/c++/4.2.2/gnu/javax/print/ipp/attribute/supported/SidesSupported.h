// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_SidesSupported__
#define __gnu_javax_print_ipp_attribute_supported_SidesSupported__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class EnumSyntax;
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace supported
            {
              class SidesSupported;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::SidesSupported : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  SidesSupported (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
public:
  static ::gnu::javax::print::ipp::attribute::supported::SidesSupported *ONE_SIDED;
  static ::gnu::javax::print::ipp::attribute::supported::SidesSupported *TWO_SIDED_LONG_EDGE;
  static ::gnu::javax::print::ipp::attribute::supported::SidesSupported *TWO_SIDED_SHORT_EDGE;
  static ::gnu::javax::print::ipp::attribute::supported::SidesSupported *DUPLEX;
  static ::gnu::javax::print::ipp::attribute::supported::SidesSupported *TUMBLE;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::supported::SidesSupported *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_SidesSupported__ */
