// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_regex_Matcher__
#define __java_util_regex_Matcher__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
          class REMatch;
          class CharIndexed;
        }
      }
    }
  }
}

class java::util::regex::Matcher : public ::java::lang::Object
{
public: // actually package-private
  Matcher (::java::util::regex::Pattern *, ::java::lang::CharSequence *);
public:
  virtual ::java::util::regex::Matcher *appendReplacement (::java::lang::StringBuffer *, ::java::lang::String *);
  virtual ::java::lang::StringBuffer *appendTail (::java::lang::StringBuffer *);
  virtual jint end ();
  virtual jint end (jint);
  virtual jboolean find ();
  virtual jboolean find (jint);
  virtual ::java::lang::String *group ();
  virtual ::java::lang::String *group (jint);
  virtual ::java::lang::String *replaceFirst (::java::lang::String *);
  virtual ::java::lang::String *replaceAll (::java::lang::String *);
  virtual jint groupCount ();
  virtual jboolean lookingAt ();
  virtual jboolean matches ();
  virtual ::java::util::regex::Pattern *pattern () { return pattern__; }
  virtual ::java::util::regex::Matcher *reset ();
  virtual ::java::util::regex::Matcher *reset (::java::lang::CharSequence *);
  virtual jint start ();
  virtual jint start (jint);
private:
  void assertMatchOp ();
  ::java::util::regex::Pattern * __attribute__((aligned(__alignof__( ::java::lang::Object )))) pattern__;
  ::java::lang::CharSequence *input;
  ::gnu::java::util::regex::CharIndexed *inputCharIndexed;
  jint position;
  jint appendPosition;
  ::gnu::java::util::regex::REMatch *match;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_regex_Matcher__ */