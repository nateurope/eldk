// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_X509EncodedKeySpec__
#define __java_security_spec_X509EncodedKeySpec__

#pragma interface

#include <java/security/spec/EncodedKeySpec.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class X509EncodedKeySpec;
      }
    }
  }
}

class java::security::spec::X509EncodedKeySpec : public ::java::security::spec::EncodedKeySpec
{
public:
  X509EncodedKeySpec (jbyteArray);
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *getFormat ();

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_X509EncodedKeySpec__ */
