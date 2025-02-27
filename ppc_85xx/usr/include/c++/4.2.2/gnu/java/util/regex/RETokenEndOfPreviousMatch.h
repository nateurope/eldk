// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenEndOfPreviousMatch__
#define __gnu_java_util_regex_RETokenEndOfPreviousMatch__

#pragma interface

#include <gnu/java/util/regex/RETokenStart.h>

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
          class RETokenEndOfPreviousMatch;
          class REMatch;
          class CharIndexed;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenEndOfPreviousMatch : public ::gnu::java::util::regex::RETokenStart
{
public: // actually package-private
  RETokenEndOfPreviousMatch (jint);
  virtual jint getMaximumLength ();
  virtual ::gnu::java::util::regex::REMatch *matchThis (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  virtual jboolean returnsFixedLengthmatches ();
  virtual jint findFixedLengthMatches (::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  virtual void dump (::java::lang::StringBuffer *);
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_regex_RETokenEndOfPreviousMatch__ */
