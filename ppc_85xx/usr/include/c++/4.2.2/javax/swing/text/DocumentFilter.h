// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_DocumentFilter__
#define __javax_swing_text_DocumentFilter__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class DocumentFilter;
        class AttributeSet;
        class DocumentFilter$FilterBypass;
      }
    }
  }
}

class javax::swing::text::DocumentFilter : public ::java::lang::Object
{
public:
  virtual void insertString (::javax::swing::text::DocumentFilter$FilterBypass *, jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
  virtual void remove (::javax::swing::text::DocumentFilter$FilterBypass *, jint, jint);
  virtual void replace (::javax::swing::text::DocumentFilter$FilterBypass *, jint, jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
  DocumentFilter ();

  friend class javax_swing_text_DocumentFilter$FilterBypass;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_DocumentFilter__ */
