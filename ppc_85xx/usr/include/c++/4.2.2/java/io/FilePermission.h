// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_FilePermission__
#define __java_io_FilePermission__

#pragma interface

#include <java/security/Permission.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Permission;
    }
  }
}

class java::io::FilePermission : public ::java::security::Permission
{
private:
  void checkPerms ();
public:
  FilePermission (::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String *getActions () { return actionsString; }
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jboolean implies (::java::security::Permission *);
private:
  static const jlong serialVersionUID = 7930732926638008763LL;
  static ::java::lang::String *ALL_FILES;
  jboolean __attribute__((aligned(__alignof__( ::java::security::Permission ))))  readPerm;
  jboolean writePerm;
  jboolean executePerm;
  jboolean deletePerm;
  ::java::lang::String *actionsString;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_FilePermission__ */
