��    ]           �      �      �     
  &        C     c  -   �     �     �  r   �     V	  F   v	  A   �	     �	  7   
  !   R
  3   t
  ?   �
  ?   �
  H   (  D   q  E   �  ?   �  B   <  <     �   �  0   =  F   n  8   �  2   �  O   !  7   q     �     �  �   �  !   J  :   l  I   �  y   �  =   k  >   �  ;   �  *   $  1   O  $   �  /   �  #   �     �  3     0   L  ,   }  .   �  7   �  1     5   C     y  $   �  ,   �  J   �     -  0   I     z  "   �  %   �  $   �      �  4     %   Q  $   w  "   �  F   �  F        M  )   e  s   �  h     &   l     �  &   �  0   �  )   �  "     (   @  !   i     �     �     �     �     �     �       &   /  "   V  9  y     �     �     �     �     �  )        ;     Q  g   o      �  ?   �  =   8     v  3   �     �  2   �  0     (   I  5   r  5   �  7   �  *     A   A  >   �  m   �  (   0  6   Y  *   �  #   �  +   �  '         3      :   e   A      �   2   �   6   �   Q   +!  5   }!  6   �!  6   �!     !"  '   7"     _"  !   ~"     �"     �"  !   �"  $   �"  #   #  $   :#  &   _#  %   �#  !   �#     �#     �#  &   �#  3   $     R$     d$     �$     �$  #   �$     �$     �$  #   �$     #%     <%     U%  %   l%  ,   �%     �%     �%  M   �%  ?   A&  !   �&  
   �&     �&     �&     �&     �&     	'     '     4'     I'     Z'     o'     �'     �'     �'     �'     �'     8          3               ?      K   9   :   1   &   L   Q               ,   2   P                              B          H      7       -   *       Z   V   A       ;   [      <              S   5                          4   G   6       F   Y       M   U                      C       '   0         D      N      #                .              O   $   E   "   =   !       R   \      J           /      X   	   
   >   I   (   )           +       %   T   ]   W      @        
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not identify current directory: %s could not read symbolic link "%s" could not start postmaster
 postmaster shutting down
 postmaster signaled
 postmaster started
 postmaster starting
 postmaster stopped
 starting postmaster anyway
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: PostgreSQL 8.0
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-12-14 09:49+0000
PO-Revision-Date: 2004-06-10 11:23+0000
Last-Translator: Bao Wei<weibao@imsi.cn>
Language-Team: Weiping He <laser@imsi.cn>
MIME-Version: 1.0
Content-Type: text/plain; charset=GB2312
Content-Transfer-Encoding: 8bit
 
�����رյ��ź�����:
 
��ͨѡ��:
 
ע���ע����ѡ��:
 
������������ѡ��:
 
ֹͣ��������ѡ��:
 
���汨���� <pgsql-bugs@postgresql.org>.
 
�ر�ģʽ�����¼���:
   %s kill    �ź����� ���̺�
   %s register   [-N ��������] [-U �û���] [-P ����] [-D ����Ŀ¼]
                    [-w] [-o "ѡ��"]
   %s reload  [-D ����Ŀ¼] [-s]
   %s restart [-w] [-D ����Ŀ¼] [-s] [-m �ر�ģʽ] [-o "ѡ��"]
   %s start   [-w] [-D ����Ŀ¼] [-s] [-l �ļ���] [-o "ѡ��"]
   %s status  [-D ����Ŀ¼]
   %s stop    [-W] [-D ����Ŀ¼] [-s] [-m �ر�ģʽ]
   %s unregister [-N ��������]
   --help                 ��ʾ�˰�����Ϣ, Ȼ���˳�
   --version              ��ʾ�汾��Ϣ, Ȼ���˳�
   -D, --pgdata ����Ŀ¼  ���ݴ洢��λ��
   -N ��������     ע�ᵽ PostgreSQL �������ķ�������
   -P ����         ע�ᵽ PostgreSQL �������ʻ��Ŀ���
   -U �û���       ע�ᵽ PostgreSQL �������ʻ����û���
   -W                     ���õȴ��������
   -l, --log FILENAME     д�� (��׷��) ��������־���ļ� FILENAME
   -m SHUTDOWN-MODE   ������ "smart", "fast", ���� "immediate"
   -o OPTIONS             ���ݸ� postmaster ��������ѡ��
                         (PostgreSQL ������ִ���ļ�)
   -p PATH-TO-POSTMASTER  �����������Ҫ
   -s, --silent           ֻ��ӡ������Ϣ, û��������Ϣ
   -w                     �ȴ�ֱ���������
   fast        ֱ���˳�, ��ȷ�Ĺر�
   immediate   ����ȫ�Ĺر��˳�; ������ָ�
   smart       ���пͻ��˶Ͽ����Ӻ��˳�
  ���
  ʧ��
 %s ��һ������, ֹͣ, ����, ���������ļ�, ���� PostgreSQL ������״̬,
����ɱ�� PostgreSQL ���̵Ĺ���

 %s: PID �ļ� "%s" ������
 %s: һ�������ĺ�� "postgres" �������� (PID: %ld)
 %s: ���� postmaster ������������. �������� postmaster
 %s: �޷��� root �û�����
���Է��������������û� (����Ȩ�û�) ��¼ (��ʹ�� "su")

 %s: �޷����� postmaser; postgres �������� (PID: %ld)
 %s: �޷����� postmaster; postgres �������� (PID: %ld)
 %s: �޷�ֹͣ postmaster; postgres �������� (PID: %ld)
 %s: �޷��ҵ�ִ���ļ�
 %s: �޷��ҵ� postmaster �����ִ���ļ�
 %s: �޷��� PID �ļ� "%s": %s %s: �޷��򿪷��� "%s": ������ %d
 %s: �޷��򿪷��������
 %s: �޷���ȡ�ļ� "%s"
 %s: �޷�ע����� "%s": ������ %d
 %s: �޷����������ź� (PID: %ld): %s
 %s: �޷������ź� %d (PID: %ld): %s
 %s: �޷�����ֹͣ�ź� (PID: %ld): %s
 %s: �޷����� postmaster
�����־���.
 %s: �޷����� postmaster: �˳���Ϊ %d
 %s: �޷�ע������ "%s": ������ %d
 %s: ��Чѡ�� %s
 %s: ȱ�� kill ģʽ����
 %s: postmaster ���� postgres û������
 %s: û��ָ������Ŀ¼, ����û������ PGDATA ��������
 %s: û��ָ������
 %s: ѡ���ļ� "%s" ֻ����һ��
 %s: �ڴ����
 %s: postmaster û�йر�
 %s: postmaster �������� (PID: %ld)
 %s: ���� "%s" �Ѿ�ע����
 %s: ���� "%s" û��ע��
 %s: �����в���̫�� (��һ���� "%s")
 %s: ��Ч�Ĳ���ģʽ "%s"
 %s: ��Ч�Ĺر�ģʽ "%s"
 %s: ��Ч�ź����� "%s"
 (Ĭ��Ϊ�رյȴ�, ����������������.)

 ���ʡ���� -D ѡ��, ��ʹ�� PGDATA ��������.
 �Ƿ� postmaster ��������?
 ����ֹ postgres ������.
 ���� "postmaster" �� %s ��Ҫ��, ��û����ͬһ��Ŀ¼ "%s" ����.

������İ�װ.
 %s �ҵ����� "postmaster", ���汾�� "%s" ��һ��.

������İ�װ.
 ���� "%s --help" ��ȡ�������Ϣ.
 ʹ�÷���:
 �ӽ������˳�, �˳���Ϊ %d �ӽ������˳�, δ֪״̬ %d �ӽ��̱��ź� %d ��ֹ �޷�����Ŀ¼ "%s" �޷�ȷ�ϵ�ǰĿ¼: %s �޷���ȡ�������� "%s" �޷����� postmaster
 �ر� postmaster
 postmaster �����ź�
 postmaster �Ѿ�����
 ���� postmaster
 postmaster �Ѿ��ر�
 ���ڳ������� postmaster
 �ȴ� postmaster �ر� ... �ȴ� postmaster ���� ... 