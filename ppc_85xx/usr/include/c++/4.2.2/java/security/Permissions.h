// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_Permissions__
#define __java_security_Permissions__

#pragma interface

#include <java/security/PermissionCollection.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Permissions;
      class Permission;
      class PermissionCollection;
    }
  }
}

class java::security::Permissions : public ::java::security::PermissionCollection
{
public:
  Permissions ();
  virtual void add (::java::security::Permission *);
  virtual jboolean implies (::java::security::Permission *);
  virtual ::java::util::Enumeration *elements ();
private:
  static const jlong serialVersionUID = 4858622370623524688LL;
  ::java::security::PermissionCollection * __attribute__((aligned(__alignof__( ::java::security::PermissionCollection )))) allPermission;
public: // actually package-private
  ::java::util::Hashtable *perms;

  friend class java_security_Permissions$PermissionsHash;
  friend class java_security_Permissions$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_Permissions__ */
