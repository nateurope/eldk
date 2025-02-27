// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_CompressionSupported__
#define __gnu_javax_print_ipp_attribute_supported_CompressionSupported__

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
        namespace standard
        {
          class Compression;
        }
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
              class CompressionSupported;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::CompressionSupported : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  CompressionSupported (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
public:
  virtual ::javax::print::attribute::standard::Compression *getAssociatedAttribute ();
  static JArray< ::javax::print::attribute::standard::Compression *> *getAssociatedAttributeArray (::java::util::Set *);
  static ::gnu::javax::print::ipp::attribute::supported::CompressionSupported *NONE;
  static ::gnu::javax::print::ipp::attribute::supported::CompressionSupported *DEFLATE;
  static ::gnu::javax::print::ipp::attribute::supported::CompressionSupported *GZIP;
  static ::gnu::javax::print::ipp::attribute::supported::CompressionSupported *COMPRESS;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::supported::CompressionSupported *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_CompressionSupported__ */
