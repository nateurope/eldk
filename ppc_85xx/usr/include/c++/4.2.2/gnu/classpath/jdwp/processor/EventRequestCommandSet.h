// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_EventRequestCommandSet__
#define __gnu_classpath_jdwp_processor_EventRequestCommandSet__

#pragma interface

#include <gnu/classpath/jdwp/processor/CommandSet.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace processor
        {
          class EventRequestCommandSet;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
    }
  }
}

class gnu::classpath::jdwp::processor::EventRequestCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{
public:
  virtual jboolean runCommand (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
private:
  void executeSet (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClear (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClearAllBreakpoints (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
public:
  EventRequestCommandSet ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_processor_EventRequestCommandSet__ */
