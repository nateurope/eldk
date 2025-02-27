// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_Extension__
#define __gnu_java_security_x509_ext_Extension__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace der
        {
          class DERValue;
        }
        namespace x509
        {
          namespace ext
          {
            class Extension;
            class Extension$Value;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::Extension : public ::java::lang::Object
{
public:
  Extension (jbyteArray);
  Extension (::gnu::java::security::OID *, ::gnu::java::security::x509::ext::Extension$Value *, jboolean);
  virtual ::gnu::java::security::OID *getOid () { return oid; }
  virtual jboolean isCritical () { return critical; }
  virtual jboolean isSupported () { return isSupported__; }
  virtual ::gnu::java::security::x509::ext::Extension$Value *getValue () { return value; }
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *toString ();
  virtual ::gnu::java::security::der::DERValue *getDerValue ();
private:
  void encode ();
  static ::java::util::logging::Logger *log;
public:  // actually protected
  ::gnu::java::security::OID * __attribute__((aligned(__alignof__( ::java::lang::Object )))) oid;
  jboolean critical;
  jboolean isSupported__;
  ::gnu::java::security::x509::ext::Extension$Value *value;
  jbyteArray encoded;

  friend class gnu_java_security_x509_ext_Extension$Value;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_Extension__ */
