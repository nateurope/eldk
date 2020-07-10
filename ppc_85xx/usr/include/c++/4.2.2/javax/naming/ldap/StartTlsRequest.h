// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_ldap_StartTlsRequest__
#define __javax_naming_ldap_StartTlsRequest__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace ldap
      {
        class StartTlsRequest;
        class ExtendedResponse;
      }
    }
  }
}

class javax::naming::ldap::StartTlsRequest : public ::java::lang::Object
{
public:
  StartTlsRequest ();
  virtual ::java::lang::String *getID ();
  virtual jbyteArray getEncodedValue () { return 0; }
  virtual ::javax::naming::ldap::ExtendedResponse *createExtendedResponse (::java::lang::String *, jbyteArray, jint, jint);
private:
  static const jlong serialVersionUID = 4441679576360753397LL;
public:
  static ::java::lang::String *OID;

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_ldap_StartTlsRequest__ */