// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_SharedUIDefaults__
#define __javax_swing_plaf_basic_SharedUIDefaults__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class SharedUIDefaults;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Color;
    }
  }
}

class javax::swing::plaf::basic::SharedUIDefaults : public ::java::lang::Object
{
public: // actually package-private
  static ::java::lang::Object *get (::java::lang::String *);
  static ::java::awt::Color *getColor (::java::lang::String *);
public:
  SharedUIDefaults ();
private:
  static ::java::util::HashMap *sharedDefaults;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_SharedUIDefaults__ */
