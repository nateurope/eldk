// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_id_ThreadGroupId__
#define __gnu_classpath_jdwp_id_ThreadGroupId__

#pragma interface

#include <gnu/classpath/jdwp/id/ObjectId.h>

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
          class ThreadGroupId;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::id::ThreadGroupId : public ::gnu::classpath::jdwp::id::ObjectId
{
public:
  ThreadGroupId ();
  virtual ::java::lang::ThreadGroup *getThreadGroup ();
  static ::java::lang::Class *typeClass;

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_id_ThreadGroupId__ */
