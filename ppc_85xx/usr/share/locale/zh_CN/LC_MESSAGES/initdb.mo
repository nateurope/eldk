��    a      $  �   ,      8  R   9     �  
   �  -   �  �   �  �   o	     
    ,
  J   L  5   �  J   �  6     P   O  C   �  :   �  4     B   T  H   �  >   �  9     3   Y  ?   �  /   �  -   �  E   +  y   q  (   �  7     (   L  3   u  '   �  5   �  -     -   5  /   c  "   �  6   �  �   �  0   �  $   �  �   �  ~   ~  1   �     /  J   M  �   �     `  D   s  -   �  !   �  4     ,   =     j     �     �     �     �     �  ;   	  9   E  �     >     0  O  u   �  q   �  f   h  &   �     �     �  &     0   4  )   e  #   �  "   �  (   �  !   �  %   !  !   G     i     �     �      �     �  -   �  2   &  0   Y     �     �     �     �     �  &   �  %        >  +   T  !   �  S  �  -   �     $      6   (   >   �   g   j   �      X!  �   r!  4   Z"  .   �"  ;   �"  1   �"  3   ,#  3   `#  +   �#  -   �#  3   �#  9   "$  /   \$  )   �$  )   �$  /   �$  $   %  &   5%  &   \%  [   �%     �%  !   �%     &     7&     W&  &   r&  $   �&  "   �&  !   �&     '  +   '  y   H'     �'     �'  P   �'  Q   C(     �(     �(  3   �(  b   )     i)  )   w)     �)     �)  #   �)     �)     *     (*     5*     L*     Y*     q*  '   �*  !   �*  |   �*  %   L+  �   r+  G   %,  G   m,  ?   �,  !   �,  
   -  	   "-     ,-     F-     `-      u-     �-     �-     �-     �-     �-     �-     .     .     2.     D.  )   V.     �.     �.     �.     �.     �.     �.  	   /  )   /  ,   9/     f/     t/     �/            ?   U      W          V   &           
   R       Y   =   C       F   .   Q      \   <   ,   "      2   K               M      	             [   6   )       H                        $   `   :       G      ^      L              -      ]   7           S   /           3       (            5              a   D       X   +              9   P   #   E   >   N           A   T   J      %   8   ;           B   _                  @   Z   I                  O   *       1   4   0   !      '    
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to template0 ...  could not change directory to "%s" could not identify current directory: %s could not read symbolic link "%s" could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.0
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-12-02 09:43+0000
PO-Revision-Date: 2003-09-15 13:48:19+0800
Last-Translator: Bao Wei <weibao@qmail.zhengmai.net.cn>
Language-Team: Weiping He <laser@zhengmai.com.cn>
MIME-Version: 1.0
Content-Type: text/plain; charset=GB2312
Content-Transfer-Encoding: 8bit
 
���û��ָ������Ŀ¼, ��ʹ�û������� PGDATA
 
����ͨʹ��ѡ��:
 
ѡ��:
 
��������� <pgql-bugs@postgresql.org>.
 
�ɹ�. �����ڿ���������������������ݿ������:

    %s%s%s%spostmaster -D %s%s%s
����
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

 
����: Ϊ�������������� "trust" ��֤.
�����ͨ���༭ pg_hba.conf ���Ļ�����
������ initdb ʱʹ�� -A ѡ��.
   %s [ѡ��]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            ��ʼ�����ݿ�طֱ�ָ��
                            locale (Ĭ��ʹ�û�����
                            ��)
   --locale=LOCALE           ��ʼ�����ݿ�ص� locale
   --no-locale               ��ͬ�� --locale=C
   --pwfile=�ļ���           �����µĳ����û����ļ���ȡ����
   -?, --help                ��ʾ�˰���, Ȼ���˳�
   -A, --auth=METHOD         �������ӵ�Ĭ����֤����
   -E, --encoding=ENCODING   Ϊ�����ݿ�����Ĭ�ϱ���
   -L DIRECTORY              �����ļ���λ��
   -U, --username=NAME       ���ݿⳬ���û���
   -V, --version             ����汾��Ϣ, Ȼ���˳�
   -W, --pwprompt            �����µĳ����û���ʾ�������
   -d, --debug               ���������ĳ�����Ϣ
   -n, --noclean             ����������
   -s, --show                ��ʾ�ڲ�����
   -D, --pgdata=DATADIR      ��ǰ���ݿ�ص�λ��
 %s ��ʼ��һ�� PostgreSQL ���ݿ��.

 %s: "%s" ����һ����Ч�ķ�������������
 %s: �����ļ�û������. �뱨���������.
 %s: �޷��� root �û�����
���Է��������������ߵ��û� (����Ȩ) ����
��½ (ʹ��, e.g., "su").
 %s: �޷�����Ŀ¼ "%s": %s
 %s: �޷��ı�Ŀ¼ "%s" ��Ȩ��: %s
 %s: �޷�����Ŀ¼ "%s": %s
 %s: �޷�ȷ����Ч�Ķ̰汾�ַ���
 %s: �޷�ִ������ "%s": %s
 %s: �޷�Ϊ locale "%s" �ҵ����ʵı���
 %s: Ϊ�˶�ȡ, �޷����ļ� "%s": %s
 %s: Ϊ��д, �޷����ļ� "%s": %s
 %s: �޷����ļ� "%s" ��ȡ����: %s
 %s: �޷�д�ļ� "%s": %s
 %s: ���û���Ҫ�������ݿ�Ŀ¼ "%s" ����ɾ��
 %s: Ŀ¼ "%s" �Ѵ���, �����ǿյ�
������봴��һ���µ����ݿ�ϵͳ, ��ɾ�������
Ŀ¼ "%s" �������д������� %s
������ "%s".
 %s: ɾ������Ŀ¼����ʧ��
 %s: ɾ������Ŀ¼ʧ��
 %s: �ļ� "%s" ������
����ζ�����İ�װ�����˴����
ʹ�� -L ѡ��ָ���˴����·��.
 %s: �����ļ� "%s" ������ PostgreSQL %s
�����İ�װ��ʹ�� -L ѡ��ָ����ȷ��·��.
 %s: �����ļ�λ�ñ���Ϊ����·��
 %s: ��Ч�� locale ���� "%s"
 %s: Ϊ������ %s ��֤, ����ҪΪ�����û�ָ��һ������
 %s: û��ָ������Ŀ¼
������ȷ�ϴ����ݿ�ϵͳ����������Ŀ¼
����. ʹ�� -D ѡ�����
�������� PGDATA.
 %s: �ڴ����
 %s: ������ʾ�Ϳ����ļ����Բ���ͬʱ��ָ��
 %s: ɾ������Ŀ¼ "%s" ������
 %s: ɾ������Ŀ¼ "%s"
 %s: �����в���̫�� (��һ���� "%s")
 %s: δ֪��֤���� "%s".
 %s: ����: ���벻ƥ��
 ������һ��:  �����µĳ����û�����:  ���ƥ��.
 �� -E ѡ���������� %s.
 �����ڳ���ģʽ��. 
 ������ noclean ģʽ��. ���󽫲�������.
 ���ݿ�ؽ����� locale %s ��ʼ��.
 ���ݿ�ؽ�����һ�� locales ��ʼ��
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Ĭ�ϵ����ݿ�����Ѿ���Ӧ������Ϊ %s.
 ��ѡ��ı��� (%s) ��ѡ��� locale ʹ�õı��� (%s) �����Բ�ƥ���.
���������´�����ͬ�ַ����ĺ�����������.
Ҫ�޸�������, �������� %s ���Ҳ�Ҫ��ȷָ������, ��������һ��ƥ��
����.

 ���ڴ����ݿ�ϵͳ���ļ�����Ϊ�û� "%s".
���û�Ҳ����Ϊ���������̵�����.
 %s ��Ҫ���� "postgres", ������ͬһ��Ŀ¼ "%s" ��û�ҵ�.

������İ�װ.
 %s �ҵ����� "postgres", ���ǺͰ汾 "%s" ��һ��.

������İ�װ.
 ���� "%s --help" ��ȡ�������Ϣ.
 ʹ�÷���:
 �����ź�
 �ӽ������˳�, �˳���Ϊ %d �ӽ������˳�, δ֪״̬ %d �ӽ��̱��ź� %d ��ֹ ���� template1 �� template0 ...  �޷�����Ŀ¼ "%s" �޷�ȷ�ϵ�ǰĿ¼: %s �޷���ȡ�������� "%s" �޷�д���ӽ���: %s
 ���������ļ� ...  �����ַ���ת�� ...  ����Ŀ¼ %s ...  ����Ŀ¼ %s/%s ...  ������Ϣģʽ ...  ����ϵͳ��ͼ ...  �� %s/base/1 �д��� template1 ���ݿ� ...  ����������ϵͳ���д�С ...  �޸��Ѵ���Ŀ¼ %s ��Ȩ�� ...  ��ʼ�� pg_depend ...  ��ʼ�� pg_shadow ...  ���� pg_description ...  �ɹ�
 �ڴ����
 ѡ��Ĭ����������� (max_connections) ...  ѡ��Ĭ�Ϲ�����������С (shared_buffers) ...  ���ÿ��� ...  ���ڽ���������Ȩ�� ...  �������ݿ� template1 ...  