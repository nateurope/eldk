// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_DateFormatter__
#define __javax_swing_text_DateFormatter__

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
        class DateFormatter;
      }
    }
  }
  namespace java
  {
    namespace text
    {
      class DateFormat;
    }
  }
}

class javax::swing::text::DateFormatter : public ::javax::swing::text::InternationalFormatter
{
public:
  DateFormatter ();
  DateFormatter (::java::text::DateFormat *);
  virtual void setFormat (::java::text::DateFormat *);
private:
  static const jlong serialVersionUID = 5423279572591848797LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_DateFormatter__ */
