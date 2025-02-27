��    b      ,  �   <      H      I     j  &   |     �     �  -   �     	     &	  r   C	     �	  F   �	  A   
     _
  7   z
  !   �
  3   �
  ?     ?   H  H   �  D   �  E     ?   \  B   �  <   �  z     0   �  F   �  8     2   H  O   {  7   �          
  �     !   �  A   �  y     C   �  D   �  A     *   M  /   x  %   �  /   �  #   �     "  3   @  0   t  ,   �  .   �  3     -   5  0   c  5   �  "   �  $   �  J        ]     y  3   �  0   �     �       !   '  $   I      n  -   �  4   �  %   �  $     "   =  F   `  F   �     �  7     q   :  f   �  &        :  &   B  0   i  )   �  "   �      �  (        1  !   L     n     �     �     �     �     �     �     �  "   
     -  P  L  "   �     �  ,   �  #     &   +  6   R     �     �  y   �  !   6  J   X  E   �     �  :     !   A  <   c  @   �  .   �  C     N   T  D   �  E   �  w   .   6   �   s   �   7   Q!  G   �!  ?   �!  4   "  e   F"  F   �"     �"     �"  �   #  #   �#  J   �#  �   J$  G   �$  I   9%  F   �%  -   �%  1   �%  +   *&  4   V&  '   �&  "   �&  :   �&  ;   '  1   M'  4   '  ;   �'  1   �'  5   "(  <   X(  &   �(  (   �(  S   �(     9)     X)  @   o)  2   �)     �)      �)     *  %   <*  #   b*  *   �*  :   �*  %   �*  $   +      7+  _   X+  W   �+     ,  M   #,  �   q,  {   �,  5   t-     �-  #   �-  1   �-  '   .  )   4.  %   ^.  0   �.  %   �.  )   �.     /     "/     ?/     V/     q/     �/     �/     �/  '   �/     �/     A           _                                1          (   9   N               .       U   <   C             T      X   `   #      &          4   W      0      I   O       %   
                 b   :             D   S   V   L                      ]         Y   /   R   !              M   5                  J   7   2   [   @   ;      H   -       ,   G   P       "   B   )      >   a   $   F   6   K   Q   \      +          3   =          	                 8   *   '      E   ?       ^   Z    
Allowed signal names for kill:
 
Common options:
 
Options for register and unregister:
 
Options for start or restart:
 
Options for stop or restart:
 
Report bugs to <pgsql-bugs@postgresql.org>.
 
Shutdown modes are:
   %s kill    SIGNALNAME PID
   %s register   [-N SERVICENAME] [-U USERNAME] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o "OPTIONS"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m SHUTDOWN-MODE] [-o "OPTIONS"]
   %s start   [-w] [-D DATADIR] [-s] [-l FILENAME] [-o "OPTIONS"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m SHUTDOWN-MODE]
   %s unregister [-N SERVICENAME]
   --help                 show this help, then exit
   --version              output version information, then exit
   -D, --pgdata DATADIR   location of the database storage area
   -N SERVICENAME  service name with which to register PostgreSQL server
   -P PASSWORD     password of account to register PostgreSQL server
   -U USERNAME     user name of account to register PostgreSQL server
   -W                     do not wait until operation completes
   -l, --log FILENAME     write (or append) server log to FILENAME
   -m SHUTDOWN-MODE   may be "smart", "fast", or "immediate"
   -o OPTIONS             command line options to pass to postgres
                         (PostgreSQL server executable)
   -p PATH-TO-POSTGRES    normally not necessary
   -s, --silent           only print errors, no informational messages
   -w                     wait until operation completes
   fast        quit directly, with proper shutdown
   immediate   quit without complete shutdown; will lead to recovery on restart
   smart       quit after all clients have disconnected
  done
  failed
 %s is a utility to start, stop, restart, reload configuration files,
report the status of a PostgreSQL server, or signal a PostgreSQL process.

 %s: PID file "%s" does not exist
 %s: another server may be running; trying to start server anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload server; single-user server is running (PID: %ld)
 %s: cannot restart server; single-user server is running (PID: %ld)
 %s: cannot stop server; single-user server is running (PID: %ld)
 %s: could not find own program executable
 %s: could not find postgres program executable
 %s: could not open PID file "%s": %s
 %s: could not open service "%s": error code %d
 %s: could not open service manager
 %s: could not read file "%s"
 %s: could not register service "%s": error code %d
 %s: could not send reload signal (PID: %ld): %s
 %s: could not send signal %d (PID: %ld): %s
 %s: could not send stop signal (PID: %ld): %s
 %s: could not start server
Examine the log output.
 %s: could not start server: exit code was %d
 %s: could not start service "%s": error code %d
 %s: could not unregister service "%s": error code %d
 %s: invalid data in PID file "%s"
 %s: missing arguments for kill mode
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: no server running
 %s: old server process (PID: %ld) seems to be gone
 %s: option file "%s" must have exactly one line
 %s: out of memory
 %s: server does not shut down
 %s: server is running (PID: %ld)
 %s: service "%s" already registered
 %s: service "%s" not registered
 %s: single-user server is running (PID: %ld)
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized operation mode "%s"
 %s: unrecognized shutdown mode "%s"
 %s: unrecognized signal name "%s"
 (The default is to wait for shutdown, but not for start or restart.)

 If the -D option is omitted, the environment variable PGDATA is used.
 Is server running?
 Please terminate the single-user server and try again.
 The program "postgres" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postgres" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not start server
 invalid binary "%s" server shutting down
 server signaled
 server started
 server starting
 server stopped
 starting server anyway
 waiting for server to shut down... waiting for server to start... Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-21 01:16-0300
PO-Revision-Date: 2006-10-21 11:56+0200
Last-Translator: Peter Eisentraut <peter_e@gmx.net>
Language-Team: Peter Eisentraut <peter_e@gmx.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
 
Erlaubte Signalnamen f�r �kill�:
 
Optionen f�r alle Modi:
 
Optionen f�r �register� oder �unregister�:
 
Optionen f�r Start oder Neustart:
 
Optionen f�r Anhalten oder Neustart:
 
Berichten Sie Fehler an <pgsql-bugs@postgresql.org>.
 
Shutdown-Modi sind:
   %s kill    SIGNALNAME PID
   %s register   [-N SERVICENAME] [-U BENUTZERNAME] [-P PASSWORT]
                    [-D DATENVERZ] [-w] [-o "OPTIONEN"]
   %s reload  [-D DATENVERZ] [-s]
   %s restart [-w] [-D DATENVERZ] [-s] [-m SHUTDOWN-MODUS] [-o "OPTIONEN"]
   %s start   [-w] [-D DATENVERZ] [-s] [-l DATEINAME] [-o "OPTIONEN"]
   %s status  [-D DATENVERZ]
   %s stop    [-W] [-D DATENVERZ] [-s] [-m SHUTDOWN-MODUS]
   %s unregister [-N SERVICENAME]
   --help                 diese Hilfe anzeigen, dann beenden
   --version              zeige Versionsinformationen und beende
   -D, --pgdata DATENVERZ Datenbankverzeichnis
   -N SERVICENAME  Servicename um PostgreSQL-Server zu registrieren
   -P PASSWORD     Passwort des Benutzers um PostgreSQL-Server zu registrieren
   -U USERNAME     Benutzername um PostgreSQL-Server zu registrieren
   -W                     warte nicht bis Operation abgeschlossen ist
   -l, --log DATEINAME    schreibe Serverlog in DATEINAME (wird an
                         bestehende Datei angeh�ngt)
   -m SHUTDOWN-MODUS  �smart�, �fast� oder �immediate�
   -o OPTIONEN            Kommandozeilenoptionen f�r postgres (PostgreSQL-
                         Serverprogramm)
   -p PFAD-ZU-POSTGRES    normalerweise nicht notwendig
   -s, --silent           zeige nur Fehler, keine Informationsmeldungen
   -w                     warte bis Operation abgeschlossen ist
   fast        beende direkt, mit richtigem Shutdown
   immediate   beende ohne vollst�ndigen Shutdown; f�hrt zu Recovery-Lauf
              beim Neustart
   smart       beende nachdem alle Clientverbindungen geschlossen sind
  fertig
  Fehler
 %s ist ein Hilfsprogramm, um einen PostgreSQL-Server zu starten,
anzuhalten, neu zu starten, Konfigurationsdateien neu zu laden, den
Serverstatus auszugeben oder ein Signal an einen PostgreSQL-Prozess zu
senden.

 %s: PID-Datei �%s� existiert nicht
 %s: ein anderer Server l�uft m�glicherweise; versuche trotzdem zu starten
 %s: kann nicht als root ausgef�hrt werden
Bitte loggen Sie sich (z.B. mit �su�) als der (unprivilegierte) Benutzer
ein, der Eigent�mer des Serverprozesses sein soll.
 %s: kann Server nicht neu laden; Einzelbenutzerserver l�uft (PID: %ld)
 %s: kann Server nicht neu starten; Einzelbenutzerserver l�uft (PID: %ld)
 %s: kann Server nicht anhalten; Einzelbenutzerserver l�uft (PID: %ld)
 %s: konnte eigene Programmdatei nicht finden
 %s: konnte �postgres� Programmdatei nicht finden
 %s: konnte PID-Datei �%s� nicht �ffnen: %s
 %s: konnte Service �%s� nicht �ffnen: Fehlercode %d
 %s: konnte Servicemanager nicht �ffnen
 %s: konnte Datei �%s� nicht lesen
 %s: konnte Service �%s� nicht registrieren: Fehlercode %d
 %s: konnte Signal zum Neuladen nicht senden (PID: %ld): %s
 %s: konnte Signal %d nicht senden (PID: %ld): %s
 %s: konnte Stopp-Signal nicht senden (PID: %ld): %s
 %s: konnte Server nicht starten
Pr�fen Sie die Logausgabe.
 %s: konnte Server nicht starten: Exitcode war %d
 %s: konnte Service �%s� nicht starten: Fehlercode %d
 %s: konnte Service �%s� nicht deregistrieren: Fehlercode %d
 %s: ung�ltige Daten in PID-Datei �%s�
 %s: fehlende Argumente f�r �kill�-Modus
 %s: kein Datenbankverzeichnis angegeben und Umgebungsvariable PGDATA nicht gesetzt
 %s: keine Operation angegeben
 %s: kein Server l�uft
 %s: alter Serverprozess (PID: %ld) scheint verschwunden zu sein
 %s: Optionsdatei �%s� muss genau eine Zeile haben
 %s: Speicher aufgebraucht
 %s: Server f�hrt nicht herunter
 %s: Server l�uft (PID: %ld)
 %s: Service �%s� bereits registriert
 %s: Service �%s� nicht registriert
 %s: Einzelbenutzerserver l�uft (PID: %ld)
 %s: zu viele Kommandozeilenargumente (das erste ist �%s�)
 %s: unbekannter Operationsmodus �%s�
 %s: unbekannter Shutdown-Modus �%s�
 %s: unbekannter Signalname �%s�
 (Die Voreinstellung ist, beim Herunterfahren zu warten, aber nicht beim
Start oder Neustart.)

 Wenn die Option -D weggelassen wird, dann wird die Umgebungsvariable
PGDATA verwendet.
 L�uft der Server?
 Bitte beenden Sie den Einzelbenutzerserver und versuchen Sie es noch einmal.
 Das Programm �postgres� wird von %s ben�tigt, aber wurde nicht im
selben Verzeichnis wie �%s� gefunden.
Pr�fen Sie Ihre Installation.
 Das Programm �postgres� wurde von %s gefunden,
aber es war nicht die gleiche Version wie %s.
Pr�fen Sie Ihre Installation.
 Versuchen Sie �%s --help� f�r weitere Informationen.
 Benutzung:
 Kindprozess hat mit Code %d beendet Kindprozess hat mit unbekanntem Status %d beendet Kindprozess wurde von Signal %d beendet konnte nicht in Verzeichnis �%s� wechseln konnte kein �%s� zum Ausf�hren finden konnte aktuelles Verzeichnis nicht ermitteln: %s konnte Programmdatei �%s� nicht lesen konnte symbolischen Link �%s� nicht lesen konnte Server nicht starten
 ung�ltige Programmdatei �%s� Server f�hrt herunter
 Signal an Server gesendet
 Server gestartet
 Server startet
 Server angehalten
 starte Server trotzdem
 warte auf Herunterfahren des Servers... warte auf Start des Servers... 