// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_ProtectionDomain__
#define __java_security_ProtectionDomain__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class ProtectionDomain;
      class Permission;
      class Principal;
      class PermissionCollection;
      class CodeSource;
    }
  }
}

class java::security::ProtectionDomain : public ::java::lang::Object
{
public:
  ProtectionDomain (::java::security::CodeSource *, ::java::security::PermissionCollection *);
  ProtectionDomain (::java::security::CodeSource *, ::java::security::PermissionCollection *, ::java::lang::ClassLoader *, JArray< ::java::security::Principal *> *);
private:
  ProtectionDomain (::java::security::CodeSource *, ::java::security::PermissionCollection *, ::java::lang::ClassLoader *, JArray< ::java::security::Principal *> *, jboolean);
public:
  virtual ::java::security::CodeSource *getCodeSource () { return code_source; }
  virtual ::java::lang::ClassLoader *getClassLoader () { return classloader; }
  virtual JArray< ::java::security::Principal *> *getPrincipals ();
  virtual ::java::security::PermissionCollection *getPermissions () { return perms; }
  virtual jboolean implies (::java::security::Permission *);
  virtual ::java::lang::String *toString ();
private:
  ::java::security::CodeSource * __attribute__((aligned(__alignof__( ::java::lang::Object )))) code_source;
  ::java::security::PermissionCollection *perms;
  ::java::lang::ClassLoader *classloader;
  JArray< ::java::security::Principal *> *principals;
  jboolean staticBinding;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_ProtectionDomain__ */
