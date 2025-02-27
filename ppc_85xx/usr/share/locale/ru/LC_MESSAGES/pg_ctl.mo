��    a      $  �   ,      8      9     Z  &   l     �     �  -   �      	     	  r   3	     �	  F   �	  A   
     O
  7   j
  !   �
  3   �
  ?   �
  ?   8  H   x  D   �  E     ?   L  B   �  <   �  �     0   �  F   �  8     2   >  O   q  7   �     �        �   	  !   �  :   �  I   �  y   A  =   �  >   �  ;   8  *   t  1   �  $   �  /   �  #   &     J  3   h  0   �  ,   �  .   �  7   )  1   a  0   �  5   �     �  $     ,   6  J   c     �  0   �     �  "     %   1  $   W      |  4   �  %   �  $   �  "     F   @  F   �     �  )   �  s     h   �  &   �       &     0   C  )   t  "   �      �  (   �       !   &     H     d     x     �     �     �     �     �  &      "   '  �  J  1   �     
  /   $      T  &   u  F   �     �     �  t        �  F   �  ?   �     /  9   J      �  8   �  1   �  =     B   N  D   �  E   �  6      W   S   >   �   �   �   ,   x!  S   �!  6   �!  :   0"  r   k"  ?   �"     #     '#  �   0#      �#  :   $  J   H$  �   �$  I   Q%  I   �%  D   �%  +   *&  1   V&  (   �&  2   �&  )   �&      '  0   /'  <   `'  2   �'  9   �'  :   
(  6   E(  4   |(  1   �(     �(  *   �(  .   %)  R   T)     �)  3   �)     �)  "   
*  &   -*  #   T*  "   x*  =   �*  %   �*  %   �*  $   %+  S   J+  M   �+     �+  5   ,  n   :,  f   �,  5   -     F-  /   V-  8   �-  )   �-  &   �-     .  ,   ..      [.  !   |.     �.     �.     �.     �.     /     #/     ;/  +   R/  *   ~/      �/        B       *   `   ;   J       [            2          I   :   Q   X   ^   &   (       T       C   P         S      W       #      '              V      1          N       .   
         _       5                 Z   R   U   Y                  ?   6   <       9   0       !                      @              %   8   3   K   M   =      /   -   G   ,   F   O       "   )   \      >       $   E   7       L   A      ]          4   H          	                     +          D              a    
Allowed signal names for kill:
 
Common options:
 
Options for register and unregister:
 
Options for start or restart:
 
Options for stop or restart:
 
Report bugs to <pgsql-bugs@postgresql.org>.
 
Shutdown modes are:
   %s kill    SIGNALNAME PID
   %s register   [-N SERVICENAME] [-U USERNAME] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o "OPTIONS"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m SHUTDOWN-MODE] [-o "OPTIONS"]
   %s start   [-w] [-D DATADIR] [-s] [-l FILENAME] [-o "OPTIONS"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m SHUTDOWN-MODE]
   %s unregister [-N SERVICENAME]
   --help                 show this help, then exit
   --version              output version information, then exit
   -D, --pgdata DATADIR   location of the database storage area
   -N SERVICENAME  service name with which to register PostgreSQL server
   -P PASSWORD     password of account to register PostgreSQL server
   -U USERNAME     user name of account to register PostgreSQL server
   -W                     do not wait until operation completes
   -l, --log FILENAME     write (or append) server log to FILENAME
   -m SHUTDOWN-MODE   may be "smart", "fast", or "immediate"
   -o OPTIONS             command line options to pass to the postmaster
                         (PostgreSQL server executable)
   -p PATH-TO-POSTMASTER  normally not necessary
   -s, --silent           only print errors, no informational messages
   -w                     wait until operation completes
   fast        quit directly, with proper shutdown
   immediate   quit without complete shutdown; will lead to recovery on restart
   smart       quit after all clients have disconnected
  done
  failed
 %s is a utility to start, stop, restart, reload configuration files,
report the status of a PostgreSQL server, or signal a PostgreSQL process.

 %s: PID file "%s" does not exist
 %s: a standalone backend "postgres" is running (PID: %ld)
 %s: another postmaster may be running; trying to start postmaster anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload postmaster; postgres is running (PID: %ld)
 %s: cannot restart postmaster; postgres is running (PID: %ld)
 %s: cannot stop postmaster; postgres is running (PID: %ld)
 %s: could not find own program executable
 %s: could not find postmaster program executable
 %s: could not open PID file "%s": %s %s: could not open service "%s": error code %d
 %s: could not open service manager
 %s: could not read file "%s"
 %s: could not register service "%s": error code %d
 %s: could not send reload signal (PID: %ld): %s
 %s: could not send signal %d (PID: %ld): %s
 %s: could not send stop signal (PID: %ld): %s
 %s: could not start postmaster
Examine the log output.
 %s: could not start postmaster: exit code was %d
 %s: could not start service "%s": error code %d
 %s: could not unregister service "%s": error code %d
 %s: invalid option %s
 %s: missing arguments for kill mode
 %s: neither postmaster nor postgres running
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: option file "%s" must have exactly one line
 %s: out of memory
 %s: postmaster does not shut down
 %s: postmaster is running (PID: %ld)
 %s: service "%s" already registered
 %s: service "%s" not registered
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized operation mode "%s"
 %s: unrecognized shutdown mode "%s"
 %s: unrecognized signal name "%s"
 (The default is to wait for shutdown, but not for start or restart.)

 If the -D option is omitted, the environment variable PGDATA is used.
 Is postmaster running?
 Please terminate postgres and try again.
 The program "postmaster" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postmaster" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not start postmaster
 invalid binary "%s" postmaster shutting down
 postmaster signaled
 postmaster started
 postmaster starting
 postmaster stopped
 starting postmaster anyway
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2005-01-17 19:05+0000
PO-Revision-Date: 2005-01-17 15:25-0500
Last-Translator: Serguei A. Mokhov <mokhov@cs.concordia.ca>
Language-Team: pgsql-ru-general <pgsql-ru-general@postgresql.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=koi8-r
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Russian
X-Poedit-Country: RUSSIAN FEDERATION
 
�����ۣ���� �������� �������� ��� ������� kill:
 
����� ������ ���������:
 
����� ��� ����������� � ������ � �����������:
 
����� ������� ��� �����������:
 
����� ��� ��������� ��� �����������:
 
�������� ��������� �� ������� �� �����  <pgsql-bugs@postgresql.org>.
 
������ ���������:
   %s kill   SIGNALNAME PID
   %s register   [-N SERVICENAME]] [-U USERNAME]] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o "OPTIONS"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m �����-���������] [-o "�����"]
   %s start   [-w] [-D DATADIR] [-s] [-l FILENAME] [-o "�����"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m �����-���������]
   %s unregister [-N ����������]
   --help                 �������� ��� ��������� � �����
   --version              �������� ������ � �����
   -D, --pgdata DATADIR  ��������������� ��������� ��� ������
   -N SERVICENAME   ��� ������� ��� ����������� ������� PostgreSQL
   -P PASSWORD    ������ �������� ��� ����������� ������� PostgreSQL
   -U USERNAME    ��� ������������ ��� ����������� ������� PostgreSQL
   -W                     �� ����� ���������� ��������
   -l, --log FILENAME     ���������� (��� ���������) ������ ������� ������� � FILENAME.
   -m SHUTDOWN-MODE ����� ���� "smart", "fast" ��� "immediate"
   -o �����                ����� �������o� ������ ��� �������� postmaster'�
                          (������������ ����� ������� PostgreSQL)
   -p PATH-TO-POSTMASTER ������ �� ���������
   -s, --silent           �������� ������ ������, �������� �������������� ���������
   -w                     ����� �� ���������� ��������
   fast       ��������� ������,�� � ����������� ����������
   immediate   ����� ���������� ��� ����������� ���������; �����ģ� �
              �������������� ��� �����������
   smart      ��������� ������ ����� ������������ ���� ��������
  ������
  ������
 %s �������� �������� ��� �������, ���������, �����������,
������������ ���������������� ������, �������������� � ��������� �������
PostgreSQL, ��� �������� �������� PostgreSQL-��������.

 %s: PID-���� "%s" �� ����������
 %s: ����������� ����������� ������� "postgres" (PID: %ld)
 %s: ��������, ������ postmaster ��� �������, ������� ���������� ��-������
 %s: ������ ��������� ��� ������������� root
����������, ������� � ������� ��� ������������������� ������������  (��������, ��������� "su"),
��� ������� ����� ����������� ��������� �������.
 %s: ���������� ������������� postmaster; ����������� postgres (PID: %ld)
 %s: ���������� ������������� postmaster; ����������� postgres (PID: %ld)
 %s: ��  ���� ���������� postmaster; ����������� postgres (PID: %ld)
 %s: �� ������� ����� ���� ����������� ����
 %s: �� ������� ����� ����������� ���� postmaster
 %s: �� ������� ������� PID-���� "%s": %s %s: �� ������� ������� ������ "%s": ��� ������ %d
 %s: ���������� ������� �������� ��������
 %s: �� ���� ��������� ���� "%s"
 %s: �� ������� ����� ������ "%s": ��� ������ %d
 %s: �� ������� ��������� ������ ������������ (PID: %ld): %s
 %s: �� ������� ��������� ������ %d (PID: %ld): %s
 %s: �� ������� ��������� ������ ��������� (PID: %ld): %s
 %s: �� ���� ��������� postmaster
��������� ������ ������.
 %s: �� ������� ��������� postmaster, ��� ��������: %d
 %s: �� ������� ��������� ������ "%s": ��� ������ %d
 %s: ���������� ����� ������ "%s": ��� ������ %d

 %s: �������� ����� %s
 %s: ����������� ��������� ��� ������ kill
 %s: �� ����������� �� postmaster, �� postgres
 %s: ���������� ��� ������ �� ������� � ���������� ��������� PGDATA �� �����������
 %s: ������� �� �������
 %s: ���� ����� "%s" ������ ����� ����� ���� ������
 %s: �� ������� ������
 %s: postmaster �� ���������������
 %s: ����������� postmaster (PID: %ld)
 %s: ������"%s" ��� ���������������
 %s: ������"%s" �� ���������������
 %s: ������� ����� ���������� ��������� ������ (������: "%s")
 %s: �������������� ����� ������ "%s"
 %s: ����������� ����� ��������� "%s"
 %s: �������������� ��� ������� "%s"
 (�� ���������, ����� ���������� ���������, �� �� � ������ ������� ��� �����������

 ���� ����� -D �� ������,�� ����� �������������� ���������� ��������� PGDATA.
 ������� �� postmaster?
 ����������, ���������� postgres � ����������� �����.
 ��������� "postmaster" ����� ��� %s, �� �� �������
� ��� �� ����������, ��� � "%s".
��������� ���� ���������.
 ��������� "postmaster" ������� ����� � "%s",
�� �� ��� �� ������, ��� � %s.
��������� ���� ���������.
 �������� "%s --help" ��� ����� ��������� ����������.
 �������������:
 �������� ������� ���������� � ����� �������� %d �������� ������� ���������� � �������������� �������� %d �������� ������� ��� �������� �������� %d �� ������� �������� ���������� �� "%s" "%s" �� ������ ��� ���������� �� ������� ���������� ������� ����������: %s �� ������� ������� �������� "%s" �� ���������� ������� ������ "%s" �� ���� ��������� postmaster
 �������� �������� "%s" postmaster ��������� ������
 ��������� ������ postmaster'�
 postmaster �������
 ����������� postmaster
 postmaster ����������
 ����������� postmaster, �������� �� �� ���
 �������� ���������� ������ postmaster'�... �������� ������� postmaster'�... 