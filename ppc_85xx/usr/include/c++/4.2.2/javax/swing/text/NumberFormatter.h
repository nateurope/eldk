// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_NumberFormatter__
#define __javax_swing_text_NumberFormatter__

#pragma interface

#include <javax/swing/text/InternationalFormatter.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class NumberFormatter;
      }
    }
  }
  namespace java
  {
    namespace text
    {
      class Format;
      class NumberFormat;
    }
  }
}

class javax::swing::text::NumberFormatter : public ::javax::swing::text::InternationalFormatter
{
public:
  NumberFormatter ();
  NumberFormatter (::java::text::NumberFormat *);
  virtual void setFormat (::java::text::Format *);

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_NumberFormatter__ */
