��    d      <  �   \      �  R   �     �  
   �  -   �  �   +	  �   �	     X
    t
  J   �  5   �  J     6   `  P   �  C   �  :   ,  4   g  B   �  H   �  >   (  9   g  3   �  ?   �  /     -   E  E   s  y   �  (   3  7   \  (   �  3   �  '   �  5     -   O  -   }  /   �  "   �  6   �  �   5  0   �  $     �   :  ~   �  1   E     w  J   �  �   �     �  D   �  -      !   .  4   P  ,   �     �     �     �               9  ;   Q  9   �  �   �  >   X  0  �  u   �  q   >  f   �  &        >     F  &   U  0   |  )   �  #   �  "   �        (   ?     h  !   �  %   �  !   �     �          "      @     a  -   |  2   �  0   �          *     F     Z     v     z  &   �  %   �     �  +   �  !     �  :  W   �       !     <!  4   E!  �   z!  �   "     �"  6  �"  T   $  4   f$  N   �$  8   �$  X   #%  K   |%  4   �%  ;   �%  4   9&  G   n&  @   �&  4   �&  :   ,'  H   g'  '   �'  /   �'  L   (  �   U(  &   �(  5   &)  +   \)  @   �)  *   �)  :   �)  0   /*  0   `*  0   �*  (   �*  >   �*  �   *+  6   �+  *   $,  �   O,  |   �,  @   O-     �-  M   �-  �   �-     �.  =   �.  0   /  $   J/  =   o/  -   �/  '   �/     0  %   0     =0     S0     r0  \   �0  7   �0  �   %1  .   �1  .  �1  �   3  q   �3  b   '4  5   �4     �4     �4  /   �4  8   5  %   L5  &   r5  &   �5     �5  2   �5      6  ,   26  +   _6  %   �6     �6     �6     �6  "   7  %   '7  (   M7  C   v7  3   �7     �7     8     (8     ?8     \8     `8  9   q8  8   �8     �8  1   �8  #   ,9         <       D   :       1   0       8   7   2   Y      /      &   b                        U   W       	   R           ^   V           P   a   ;   d       K          "   ,             Z   %   (   )   A       T      F   \      9      J       N      +             C          5   3       #   '   Q   
                  -   *       $       .              X   c   6   [      @   E   >   !                           =               `       S   H         L   ]   M   I       ?   4                 G       B         O   _    
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

    %s%s%s%spostmaster -D %s%s%s
or
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to template0 ...  could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  invalid binary "%s" loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2005-01-17 19:04+0000
PO-Revision-Date: 2005-01-17 15:19-0500
Last-Translator: Serguei A. Mokhov <mokhov@cs.concordia.ca>
Language-Team: pgsql-ru-general <pgsql-ru-general@postgresql.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=koi8-r
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Russian
X-Poedit-Country: RUSSIAN FEDERATION
 
���� ���������� ������ �� �������, ������������ �������� ���������� ��������� PGDATA.
 
����� ������������ �����:
 
�����:
 
��������� �� �������: <pgsql-bugs@postgresql.org>.
 
�����. �� ������ ������ ��������� ������ ��� ������:

    %s%s%s%spostmaster -D %s%s%s
���
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

 
��������: ������������ �������������� "trust" ��� ��������� �������������.
�� ������ ţ ��������, �������������� pg_hba.conf ��� ��������� ����� -A,
��� ��������� ���������� initdb.
   %s [OPTION]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            ���������������� ������� ��� ������ �
                            ��������� ������� � ��������������� ���������
                            (�������� ��-��������� ������� �� ���������)
   --locale=LOCALE           ���������������� ������� ��� ������ � ��������� �������
   --no-locale               ������������ --locale=C
   --pwfile=FILE             ������� ������ ��� ������ �������������� �� �����
   -?, --help                �������� ��� ������ � �����
   -A, --auth=METHOD          ����� �������������� ��-��������� ��� ��������� ����������
   -E, --encoding=ENCODING  ���������� ��������� ��-��������� ��� ����� ���
   -L DIRECTORY              ��� ����� ������� �����
   -U, --username=NAME       ��� �������������� ���� ������
   -V, --version             �������� ������ � �����
   -W, --pwprompt            ��������� ������ ��� ������ ��������������
   -d, --debug               �������� ����� ���������� ���������
   -n, --noclean             �� ������� ����� ������
   -s, --show                �������� ���������� ���������
  [-D, --pgdata=]DATADIR   ��������������� ��� ����� �������� ��� ������
 %s �������������� ������� PostgreSQL.

 %s: "%s" �� �������� ������ ���������� �������
 %s: �� ������� ������������� ������. ����������, �������� �� ���� ��������.
 %s: ������ ��������� ��� root'��
����������, ������� ��� (�������������������) ������������ (��������,
��������� "su"), ��� ������� ����� ����������� ��������� �������.
 %s: ��� ������� � ���������� "%s": %s
 %s: �� ������� �������� ����� �� ���������� "%s": %s
 %s: �� ������� ������� ���������� "%s": %s
 %s: �� � ��������� ���������� ���������� �������� ������ ������
 %s: �� ������� ��������� ������� "%s": %s
 %s: �� ������� ����� ���������� ��������� ��� ������ "%s"
 %s: �� ������� ������� ���� "%s" ��� ������: %s
 %s: �� ������� ������� ���� "%s" ��� ������: %s
 %s: �� ������� ������� ������ �� ����� "%s": %s
 %s: �� ������� �������� � ���� "%s": %s
 %s: ���������� ������ "%s" �� ������� �� ������� ������������
 %s: ���������� "%s" ����������, �� �� �����.
���� �� ������ ������� ����� ������� ��� ������, ������� ���� ��� 
���������� "%s" ��� ţ ���������� ��� ��������� %s
� ���������� �������� �� "%s".
 %s: ������ ��� �������� ����������� ���������� ������
 %s: ������ ��� �������� ���������� ������
 %s: ���� "%s" �� ����������
��� ��������, ��� � ��� �������� � ���������� ��� �������
������������ ���������� � ����� ������� -L.
 %s: ������� ���� "%s" �� ����������� PostgreSQL %s
��������� ���� ��������� ��� ������� ���������� ���� � ������� ����� -L.
 %s: ��������������� �������� ����� ������ ���� ���������� ��ԣ�
 %s: ��������� ��� ������ "%s"
 %s: ���������� ������� ������ �������������� ��� ��������� �������������� %s
 %s: ���������� ������ �� �������
�� ������ ������� ���������� ��� ������������ ������ ���
��� ���� �������.  ��� ����� ������� � ������� �������� ����� -D
��� ��������� ���������� ��������� PGDATA.
 %s: �� ������� ������
 %s: ������ ������ � ���� ������� �� ����� ����������� ������
 %s: �������� ����������� ���������� ������ "%s"
 %s: �������� ���������� ������ "%s"
 %s: ������� ����� ���������� ��������� ������ (������: "%s")
 %s: �������������� ����� �������������� "%s"
 %s: ��������: �������������� ���������
 ������� ��� �����:  ������� ����� ������ ��������������:  ������ �� ���������.
 ������������� %s � ������ -E.
 ���������� � ������ �������.
 ���������� � ������ 'noclean'.  ������ ������ � ������ ����� ������ ������������� �� �����.
 ������� ��� ������ ����� ��������������� � ������� %s.
 ������� ��� ������ ����� ��������������� �� ���������� ��������:
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 ��������� ���� �� ��������� ����������� � %s.
 ��������� ������� �� ������� (%s) � ��������� ���������
������ (%s) �� ���������.  ��� ����� �������� � �����������
����������� � ��������� �������� ��������� � ���������� �����. 
��� �����������  ������������� %s �, ���� �� ����������
���������, ���� ������� ���������� ���������� ��������� � ������.
 �����, ������������� ���� ������� ��� ������, �����
������������ ������������ "%s". ���� ������������
����� ������ ���� ���������� �������� �������.
 ��������� "postgres" ����� ��� %s, �� ��� �� ������� � 
��� �� ����������, ��� � "%s".
��������� ���� ���������.
 ��������� "postgres" ������� ����� � %s, �� ��
� ��� �� ������� ��� %s.
��������� ���� ���������.
 �������� "%s --help" ��� ����� ��������� ����������.
 �������������:
 ���������� ������
 �������� ������� ���������� � ����� �������� %d �������� ������� ���������� � �������������� �������� %d �������� ������� �����ۣ� �������� %d ����������� template1 � template0 ...  �� ������� �������� ���������� �� "%s" "%s" �� ������ ��� ���������� �� ������� ���������������� ������� ����������: %s �� ������� ������� �������� "%s" �� ������� ������� ������������� ������ "%s" �� ������� �������� � �������� �������: %s
 �������� ���������������� ������ ...  �������� ��������� ...  �������� ���������� %s ...  �������� ���������� %s/%s ...  �������� �������������� ����� ...  �������� ��������� ������������� ...  �������� ���� template1 � %s/base/1 ...  ���������� ��������������� ������� ������ ��� ��������� ������ ...  ����������� ���� �� ������������ ���������� %s ...  ������������� pg_depend ...  ������������� pg_shadow ...  �������� �������� "%s" �������� pg_description ...  ��
 �������� ������
 ���������� �������� ��-��������� ��� max_connections ...  ���������� �������� ��-��������� ��� shared_buffers ...  ��������� ������ ...  ��������� ���������� ��� ���������� �������� ...  ������ ������ � ���� template1 ...  