��    l      |  �   �      0	  R   1	     �	  
   �	  -   �	  �   �	  �   e
         "  J   B  5   �  J   �  6     P   E  C   �  :   �  4     B   J  H   �  >   �  9     3   O  ?   �  /   �  -   �  E   !  y   g  (   �  7   
  (   B  3   k  '   �  5   �  -   �  -   +  /   Y  "   �  6   �  �   �  0   �  $   �  �   �  ~   t  1   �     %  J   C  �   �     V  D   i  -   �  !   �  4   �  ,   3     `     �     �     �     �     �  ;   �  9   ;  �   u  >     0  E  u   v  q   �  f   ^  &   �     �     �  &     0   *  )   [     �  &   �  "   �  #   �  "         6  (   W  "   �     �  "   �  !   �  .     ,   2  6   _  $   �  %   �  !   �                8     Y     v  -   �  0   �     �           +   )   ?      i      m   &   |   3   �      �   +   �   !   !  P  ;!  ]   �"  %   �"     #  6   #  �   S#  �   �#  $   �$  2  �$  M   �%  2   K&  I   ~&  ?   �&  Z   '  I   c'  A   �'  4   �'  C   $(  D   h(  >   �(  9   �(  8   &)  I   _)  5   �)  +   �)  P   *  �   \*  4   +  ;   8+  /   t+  >   �+  +   �+  ;   ,  1   K,  5   },  3   �,  *   �,  B   -  �   U-  :   &.  ,   a.  �   �.  �   </  +   �/      �/  S   0  �   g0     @1  L   [1  1   �1  #   �1  :   �1  .   92  $   h2     �2  +   �2  #   �2  ,   �2     )3  9   >3  B   x3  �   �3  B   \4  q  �4  �   6  �   �6  x   %7  5   �7     �7     �7  #   �7  1   8  '   J8  %   r8  0   �8  $   �8  %   �8  )   9  %   >9  0   d9  )   �9  %   �9  (   �9  )   :  1   8:  7   j:  <   �:  ,   �:  *   ;  "   7;     Z;     t;     �;     �;     �;  -   �;  @   <  !   Z<     |<     �<  $   �<     �<     �<  *   �<  7   !=     Y=  .   q=  -   �=         T   6      ;              G                                  @       ^          L   k   U      3   2   ,   F   >       H   N   Y   '   M              a          f   5       h             <                 4   X   !   Q   Z          V   ]   8   I       \                 b   S   d       +      *             j   :   O   J              1      -   l   D       `   E   C   7   .   e   
   i   _              #          c      %       &       K       B         [   $       (             	   /       g   0      9           P   ?       R       W   A   )   =      "    
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d completed removal of file "%s"
 completed rename of file "%s" to "%s"
 copying template1 to postgres ...  copying template1 to template0 ...  could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not open directory "%s": %s
 could not read binary "%s" could not read directory "%s": %s
 could not read symbolic link "%s" could not remove file "%s", continuing to try
 could not remove file or directory "%s": %s
 could not rename file "%s" to "%s", continuing to try
 could not set junction for "%s": %s
 could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating information schema ...  creating subdirectories ...  creating system views ...  creating template1 database in %s/base/1 ...  fixing permissions on existing directory %s ...  initializing dependencies ...  initializing pg_authid ...  invalid binary "%s" loading system objects' descriptions ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-21 01:16-0300
PO-Revision-Date: 2006-10-21 11:36+0200
Last-Translator: Peter Eisentraut <peter_e@gmx.net>
Language-Team: Peter Eisentraut <peter_e@gmx.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
 
Wenn kein Datenverzeichnis angegeben ist, dann wird die Umgebungsvariable
PGDATA verwendet.
 
Weniger h�ufig verwendete Optionen:
 
Optionen:
 
Berichten Sie Fehler an <pgsql-bugs@postgresql.org>.
 
Erfolg. Sie k�nnen den Datenbankserver jetzt mit

    %s%s%spostgres%s -D %s%s%s
oder
    %s%s%spg_ctl%s -D %s%s%s -l logdatei start

starten.

 
WARNUNG: Authentifizierung f�r lokale Verbindungen auf �trust� gesetzt
Sie k�nnen dies �ndern, indem Sie pg_hba.conf bearbeiten oder beim
n�chsten Aufruf von initdb die Option -A verwenden.
   %s [OPTION]... [DATENVERZEICHNIS]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            initialisiere Datenbankcluster mit dieser Locale
                            in der entsprechenden Kategorie (Voreinstellung
                            aus der Umgebung entnommen)
   --locale=LOCALE           initialisiere Datenbankcluster mit dieser Locale
   --no-locale               entspricht --locale=C
   --pwfile=DATEI            lese Passwort des neuen Superusers aus Datei
   -?, --help                diese Hilfe anzeigen, dann beenden
   -A, --auth=METHODE        vorgegebene Authentifizierungsmethode f�r lokale Verbindungen
   -E, --encoding=KODIERUNG  setze Standardkodierung f�r neue Datenbanken
   -L VERZEICHNIS            wo sind die Eingabedateien zu finden
   -U, --username=NAME       Datenbank-Superusername
   -V, --version             zeige Versionsinformationen und beende
   -W, --pwprompt            frage nach Passwort f�r neuen Superuser
   -d, --debug               erzeuge eine Menge Debug-Ausgaben
   -n, --noclean             nach Fehlern nicht aufr�umen
   -s, --show                zeige interne Einstellungen
  [-D, --pgdata=]DATENVERZ   Datenverzeichnis f�r diesen Datenbankcluster
 %s initialisiert einen PostgreSQL-Datenbankcluster.

 %s: �%s� ist keine g�ltige Serverkodierung
 %s: Die Passwortdatei wurde nicht erzeugt. Bitte teilen Sie dieses Problem mit.
 %s: kann nicht als root ausgef�hrt werden
Bitte loggen Sie sich (z.B. mit �su�) als der (unprivilegierte) Benutzer
ein, der Eigent�mer des Serverprozesses sein soll.
 %s: konnte nicht auf Verzeichnis �%s� zugreifen: %s
 %s: konnte Rechte des Verzeichnisses �%s� nicht �ndern: %s
 %s: konnte Verzeichnis �%s� nicht erzeugen: %s
 %s: konnte keine g�ltige kurze Versionszeichenkette ermitteln
 %s: konnte Befehl �%s� nicht ausf�hren: %s
 %s: konnte keine passende Kodierung f�r Locale �%s� finden
 %s: konnte Datei �%s� nicht zum Lesen �ffnen: %s
 %s: konnte Datei �%s� nicht zum Schreiben �ffnen: %s
 %s: konnte Passwort nicht aus Datei �%s� lesen: %s
 %s: konnte Datei �%s� nicht schreiben: %s
 %s: Datenverzeichnis �%s� wurde auf Anwenderwunsch nicht entfernt
 %s: Verzeichnis �%s� existiert aber ist nicht leer
Wenn Sie ein neues Datenbanksystem erzeugen wollen, entfernen oder leeren
Sie das Verzeichnis �%s� or f�hren Sie %s
mit einem anderen Argument als �%s� aus.
 %s: konnte Inhalt des Datenverzeichnisses nicht entfernen
 %s: konnte Datenverzeichnis nicht entfernen
 %s: Datei �%s� existiert nicht
Das bedeutet, dass Ihre Installation unvollst�ndig ist oder dass Sie das
falsche Verzeichnis mit der Kommandozeilenoption -L angegeben haben.
 %s: Eingabedatei �%s� geh�rt nicht zu PostgreSQL %s
Pr�fen Sie Ihre Installation oder geben Sie den korrekten Pfad mit der
Option -L an.
 %s: Eingabedatei muss absoluten Pfad haben
 %s: ung�ltiger Locale-Name �%s�
 %s: Superuser-Passwort muss angegeben werden um %s-Authentifizierung einzuschalten
 %s: kein Datenverzeichnis angegeben
Sie m�ssen das Verzeichnis angeben, wo dieses Datenbanksystem abgelegt
werden soll. Machen Sie dies entweder mit der Kommandozeilenoption -D
oder mit der Umgebungsvariable PGDATA.
 %s: Speicher aufgebraucht
 %s: Passwortprompt und Passwortdatei k�nnen nicht zusammen angegeben werden
 %s: entferne Inhalt des Datenverzeichnisses �%s�
 %s: entferne Datenverzeichnis �%s�
 %s: zu viele Kommandozeilenargumente (das erste ist �%s�)
 %s: unbekannte Authentifizierungsmethode �%s�
 %s: Warnung: unpassende Kodierungen
 Geben Sie es noch einmal ein:  Geben Sie das neue Superuser-Passwort ein:  Passw�rter stimmten nicht �berein.
 F�hren Sie %s erneut mit der Option -E aus.
 Debug-Modus ist an.
 Noclean-Modus ist an. Bei Fehlern wird nicht aufger�umt.
 Der Datenbankcluster wird mit der Locale %s initialisiert werden.
 Der Datenbankcluster wird mit folgenden Locales initialisiert werden:
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Die Standarddatenbankkodierung wurde entsprechend auf %s gesetzt.
 Es ist nicht bekannt, ob die von Ihnen gew�hlte Kodierung (%s) und
die von der gew�hlten Locale verwendete Kodierung (%s) zu einander
passen. Das kann in verschiedenen Zeichenkettenfunktionen zu Fehlverhalten
f�hren.  Um diese Situation zu berichtigen, starten Sie %s erneut und
geben Sie entweder keine Kodierung explizit an oder w�hlen Sie eine
passende Kombination.
 Die Dateien, die zu diesem Datenbanksystem geh�ren, werden dem Benutzer
�%s� geh�ren. Diesem Benutzer muss auch der Serverprozess geh�ren.

 Das Programm �postgres� wird von %s ben�tigt, aber wurde nicht im
selben Verzeichnis wie �%s� gefunden.
Pr�fen Sie Ihre Installation.
 Das Programm �postgres� wurde von %s gefunden,
aber war nicht die gleiche Version wie %s.
Pr�fen Sie Ihre Installation.
 Versuchen Sie �%s --help� f�r weitere Informationen.
 Verwendung:
 Signal abgefangen
 Kindprozess hat mit Code %d beendet Kindprozess hat mit unbekanntem Status %d beendet Kindprozess wurde von Signal %d beendet L�schen von Datei �%s� abgeschlossen
 Umbenennen von Datei �%s� in �%s� angeschlossen
 kopiere template1 nach postgres ...  kopiere template1 nach template0 ...  konnte nicht in Verzeichnis �%s� wechseln konnte kein �%s� zum Ausf�hren finden konnte aktuelles Verzeichnis nicht ermitteln: %s konnte Verzeichnis �%s� nicht �ffnen: %s
 konnte Programmdatei �%s� nicht lesen konnte Verzeichnis �%s� nicht lesen: %s
 konnte symbolischen Link �%s� nicht lesen konnte Datei �%s� nicht l�schen, versuche weiter
 konnte Datei oder Verzeichnis �%s� nicht entfernen: %s
 konnte Datei �%s� nicht in �%s� umbenennen, versuche weiter
 konnte Junction f�r �%s� nicht erzeugen: %s
 konnte nicht an Kindprozess schreiben: %s
 erzeuge Konfigurationsdateien ...  erzeuge Konversionen ...  erzeuge Verzeichnis %s ...  erzeuge Informationsschema ...  erzeuge Unterverzeichnisse ...  erzeuge Systemsichten ...  erzeuge Datenbank template1 in %s/base/1 ...  berichtige Zugriffsrechte des bestehenden Verzeichnisses %s ...  initialisiere Abh�ngigkeiten ...  initialisiere pg_authid ...  ung�ltige Programmdatei �%s� lade Systemobjektbeschreibungen ...  ok
 Speicher aufgebraucht
 w�hle Vorgabewert f�r max_connections ...  w�hle Vorgabewert f�r shared_buffers/max_fsm_pages ...  setze das Passwort ...  setze Privilegien der eingebauten Objekte ...  f�hre Vacuum in Datenbank template1 durch ... 