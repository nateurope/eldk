��    {      �  �   �      h
  K   i
     �
  ^   �
  
   *  >   5  =   t  -   �     �  #   �       (   8     a  <   ~  9   �  6   �  H   ,  E   u  B   �  6   �  9   5  C   o  9   �  4   �  H   "  ;   k  E   �  :   �  9   (  7   b  4   �  L   �  J     3   g  0   �  ;   �  3     7   <  2   t  :   �  5   �  G     0   `  <   �  M   �  J     G   g  4   �  H   �  E   -  <   s  6   �  I   �  4   1  1   f  ;   �  8   �  5     =   C  8   �  8   �  9   �  /   -  <   ]  #   �  #   �  ?   �  #   "     F  3   f  &   �  5   �  E   �  4   =  D   r     �  *   �  8      6   9  %   p  (   �  (   �  8   �  #   !      E     f  8   �  4   �  $   �       ,   9  ,   f     �     �  #   �  G   �  4   '     \  &   {     �  )   �  7   �     !  +   6     b     s     �     �     �  
   �     �     �  9      >   B   P   �      �   &   �      !  '   
!     2!     4!     7!     9!  �  =!  R   �"     #  S   %#     y#  F   �#  E   �#  3   $     C$  #   \$     �$  '   �$     �$  ?   �$  <    %  9   ]%  :   �%  7   �%  4   
&  J   ?&  H   �&  @   �&  8   '  ;   M'  H   �'  <   �'  C   (  A   S(  G   �(  >   �(  V   )  k   s)  h   �)  0   H*  -   y*  <   �*  N   �*  I   3+  3   }+  K   �+  K   �+  T   I,  8   �,  \   �,  J   4-  G   -  D   �-  F   .  G   S.  E   �.  B   �.  B   $/  A   g/  7   �/  3   �/  8   0  =   N0  :   �0  N   �0  :   1  1   Q1  G   �1  L   �1  C   2  $   \2  ,   �2  B   �2  $   �2  %   3  9   <3  4   v3  >   �3  B   �3  K   -4  Q   y4     �4  *   �4  9   5  B   M5  %   �5  (   �5  6   �5  >   6  /   U6  '   �6  &   �6  1   �6  :   7  ,   A7  *   n7  6   �7  7   �7     8     !8  -   58  <   c8  =   �8      �8  5   �8     59  *   T9  ;   9     �9  *   �9     �9  !   	:  '   +:  (   S:     |:     �:     �:     �:  ;   �:  =   �:  K   +;     w;  5   �;     �;  !   �;     �;     �;     �;     �;            r   X   j              M   A   K   V   {           "   (   ?       )       =   O   T   ,          v      U               >   &   J   !           g             p   	       7          [           Y   x       Z         ;   /   a       E           B   q   2              D   c   P   t   z       '       w   5       R   4   #   1      n   N   :   y   Q   $   .                 u               3       <          o   W                +   S   G   L   %      ^   ]   9           b   6   s   f   I                   m   _      \   `          -   l           0   h       i   k   H   F       *       
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
   -N, --unencrypted         do not encrypt stored password
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
 n no y yes Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2004-11-14 07:10+0000
PO-Revision-Date: 2004-11-14 18:37-0500
Last-Translator: Serguei A. Mokhov <mokhov@cs.concordia.ca>
Language-Team: pgsql-rus <pgsql-rus@yahoogroups.com>
MIME-Version: 1.0
Content-Type: text/plain; charset=koi8-r
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Russian
X-Poedit-Country: RUSSIAN FEDERATION
 
��-���������, ���� ������ � ���������, ���������� � ������� ������ ������������.
 
����� ����������:
 
���� �� ������ �� ���� �� -a, -A, -d, -D � USERNAME, �� ��� �����
������ �������.
 
�����:
 
������� �������� SQL-������� CLUSTER ��� ����� ��������� ����������.
 
������� �������� SQL-������� VACUUM ��� ����� ��������� ����������.
 
�������� �� �������: <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [�����]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [USERNAME]
   --help                          �������� ��� ������� � �����
   --help                       �������� ��� ������� � �����
   --help                    �������� ��� ������� � �����
   --version                       �������� ������ � �����
   --version                    �������� ������ � �����
   --version                 �������� ������ � �����
   -A, --no-adduser          ������������ �� ����� ��������� �������������
   -D, --no-createdb         ������������ �� ����� ��������� ���� ������
   -D, --tablespace=TABLESPACE  tablespace ��-��������� ��� ����
   -E, --encoding=ENCODING     ��������� ��� ���� ������
   -E, --encrypted           ����������� ����������� ������
   -L, --pglib=DIRECTORY    ������ ���� �������������� ����� � DIRECTORY
   -N, --unencrypted         �� ��������� ����������� ������
   -O, --owner=OWNER        ������������-�������� ����� ���� ������
   -P, --pwprompt            ��������� ������ ������ ������������
   -T, --template=TEMPLATE     ��� ���� ������, ������������ ��� ������
   -U, --username=USERNAME     ��� ������������ ��� ����������
   -U, --username=USERNAME
                            ��� ������������ ��� ����������
   -U, --username=USERNAME
                            ��� ������������ ��� ���������� (�� �� ��� ��������)
   -U, --username=USERNAME
                            ��� ������������ ��� ���������� (�� ��� ��������)
   -W, --password               ��������� ������
   -W, --password            ��������� ������
   -W, --password            ��������� ������ ��� ����������
   -a, --adduser             ������������ ����� ��������� ������ �������������
   -a, --all                       ���������� ������ ������ �� ���� �����
   -a, --all                �������������� ��� ����
   -d, --createdb            ������������ ����� ��������� ����� ���� ������
   -d, --dbname=DBNAME            ���������� ������ ������ � ��������� ����
   -d, --dbname=DBNAME        ���� ������,  �� ������� ����� ������� ��������� �����
   -d, --dbname=DBNAME        ��� ���� ��� �������������
   -d, --dbname=DBNAME      �������� ���� ������,  � ������� ��������������� ��������� �����
   -e, --echo                      ���������� ������� ������������ �������
   -e, --echo                   ���������� ������� ������������ �������
   -e, --echo                ���������� ������� ������������ �������
   -f, --full                      ���������� ���������� ������ ������
   -h, --host=HOSTNAME         ������ ��� ������ ��� ���������� �������
   -h, --host=HOSTNAME       ������ ��� ������ ��� ���������� �������
   -i, --interactive         ����������� ����� ��������� ����-����
   -i, --sysid=SYSID         ������� sysid ��� ������ ������������
   -l, --list                �������� ������ ������������� ������
   -p, --port=PORT              ���� ������� ��� ������
   -p, --port=PORT          ���� ������� ��� ������
   -q, --quiet                     �� �������� ���������
   -q, --quiet                  �� �������� ������� ���������
   -q, --quiet               �� �������� ������� ���������
   -t, --table='TABLE[(COLUMNS)]' ���������� ������ ������ � ��������� �������
   -t, --table=TABLE      �������������� ��������� �������
   -v, --verbose                  ��������� �����
   -z, --analyze                   �������� ���������� ��� ������������
 %s ���������� ������ ������  � �������� ���������� ���� ������ PostgreSQL.

 %s ������������ ��� ����� ���������������� ������� � ���� ������.

 %s ������� ���� ������ PostgreSQL.

 %s ������� ������ ������������ PostgreSQL.

 %s ������������� ��������� ������������ ����� � ���� PostgreSQL.

 %s ������� ���� ������ PostgreSQL.

 %s ������� ������������ PostgreSQL.

 %s ������� ��������� ������������ ����� �� ���� ������.

 %s: "%s" �� �������� ���������� ��������� ���������
 %s: ������  �������������� ���� � �� �� ������� �� ���� �����
 %s: ������ �������������� ��� ���� � ���� ���������� ������������
 %s: ������ ���������� ������ ������ � ����� � ��� �� ������� �� ���� �����
 %s: ������ ���������� ������ ������ ��� ���� ��� � ����� ���������� ������������
 %s: ������������� ���� "%s"
 %s: ������ ��� ������������� ���� "%s": %s %s: ������ ��� ������������� ������� "%s" � ���� "%s": %s %s: �������� ����������� �� ������� (���� ������ ���� �������): %s %s: �� ������� ����������� � ���� %s
 %s: �� ������� ����������� � ���� %s: %s %s: �� ������� �������� ��� �������� ������������: %s
 %s: �� ������� �������� ���������� � ������� ������������: %s
 %s: �������� ������ ������������ �� �������: %s %s: �������� ���� ������ �� �������: %s %s: �� ������� ������� ���� ������: %s %s: ��������� ����� "%s" ��� ������� � ���� "%s"
 %s: ��������� ����� "%s" �� ����������� � ���� ������"%s"
 %s: ��������� ��������� ����� �� �������: %s %s: �� ������� ������� ��������� �����: %s %s: ����������� ����������� ��������: ��� ���� ������
 %s: ����������� ����������� �������� -- �������� �����
 %s: ������ �� ������: %s %s: ������ ���: %s
 %s: ������ ��� �������� ������������ "%s": %s %s: %s ������� ����� "%s" ��� ������������ ; ���� �� ������
 %s: ������� ����� ���������� ��������� ������ (������: "%s")
 %s: ���� "%s" �� ��������������
 %s: ID ������������ ������ ���� ������������� ������
 %s: ������ ������ � ���� "%s"
 %s: ������ ��� ������ ������ ���� "%s": %s %s: ������ ��� ������ ������ � ������� "%s" � ���� "%s": %s �� �������? (y/n)  ���� ������ "%s" ����� ��������� �������.
 ������� �����:  ������� ��� ������ ������������:  ������� ��� ������������ ��� ��������:  ������� ������ ��� ������ ������������:  ��� ������:  ������ �� ���������.
 ����������� ����� ��������� ������ ������������ ��������� ���� ������? (y/n)  ��������� ������ ������������ ��������� �������������? (y/n)  �������������� �����: plpgsql, pltcl, pltclu, plperl, plperlu � plpythonu.
 ����������? �������� "%s --help" ��� ����� ��������� ����������.
 �������������:
 ������������ "%s" �����  ������.
 n ��� y �� 