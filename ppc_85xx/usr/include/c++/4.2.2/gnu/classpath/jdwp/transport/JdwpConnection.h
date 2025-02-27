// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_transport_JdwpConnection__
#define __gnu_classpath_jdwp_transport_JdwpConnection__

#pragma interface

#include <java/lang/Thread.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace event
        {
          class Event;
          class EventRequest;
        }
        namespace transport
        {
          class JdwpConnection;
          class JdwpPacket;
          class ITransport;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::transport::JdwpConnection : public ::java::lang::Thread
{
public:
  JdwpConnection (::java::lang::ThreadGroup *, ::gnu::classpath::jdwp::transport::ITransport *);
  virtual void initialize ();
private:
  void _doHandshake ();
public:
  virtual void run ();
private:
  void _readOnePacket ();
public:
  virtual ::gnu::classpath::jdwp::transport::JdwpPacket *getPacket ();
  virtual void sendPacket (::gnu::classpath::jdwp::transport::JdwpPacket *);
  virtual void sendEvent (::gnu::classpath::jdwp::event::EventRequest *, ::gnu::classpath::jdwp::event::Event *);
  virtual void shutdown ();
private:
  static jbyteArray _HANDSHAKE;
  ::gnu::classpath::jdwp::transport::ITransport * __attribute__((aligned(__alignof__( ::java::lang::Thread )))) _transport;
  ::java::util::ArrayList *_commandQueue;
  jboolean _shutdown;
  ::java::io::DataInputStream *_inStream;
  ::java::io::DataOutputStream *_outStream;
  ::java::io::ByteArrayOutputStream *_bytes;
  ::java::io::DataOutputStream *_doStream;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_transport_JdwpConnection__ */
