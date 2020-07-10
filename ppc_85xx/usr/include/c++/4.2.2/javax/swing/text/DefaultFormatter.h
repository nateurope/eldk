// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_DefaultFormatter__
#define __javax_swing_text_DefaultFormatter__

#pragma interface

#include <javax/swing/JFormattedTextField$AbstractFormatter.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class DefaultFormatter;
        class DocumentFilter;
      }
      class JFormattedTextField;
    }
  }
}

class javax::swing::text::DefaultFormatter : public ::javax::swing::JFormattedTextField$AbstractFormatter
{
public:
  DefaultFormatter ();
  virtual void install (::javax::swing::JFormattedTextField *);
  virtual jboolean getCommitsOnValidEdit () { return commitsOnValidEdit; }
  virtual void setCommitsOnValidEdit (jboolean);
  virtual jboolean getOverwriteMode () { return overwriteMode; }
  virtual void setOverwriteMode (jboolean);
  virtual jboolean getAllowsInvalid () { return allowsInvalid; }
  virtual void setAllowsInvalid (jboolean);
  virtual ::java::lang::Class *getValueClass () { return valueClass; }
  virtual void setValueClass (::java::lang::Class *);
  virtual ::java::lang::Object *stringToValue (::java::lang::String *);
  virtual ::java::lang::String *valueToString (::java::lang::Object *);
  virtual ::java::lang::Object *clone ();
public:  // actually protected
  virtual ::javax::swing::text::DocumentFilter *getDocumentFilter ();
private:
  static const jlong serialVersionUID = -355018354457785329LL;
public: // actually package-private
  jboolean __attribute__((aligned(__alignof__( ::javax::swing::JFormattedTextField$AbstractFormatter ))))  commitsOnValidEdit;
  jboolean overwriteMode;
  jboolean allowsInvalid;
  ::java::lang::Class *valueClass;

  friend class javax_swing_text_DefaultFormatter$FormatterDocumentFilter;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_DefaultFormatter__ */