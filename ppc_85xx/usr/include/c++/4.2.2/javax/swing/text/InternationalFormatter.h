// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_InternationalFormatter__
#define __javax_swing_text_InternationalFormatter__

#pragma interface

#include <javax/swing/text/DefaultFormatter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class InternationalFormatter;
      }
      class Action;
      class JFormattedTextField;
    }
  }
  namespace java
  {
    namespace text
    {
      class Format$Field;
      class Format;
    }
  }
}

class javax::swing::text::InternationalFormatter : public ::javax::swing::text::DefaultFormatter
{
public:
  InternationalFormatter ();
  InternationalFormatter (::java::text::Format *);
  virtual void setFormat (::java::text::Format *);
  virtual ::java::text::Format *getFormat () { return format; }
  virtual void setMinimum (::java::lang::Comparable *);
  virtual ::java::lang::Comparable *getMinimum () { return minimum; }
  virtual void setMaximum (::java::lang::Comparable *);
  virtual ::java::lang::Comparable *getMaximum () { return maximum; }
  virtual void install (::javax::swing::JFormattedTextField *);
  virtual ::java::lang::String *valueToString (::java::lang::Object *);
  virtual ::java::lang::Object *stringToValue (::java::lang::String *);
  virtual JArray< ::java::text::Format$Field *> *getFields (jint);
public:  // actually protected
  virtual JArray< ::javax::swing::Action *> *getActions ();
private:
  static const jlong serialVersionUID = 2436068675711756856LL;
public: // actually package-private
  ::java::text::Format * __attribute__((aligned(__alignof__( ::javax::swing::text::DefaultFormatter )))) format;
  ::java::lang::Comparable *minimum;
  ::java::lang::Comparable *maximum;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_InternationalFormatter__ */
