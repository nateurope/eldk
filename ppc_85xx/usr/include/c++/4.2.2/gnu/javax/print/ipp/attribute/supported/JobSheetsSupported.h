// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_JobSheetsSupported__
#define __gnu_javax_print_ipp_attribute_supported_JobSheetsSupported__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>
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
          class JobSheets;
        }
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
              class JobSheetsSupported;
            }
            namespace defaults
            {
              class JobSheetsDefault;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::JobSheetsSupported : public ::javax::print::attribute::TextSyntax
{
public:
  JobSheetsSupported (::java::lang::String *, ::java::util::Locale *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
  virtual ::javax::print::attribute::standard::JobSheets *getAssociatedAttribute ();
  static JArray< ::javax::print::attribute::standard::JobSheets *> *getAssociatedAttributeArray (::java::util::Set *);
  static ::gnu::javax::print::ipp::attribute::defaults::JobSheetsDefault *NONE;
  static ::gnu::javax::print::ipp::attribute::defaults::JobSheetsDefault *STANDARD;

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_JobSheetsSupported__ */
