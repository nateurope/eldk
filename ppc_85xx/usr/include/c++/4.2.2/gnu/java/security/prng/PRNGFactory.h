// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_prng_PRNGFactory__
#define __gnu_java_security_prng_PRNGFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace prng
        {
          class PRNGFactory;
          class IRandom;
        }
      }
    }
  }
}

class gnu::java::security::prng::PRNGFactory : public ::java::lang::Object
{
public:  // actually protected
  PRNGFactory ();
public:
  static ::gnu::java::security::prng::IRandom *getInstance (::java::lang::String *);
  static ::java::util::Set *getNames ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_prng_PRNGFactory__ */
