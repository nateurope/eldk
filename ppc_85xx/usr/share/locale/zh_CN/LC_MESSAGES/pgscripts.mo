��    {      �  �   �      h
  K   i
     �
  ^   �
  
   *  >   5  =   t  -   �     �  #   �       (   8     a  <   ~  9   �  6   �  H   ,  E   u  B   �  6   �  9   5  C   o  9   �  4   �  H   "  :   k  E   �  :   �  9   '  7   a  4   �  L   �  J     3   f  0   �  ;   �  3     7   ;  2   s  :   �  5   �  G     0   _  <   �  M   �  J     G   f  4   �  H   �  E   ,  <   r  6   �  I   �  4   0  1   e  ;   �  8   �  5     =   B  8   �  8   �  9   �  /   ,  <   \  #   �  #   �  ?   �  #   !     E  3   e  &   �  5   �  E   �  4   <  D   q     �  *   �  8   �  6   8  %   o  (   �  (   �  8   �  #          D     e  8   �  4   �  $   �       ,   8  ,   e     �     �  #   �  G   �  4   &     [  &   z     �  )   �  7   �        +   5     a     r     �     �     �  
   �     �     �  9      >   A   P   �      �   &   �      !  '   	!     1!     3!     6!     8!  P  <!  +   �"     �"  F   �"     #  9   #  8   N#  )   �#     �#  #   �#     �#  #   	$     -$  ;   F$  8   �$  5   �$  9   �$  6   +%  3   b%  7   �%  5   �%  0   &  *   5&  )   `&  @   �&  +   �&  2   �&  -   *'  2   X'  ,   �'  )   �'  :   �'  :   (  ,   X(  )   �(  -   �(  5   �(  3   )  -   G)  3   u)  4   �)  /   �)  1   *  /   @*  9   p*  6   �*  3   �*  +   +  H   A+  E   �+  5   �+  4   ,  9   ;,  2   u,  /   �,  /   �,  ,   -  )   5-  7   _-  4   �-  /   �-  1   �-  (   ..  .   W.      �.  "   �.  *   �.      �.     /      5/      V/  -   w/  /   �/  -   �/  /   0     30     O0  2   l0  #   �0     �0     �0     �0     1     61     M1     d1  ,   {1  ,   �1     �1     �1     �1     2     72     H2     X2  /   s2  %   �2     �2     �2     �2     3  2   ,3     _3     p3     �3     �3     �3     �3     �3     �3     �3     �3     �3     4  F   54  	   |4  !   �4  
   �4     �4     �4     �4     �4     �4            r   X   j              M   A   K   V   {           "   (   ?       )       =   O   T   ,          v      U               >   &   J   !           g             p   	       7          [           Y   x       Z   i      ;   /   a       E           B   q   2              D   c   P   t   z       '       w   5       R   4   #   1      n   N   :   y   Q   $   .                 u               3       <          o   W                +   S   G   L   %      ^   ]   9          b   6   s   f   I                   m   _      \   `          -   l           0   h           k   H   F       *       
   C      @   e         d   8           
By default, a database with the same name as the current user is created.
 
Connection options:
 
If one of -a, -A, -d, -D, and USERNAME is not specified, you will
be prompted interactively.
 
Options:
 
Read the description of the SQL command CLUSTER for details.
 
Read the description of the SQL command VACUUM for details.
 
Report bugs to <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [USERNAME]
   --help                          show this help, then exit
   --help                       show this help, then exit
   --help                    show this help, then exit
   --version                       output version information, then exit
   --version                    output version information, then exit
   --version                 output version information, then exit
   -A, --no-adduser          user cannot add new users
   -D, --no-createdb         user cannot create databases
   -D, --tablespace=TABLESPACE  default tablespace for the database
   -E, --encoding=ENCODING      encoding for the database
   -E, --encrypted           encrypt stored password
   -L, --pglib=DIRECTORY     find language interpreter file in DIRECTORY
   -N, --unencrypted         do no encrypt stored password
   -O, --owner=OWNER            database user to own the new database
   -P, --pwprompt            assign a password to new user
   -T, --template=TEMPLATE      template database to copy
   -U, --username=USERNAME      user name to connect as
   -U, --username=USERNAME   user name to connect as
   -U, --username=USERNAME   user name to connect as (not the one to create)
   -U, --username=USERNAME   user name to connect as (not the one to drop)
   -W, --password               prompt for password
   -W, --password            prompt for password
   -W, --password            prompt for password to connect
   -a, --adduser             user can add new users
   -a, --all                       vacuum all databases
   -a, --all                 cluster all databases
   -d, --createdb            user can create new databases
   -d, --dbname=DBNAME             database to vacuum
   -d, --dbname=DBNAME       database from which to remove the language
   -d, --dbname=DBNAME       database to cluster
   -d, --dbname=DBNAME       database to install language in
   -e, --echo                      show the commands being sent to the server
   -e, --echo                   show the commands being sent to the server
   -e, --echo                show the commands being sent to the server
   -f, --full                      do full vacuuming
   -h, --host=HOSTNAME          database server host or socket directory
   -h, --host=HOSTNAME       database server host or socket directory
   -i, --interactive         prompt before deleting anything
   -i, --sysid=SYSID         select sysid for new user
   -l, --list                show a list of currently installed languages
   -p, --port=PORT              database server port
   -p, --port=PORT           database server port
   -q, --quiet                     don't write any messages
   -q, --quiet                  don't write any messages
   -q, --quiet               don't write any messages
   -t, --table='TABLE[(COLUMNS)]'  vacuum specific table only
   -t, --table=TABLE         cluster specific table only
   -v, --verbose                   write a lot of output
   -z, --analyze                   update optimizer hints
 %s cleans and analyzes a PostgreSQL database.

 %s clusters all previously clustered tables in a database.

 %s creates a PostgreSQL database.

 %s creates a new PostgreSQL user.

 %s installs a procedural language into a PostgreSQL database.

 %s removes a PostgreSQL database.

 %s removes a PostgreSQL user.

 %s removes a procedural language from a database.

 %s: "%s" is not a valid encoding name
 %s: cannot cluster a specific table in all databases
 %s: cannot cluster all databases and a specific one at the same time
 %s: cannot vacuum a specific table in all databases
 %s: cannot vacuum all databases and a specific one at the same time
 %s: clustering database "%s"
 %s: clustering of database "%s" failed: %s %s: clustering of table "%s" in database "%s" failed: %s %s: comment creation failed (database was created): %s %s: could not connect to database %s
 %s: could not connect to database %s: %s %s: could not get current user name: %s
 %s: could not obtain information about current user: %s
 %s: creation of new user failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
 %s: language "%s" is not installed in database "%s"
 %s: language installation failed: %s %s: language removal failed: %s %s: missing required argument database name
 %s: missing required argument language name
 %s: query failed: %s %s: query was: %s
 %s: removal of user "%s" failed: %s %s: still %s functions declared in language "%s"; language not removed
 %s: too many command-line arguments (first is "%s")
 %s: unsupported language "%s"
 %s: user ID must be a positive number
 %s: vacuuming database "%s"
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? (y/n)  Database "%s" will be permanently removed.
 Enter it again:  Enter name of user to add:  Enter name of user to drop:  Enter password for new user:  Name Password:  Passwords didn't match.
 Procedural Languages Shall the new user be allowed to create databases? (y/n)  Shall the new user be allowed to create more new users? (y/n)  Supported languages are plpgsql, pltcl, pltclu, plperl, plperlu, and plpythonu.
 Trusted? Try "%s --help" for more information.
 Usage:
 User "%s" will be permanently removed.
 n no y yes Project-Id-Version: PostgreSQL 7.4
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-12-14 09:49+0000
PO-Revision-Date: 2003-09-15 21:03+0000
Last-Translator: Bao Wei <weibao@qmail.zhengmai.net.cn>
Language-Team: Weiping He <laser@zhengmai.com.cn>
MIME-Version: 1.0
Content-Type: text/plain; charset=GB2312
Content-Transfer-Encoding: 8bit
 
Ĭ�������, �Ե�ǰ�û����û����������ݿ�.
 
����ѡ��:
 
��� -a, -A, -d, -D, �� USERNAME һ����û��ָ��,��ʹ�ý���ʽ��ʾ
��.
 
ѡ��:
 
�Ķ� SQL ���� CLUSTER ��������Ϣ, �Ա��ø���ϸ����Ϣ.
 
�Ķ� SQL ���� VACUUM ��������Ϣ, �Ա��ø���ϸ����Ϣ.
 
���汨���� <pgsql-bugs@postgresql.org>.
   %s [ѡ��]... ���ݿ���
   %s [ѡ��]... �������� [���ݿ���]
   %s [ѡ��]... [���ݿ���]
   %s [ѡ��]... [���ݿ�����] [����]
   %s [ѡ��]... [�û���]
   --help                          ��ʾ�˰�����Ϣ, Ȼ���˳�
   --help                       ��ʾ�˰�����Ϣ, Ȼ���˳�
   --help                    ��ʾ�˰�����Ϣ, Ȼ���˳�
   --versoin                       ����汾��Ϣ, Ȼ���˳�
   --versoin                    ����汾��Ϣ, Ȼ���˳�
   --version                 ����汾��Ϣ, Ȼ���˳�
   -A, --no-adduser          ���û������Դ����������û�
   -D, --no-createdb         ���û������Դ��������ݿ�
   -D, --tablespace=TABLESPACE  ���ݿ�Ĭ�ϱ��ռ�
   -E, --encoding=ENCODING      ���ݿ����
   -E, --encrypted           ������ܴ洢
   -L, --pglib=DIRECTORY     �� DIRECTORY Ŀ¼�в������Է����ļ�
   -N, --unencrypted         ������ܴ洢
   -O, --owner=OWNER            �����ݿ�������û�
   -P, --pwprompt            �����û�ָ������
   -T, --template=TEMPLATE      Ҫ���������ݿ�ģ��
   -U, --username=USERNAME      ���ӵ��û���
   -U, --username=USERNAME   ���ӵ��û���
   -U, --username=USERNAME   �����û� (����Ҫ�������û���)
   -U, --username=USERNAME   �����û� (����Ҫɾ�����û���)
   -W, --password               ��ʾ�������
   -W, --password            ��ʾ�������
   -W, --password            ������ʾ��������
   -a, --adduser             ���û����Դ����������û�
   -a, --all                       �������е����ݿ�
   -a, --all                 ���������ݿ⽨��
   -d, --createdb            ���û����Դ��������ݿ�
   -d, --dbname=DBNAME             �������ݿ� DBNAME
   -d, --dbname=DBNAME       Ҫɾ�����Ե����ݿ�
   -d, --dbname=DBNAME       �����ݿ� DBNAME ����
   -d, --dbname=DBNAME       Ҫ��װ���Ե����ݿ�
   -e, --echo                      ��ʾ���͵�����˵�����
   -e, --echo                   ��ʾ���͵�����˵�����
   -e, --echo                ��ʾ���͵�����˵�����
   -f, --full                      ��ȫ����
   -h, --host=HOSTNAME          ���ݿ���������ڻ��������������׽���Ŀ¼
   -h, --host=HOSTNAM        ���ݿ���������ڻ��������������׽���Ŀ¼
   -i, --interactive         ɾ���κζ���֮ǰ������ʾ
   -i, --sysid=SYSID         ѡ��һ�� sysid �����û�
   -l, --list                ��ʾ��ǰ�Ѿ���װ�˵������б�
   -p, --port=PORT              ���ݿ�������˿ں�
   -p, --port=PORT           ���ݿ�������˿ں�
   -q, --quiet                     ��д�κ���Ϣ
   -q, --quiet                  ��д�κ���Ϣ
   -q, --quiet               ��д�κ���Ϣ
   -t, --table='TABLE[(COLUMNS)]'  ֻ����ָ���ı� TABLE
   -t, --table=TABLE         ֻ��ָ���ı� TABLE ����
   -v, --verbose                   д���������
   -z, --anaylze                   �����Ż�����Ϣ
 %s ���������Ż�һ�� PostgreSQL ���ݿ�.

 %s ��һ�����ݿ�����ǰ�Ѿ������صı����н���.

 %s ����һ�� PostgreSQL ���ݿ�.

 %s ����һ���µ� PostgreSQL �û�.

 %s ��װһ���������Խ� PostgreSQL ���ݿ�.

 %s ɾ��һ�� PostgreSQL ���ݿ�.

 %s ɾ��һ�� PostgreSQL �û�.

 %s �����ݿ���ɾ��һ����������.

 %s: "%s" ����һ����Ч�ı�������
 %s: �޷����������ݿ��ж�һ��ָ���ı����н���
 %s: �޷����������ݿ��һ��ָ�������ݿ�ͬʱ����
 %s: �޷����������ݿ��ж�һ��ָ���ı���������
 %s: �޷����������ݿ��һ��ָ�������ݿ�ͬʱ����
 %s: �����ݿ� "%s" ���н���
 %s: ���ݿ� "%s" ����ʧ��: %s %1$s: �����ݿ� "%3$s" �еı� "%2$s" ����ʧ��: %4$s %s: ����ע��ʧ�� (���ݿ��Ѵ���): %s %s: �޷����ӵ����ݿ� %s
 %s: �޷����ӵ����ݿ� %s: %s %s: �޷���ȡ��ǰ�û�����: %s
 %s: �޷���õ�ǰ�û�����Ϣ: %s
 %s: �������û�ʧ��: %s %s: �������ݿ�ʧ��: %s %s: ���ݿ�ɾ��ʧ��: %s %1$s: ���ݿ� "%3$s" ���Ѿ���װ������ "%2$s"
 %1$s: ���ݿ� "%3$s" ��, û�а�װ���� "%2$s"
 %s: ���԰�װʧ��: %s %s: ����ɾ��ʧ��: %s %s: ȱ����Ҫ�����ݿ�������
 %s: ȱ��Ҫ����������Ʋ���
 %s: ��ѯʧ��: %s %s: ��ѯ��: %s
 %s: ɾ���û� "%s" ʧ��: %s %s: ���� %s �������� "%s" ������; ����δ��ɾ��
 %s: ̫��������в��� (��һ���� "%s")
 %s: ��֧������ "%s"
 %s: �û� ID ����Ϊһ������
 %s: �������ݿ� "%s"
 %s: ���ݿ� "%s" ����ʧ��: %s %1$s: �����ݿ� "%3$s" �еı� "%2$s" ����ʧ��: %4$s ��ȷ����? (y/n)  ���ݿ� "%s" �������õ�ɾ��.
 ������һ��:  ����Ҫ���ӵ��û���:  ����Ҫɾ�����û���:  �������û��Ŀ���:  ���� ����:  ���ƥ��.
 �������� ���û������������ݿ���? (y/n)  ���û����������û���? (y/n)  ��֧�ֵ������� plpgsql, pltcl, pltclu, plperl, plperlu, �� plpythonu.
 �Ƿ�����? ���� "%s --help" ��ȡ�������Ϣ.
 ʹ�÷���:
 �û� "%s" ��������ɾ��.
 n no y yes 