��    �      �  �   ,	      0  K   1     }  e   �  
   �  >     >   C  =   �  -   �     �  #        +  (   F     o  <   �  9   �  6     H   :  E   �  B   �  9     C   F  9   �  4   �  =   �  .   7  ;   f  E   �  :   �  5   #  7   Y  9   �  7   �  4     L   8  J   �  3   �  0     ;   5  7   q  2   �  2   �  J     :   Z  5   �  G   �  0     <   D  0   �  M   �  J      G   K  4   �  H   �  E     9   W  v   �  <     I   E  5   �  4   �  1   �  ;   ,  8   h  5   �  6   �  3     4   B  =   w  8   �  8   �  8   '  9   `  /   �  <   �  #     #   +  ?   O  %   �  #   �     �  3   �  &   -  5   T  E   �  I   �  5     I   P  5   �  E   �  F      4   ]   D   �      �   *   �   8    !  6   Y!  %   �!  (   �!  (   �!  8   "  #   A"      e"     �"  8   �"  4   �"  $   #     9#  ,   Y#  ,   �#     �#     �#     �#  *   �#  8   $$  ,   ]$  8   �$  #   �$  G   �$  4   /%     d%  )   �%  7   �%     �%  +   �%     $&     5&     Q&     n&     �&     �&  
   �&     �&     �&  '   �&  )   '  9   9'  >   s'     �'  &   �'     �'     �'     �'     �'     �'  X  �'  N   N)     �)  v   �)  
   ,*  <   7*  <   t*  ;   �*  3   �*     !+  %   :+     `+  &   {+     �+  C   �+  @   ,  =   C,  S   �,  P   �,  M   &-  =   t-  N   �-  ?   .  8   A.  ;   z.  :   �.  ;   �.  J   -/  =   x/  >   �/  A   �/  =   70  T   u0  Q   �0  U   1  X   r1  /   �1  ,   �1  =   (2  ?   f2  :   �2  >   �2  Q    3  :   r3  8   �3  F   �3  3   -4  H   a4  7   �4  H   �4  E   +5  B   q5  0   �5  X   �5  U   >6  ?   �6     �6  J   T7  @   �7  H   �7  A   )8  >   k8  ?   �8  <   �8  9   '9  9   a9  >   �9  <   �9  A   :  <   Y:  @   �:  /   �:  J   ;  4   R;  C   �;  '   �;  #   �;  D   <  ,   \<  '   �<     �<  7   �<  .   	=  ?   8=  J   x=  Q   �=  C   >  Q   Y>  C   �>  N   �>  W   >?  >   �?  I   �?     @  ,   >@  ;   k@  B   �@  -   �@  0   A  :   IA  C   �A     �A  %   �A  (   B  :   7B  8   rB  %   �B  %   �B  8   �B  3   0C     dC     ~C  "   �C  0   �C  >   �C  0   *D  >   [D  '   �D  Q   �D  @   E     UE  *   sE  :   �E     �E  -   �E     F  '   0F  %   XF  $   ~F     �F     �F     �F     �F     �F  %   �F  0   G  +   PG  .   |G     �G  3   �G     �G     �G     �G     �G     �G     o   C   �   �   &   y   0   ?             @   =   p   %      3           _   B   1   z          �   s   �                   �   ^   8   !   d   7              F          X      I       x                  R   T      �       Y      +   v       f           O      Q   �       $   w      N   H   
   \   �   �       <               5   L                 E       V       6       e   J   	   n   t          "          .   �   �   D   P      M   >   U   g   }   '      k   h   /       :          c   [   9          �   |   q   4       �   S       u   ;       Z      i   b   W   )   �   �   G       l       ,   (      *   `       r               #   a          j   �   ~          -   K       ]   A               �       �   2          m   {        
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
 %s cleans and analyzes a PostgreSQL database.

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
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? (y/n)  Database "%s" will be permanently removed.
 Enter it again:  Enter name of role to add:  Enter name of role to drop:  Enter password for new role:  Name Password encryption failed.
 Password:  Passwords didn't match.
 Procedural Languages Role "%s" will be permanently removed.
 Shall the new role be a superuser? (y/n)  Shall the new role be allowed to create databases? (y/n)  Shall the new role be allowed to create more new roles? (y/n)  Trusted? Try "%s --help" for more information.
 Usage:
 n no y yes Project-Id-Version: pgscripts-ro
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-01-24 15:28+0100
PO-Revision-Date: 2006-02-06 00:38+0200
Last-Translator: Alin Vaida <alin.vaida@gmail.com>
Language-Team: Rom�n� <en@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.2
 
Implicit, este creat� o baz� de date cu acela�i nume ca utilizatorul curent.
 
Op�iuni de conectare:
 
Dac� una din op�iunile -s, -S, -d, -D, -r, -R �i NUMEROL nu este specificat�, ea va fi solicitat� �n mod interactiv.
 
Op�iuni:
 
Consulta�i descrierea comenzii SQL CLUSTER pentru detalii.
 
Consulta�i descrierea comenzii SQL REINDEX pentru detalii.
 
Consulta�i descrierea comenzii SQL VACUUM pentru detalii.
 
Raporta�i erorile la <pgsql-bugs@postgresql.org>.
   %s [OP�IUNE]...NUMEBD
   %s [OP�IUNE]...NUMELIMBAJ [NUMEBD]
   %s [OP�IUNE]...[NUMEDB]
   %s [OP�IUNE].. [NUMEBD] [DESCRIERE]
   %s [OP�IUNE]...[NUMEROL]
   --help                          afi�eaz� acest ajutor, apoi iese
   --help                       afi�eaz� acest ajutor, apoi iese
   --help                    afi�eaz� acest ajutor, apoi iese
   --version                       afi�eaz� informa�iile despre versiune, apoi iese
   --version                    afi�eaz� informa�iile despre versiune, apoi iese
   --version                 afi�eaz� informa�iile despre versiune, apoi iese
   -D, --no-createdb         rolul nu poate crea baze de date
   -D, --tablespace=SPA�IUTBL   spa�iul de tabele implicit pentru baza de date
   -E, --encoding=CODIFICARE    codificarea pentru baza de date
   -E, --encrypted           parola este stocat� criptat
   -I, --no-inherit          rolul nu mo�tene�te privilegii
   -L, --no-login            rolul nu se poate autentifica
   -N, --unencrypted         parola nu este stocat� criptat
   -O, --owner=PROPRIETAR       utilizatorul care de�ine noua baz� de date
   -P, --pwprompt            se asigneaz� o parol� noului rol
   -R, --no-createrole         rolul nu poate crea alte roluri
   -S, --no-superuser       rolul nu va fi utilizator privilegiat
   -T, --template=�ABLON        �ablonul bazei de date copiat
   -U, --username=USERNAME      conectare ca utilizatorul de baze de date specificat
   -U, --username=USERNAME   conectare ca utilizatorul de baze de date specificat
   -U, --username=USERNAME   numele utilizatorului pentru conectare (nu cel de creat)
   -U, --username=USERNAME   numele utilizatorului pentru conectare (nu cel de eliminat)
   -W, --password               solicit� parola
   -W, --password            solicit� parola
   -W, --password            solicit� parola pentru conectare
   -a, --all                       videaz� toate bazele de date
   -a, --all                 grupeaz� toate bazele de date
   -a, --all                 re-indexeaz� toate bazele de date
   -c, --connection-limit=N  limita conexiunii pentru rol (implicit: f�r� limit�)
   -d, --createdb            rolul poate crea baze de date
   -d, --dbname=NUMEBD             baza de date de vidat
   -d, --dbname=NUMEBD       baza de date din care se elimin� limbajul
   -d, --dbname=DBNAME       baza de date de grupat
   -d, --dbname=NUMEBD       baza de date �n care se instaleaz� limbajul
   -d, --dbname=DBNAME       baza de date de re-indexat
   -e, --echo                      afi�eaz� comenzile trimise serverului
   -e, --echo                   afi�eaz� comenzile trimise serverului
   -e, --echo                afi�eaz�comenzile�trimise�serverului
   -f, --full                      vidare total�
   -h, --host=NUMEGAZD�         gazda serverului de baze de date sau directorul soclului
   -h, --host=NUMEGAZD�      gazda serverului de baze de date sau directorul soclului
   -t, --table=TABLE         re-indexeaz� numai un anumit index
   -i, --inherit             rolul mo�tene�te privilegiile rolurilor
                            �n care este membru (implicit)
   -i, --interactive         solicit� confirmarea �nainte de a �terge ceva
   -l, --list                afi�eaz� lista limbajelor instalate
   -l, --login                     rolul se poate autentifica (implicit)
   -p, --port=PORT              portul serverului de baze de date
   -p, --port=PORT           portul serverului de baze de date
   -q, --quiet                     nu se afi�eaz� nici un mesaj
   -q, --quiet                  nu se afi�eaz� nici un mesaj
   -q, --quiet               nu se afi�eaz� nici un mesaj
   -r, --createrole          rolul poate crea alte roluri
   -s, --superuser          rolul va fi utilizator privilegiat
   -s, --system              re-indexeaz� cataloagele sistem
   -t, --table='TABEL�[(COLOANE)]' videaz� numai o anumit� tabel�
   -t, --table=TABLE         grupeaz� numai o anumit� tabel�
   -t, --table=TABLE         re-indexeaz� numai o anumit� tabel�
   -v, --verbose                   mod detaliat
   -z, --analyze                   actualizeaz� sugestiile optimizatorului
 %s cur��� �i analizeaz� o baz� de date PostgreSQL.

 %s grupeaz� toate tabelele grupate anterior dintr-o baz� de date.

 %s creeaz� o baz� de date PostgreSQL.

 %s creeaz� un rol PostgreSQL nou.

 %s instaleaz� un limbaj procedural �ntr-o baz� de date PostgreSQL.

 %s re-indexeaz� o baz� de date PostgreSQL.

 %s elimin� o baz� de date PostgreSQL.

 %s elimin� un rol PostgreSQL.

 %s elimin� un limbaj procedural dintr-o baz� de date.

 %s: "%s" nu este un nume de codificare corect
 %s: imposibil de grupat o tabel� anume �n toate bazele de date
 %s: imposibil de grupat toate bazele de date �i una anume �n acela�i timp
 %s: imposibil de re-indexat un index anume �i cataloagele sistem �n acela�i timp
 %s: imposibil de re-indexat un index anume �n toate bazele de date
 %s: imposibil de re-indexat o tabel� anume �i cataloagele sistem �n acela�i timp
 %s: imposibil de re-indexat o tabel� anume �n toate bazele de date
 %s: imposibil de re-indexat toate bazele de date �i una anume �n acela�i timp
 %s: imposibil de re-indexat toate bazele de date �i cataloagele sistem �n acela�i timp
 %s: imposibil de vidat o tabel� anume �n toate bazele de date
 %s: imposibil de vidat toate bazele de date �i una anume �n acela�i timp
 %s: grupare baz� de date "%s"
 %s: gruparea bazei de date "%s" a e�uat: %s  %s: gruparea tabelei "%s" din baza de date "%s" a e�uat: %s %s: crearea comentariului a e�uat (baza de date a fost creat�): %s %s: imposibil de conectat la baza de date %s
 %s: imposibil de conectat la baza de date %s: %s %s: imposibil de ob�inut numele utilizatorului curent: %s
 %s: imposibil de ob�inut informa�ii despre utilizatorul curent: %s
 %s: crearea rolului a e�uat: %s %s: crearea bazei de date a e�uat: %s %s: eliminarea bazei de date a e�uat: %s %s: limbajul "%s" este deja instalat �n baza de date "%s"
 %s: limbajul "%s" nu este instalat �n baza de date "%s"
 %s: instalarea limbajului a e�uat: %s %s: eliminarea limbajului a e�uat: %s %s: lipse�te argumentul solicitat, numele bazei de date
 %s: lipse�te argumentul necesar, numele limbajului
 %s: interogare e�uat�: %s %s: interogarea era: %s
 %s: re-indexare baz� de date "%s"
 %s: re-indexarea bazei de date "%s" a e�uat: %s  %s: refacerea indexului "%s" din baza de date "%s" a e�uat: %s %s: re-indexarea cataloagelor sistem a e�uat: %s %s: re-indexare tabelei "%s" din baza de date "%s" a e�uat: %s %s: eliminarea rolului "%s" a e�uat: %s %s: %s func�ii sunt inc� declarate �n limbajul "%s"; limbajul nu a fost eliminat
 %s: prea multe argumente �n linia de comand� (primul este "%s")
 %s: vidare baz� de date "%s"
 %s: vidarea bazei de date "%s" a e�uat: %s %s: vidarea tabelei "%s" din baza de date "%s" a e�uat: %s Continua�i? (d/n)  Baza de date "%s" va fi eliminat� definitiv.
 Introduce�i din nou:  Introduce�i numele rolului de ad�ugat:  Introduce�i numele rolului de �ters:  Introduce�i parola pentru noul rol:  Nume Criptarea parolei a e�uat.
 Parol�:  Parola nu se verific�.
 Limbaje procedurale Rolul "%s" va fi eliminat definitiv.
 Noul rol va fi un utilizator privilegiat? (d/n)  Noul rol va putea crea baze de date? (d/n)  Noul rol va putea crea alte roluri noi? (d/n)  Sigur? �ncerca�i "%s --help" pentru mai multe informa�ii.
 Utilizare:
 n nu d da 