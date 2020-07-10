// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_UnresolvedPermission__
#define __java_security_UnresolvedPermission__

#pragma interface

#include <java/security/Permission.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class UnresolvedPermission;
      class PermissionCollection;
      class Permission;
      namespace cert
      {
        class Certificate;
      }
    }
  }
}

class java::security::UnresolvedPermission : public ::java::security::Permission
{
public:
  UnresolvedPermission (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< ::java::security::cert::Certificate *> *);
  virtual jboolean implies (::java::security::Permission *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *getActions () { return actions; }
  virtual ::java::lang::String *toString ();
  virtual ::java::security::PermissionCollection *newPermissionCollection ();
  virtual ::java::lang::String *getUnresolvedType () { return type; }
  virtual ::java::lang::String *getUnresolvedName () { return name; }
  virtual ::java::lang::String *getUnresolvedActions () { return actions; }
  virtual JArray< ::java::security::cert::Certificate *> *getUnresolvedCerts ();
private:
  static const jlong serialVersionUID = -4821973115467008846LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::security::Permission )))) actions;
  JArray< ::java::security::cert::Certificate *> *certs;
public: // actually package-private
  ::java::lang::String *type;
private:
  ::java::lang::String *name;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_UnresolvedPermission__ */
