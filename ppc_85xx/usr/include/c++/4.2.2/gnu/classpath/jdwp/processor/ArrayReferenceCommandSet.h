// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_ArrayReferenceCommandSet__
#define __gnu_classpath_jdwp_processor_ArrayReferenceCommandSet__

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
          class ArrayReferenceCommandSet;
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

class gnu::classpath::jdwp::processor::ArrayReferenceCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{
public:
  virtual jboolean runCommand (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
private:
  void executeLength (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeGetValues (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSetValues (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
public:
  ArrayReferenceCommandSet ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_processor_ArrayReferenceCommandSet__ */
