// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_MBeanParameterInfo__
#define __javax_management_MBeanParameterInfo__

#pragma interface

#include <javax/management/MBeanFeatureInfo.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      class MBeanParameterInfo;
    }
  }
}

class javax::management::MBeanParameterInfo : public ::javax::management::MBeanFeatureInfo
{
public:
  MBeanParameterInfo (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::Object *clone ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *getType () { return type; }
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = 7432616882776782338LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::management::MBeanFeatureInfo )))) type;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_management_MBeanParameterInfo__ */