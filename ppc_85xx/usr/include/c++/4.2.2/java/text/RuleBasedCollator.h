// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_RuleBasedCollator__
#define __java_text_RuleBasedCollator__

#pragma interface

#include <java/text/Collator.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class RuleBasedCollator;
      class CollationKey;
      class CharacterIterator;
      class CollationElementIterator;
      class RuleBasedCollator$CollationElement;
    }
  }
}

class java::text::RuleBasedCollator : public ::java::text::Collator
{
public:
  RuleBasedCollator (::java::lang::String *);
public: // actually package-private
  static jint findPrefixLength (::java::lang::String *, ::java::lang::String *);
private:
  void mergeRules (jint, ::java::lang::String *, ::java::util::ArrayList *, ::java::util::ArrayList *);
  jint subParseString (jboolean, ::java::util::ArrayList *, jint, ::java::lang::String *);
public:
  virtual ::java::lang::Object *clone ();
private:
  ::java::util::ArrayList *parseString (::java::lang::String *);
  void buildCollationVector (::java::util::ArrayList *);
  void buildPrefixAccess ();
public:
  virtual jint compare (::java::lang::String *, ::java::lang::String *);
  virtual jboolean equals (::java::lang::Object *);
public: // actually package-private
  virtual ::java::text::RuleBasedCollator$CollationElement *getDefaultElement (jchar);
  virtual ::java::text::RuleBasedCollator$CollationElement *getDefaultAccentedElement (jchar);
public:
  virtual ::java::text::CollationElementIterator *getCollationElementIterator (::java::lang::String *);
  virtual ::java::text::CollationElementIterator *getCollationElementIterator (::java::text::CharacterIterator *);
  virtual ::java::text::CollationKey *getCollationKey (::java::lang::String *);
  virtual ::java::lang::String *getRules () { return rules; }
  virtual jint hashCode ();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::text::Collator )))) rules;
  JArray< ::java::lang::Object *> *ce_table;
public: // actually package-private
  ::java::util::HashMap *prefix_tree;
private:
  jint last_primary_value;
  jint last_tertiary_value;
  jboolean inverseAccentComparison;
public: // actually package-private
  static ::java::text::RuleBasedCollator$CollationElement *SPECIAL_UNKNOWN_SEQ;

  friend class java_text_RuleBasedCollator$CollationSorter;
  friend class java_text_RuleBasedCollator$CollationElement;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_RuleBasedCollator__ */