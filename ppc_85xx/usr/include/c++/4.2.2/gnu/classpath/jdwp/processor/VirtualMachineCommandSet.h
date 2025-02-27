// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_VirtualMachineCommandSet__
#define __gnu_classpath_jdwp_processor_VirtualMachineCommandSet__

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
          class VirtualMachineCommandSet;
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

class gnu::classpath::jdwp::processor::VirtualMachineCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{
public:
  virtual jboolean runCommand (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
private:
  void executeVersion (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClassesBySignature (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeAllClasses (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeAllThreads (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeTopLevelThreadGroups (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeDispose (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeIDsizes (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSuspend (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeResume (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeExit (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeCreateString (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeCapabilities (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClassPaths (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeDisposeObjects (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *) { }
  void executeHoldEvents (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeReleaseEvents (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeCapabilitiesNew (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeRedefineClasses (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSetDefaultStratum (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeAllClassesWithGeneric (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  ::java::lang::ThreadGroup *getRootThreadGroup (::java::lang::ThreadGroup *);
public:
  VirtualMachineCommandSet ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_processor_VirtualMachineCommandSet__ */
