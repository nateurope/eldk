// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_x500_X500Principal__
#define __javax_security_auth_x500_X500Principal__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace x500
        {
          class X500Principal;
        }
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        class OID;
      }
    }
  }
}

class javax::security::auth::x500::X500Principal : public ::java::lang::Object
{
private:
  X500Principal ();
public:
  X500Principal (::java::lang::String *);
  X500Principal (jbyteArray);
  X500Principal (::java::io::InputStream *);
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *getName ();
  virtual ::java::lang::String *getName (::java::lang::String *);
  virtual ::java::lang::String *toString ();
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  jint size ();
  ::java::lang::String *getComponent (::gnu::java::security::OID *, jint);
  void encodeDer ();
  void parseString (::java::lang::String *);
  ::java::lang::String *readAttributeType (::java::io::Reader *);
  ::java::lang::String *readAttributeValue (::java::io::Reader *);
  void parseDer (::java::io::InputStream *);
  void newRelativeDistinguishedName ();
  void putComponent (::gnu::java::security::OID *, ::java::lang::String *);
  void putComponent (::java::lang::String *, ::java::lang::String *);
  static ::java::lang::String *compressWS (::java::lang::String *);
  static jbyteArray toByteArray (::java::lang::String *);
  static const jlong serialVersionUID = -500463348111345721LL;
public:
  static ::java::lang::String *CANONICAL;
  static ::java::lang::String *RFC1779;
  static ::java::lang::String *RFC2253;
private:
  static ::gnu::java::security::OID *CN;
  static ::gnu::java::security::OID *C;
  static ::gnu::java::security::OID *L;
  static ::gnu::java::security::OID *ST;
  static ::gnu::java::security::OID *STREET;
  static ::gnu::java::security::OID *O;
  static ::gnu::java::security::OID *OU;
  static ::gnu::java::security::OID *DC;
  static ::gnu::java::security::OID *UID;
  ::java::util::List * __attribute__((aligned(__alignof__( ::java::lang::Object )))) components;
  ::java::util::Map *currentRdn;
  jboolean fixed;
  jbyteArray encoded;
  jint sep;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_x500_X500Principal__ */