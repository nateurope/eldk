// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_NotificationFilter__
#define __javax_management_NotificationFilter__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      class NotificationFilter;
      class Notification;
    }
  }
}

class javax::management::NotificationFilter : public ::java::lang::Object
{
public:
  virtual jboolean isNotificationEnabled (::javax::management::Notification *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_management_NotificationFilter__ */
