��    y      �  �   �      8
  K   9
     �
  ^   �
  
   �
  >     =   D  -   �     �  #   �     �  (        1  <   N  9   �  6   �  H   �  E   E  B   �  6   �  9     C   ?  9   �  4   �  H   �  ;   ;  E   w  :   �  9   �  7   2  4   j  L   �  J   �  3   7  0   k  ;   �  3   �  7     2   D  :   w  5   �  G   �  0   0  <   a  M   �  J   �  G   7  4     H   �  E   �  <   C  6   �  I   �  4     1   6  ;   h  8   �  5   �  =     8   Q  8   �  9   �  /   �  <   -  #   j  #   �  ?   �  #   �       3   6  &   j  5   �  E   �  4     D   B     �  *   �  8   �  6   	  %   @  (   f  #   �      �     �  8   �  4   -  $   b     �  ,   �  ,   �            #   )  G   M  4   �     �  &   �       )   -  7   W     �  +   �     �     �     �          8  
   =     H     a  9   v  >   �  P   �     @   &   I      p   '   x      �      �      �      �   P  �   U   �!     R"  s   g"     �"  .   �"  -   #  5   D#     z#  $   �#     �#  &   �#  '   $  <   *$  9   g$  9   �$  C   �$  @   %  =   `%  E   �%  C   �%  D   (&  7   m&  >   �&  C   �&  ;   ('  O   d'  @   �'  >   �'  G   4(  D   |(  H   �(  L   
)  .   W)  +   �)  <   �)  C   �)  @   3*  9   t*  A   �*  L   �*  D   =+  1   �+  E   �+  D   �+  A   ?,  @   �,  =   �,  S    -  P   T-  =   �-  C   �-  D   '.  9   l.  5   �.  ,   �.  6   	/  5   @/  Q   v/  ?   �/  ;   0  ~   D0  0   �0  G   �0  !   <1  '   ^1  9   �1  $   �1  %   �1  .   2  *   :2  G   e2  P   �2  @   �2  L   ?3  %   �3  0   �3  ?   �3  :   #4  (   ^4  +   �4  '   �4  "   �4  %   �4  1   $5  /   V5      �5  #   �5  -   �5  (   �5     "6     76  +   J6  H   v6  ;   �6     �6  '   7  $   A7  .   f7  =   �7     �7  &   �7     	8     8  )   98     c8     �8     �8     �8     �8  8   �8  D   �8  M   89     �9  '   �9  	   �9  %   �9     �9     �9     �9     �9            p       @   G   7   d   w   L   s   ?   J   0   N      q   +   y   Z          $                         -             A   Y           _   x   	   1       H   j          r   )   o       3   V   c   =   6       l   C              K                      
   M             E   P   9          [          %   t               u   .   Q   ^   R       b   *      n         m           D       #       4       ;   F      O   i      `          ,   v   I   (      ]   <      g      :   "   B      /      k   S   '   e                  h   f       W      !   8       >       \       T           5   X   &      a       2   U    
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
 %s: could not connect to database %s: %s %s: creation of new user failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
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
 n no y yes Project-Id-Version: pgscripts-cs
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-10-27 14:18+0200
PO-Revision-Date: 2004-10-21 14:09+0200
Last-Translator: Karel Zak <zakkr@zf.jcu.cz>
Language-Team: Czech <cs@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3.1
 
Implicitn� je vytvo�ena datab�ze stejn�ho jm�na jako je jm�no aktu�ln�ho u�ivatele.
 
Parametry spojen�:
 
Je-li pou�it jeden z parametr� -a, -A, -d nebo -D a u�ivatelsk� jm�no
nen� zad�no, budete dot�z�n/a interaktivn�.
 
P�ep�na�:
 
Pro detaily �t�te popis SQL p��kazu CLUSTER.
 
Pro detaily �t�te popis SQL p��kazu VACUUM.
 
Chyby hlaste na adresu <pgsql-bugs@postgresql.org>.
   %s [P�EP�NA�]... DATAB�ZE
   %s [P�EP�NA�]... JAZYK [DATAB�ZE]
   %s [P�EP�NA�]... [DATAB�ZE]
   %s [P�EP�NA�]... [DATAB�ZE] [POPIS]
   %s [P�EP�NA�]... [U�IVATELSK�_JM�NO]
   --help                          uk�e tento text a skon��
   --help                       uk�e tento text a skon��
   --help                    uk�e tuto n�pov�du a skon��
   --version                       uk�e informace o verzi a skon��
   --version                    uk�e informace o verzi a skon��
   --version                 uk�e informaci o verzi a skon��
   -A, --no-adduser          u�ivatel nem��e p�id�vat dal�� u�ivatele
   -D, --no-createdb         u�ivatel nem��e vytv��et nov� datab�ze
   -D, --tablespace=PROSTOR     v�choz� prostor tabulek pro datab�zi
   -E, --encoding=K�DOV�N�      k�dov�n� znak� datab�ze
   -E, --encrypted           ulo�it heslo v za�ifrovan� podob�
   -L, --pglib=ADRES��       ADRES�� se souborem interpretru jazyka
   -N, --unencrypted         ulo�it heslo v otev�en�m tvaru
   -O, --owner=VLASTN�K         u�ivatel, kter� m� b�t vlastn�kem nov� datab�ze
   -P, --pwprompt            nastavit heslo pro nov�ho u�ivatele
   -T, --template=�ABLONA       �ablona datab�ze ke kop�rov�n�
   -U, --username=U�IVATEL      jm�no u�ivatele pro spojen� se serverem
   -U, --username=U�IVATEL   jm�no u�ivatele pro spojen� se serverem
   -U, --username=U�IVATEL   jm�no u�ivatele pro spojen� (ne pro tvorbu)
   -U, --username=U�IVATEL   jm�no u�ivatele pro spojen� (ne pro odstran�n�)
   -W, --password               dotaz na heslo
   -W, --password            dotaz na heslo
   -W, --password            dot�zat se na heslo pro spojen�
   -a, --adduser             u�ivatel m��e p�id�vat dal�� u�ivatele
   -a, --all                       prov�st VACUUM v�ech datab�z�
   -a, --all                 clusterovat v�echny datab�ze
   -d, --createdb            u�ivatel m��e vytv��et nov� datab�ze
   -d, --dbname=DATAB�ZE           jm�no datab�ze k proveden� p��kazu VACUUM
   -d, --dbname=DATAB�ZE     datab�ze, ze kter� bude jazyk odstran�n
   -d, --dbname=DATAB�ZE     datab�ze pro cluster
   -d, --dbname=DATAB�ZE      datab�ze do kter� bude jazyk instalov�n
   -e, --echo                      uk�zat p��kazy pos�lan� na server
   -e, --echo                   uk�zat p��kazy pos�lan� na server
   -e, --echo                ukazovat p��kazy pos�lan� na server
   -f, --full                      prov�st pln� (FULL) VACUUM
   -h, --host=HOSTNAME          jm�no datab�zov�ho serveru nebo adres��e se soketem
   -h, --host=HOSTNAME       jm�no datab�zov�ho serveru nebo adres��e se soketem
   -i, --interactive         zeptej se p�ed smaz�n�m �ehokoli
   -i, --sysid=SYSID         nastavit syst�mov� ID nov�ho u�ivatele
   -l, --list                uk�e seznam ji� nainstalovan�ch jazyk�
   -p, --port=PORT              port datab�zov�ho serveru
   -p, --port=PORT          port datab�zov�ho serveru
   -q, --quiet                     tich� m�d
   -q, --quiet                  nevypisuj ��dn� zpr�vy
   -q, --quiet               nevypisovat ��dn� zpr�vy
   -t, --table='TABULKA[(SLOUPCE)]'  prov�st VACUUM pouze u specifikovan� tabulky
   -t, --table=TABULKA       vytvo�it cluster pro danou tabulku
   -v, --verbose                   vypisovat v�ce informac�
   -z, --analyze                   aktualizace informac� pou��van�ch pro
                                  optimalizaci dotaz�
 %s pro�i��uje a analyzuje PostgreSQL datab�zi.

 %s vytv��� cluster v�ech ji� d��ve clusterovan�ch tabulek v datab�zi.

 %s vytvo�� PostgreSQL datab�zi.

 %s tvo�� nov�ho PostgreSQL u�ivatele.

 %s instaluje procedur�ln� jazyk do PostgreSQL datab�ze.

 %s odstra�uje PostgreSQL datab�zi.

 %s odstra�uje PostgreSQL u�ivatele.

 %s odstra�uje procedur�ln� jazyk z datab�ze.

 %s: "%s" nen� platn� jm�no k�dov�n� znak�
 %s: nelze vytvo�it cluster pro specifickou tabulku ve v�ech datab�z�ch
 %s: nelze vytvo�it cluster ve v�ech datab�z�ch a z�rove� specifikovat jen jednu
 %s: nelze prov�st VACUUM specifick� tabulky ve v�ech datab�z�ch
 %s: nelze prov�d�t VACUUM u v�ech datab�z� a z�rove� specifikovat jen jednu
 %s: prov�d� se cluster datab�ze "%s"
 %s: vytv��en� cluster� datab�ze "%s" selhalo: %s %s: vytv��en� clusteru tabulky "%s" v datab�zi "%s" selhalo: %s %s: tvorba koment��e selhala (datab�ze byla vytvo�ena): %s %s: nelze nav�zat spojen� s datab�z� %s
 %s: nelze nav�zat spojen� s datab�z� %s: %s %s: tvorba nov�ho u�ivatele selhala: %s %s: vytvo�en� datab�ze selhalo: %s %s: odstra�ov�n� datab�ze selhalo: %s %s: jazyk "%s" je ji� v datab�zi "%s" instalov�n
 %s: jazyk "%s" nen� v datab�zi "%s" instalov�n
 %s: instalace jazyka selhala: %s %s: odstra�ov�n� jazyka selhalo: %s %s: chyb� vy�adovan� parametr jm�no datab�ze
 %s: chyb� povinn� parametr jm�no jazyka
 %s: dotaz selhal: %s %s: dotaz byl: %s
 %s: odstra�ov�n� u�ivatele "%s" selhalo: %s %s: st�le je %s funkc� definov�no v jazyce "%s"; jazyk nebyl odstran�n.
 %s: p��li� mnoho parametr� p��kazov� ��dky (prvn� je "%s")
 %s: nepodporovan� jazyk "%s"
 %s: ID u�ivatele mus� b�t kladn� ��slo
 %s: prov�d� se VACUUM datab�ze "%s"
 %s: prov�d�n� VACUUM datab�ze "%s" selhalo: %s %s: prov�d�n� VACUUM tabulky "%s" v datab�zi "%s" selhalo: %s Ur�it�? (a/n)  Datab�ze "%s" bude trvale odstran�na.
 Zadejte znova:  Vlo�te jm�no nov�ho u�ivatele:  Vlo�te u�ivatelsk� jm�no pro odstran�n�:  Vlo�te heslo nov�ho u�ivatele:  Jm�no Heslo:  Hesla se neshoduj�.
 Procedur�ln� jazyky M�l by m�t nov� u�ivatel pr�vo vytv��et datab�ze? (a/n)  M�l by m�t nov� u�ivatel pr�vo vytv��et dal�� nov� u�ivatele? (a/n)  Podporovan� jazyky jsou plpgsql, pltcl, pltclu, plperl, plperlu a plpythonu.
 D�v�ryhodn�? Zkuste "%s --help" pro v�ce informac�.
 Pou�it�:
 U�ivatel "%s" bude trvale odstran�n.
 n ne a ano 