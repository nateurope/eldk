// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_prefs_GConfBasedFactory__
#define __gnu_java_util_prefs_GConfBasedFactory__

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
        namespace prefs
        {
          class GConfBasedFactory;
        }
      }
    }
  }
}

class gnu::java::util::prefs::GConfBasedFactory : public ::java::lang::Object
{
public:
  virtual ::java::util::prefs::Preferences *systemRoot ();
  virtual ::java::util::prefs::Preferences *userRoot ();
  GConfBasedFactory ();
private:
  static ::java::util::prefs::Preferences *systemPreferences;
  static ::java::util::prefs::Preferences *userPreferences;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_prefs_GConfBasedFactory__ */
