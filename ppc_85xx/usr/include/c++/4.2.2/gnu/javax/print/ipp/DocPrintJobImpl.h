// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_DocPrintJobImpl__
#define __gnu_javax_print_ipp_DocPrintJobImpl__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      class Doc;
      class PrintService;
      namespace event
      {
        class PrintJobEvent;
        class PrintJobListener;
        class PrintJobAttributeListener;
      }
      namespace attribute
      {
        class PrintRequestAttributeSet;
        class PrintJobAttributeSet;
        namespace standard
        {
          class RequestingUserName;
        }
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          class DocPrintJobImpl;
          namespace attribute
          {
            namespace job
            {
              class JobId;
              class JobUri;
            }
          }
          class IppPrintService;
        }
      }
    }
  }
}

class gnu::javax::print::ipp::DocPrintJobImpl : public ::java::lang::Object
{
public:
  DocPrintJobImpl (::gnu::javax::print::ipp::IppPrintService *, ::java::lang::String *, ::java::lang::String *);
  virtual void addPrintJobAttributeListener (::javax::print::event::PrintJobAttributeListener *, ::javax::print::attribute::PrintJobAttributeSet *);
  virtual void addPrintJobListener (::javax::print::event::PrintJobListener *);
  virtual ::javax::print::attribute::PrintJobAttributeSet *getAttributes ();
  virtual ::javax::print::PrintService *getPrintService () { return reinterpret_cast< ::javax::print::PrintService *> (service); }
  virtual void print (::javax::print::Doc *, ::javax::print::attribute::PrintRequestAttributeSet *);
  virtual void removePrintJobAttributeListener (::javax::print::event::PrintJobAttributeListener *);
  virtual void removePrintJobListener (::javax::print::event::PrintJobListener *);
  virtual void cancel ();
private:
  void notifyPrintJobListeners (::javax::print::event::PrintJobEvent *);
  ::gnu::javax::print::ipp::IppPrintService * __attribute__((aligned(__alignof__( ::java::lang::Object )))) service;
  ::java::util::HashSet *printJobListener;
  ::java::util::ArrayList *attributesListener;
  ::java::util::ArrayList *attributesListenerAttributes;
  ::java::lang::String *username;
  ::java::lang::String *password;
  ::gnu::javax::print::ipp::attribute::job::JobUri *jobUri;
  ::gnu::javax::print::ipp::attribute::job::JobId *jobId;
  ::javax::print::attribute::standard::RequestingUserName *requestingUser;
  ::javax::print::attribute::PrintJobAttributeSet *oldSet;
  ::javax::print::attribute::PrintJobAttributeSet *currentSet;
  jboolean printing;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_DocPrintJobImpl__ */
