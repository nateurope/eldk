��    �      �  �   L	      `  K   a     �  e   �  
   )  >   4  >   s  =   �  -   �       #   7     [  (   v     �  <   �  9   �  6   3  H   j  E   �  B   �  9   <  C   v  9   �  4   �  =   )  .   g  ;   �  E   �  :     5   S  7   �  9   �  7   �  4   3  L   h  J   �  3      0   4  ;   e  7   �  2   �  2     J   ?  :   �  5   �  G   �  0   C  <   t  0   �  M   �  J   0  G   {  4   �  H   �  E   A  9   �  v   �  <   8  I   u  5   �  4   �  1   *  ;   \  8   �  5   �  6     3   >  4   r  =   �  8   �  8     8   W  9   �     �  /   �  <     #   C  #   g  ?   �  %   �  #   �       3   5  &   i  5   �  E   �  I     5   V  I   �  5   �  E      F   R   4   �   D   �      !  *   1!  8   \!  6   �!  %   �!  (   �!  (   "  8   D"  #   }"      �"     �"  8   �"  4   #  $   P#     u#  ,   �#  ,   �#     �#     $     $  *   5$  8   `$  ,   �$  8   �$  #   �$  G   #%  4   k%     �%  )   �%  7   �%     &  +   -&     Y&     j&     �&     �&     �&     �&  
   �&     �&     '     $'  '   9'  "   a'  2   �'  7   �'     �'  &   �'     (     '(     )(     ,(     .(  F  2(  l   y)     �)  e   �)     c*  U   o*  U   �*  R   +  6   n+     �+      �+     �+  )   �+     #,  E   B,  B   �,  ?   �,  O   -  L   [-  I   �-  B   �-  A   5.  ;   w.  C   �.  9   �.  ;   1/  I   m/  >   �/  B   �/  =   90  6   w0  @   �0  5   �0  2   %1  �   X1  �   �1  4   n2  1   �2  ?   �2  H   3  6   ^3  9   �3  ~   �3  A   N4  G   �4  l   �4  4   E5  n   z5  8   �5  y   "6  s   �6  m   7  <   ~7  Q   �7  N   8  @   \8  �   �8  H   &9  K   o9  F   �9  9   :  6   <:  @   s:  =   �:  :   �:  <   -;  1   j;  7   �;  h   �;  @   =<  C   ~<  :   �<  K   �<     I=  6   U=  C   �=  '   �=  (   �=  H   !>  +   j>  &   �>  "   �>  9   �>  *   ?  E   E?  J   �?  S   �?  H   *@  S   s@  H   �@  M   A  M   ^A  D   �A  I   �A     ;B  2   XB  B   �B  M   �B  ,   C  /   IC  7   yC  E   �C  0   �C  2   (D  ,   [D  ;   �D  9   �D  /   �D  *   .E  %   YE  $   E     �E     �E     �E  6   �E  D   /F  6   tF  F   �F  -   �F  J    G  :   kG  *   �G  3   �G  C   H     IH  4   _H     �H  )   �H  1   �H  ,   I     <I  ,   AI  
   nI  #   yI  $   �I     �I  0   �I  '   J  0   0J  8   aJ  	   �J  5   �J     �J     �J     �J     �J     �J     �             	      @   c   K       D      �              [   i   T       4   $       J   �          �   o                <   9   e       =       �   �   2       �   +   �           �   j   %   r   �   O   W      �   _   |   F   `         :               d       �   V   ;   (   f   �   ]   l       *   k   h              L       /           &   
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
POT-Creation-Date: 2006-10-21 01:20-0300
PO-Revision-Date: 2006-10-21 13:10+0200
Last-Translator: Peter Eisentraut <peter_e@gmx.net>
Language-Team: German <peter_e@gmx.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Wenn nichts anderes angegeben ist, dann wird eine Datenbank mit dem Namen
des aktuellen Benutzers erzeugt.
 
Verbindungsoptionen:
 
Wenn -s, -S, -d, -D, -r, -R oder ROLLENNAME nicht angegeben wird, dann
wird interaktiv nachgefragt.
 
Optionen:
 
F�r weitere Informationen lesen Sie bitte die Beschreibung des
SQL-Befehls CLUSTER.
 
F�r weitere Informationen lesen Sie bitte die Beschreibung des
SQL-Befehls REINDEX.
 
F�r weitere Information lesen Sie bitte die Beschreibung des
SQL-Befehls VACUUM.
 
Berichten Sie Fehler an <pgsql-bugs@postgresql.org>.
  %s [OPTION]... DBNAME
 %s [OPTION]... SPRACHE [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [BESCHREIBUNG]
   %s [OPTION]... [ROLLENNAME]
   --help                          diese Hilfe anzeigen, dann beenden
   --help                       diese Hilfe anzeigen, dann beenden
   --help                    diese Hilfe anzeigen, dann beenden
   --version                       Versionsinformationen anzeigen, dann beenden
   --version                    Versionsinformationen anzeigen, dann beenden
   --version                 Versionsinformationen anzeigen, dann beenden
   -D, --no-createdb         Rolle kann keine Datenbanken erzeugen
   -D, --tablespace=TABLESPACE  Standard-Tablespace der Datenbank
   -E, --encoding=KODIERUNG     Kodierung f�r die Datenbank
   -E, --encrypted           verschl�ssle das gespeicherte Passwort
   -I, --no-inherit          Rolle erbt keine Privilegien
   -L, --no-login            Rolle kann sich nicht anmelden
   -N, --unencrypted         verschl�ssle das gespeicherte Passwort nicht
   -O, --owner=EIGENT�MER       Eigent�mer der neuen Datenbank
   -P, --pwprompt            weise der neuen Rolle ein Passwort zu
   -R, --no-createrole       Rolle kann keine Rollen erzeugen
   -S, --no-superuser        Rolle wird kein Superuser
   -T, --template=TEMPLATE      zu kopierende Template-Datenbank
   -U, --username=NAME          Datenbankbenutzername
   -U, --username=NAME       Datenbankbenutzername
   -U, --username=BENUTZER   Datenbankbenutzername f�r die Verbindung
                            (nicht der Name des neuen Benutzers)
   -U, --username=BENUTZER   Datenbankbenutzername f�r die Verbindung
                            (nicht der Name des zu l�schenden Benutzers)
   -W, --password               nach Passwort fragen
   -W, --password            nach Passwort fragen
   -W, --password            frage nach Passwort f�r Verbindung
   -a, --all                       f�hre Vacuum in allen Datenbanken aus
   -a, --all                 clustere alle Datenbanken
   -a, --all                 reindiziere alle Datenbanken
   -c, --connection-limit=N  Hochzahl an Verbindungen f�r Rolle
                            (Voreinstellung: keine Begrenzung)
   -d, --createdb            Rolle kann neue Datenbanken erzeugen
   -d, --dbname=DBNAME             f�hre Vacuum in dieser Datenbank aus
   -d, --dbname=DBNAME       Datenbank, aus der die Sprache gel�scht
                            werden soll
   -d, --dbname=DBNAME       zu clusternde Datenbank
   -d, --dbname=DBNAME       Datenbank, in der die Sprache installiert
                            werden soll
   -d, --dbname=DBNAME       zu reindizierende Datenbank
   -e, --echo                      zeige die Befehle, die an den Server
                                  gesendet werden
   -e, --echo                   zeige die Befehle, die an den Server
                               gesendet werden
   -e, --echo                zeige die Befehle, die an den Server
                            gesendet werden
   -f, --full                      f�hre volles Vacuum durch
   -h, --host=HOSTNAME          Name des Datenbankservers oder Socket-Verzeichnis
   -h, --host=HOSTNAME       Name des Datenbankservers oder Socket-Verzeichnis
   -t, --table=TABELLE       erneuere nur einen bestimmten Index
   -i, --inherit             Rolle erbt alle Privilegien von Rollen, deren
                            Mitglied sie ist (Voreinstellung)
   -i, --interactive         frage nach, bevor irgendetwas gel�scht wird
   -l, --list                zeige Liste gegenw�rtig installierter Sprachen
   -l, --login               Rolle kann sich anmelden (Voreinstellung)
   -p, --port=PORT              Port des Datenbankservers
   -p, --port=PORT           Port des Datenbankservers
   -q, --quiet                     unterdr�cke alle Mitteilungen
   -q, --quiet                  unterdr�cke alle Mitteilungen
   -q, --quiet               unterdr�cke alle Mitteilungen
   -r, --createrole          Rolle kann neue Rollen erzeugen
   -s, --superuser           Rolle wird Superuser
   -s, --system              reindiziere Systemkataloge
   -t, --table='TABELLE[(SPALTEN)]'
                                  f�hre Vacuum f�r diese Tabelle aus
   -t, --table=TABELLE       clustere nur eine bestimmte Tabelle
   -t, --table=TABELLE       reindiziere nur eine bestimmte Tabelle
   -v, --verbose                   erzeuge viele Meldungen
   -z, --analyze                   aktualisiere Hinweise f�r den Optimierer
 %s (%s/%s)  %s s�ubert und analysiert eine PostgreSQL-Datenbank.

 %s clustert alle vorher geclusterten Tabellen in einer Datenbank.

 %s erzeugt eine PostgreSQL-Datenbank.

 %s erzeugt eine neue PostgreSQL-Rolle.

 %s installiert eine prozedurale Sprache in einer PostgreSQL-Datenbank.

 %s reindiziert eine PostgreSQL-Datenbank.

 %s l�scht eine PostgreSQL-Datenbank.

 %s l�scht eine PostgreSQL-Rolle.

 %s l�scht eine prozedurale Sprache aus einer Datenbank.

 %s: �%s� ist kein g�ltiger Kodierungsname
 %s: kann nicht eine bestimmte Tabelle in allen Datenbanken clustern.
 %s: kann nicht alle Datenbanken und eine bestimmte gleichzeitig clustern.
 %s: kann nicht einen bestimmten Index und Systemkataloge gleichzeitig reindizieren
 %s: kann nicht einen bestimmten Index in allen Datenbanken reindizieren
 %s: kann nicht eine bestimmte Tabelle und Systemkataloge gleichzeitig reindizieren
 %s: kann nicht eine bestimmte Tabelle in allen Datenbanken reindizieren
 %s: kann nicht alle Datenbanken und eine bestimmte gleichzeitig reindizieren
 %s: kann nicht alle Datenbanken und Systemkataloge gleichzeitig reindizieren
 %s: kann nicht eine bestimmte Tabelle in allen Datenbanken vacuumen
 %s: kann nicht alle Datenbanken und eine bestimmte gleichzeitig vacuumen
 %s: clustere Datenbank �%s�
 %s: Clustern der Datenbank �%s� fehlgeschlagen: %s %s: Clustern der Tabelle �%s� in Datenbank �%s� fehlgeschlagen: %s %s: Erzeugung des Kommentars ist fehlgeschlagen (Datenbank wurde erzeugt): %s %s: konnte nicht mit Datenbank %s verbinden
 %s: konnte nicht mit Datenbank %s verbinden: %s %s: konnte aktuellen Benutzernamen nicht ermitteln: %s
 %s: konnte Informationen �ber aktuellen Benutzer nicht ermitteln: %s
 %s: Erzeugung der neuen Rolle fehlgeschlagen: %s %s: Erzeugung der Datenbank ist fehlgeschlagen: %s %s: L�schen der Datenbank fehlgeschlagen: %s %s: Sprache �%s� ist bereits in Datenbank �%s� installiert
 %s: Sprache �%s� ist nicht in Datenbank �%s� installiert
 %s: Installation der Sprache fehlgeschlagen: %s %s: L�schen der Sprache fehlgeschlagen: %s %s: Datenbankname als Argument fehlt
 %s: Sprachenname als Argument fehlt
 %s: Anfrage fehlgeschlagen: %s %s: Anfrage war: %s
 %s: reindiziere Datenbank �%s�
 %s: Reindizieren der Datenbank �%s� fehlgeschlagen: %s %s: Reindizieren des Index �%s� in Datenbank �%s� fehlgeschlagen: %s %s: Reindizieren der Systemkataloge fehlgeschlagen: %s %s: Reindizieren der Tabelle �%s� in Datenbank �%s� fehlgeschlagen: %s %s: L�schen der Rolle �%s� fehlgeschlagen: %s %s: noch %s Funktionen in Sprache �%s� deklariert; Sprache nicht gel�scht
 %s: zu viele Kommandozeilenargumente (das erste ist �%s�)
 %s: f�hre Vacuuming in Datenbank �%s� aus
 %s: Vacuuming der Datenbank �%s� fehlgeschlagen: %s %s: Vacuuming der Tabelle �%s� in Datenbank �%s� fehlgeschlagen: %s Sind Sie sich sicher? Datenbank �%s� wird unwiderruflich gel�scht werden.
 Geben Sie es noch einmal ein:  Geben Sie den Namen der neuen Rolle ein:  Geben Sie den Namen der zu l�schenden Rolle ein:  Geben Sie das Passwort der neuen Rolle ein:  Name Passwortverschl�sselung ist fehlgeschlagen.
 Passwort:  Passw�rter stimmten nicht �berein.
 Bitte antworten Sie �%s� oder �%s�.
 Prozedurale Sprachen Rolle �%s� wird unwiderruflich gel�scht werden.
 Soll die neue Rolle ein Superuser sein? Soll die neue Rolle Datenbanken erzeugen d�rfen? Soll die neue Rolle weitere neue Rollen erzeugen d�rfen? Vertraut? Versuchen Sie �%s --help� f�r weitere Informationen.
 Benutzung:
 n nein j ja 