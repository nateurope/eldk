// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_ArrayTypeCommandSet__
#define __gnu_classpath_jdwp_processor_ArrayTypeCommandSet__

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
          class ArrayTypeCommandSet;
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

class gnu::classpath::jdwp::processor::ArrayTypeCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{
public:
  virtual jboolean runCommand (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
  virtual void executeNewInstance (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  ArrayTypeCommandSet ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_processor_ArrayTypeCommandSet__ */
