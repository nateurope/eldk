// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_action_SetAccessibleAction__
#define __gnu_java_security_action_SetAccessibleAction__

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
        namespace action
        {
          class SetAccessibleAction;
        }
      }
    }
  }
}

class gnu::java::security::action::SetAccessibleAction : public ::java::lang::Object
{
public:
  SetAccessibleAction ();
  SetAccessibleAction (::java::lang::reflect::AccessibleObject *);
  virtual ::java::lang::Object *run ();
  virtual ::gnu::java::security::action::SetAccessibleAction *setMember (::java::lang::reflect::AccessibleObject *);
public: // actually package-private
  ::java::lang::reflect::AccessibleObject * __attribute__((aligned(__alignof__( ::java::lang::Object )))) member;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_action_SetAccessibleAction__ */
