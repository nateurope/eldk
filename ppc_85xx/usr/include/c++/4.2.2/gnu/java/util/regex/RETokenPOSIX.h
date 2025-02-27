// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenPOSIX__
#define __gnu_java_util_regex_RETokenPOSIX__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
#include <gcj/array.h>

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
          class RETokenPOSIX;
          class REMatch;
          class CharIndexed;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenPOSIX : public ::gnu::java::util::regex::REToken
{
public: // actually package-private
  static jint intValue (::java::lang::String *);
  RETokenPOSIX (jint, jint, jboolean, jboolean);
  virtual jint getMinimumLength ();
  virtual jint getMaximumLength ();
  virtual ::gnu::java::util::regex::REMatch *matchThis (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  virtual jboolean matchOneChar (jchar);
  virtual jboolean returnsFixedLengthMatches ();
  virtual jint findFixedLengthMatches (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  virtual void dump (::java::lang::StringBuffer *);
  jint __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken ))))  type;
  jboolean insens;
  jboolean negated;
  static const jint ALNUM = 0L;
  static const jint ALPHA = 1L;
  static const jint BLANK = 2L;
  static const jint CNTRL = 3L;
  static const jint DIGIT = 4L;
  static const jint GRAPH = 5L;
  static const jint LOWER = 6L;
  static const jint PRINT = 7L;
  static const jint PUNCT = 8L;
  static const jint SPACE = 9L;
  static const jint UPPER = 10L;
  static const jint XDIGIT = 11L;
  static JArray< ::java::lang::String *> *s_nameTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_regex_RETokenPOSIX__ */
