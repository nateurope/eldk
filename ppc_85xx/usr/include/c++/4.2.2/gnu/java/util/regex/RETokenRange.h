// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenRange__
#define __gnu_java_util_regex_RETokenRange__

#pragma interface

#include <gnu/java/util/regex/REToken.h>

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
          class RETokenRange;
          class REMatch;
          class CharIndexed;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenRange : public ::gnu::java::util::regex::REToken
{
public: // actually package-private
  RETokenRange (jint, jchar, jchar, jboolean);
  virtual jint getMinimumLength ();
  virtual jint getMaximumLength ();
  virtual ::gnu::java::util::regex::REMatch *matchThis (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  virtual jboolean matchOneChar (jchar);
  virtual jboolean returnsFixedLengthMatches ();
  virtual jint findFixedLengthMatches (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  virtual void dump (::java::lang::StringBuffer *);
private:
  jchar __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken ))))  lo;
  jchar hi;
  jboolean insens;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_regex_RETokenRange__ */
