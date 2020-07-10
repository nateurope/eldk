// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_MemoryUsage__
#define __java_lang_management_MemoryUsage__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
        class CompositeData;
      }
    }
  }
}

class java::lang::management::MemoryUsage : public ::java::lang::Object
{
public:
  MemoryUsage (jlong, jlong, jlong, jlong);
  static ::java::lang::management::MemoryUsage *from (::javax::management::openmbean::CompositeData *);
  virtual jlong getCommitted () { return committed; }
  virtual jlong getInit () { return init; }
  virtual jlong getMax () { return maximum; }
  virtual jlong getUsed () { return used; }
  virtual ::java::lang::String *toString ();
private:
  jlong __attribute__((aligned(__alignof__( ::java::lang::Object ))))  init;
  jlong used;
  jlong committed;
  jlong maximum;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_management_MemoryUsage__ */
