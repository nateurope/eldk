// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_id_ObjectId__
#define __gnu_classpath_jdwp_id_ObjectId__

#pragma interface

#include <gnu/classpath/jdwp/id/JdwpId.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace id
        {
          class ObjectId;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::id::ObjectId : public ::gnu::classpath::jdwp::id::JdwpId
{
public:
  ObjectId ();
  ObjectId (jbyte);
  virtual ::java::lang::Object *getObject ();
  virtual void write (::java::io::DataOutputStream *);
  virtual void disableCollection ();
  virtual void enableCollection ();
  static ::java::lang::Class *typeClass;
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::gnu::classpath::jdwp::id::JdwpId )))) _handle;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_id_ObjectId__ */
