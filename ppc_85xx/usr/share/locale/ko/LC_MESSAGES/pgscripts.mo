��    �      �  �   L	      `  K   a     �  e   �  
   )  >   4  >   s  =   �  -   �       #   7     [  (   v     �  <   �  9   �  6   3  H   j  E   �  B   �  9   <  C   v  9   �  4   �  =   )  .   g  ;   �  E   �  :     5   S  7   �  9   �  7   �  4   3  L   h  J   �  3      0   4  ;   e  7   �  2   �  2     J   ?  :   �  5   �  G   �  0   C  <   t  0   �  M   �  J   0  G   {  4   �  H   �  E   A  9   �  v   �  <   8  I   u  5   �  4   �  1   *  ;   \  8   �  5   �  6     3   >  4   r  =   �  8   �  8     8   W  9   �     �  /   �  <     #   C  #   g  ?   �  %   �  #   �       3   5  &   i  5   �  E   �  I     5   V  I   �  5   �  E      F   R   4   �   D   �      !  *   1!  8   \!  6   �!  %   �!  (   �!  (   "  8   D"  #   }"      �"     �"  8   �"  4   #  $   P#     u#  ,   �#  ,   �#     �#     $     $  *   5$  8   `$  ,   �$  8   �$  #   �$  G   #%  4   k%     �%  )   �%  7   �%     &  +   -&     Y&     j&     �&     �&     �&     �&  
   �&     �&     '     $'  '   9'  "   a'  2   �'  7   �'     �'  &   �'     (     '(     )(     ,(     .(  L  2(  ^   )     �)  �   �)  	   p*  >   z*  >   �*  =   �*  (   6+     _+  !   v+     �+     �+     �+  <   �+  9   ',  6   a,  <   �,  9   �,  6   -  ;   F-  G   �-  3   �-  3   �-  :   2.  .   m.  ;   �.  3   �.  2   /  1   ?/  6   q/  :   �/  -   �/  .   0  m   @0  @   �0  =   �0  :   -1  E   h1  9   �1  9   �1  5   "2  :   X2  ;   �2  ;   �2  7   3  /   C3  1   s3  >   �3  @   �3  B   %4  =   h4  )   �4  H   �4  H   5  6   b5  \   �5  8   �5  ?   /6  1   o6  6   �6  3   �6  @   7  ;   M7  :   �7  1   �7  3   �7  3   *8  <   ^8  5   �8  8   �8  9   
9  B   D9     �9  \   �9  [   �9  3   L:  )   �:  G   �:  =   �:  5   0;  +   f;  >   �;  1   �;  =   <  9   A<  J   {<  S   �<  J   =  U   e=  ^   �=  \   >  @   w>  P   �>  '   	?  '   1?  4   Y?  8   �?  &   �?  )   �?  (   @  (   A@     j@      �@     �@  <   �@  ;   A     =A     TA  /   kA  6   �A     �A     �A  %   �A  *   B  2   JB  (   }B  2   �B     �B  d   �B  (   XC      �C  '   �C  1   �C     �C  -   D     CD     SD     lD     �D     �D     �D  	   �D     �D     �D     �D  "   E  %   0E  7   VE  5   �E     �E  !   �E     �E     �E     �E      F     F     �             	      @   c   K       D      �              [   i   T       4   $       J   �          �   o                <   9   e       =       �   �   2       �   +   �           �   j   %   r   �   O   W      �   _   |   F   `         :               d       �   V   ;   (   f   �   ]   l       *   k   h              L       /           &   
   �       ~       }   ?   N   w              H   3   )   Q   U   B   ^   #   {   n               R   v      �   S   I       7   X           Y   !   y   �           G       �   b                           '   6          �   1   \   x   �   ,   z            "   g   s   p   >   C   0   a       .   5       q             �       u   A          Z   8       t                      M   P   m          E      -    
By default, a database with the same name as the current user is created.
 
Connection options:
 
If one of -s, -S, -d, -D, -r, -R and ROLENAME is not specified, you will
be prompted interactively.
 
Options:
 
Read the description of the SQL command CLUSTER for details.
 
Read the description of the SQL command REINDEX for details.
 
Read the description of the SQL command VACUUM for details.
 
Report bugs to <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [ROLENAME]
   --help                          show this help, then exit
   --help                       show this help, then exit
   --help                    show this help, then exit
   --version                       output version information, then exit
   --version                    output version information, then exit
   --version                 output version information, then exit
   -D, --no-createdb         role cannot create databases
   -D, --tablespace=TABLESPACE  default tablespace for the database
   -E, --encoding=ENCODING      encoding for the database
   -E, --encrypted           encrypt stored password
   -I, --no-inherit          role does not inherit privileges
   -L, --no-login            role cannot login
   -N, --unencrypted         do not encrypt stored password
   -O, --owner=OWNER            database user to own the new database
   -P, --pwprompt            assign a password to new role
   -R, --no-createrole       role cannot create roles
   -S, --no-superuser        role will not be superuser
   -T, --template=TEMPLATE      template database to copy
   -U, --username=USERNAME      user name to connect as
   -U, --username=USERNAME   user name to connect as
   -U, --username=USERNAME   user name to connect as (not the one to create)
   -U, --username=USERNAME   user name to connect as (not the one to drop)
   -W, --password               prompt for password
   -W, --password            prompt for password
   -W, --password            prompt for password to connect
   -a, --all                       vacuum all databases
   -a, --all                 cluster all databases
   -a, --all                 reindex all databases
   -c, --connection-limit=N  connection limit for role (default: no limit)
   -d, --createdb            role can create new databases
   -d, --dbname=DBNAME             database to vacuum
   -d, --dbname=DBNAME       database from which to remove the language
   -d, --dbname=DBNAME       database to cluster
   -d, --dbname=DBNAME       database to install language in
   -d, --dbname=DBNAME       database to reindex
   -e, --echo                      show the commands being sent to the server
   -e, --echo                   show the commands being sent to the server
   -e, --echo                show the commands being sent to the server
   -f, --full                      do full vacuuming
   -h, --host=HOSTNAME          database server host or socket directory
   -h, --host=HOSTNAME       database server host or socket directory
   -i, --index=INDEX         recreate specific index only
   -i, --inherit             role inherits privileges of roles it is a
                            member of (default)
   -i, --interactive         prompt before deleting anything
   -l, --list                show a list of currently installed languages
   -l, --login               role can login (default)
   -p, --port=PORT              database server port
   -p, --port=PORT           database server port
   -q, --quiet                     don't write any messages
   -q, --quiet                  don't write any messages
   -q, --quiet               don't write any messages
   -r, --createrole          role can create new roles
   -s, --superuser           role will be superuser
   -s, --system              reindex system catalogs
   -t, --table='TABLE[(COLUMNS)]'  vacuum specific table only
   -t, --table=TABLE         cluster specific table only
   -t, --table=TABLE         reindex specific table only
   -v, --verbose                   write a lot of output
   -z, --analyze                   update optimizer hints
 %s (%s/%s)  %s cleans and analyzes a PostgreSQL database.

 %s clusters all previously clustered tables in a database.

 %s creates a PostgreSQL database.

 %s creates a new PostgreSQL role.

 %s installs a procedural language into a PostgreSQL database.

 %s reindexes a PostgreSQL database.

 %s removes a PostgreSQL database.

 %s removes a PostgreSQL role.

 %s removes a procedural language from a database.

 %s: "%s" is not a valid encoding name
 %s: cannot cluster a specific table in all databases
 %s: cannot cluster all databases and a specific one at the same time
 %s: cannot reindex a specific index and system catalogs at the same time
 %s: cannot reindex a specific index in all databases
 %s: cannot reindex a specific table and system catalogs at the same time
 %s: cannot reindex a specific table in all databases
 %s: cannot reindex all databases and a specific one at the same time
 %s: cannot reindex all databases and system catalogs at the same time
 %s: cannot vacuum a specific table in all databases
 %s: cannot vacuum all databases and a specific one at the same time
 %s: clustering database "%s"
 %s: clustering of database "%s" failed: %s %s: clustering of table "%s" in database "%s" failed: %s %s: comment creation failed (database was created): %s %s: could not connect to database %s
 %s: could not connect to database %s: %s %s: could not get current user name: %s
 %s: could not obtain information about current user: %s
 %s: creation of new role failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
 %s: language "%s" is not installed in database "%s"
 %s: language installation failed: %s %s: language removal failed: %s %s: missing required argument database name
 %s: missing required argument language name
 %s: query failed: %s %s: query was: %s
 %s: reindexing database "%s"
 %s: reindexing of database "%s" failed: %s %s: reindexing of index "%s" in database "%s" failed: %s %s: reindexing of system catalogs failed: %s %s: reindexing of table "%s" in database "%s" failed: %s %s: removal of role "%s" failed: %s %s: still %s functions declared in language "%s"; language not removed
 %s: too many command-line arguments (first is "%s")
 %s: vacuuming database "%s"
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? Database "%s" will be permanently removed.
 Enter it again:  Enter name of role to add:  Enter name of role to drop:  Enter password for new role:  Name Password encryption failed.
 Password:  Passwords didn't match.
 Please answer "%s" or "%s".
 Procedural Languages Role "%s" will be permanently removed.
 Shall the new role be a superuser? Shall the new role be allowed to create databases? Shall the new role be allowed to create more new roles? Trusted? Try "%s --help" for more information.
 Usage:
 n no y yes Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2007-02-07 00:40+0900
PO-Revision-Date: 2004-12-16 02:11+0900
Last-Translator: Ioseph Kim <ioseph@uri.sarang.net>
Language-Team: KOREAN <pgsql-kr@postgresql.or.kr>
MIME-Version: 1.0
Content-Type: text/plain; charset=euc-kr
Content-Transfer-Encoding: 8bit
 
�ʱⰪ����, DB�̸��� �������� ������, ���� ������� �̸��� ���� �����ͺ��̽��� ��������ϴ�.
 
���� �ɼǵ�:
 
-s, -S, -d, -D, -r, -R, ���̸� ���ڵ� �� ��� �ϳ��� ������
���α׷��� �� ���� ���� ������Ʈ�� ����, ��ȭ������ ó���� ���Դϴ�.
 
�ɼǵ�:
 
���� �ڼ��� ������ CLUSTER SQL ���ɾ� �������� �����Ͻʽÿ�.
 
���� �ڼ��� ������ REINDEX SQL ���ɾ� �������� �����Ͻʽÿ�.
 
���� �ڼ��� ������ VACUUM SQL ���ɾ� �������� �����Ͻʽÿ�.
 
��������: <pgsql-bugs@postgresql.org>.
   %s [�ɼ�]... DB�̸�
   %s [�ɼ�]... ����̸� [DB�̸�]
   %s [�ɼ�]... [DB�̸�]
   %s [�ɼ�]... [DB�̸�] [����]
   %s [�ɼ�]... [���̸�]
   --help                          �� ������ �����ְ� ��ħ
   --help                       �� ������ �����ְ� ��ħ
   --help                    �� ������ �����ְ� ��ħ
   --version                       ���� ������ �����ְ� ��ħ
   --version                    ���� ������ �����ְ� ��ħ
   --version                 ���� ������ �����ְ� ��ħ
   -D, --no-createdb         �� �����ͺ��̽��� ���� �� ����
   -D, --tablespace=TABLESPACE  �����ͺ��̽��� ���� �⺻ ���̺������̽�
   -E, --encoding=ENCODING      �����ͺ��̽� ���ڵ�
   -E, --encrypted           ��ȣȭ�� ��й�ȣ ���
   -I, --no-inherit          �� ���� ������ ����� �� ����
   -L, --no-login            �α��� �� �� ����
   -N, --unencrypted         ��ȣȭ ���� ���� ��й�ȣ ���
   -O, --owner=OWNER            �����ͺ��̽� ������
   -P, --pwprompt            �� ���� ��й�ȣ ����
   -R, --no-createrole       �� ���� ���� �� ����
   -S, --no-superuser        �Ϲ� ����� �������� ����
   -T, --template=TEMPLATE      ������ ���ø� �����ͺ��̽�
   -U, --username=USERNAME      ������ �����
   -U, --username=USERNAME   ������ ������̸�
   -U, --username=USERNAME   ������ ������ �����
                            (����ڸ���� �۾��� �� �����)
   -U, --username=USERNAME   �� �۾��� ������ DB�� ������ �����
   -W, --password               ��й�ȣ �Է��� ���� ������Ʈ
   -W, --password            ��й�ȣ �Է��� ���� ������Ʈ
   -W, --password            �����۾��� �ʿ��� ��й�ȣ �Է� ������Ʈ
   -a, --all                       ��� �����ͺ��̽� û��
   -a, --all                 ��� �����ͺ��̽��� �������
   -a, --all                 ��� �����ͺ��̽� �����
   -c, --connection-limit=N  ���� ���� �� (�ʱⰪ: ������)
   -d, --createdb            �� �����ͺ��̽��� ���� �� ����
   -d, --dbname=DBNAME             DBNAME �����ͺ��̽� û��
   -d, --dbname=DBNAME       �� ������ �����ͺ��̽�
   -d, --dbname=DBNAME       Ŭ������ �۾��� DB
   -d, --dbname=DBNAME       �� ��ġ�� DB�̸�
   -d, --dbname=DBNAME       ������ �����ͺ��̽��� ����� �۾�
   -e, --echo                      ������ ������ ���ɵ��� ������
   -e, --echo                   ������ ������ �۾� ���ɵ��� ������
   -e, --echo                ������ ������ �۾� ������ ������
   -f, --full                      ��û��
   -h, --host=HOSTNAME          �����ͺ��̽� ���� ȣ��Ʈ�� ���� ���丮
   -h, --host=HOSTNAME       �����ͺ��̽� ���� ȣ��Ʈ �Ǵ� ���� ���丮
   -i, --index=INDEX         ������ �ε����� �ٽ� ����
   -i, --inherit             ���� ������ ����� �� ����
                            (�ʱⰪ)
   -i, --interactive         ����� ���� �� �� �� ���
   -l, --list                ���� ��ġ �Ǿ��ִ� ������ ������
   -l, --login               �α��� ��� (�ʱⰪ)
   -p, --port=PORT              �����ͺ��̽� ���� ��Ʈ
   -p, --port=PORT           �����ͺ��̽� ���� ��Ʈ
   -q, --quiet                     ��� �޽����� �������� ����
   -q, --quiet                  ��� �޽����� ������ ����
   -q, --quiet               ��� �޽����� �������� ����
   -r, --createrole          �� ���� ���� �� ����
   -s, --superuser           �������� �������� ����
   -s, --system              �ý��� īŻ�α� �����
   -t, --table='TABLE[(COLUMNS)]'  ������ Ư�� ���̺��� û��
   -t, --table=TABLE         ������ ���̺��� Ŭ������
   -t, --table=TABLE         ������ ���̺��� ����� �۾�
   -v, --verbose                   �۾������� �ڼ��� ���
   -z, --analyze                   ��������ȭ�� ��Ʈ �ڷḦ ������
 %s (%s/%s)  %s ���α׷��� PostgreSQL �����ͺ��̽� �ڷ� ���� ��
���� ����ȭ���� ���� �ڷḦ �����մϴ�.

 %s ���α׷��� DB �ȿ��� ������ Ŭ�����͵� ��� ���̺��� ã��
�ٽ� Ŭ������ �۾��� �մϴ�.

 %s ���α׷��� PostgreSQL �����ͺ��̽��� ����ϴ�.

 %s ���α׷��� PostgreSQL ���� ����ϴ�.

 %s ���α׷��� PostgreSQL �����ͺ��̽��� ���ν���� �� ��ġ�մϴ�.

 %s ���α׷��� PostgreSQL �����ͺ��̽� ����� �۾��� �մϴ�.

 %s ���α׷��� PostgreSQL �����ͺ��̽��� �����մϴ�.

 %s ���α׷��� PostgreSQL ���� �����մϴ�.

 %s ���α׷��� �����ͺ��̽����� ���ν���� �� �����մϴ�.

 %s: "%s" ���ڵ��� ��� ������ ���ڵ� �̸��� �ƴ�
 %s: ��� DB�� ������� Ư�� ���̺��� Ŭ�������� �� �����ϴ�.
 %s: ��� DB �۾��� Ư�� DB �۾��� ���ÿ� �� �� �����ϴ�.
 %s: Ư�� �ε����� �ý��� īŻ�α� ����� �۾��� ���ÿ� ������ �� �����ϴ�
 %s: ��� �����ͺ��̽� ����� �۾����� Ư�� �ε��� ����� �۾��� ������ �� �����ϴ�
 %s: Ư�� ���̺��� �ý��� īŻ�α� ����� �۾��� ���ÿ� ������ �� �����ϴ�
 %s: ��� �����ͺ��̽� ����� �۾����� Ư�� ���̺��� ����� �۾��� ������ �� �����ϴ�
 %s: ��� �����ͺ��̽� ����� �۾��� Ư�� �����ͺ��̽� ����� �۾��� ���ÿ� ������ �� �����ϴ�
 %s: ��� �����ͺ��̽� ����� �۾��� �ý��� īŻ�α� ����� �۾��� ���ÿ� ������ �� �����ϴ�
 %s: ��� �����ͺ��̽��� ������� Ư�� ���̺��� û���� ���� ����
 %s: -a �ɼ��� ���� ���� �� �����ͺ��̽��� ������� �۾��� ������ �� �����ϴ�.
 %s: "%s" �����ͺ��̽� Ŭ������ �۾� ��
 %s: "%s" �����ͺ��̽� Ŭ������ ����: %s %s: "%s" ���̺�(�ش�DB: "%s") Ŭ������ �۾� ����: %s %s: �ڸ�Ʈ �߰��ϱ� ���� (�����ͺ��̽��� ���������): %s %s: %s �����ͺ��̽��� ���� �� �� ����
 %s: %s �����ͺ��̽��� ���� �� �� ����: %s %s: ���� ����� �̸��� ���� �� ����: %s
 %s: ���� ����� ������ ���� �� ����: %s
 %s: �� �� ����� ����: %s %s: �����ͺ��̽� ����� ����: %s %s: �����ͺ��̽� ���� ����: %s %s: "%s" ���� �̹� "%s" �����ͺ��̽��� ��ġ�Ǿ� �ֽ��ϴ�.
 %s: "%s" ���� "%s" �����ͺ��̽��� ��ġ �Ǿ����� �ʽ��ϴ�
 %s: ��� ��ġ ����: %s %s: ��� ���� ����: %s %s: �ʼ� �׸��� �����ͺ��̽� �̸��� �������ϴ�
 %s: �ʼ� �׸���, ��� �̸��� ������ ���ڰ� �������ϴ�
 %s: ���� ����: %s %s: ���� ����: %s
 %s: "%s" �����ͺ��̽� ����� �۾� ��
 %s: "%s" �����ͺ��̽� ����� �۾� ����: %s %s: "%s" �ε���(�ش�DB: "%s") ����� �۾� ����: %s %s: �ý��� īŻ�α� ����� �۾� ����: %s %s: "%s" ���̺�(�ش�DB: "%s") ����� �۾� ����: %s %s: "%s" �� ���� ����: %s %s: ���� %s���� �Լ��� "%s" ��� ������� �ۼ��Ǿ� ���ǰ� �ֽ��ϴ�; �� ���� ������ �� �����ϴ�.
 %s: �ʹ� ���� ������ ���ڵ� (���� "%s")
 %s: "%s" �����ͺ��̽��� û�� ��
 %s: "%s" �����ͺ��̽� û���ϱ� ����: %s %s: "%s" ���̺� (�ش� DB: "%s") û���ϱ� ����: %s ���� ��� �ұ��? (y/n)  "%s" �����ͺ��̽��� ������ ���� �� ���Դϴ�.
 ��й�ȣ Ȯ��:  �߰��� �� ��(role)�̸�:  ������ �� �̸��� �Է��Ͻʽÿ�:  �� ���� ��й�ȣ:  �̸� ��й�ȣ ��ȣȭ ����.
 ��й�ȣ: ��й�ȣ�� ���� Ʋ��.
 "%s" �Ǵ� "%s" �� ����մϴ�.
 ���ν���� ���� "%s" ���� ������ ������ ���Դϴ�.
 �� ���� �������� �������� �����ұ��? �� �� �ѿ��� �����ͺ��̽��� ���� �� �ִ� ������ �ٱ��? �� �� �ѿ��� �� �ٸ� ���� ���� �� �ִ� ������ �ٱ��? �ŷڵ�? ���� �ڼ��� ������ "%s --help"
 ����:
 n �ƴϿ� y �� 