// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_UriSecuritySupported__
#define __gnu_javax_print_ipp_attribute_supported_UriSecuritySupported__

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
              class UriSecuritySupported;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::UriSecuritySupported : public ::javax::print::attribute::EnumSyntax
{
public:
  UriSecuritySupported (jint);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
public:
  static ::gnu::javax::print::ipp::attribute::supported::UriSecuritySupported *NONE;
  static ::gnu::javax::print::ipp::attribute::supported::UriSecuritySupported *SSL3;
  static ::gnu::javax::print::ipp::attribute::supported::UriSecuritySupported *TLS;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::supported::UriSecuritySupported *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_UriSecuritySupported__ */
