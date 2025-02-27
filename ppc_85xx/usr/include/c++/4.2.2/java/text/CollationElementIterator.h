// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_CollationElementIterator__
#define __java_text_CollationElementIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class CollationElementIterator;
      class CharacterIterator;
      class RuleBasedCollator$CollationElement;
      class RuleBasedCollator;
    }
  }
}

class java::text::CollationElementIterator : public ::java::lang::Object
{
public: // actually package-private
  CollationElementIterator (::java::text::RuleBasedCollator *, ::java::lang::String *);
  virtual ::java::text::RuleBasedCollator$CollationElement *nextBlock ();
  virtual ::java::text::RuleBasedCollator$CollationElement *previousBlock ();
public:
  virtual jint next ();
  virtual jint previous ();
  static jint primaryOrder (jint);
  virtual void reset ();
  static jshort secondaryOrder (jint);
  static jshort tertiaryOrder (jint);
  virtual void setText (::java::lang::String *);
  virtual void setText (::java::text::CharacterIterator *);
  virtual jint getOffset () { return textIndex; }
  virtual void setOffset (jint);
  virtual jint getMaxExpansion (jint);
  static const jint NULLORDER = -1L;
public: // actually package-private
  ::java::text::RuleBasedCollator * __attribute__((aligned(__alignof__( ::java::lang::Object )))) collator;
  ::java::lang::String *text;
  jint index;
  jint textIndex;
private:
  JArray< ::java::text::RuleBasedCollator$CollationElement *> *text_decomposition;
  jintArray text_indexes;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_CollationElementIterator__ */
