��    h      \  �   �      �  R   �     	  
   :	  -   E	  �   s	  �   �	     �
    �
  J   �  5   %  J   [  6   �  P   �  C   .  :   r  4   �  B   �  H   %  >   n  9   �  3   �  ?     /   [  -   �  E   �  y   �  (   y  7   �  (   �  3     '   7  5   _  -   �  -   �  /   �  "   !  6   D  �   {  0   *  $   [  �   �  ~     1   �     �  J   �  �   &     �  D     -   F  !   t  4   �  ,   �     �          )     H     a       ;   �  9   �  �     >   �  0  �  u     q   �  f   �  &   ]     �     �  &   �  0   �  )   �  "     #   @  "   d      �  (   �  "   �     �  "     !   2  ,   T  $   �  %   �  !   �     �           #     D     a  -   |  0   �     �     �       )   *     T     X  &   g  3   �     �  +   �  !      L  &   E   s!      �!  	   �!  (   �!  �   "  �   �"     c#  �   }#  B   W$  3   �$  L   �$  6   %  7   R%  :   �%  7   �%  7   �%  6   5&  =   l&  A   �&  =   �&  3   *'  E   ^'  =   �'  9   �'  L   (  �   i(  (   )  5   9)  #   o)  C   �)  #   �)  <   �)  (   8*  *   a*  7   �*     �*  B   �*  �   $+  1   �+  ,   /,  �   \,  p   �,  0   O-     �-  K   �-  �   �-     �.  ]   �.  6   /  ,   N/  6   {/     �/  &   �/     �/  $   0     ,0      G0     h0  =   �0  8   �0  �   �0  0   �1  .  �1  �   �2  �   v3  u   4  ;   w4     �4  "   �4  (   �4  -   5  %   65  <   \5  =   �5     �5     �5     6     46     T6  !   r6     �6  +   �6  &   �6     7     '7  -   E7     s7      �7     �7     �7  5   �7  1   8     O8     i8  !   �8  #   �8     �8     �8  (   �8  5   9     99  %   N9  )   t9     f      ?   G   \   C       J   !      *          .   ^   1           0   @           B   #      D   I   L   &           +      7   T          -      Z   P   ,      (   [   3   5          %           6                 `   4       "   
               F                 h   d   c             W   	      2   M   V               =   _       S   e   O   Q   :      N   )   9   '                     >   /                          $   b   <         X       E   H   g   U   Y   A   8                     a   ;           R   K   ]    
If the data directory is not specified, the environment variable PGDATA
is used.
 
Less commonly used options:
 
Options:
 
Report bugs to <pgsql-bugs@postgresql.org>.
 
Success. You can now start the database server using:

    %s%s%spostgres%s -D %s%s%s
or
    %s%s%spg_ctl%s -D %s%s%s -l logfile start

 
WARNING: enabling "trust" authentication for local connections
You can change this by editing pg_hba.conf or using the -A option the
next time you run initdb.
   %s [OPTION]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            initialize database cluster with given locale
                            in the respective category (default taken from
                            environment)
   --locale=LOCALE           initialize database cluster with given locale
   --no-locale               equivalent to --locale=C
   --pwfile=FILE             read password for the new superuser from file
   -?, --help                show this help, then exit
   -A, --auth=METHOD         default authentication method for local connections
   -E, --encoding=ENCODING   set default encoding for new databases
   -L DIRECTORY              where to find the input files
   -U, --username=NAME       database superuser name
   -V, --version             output version information, then exit
   -W, --pwprompt            prompt for a password for the new superuser
   -d, --debug               generate lots of debugging output
   -n, --noclean             do not clean up after errors
   -s, --show                show internal settings
  [-D, --pgdata=]DATADIR     location for this database cluster
 %s initializes a PostgreSQL database cluster.

 %s: "%s" is not a valid server encoding name
 %s: The password file was not generated. Please report this problem.
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: could not access directory "%s": %s
 %s: could not change permissions of directory "%s": %s
 %s: could not create directory "%s": %s
 %s: could not determine valid short version string
 %s: could not execute command "%s": %s
 %s: could not find suitable encoding for locale "%s"
 %s: could not open file "%s" for reading: %s
 %s: could not open file "%s" for writing: %s
 %s: could not read password from file "%s": %s
 %s: could not write file "%s": %s
 %s: data directory "%s" not removed at user's request
 %s: directory "%s" exists but is not empty
If you want to create a new database system, either remove or empty
the directory "%s" or run %s
with an argument other than "%s".
 %s: failed to remove contents of data directory
 %s: failed to remove data directory
 %s: file "%s" does not exist
This means you have a corrupted installation or identified
the wrong directory with the invocation option -L.
 %s: input file "%s" does not belong to PostgreSQL %s
Check your installation or specify the correct path using the option -L.
 %s: input file location must be an absolute path
 %s: invalid locale name "%s"
 %s: must specify a password for the superuser to enable %s authentication
 %s: no data directory specified
You must identify the directory where the data for this database system
will reside.  Do this with either the invocation option -D or the
environment variable PGDATA.
 %s: out of memory
 %s: password prompt and password file may not be specified together
 %s: removing contents of data directory "%s"
 %s: removing data directory "%s"
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized authentication method "%s"
 %s: warning: encoding mismatch
 Enter it again:  Enter new superuser password:  Passwords didn't match.
 Rerun %s with the -E option.
 Running in debug mode.
 Running in noclean mode.  Mistakes will not be cleaned up.
 The database cluster will be initialized with locale %s.
 The database cluster will be initialized with locales
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 The default database encoding has accordingly been set to %s.
 The encoding you selected (%s) and the encoding that the selected
locale uses (%s) are not known to match.  This may lead to
misbehavior in various character string processing functions.  To fix
this situation, rerun %s and either do not specify an encoding
explicitly, or choose a matching combination.
 The files belonging to this database system will be owned by user "%s".
This user must also own the server process.

 The program "postgres" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postgres" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 caught signal
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to postgres ...  copying template1 to template0 ...  could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not open directory "%s": %s
 could not read binary "%s" could not read directory "%s": %s
 could not read symbolic link "%s" could not remove file or directory "%s": %s
 could not set junction for "%s": %s
 could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating information schema ...  creating subdirectories ...  creating system views ...  creating template1 database in %s/base/1 ...  fixing permissions on existing directory %s ...  initializing dependencies ...  initializing pg_authid ...  invalid binary "%s" loading system objects' descriptions ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2007-02-07 00:36+0900
PO-Revision-Date: 2006-12-07 23:39+0900
Last-Translator: Ioseph Kim <ioseph@uri.sarang.net>
Language-Team: KOREAN <pgsql-kr@postgresql.or.kr>
MIME-Version: 1.0
Content-Type: text/plain; charset=euc-kr
Content-Transfer-Encoding: 8bit
 
������ ���丮�� �������� ������, PGDATA ȯ�� �������� ����մϴ�.
 
�� �Ϲ������� ���Ǵ� �ɼǵ�:
 
�ɼǵ�:
 
��������: <pgsql-bugs@postgresql.org>.
 
�۾��Ϸ�. ���� ���� ������ �̿��ؼ� ������ ���� �� �� �ֽ��ϴ�:

    %s%s%spostgres%s -D %s%s%s
�Ǵ�
    %s%s%spg_ctl%s -D %s%s%s -l logfile start

 
���: ���� ������ ���� ����� "trust" ����� �����߽��ϴ�.
�� ���� �ٲٷ���, pg_hba.conf ������ �����ϵ���,
������ initdb ������ ����� ��, -A �ɼ��� ����ؼ� ��������� ������ �� �ֽ��ϴ�.
   %s [�ɼ�]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            ���������� ���� ������
                            (�ʱⰪ�� ���� �ý��� �������� �����)
   --locale=LOCALE           �����ͺ��̽� Ŭ������ �ʱ�ȭ�� ������
   --no-locale               --locale=C �ɼǰ� ����
   --pwfile=FILE             �� ���������� ��й�ȣ�� ������ FILE���� ������
   -?, --help                �� ������ �����ְ� ��ħ
   -A, --auth=METHOD         ���� ������ �⺻ ���� ���
   -E, --encoding=ENCODING   �� �����ͺ��̽��� �⺻ ���ڵ�
   -L DIRECTORY              �Է����ϵ��� �ִ� ���丮
   -U, --username=NAME       �����ͺ��̽� �������� �̸�
   -V, --version             ���� ������ �����ְ� ��ħ
   -W, --pwprompt            �� �������� ��й�ȣ�� �Է� ����
   -d, --debug               ����뿡 �ʿ��� �����鵵 �Բ� �����
   -n, --noclean             ������ �߻��Ǿ��� ��� �״�� ��
   -s, --show                ���� ���������� ������
  [-D, --pgdata=]DATADIR     �� �����ͺ��̽� Ŭ�����͸� ���� ���丮
 %s PostgreSQL �����ͺ��̽� Ŭ�����͸� �ʱ�ȭ �ϴ� ���α׷�.

 %s: "%s" ���ڵ��� ���� ���ڵ� �̸��� ����� �� �����ϴ�.
 %s: ��й�ȣ ������ �������� ���߽��ϴ�. �� ������ ���������� �˷��ֽʽÿ�.
 %s: root�� �� ���α׷��� �������� ���ʽÿ�
�ý��۰����� ������ ����, �������μ����� �����ְ� �� �Ϲ� ����ڷ�
�α��� �ؼ�("su", "runas" ���� ���� �̿�) �����Ͻʽÿ�.
 %s: "%s" ���丮�� ���� �� �� ����: %s
 %s: "%s" ���丮�� ���� ������ �ٲ� �� �����ϴ�: %s
 %s: "%s" ���丮 ���� �� ����: %s
 %s: �˸��� ���� ���� ���ڿ�(short version string)�� ������ �� ����
 %s: "%s" ������ ������ �� ����: %s
 %s: "%s" �����Ͽ��� ����� ������ ���ڵ��� ã�� ���߽��ϴ�.
 %s: "%s" ���� �б� ���� ���� ����: %s
 %s: "%s" ������ ���� ���� ���� ����: %s
 %s: file "%s" ���Ͽ��� ��й�ȣ�� ���� �� �����ϴ�: %s
 %s: "%s" ���� ���� ����: %s
 %s: "%s" ������ ���丮�� ������� ��û���� �������� �ʾҽ��ϴ�.
 %s: "%s" ���丮�� �̹� ������, ������� �ʽ��ϴ�.
�� ���丮�� �� �����ͺ��̽� Ŭ�����͸� �������,
"%s" ���丮�� ����ų� ���� ����� �ϵ���,
%s ���α׷����� �ٸ� ���丮�� �����ؼ� ����ϼ���, "%s" ��ſ�.
 %s: ������ ���丮 ������ ����µ� �����߽��ϴ�
 %s: ������ ���丮�� ����µ� �����߽��ϴ�
 %s: "%s" ������ �����ϴ�.
�� ������ ���������� ��ġ���� �ʾҰų�,
-L �ɼ����� ������ ��ΰ� �߸��Ǿ��� ����Դϴ�. Ȯ���غ�����.
 %s: "%s" �Է� ������ PostgreSQL %s ���� �ƴմϴ�.
��ġ���¸� Ȯ���� ����, -L �ɼ����� �ٸ� ��θ� �����Ͻʽÿ�.
 %s: �Է� ���� ��ġ�� �ݵ�� �����ο����մϴ�.
 %s: ������ ������ �̸� "%s"
 %s: %s ��������� ����Ϸ���, �ݵ�� ���������� ��й�ȣ�� �����ؾ��մϴ�.
 %s: ������ ���丮�� �������� �ʾҽ��ϴ�
�� �۾��� �����Ϸ���, �ݵ�� �� ������ ���丮�� ������ �־���մϴ�.
�����ϴ� ����� -D �ɼ��� ���̳�, PGDATA ȯ�� ���������� ������ �ָ� �˴ϴ�.
 %s: �޸� ����
 %s: ��й�ȣ�� �Է¹޴� �ɼǰ� ��й�ȣ�� ���Ͽ��� �������� �ɼ��� ���ÿ� ���� �� �����ϴ�
 %s: "%s" ������ ���丮 ���� ������ ����� �ֽ��ϴ�.
 %s: "%s" ������ ���丮�� ����� �ֽ��ϴ�.
 %s: �ʹ� ���� ������ ���ڸ� �����߽��ϴ�. (ó�� "%s")
 %s: �� �� ���� ���� ��� "%s"
 %s: ���: ���ڵ��� ���� ���� �ʽ��ϴ�
 ��й�ȣ Ȯ��: �� �������� ��й�ȣ�� �Է��Ͻʽÿ�: ��й�ȣ�� ���� Ʋ���ϴ�.
 -E �ɼ����� %s ������ �ֽʽÿ�.
 ����� ���� ���� ��.
 ������ ���� ���� ��.  ������ �߻��Ǿ �������� ���մϴ�.
 �����ͺ��̽� Ŭ�����ʹ� %s �����Ϸ� �ʱ�ȭ �� ���Դϴ�.
 �����ͺ��̽� Ŭ�����ʹ� ���� �����Ϸ� �ʱ�ȭ �� ���Դϴ�.
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 �⺻ �����ͺ��̽��� %s ���ڵ��� �����Ǿ����ϴ�.
 ����ڰ� ������ ���ڵ� (%s)�� ���� �ý��� �����Ͽ��� ����ϴ� ���ڵ�(%s)��
���� �ٸ��ϴ�. �̷��� �Ǹ� ��� ���ڿ��� ó���ϴ� �Լ����� ��������
����ų ���� �ֽ��ϴ�. �� ������ �ذ��Ϸ���,
%s ���α׷��� �ٽ� �����ϸ鼭 ����ڰ� ������ ���ڵ��� �������� �ʰų�
�ý��� �����ϰ� �´� ���ڵ��� �����Ͻʽÿ�.
 �� �����ͺ��̽� �ý��ۿ��� ��������� ���ϵ��� �� �����ְ� "%s" id��
������ ���Դϴ�. ���� �� ����ڴ� ���� ���μ����� �����ְ� �˴ϴ�.

 %s ���α׷��� "postgres" ���α׷��� �ʿ�� �մϴ�. �׷���, �� ������
"%s" ������ �ִ� ���丮�ȿ� �����ϴ�.
��ġ ���¸� Ȯ���� �ֽʽÿ�.
 "%s" ���α׷��� "postgres" ���α׷��� ã������ �� ������
%s ���α׷��� ������ Ʋ���ϴ�.
��ġ ���¸� Ȯ���� �ֽʽÿ�.
 ���� �ڼ��� ������ ������ "%s --help" �ɼ��� ����Ͻʽÿ�.
 ����:
 �ý����� ���� ��ȣ(signal) �޾���
 ���� ���μ����� ����Ǿ���, ���� �ڵ� %d ���� ���μ����� ����Ǿ���, �˼� ���� ���� %d ���� ���μ����� ����Ǿ���, �ñ׳� %d template1 �����ͺ��̽��� postgres �����ͺ��̽��� ���� �� ... template1 �����ͺ��̽��� template0 �����ͺ��̽��� ���� �� ... "%s" ���丮�� �̵� �� �� ���� "%s" ���� ������ ã�� �� ���� ���� ���丮�� �� �� ����: %s "%s" ���丮�� �� �� ����: %s
 "%s" ���� ������ ���� �� ���� "%s" ���丮�� ���� �� ����: %s
 "%s" �ɹ��� ��ũ�� ���� �� ���� "%s" ���� �Ǵ� ���丮�� ���� �� ����: %s
 "%s" ������ ������ ������ �� ����: %s
 ���� ���μ����� �� �� ����: %s
 ȯ�漳�� ������ ����� �� ... ���ڵ� ��ȯ��Ģ(conversion)���� ����� �� ... %s ���丮 ����� �� ... information schema ����� �� ... ���� ���丮 ����� �� ... �ý��� ����� ����� �� ...  %s/base/1 �ȿ� template1 �����ͺ��̽��� ����� �� ... �̹� �ִ� %s ���丮�� ���� ������ ��ġ�� �� ... ������ ���� �ʱ�ȭ �� ... pg_authid �ʱ�ȭ �� ... "%s" ������ �߸��� ���������Դϴ� �ý��� ��ü�� ���� �ڷ� �Է� �� ... �Ϸ�
 �޸� ����
 max_connections �ʱⰪ�� �����ϴ� �� ... shared_buffers/max_fsm_pages �ʱⰪ�� �����ϴ� �� ... ��й�ȣ ���� �� ... ���尴ü���� ���� ������ ���� �� ...  template1 �����ͺ��̽� vacuum �۾� �� ... 