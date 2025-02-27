// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_JobHoldUntilSupported__
#define __gnu_javax_print_ipp_attribute_supported_JobHoldUntilSupported__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>

extern "Java"
{
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
              class JobHoldUntilSupported;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported : public ::javax::print::attribute::TextSyntax
{
public:
  JobHoldUntilSupported (::java::lang::String *, ::java::util::Locale *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *NO_HOLD;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *INDEFINITE;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *DAY_TIME;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *EVENING;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *NIGHT;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *WEEKEND;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *SECOND_SHIFT;
  static ::gnu::javax::print::ipp::attribute::supported::JobHoldUntilSupported *THIRD_SHIFT;

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_JobHoldUntilSupported__ */
