��    b      ,  �   <      H      I     j  &   |     �     �  -   �     	     &	  r   C	     �	  F   �	  A   
     _
  7   z
  !   �
  3   �
  ?     ?   H  H   �  D   �  E     ?   \  B   �  <   �  z     0   �  F   �  8     2   H  O   {  7   �          
  �     !   �  A   �  y     C   �  D   �  A     *   M  /   x  %   �  /   �  #   �     "  3   @  0   t  ,   �  .   �  3     -   5  0   c  5   �  "   �  $   �  J        ]     y  3   �  0   �     �       !   '  $   I      n  -   �  4   �  %   �  $     "   =  F   `  F   �     �  7     q   :  f   �  &        :  &   B  0   i  )   �  "   �      �  (        1  !   L     n     �     �     �     �     �     �     �  "   
     -  A  L  !   �     �  .   �  "   �  "     5   :     p     �  u   �       H   ;  A   �     �  9   �        9   <  A   v  ;   �  C   �  L   8  O   �  @   �  I      E   `   �   �   G   0!  I   x!  ;   �!  9   �!  E   8"  2   ~"     �"     �"  �   �"     n#  >   �#  y   �#  A   D$  7   �$  ?   �$  2   �$  *   1%  &   \%  .   �%  &   �%     �%  3   �%  7   -&  /   e&  2   �&  7   �&  7    '  /   8'  5   h'      �'  (   �'  M   �'     6(     S(  7   i(  2   �(     �(     �(     )  '   ")  &   J)  &   q)  4   �)  !   �)  "   �)     *  P   0*  C   �*     �*  <   �*  m   +  g   ~+  ,   �+     ,       ,  ,   A,  %   n,  !   �,  !   �,  -   �,     -  #   !-     E-     `-     s-     �-     �-     �-     �-     �-  )   �-  %   .     A           _                                1          (   9   N               .       U   <   C             T      X   `   #      &          4   W      0      I   O       %   
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
POT-Creation-Date: 2006-11-06 19:11-0400
PO-Revision-Date: 2006-11-07 13:39+0100
Last-Translator: Dennis Bj�rklund <db@zigo.dhs.org>
Language-Team: Swedish <sv@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Till�tna signalnamn f�r "kill":
 
Generella flaggor:
 
Flaggor f�r registrering och avregistrering:
 
Flaggor f�r start eller omstart:
 
Flaggor f�r stopp eller omstart:
 
Rapportera buggar till <pgsql-bugs@postgresql.org>.
 
St�ngningsmetoder �r:
   %s kill    SIGNALNAMN PID
   %s register   [-N TJ�NSTNAMN] [-U ANV�NDARNAMN] [-P L�SENORD] [-D DATAKAT]
                    [-w] [-o "FLAGGOR"]
   %s reload  [-D DATAKAT] [-s]
   %s restart [-w] [-D DATAKAT] [-s] [-m ST�NGNINGSMETOD] [-o "FLAGGOR"]
   %s start   [-w] [-D DATAKAT] [-s] [-l FILENAMN] [-o "FLAGGOR"]
   %s status  [-D DATAKAT]
   %s stop    [-W] [-D DATAKAT] [-s] [-m ST�NGNINGSMETOD]
   %s unregister [-N TJ�NSTNAMN]
   --help                 visa denna hj�lp, avsluta sedan
   --version              visa versionsinformation, avsluta sedan
   -D, --pgdata DATAKAT   plats f�r databasens lagringsarea
   -N TJ�NSTENAMN  tj�nstnamn att registrera PostgreSQL-servern med
   -P L�SENORD     l�senord f�r kontot att registrera PostgreSQL-servern med
   -U NAMN         anv�ndarnamn p� kontot att registrera PostgreSQL-servern med
   -W                     v�nta inte p� att operationen slutf�rs
   -l, --log FILENAMN     skriv (eller addera) server-loggen till FILNAMN
   -m ST�NGNINGSMETOD     kan vara "smart", "fast", eller "immediate"
   -o FLAGGOR             kommandoradsflaggor som skickas vidare till postgres
                         (PostgreSQL-serverns k�rbara fil)
   -p S�KV�G-TILL-POSTGRES
                         beh�vs normalt inte
   -s, --silent           skriv bara ut fel, inga informationsmeddelanden
   -w                     v�nta p� att operationen slutf�rs
   fast        st�ng direkt, en kontrollerad nedst�ngning
   immediate   st�ng direkt; vid omstart kommer �terst�llning utf�ras
   smart       st�ng n�r alla klienter kopplat ner
 klar
  misslyckades
 %s �r ett verktyg f�r att starta, stoppa, starta om, ladda om
konfigureringsfiler, raportera statusen f�r en PostgreSQL-server
eller signalera en PostgreSQL-process.

 %s: PID-fil "%s" finns inte
 %s: en annan server verkar k�ra; f�rs�ker starta servern �nd�
 %s: kan inte k�ras som root
Logga in (t.ex. med "su") som den ickepriviligerade anv�ndare som
skall �ga serverprocessen.
 %s: kan inte ladda om servern; en-anv�ndar-server k�r (PID: %ld)
 %s: kan inte starta om servern; servern k�r (PID: %ld)
 %s: kan inte stoppa servern; en-anv�ndar-server k�r (PID: %ld)
 %s: kunde inte hitta egna programmets k�rbara fil
 %s: kunde inte hitta postgres k�rbara fil
 %s: kunde inte �ppna PID-fil "%s": %s
 %s: kunde inte �ppna tj�nsten "%s": felkod %d
 %s: kunde inte �ppna tj�nsthanteraren
 %s: kunde inte l�sa filen "%s"
 %s: kunde inte registrera tj�nsten "%s": felkod %d
 %s: kunde inte skicka "reload"-signalen (PID: %ld): %s
 %s: kunde inte skicka signal %d (PID: %ld): %s
 %s: kunde inte skicka stopp-singal (PID: %ld): %s
 %s: kunde inte starta servern
Unders�k log-utskriften.
 %s: kunde inte starta servern: avslutningskoden var %d
 %s: kunde inte starta tj�nsten "%s": felkod %d
 %s: kunde inte avregistrera tj�nsten "%s": felkod %d
 %s: ogiltig data i PID-fil "%s"
 %s: saknar argumentet till "kill"-l�get
 %s: ingen databaskatalog angiven och omgivningsvariabeln PGDATA �r inte satt
 %s: ingen operation angiven
 %s: ingen server k�r
 %s: gamla serverprocessen (PID: %ld) verkar vara borta
 %s: inst�llningsfilen "%s" m�ste ha precis en rad
 %s: slut p� minnet
 %s: servern st�nger inte ner
 %s: servern k�r (PID: %ld)
 %s: tj�nsten "%s" �r redan registrerad
 %s: tj�nsten "%s" �r inte registrerad
 %s: en-anv�ndar-server k�r (PID: %ld)
 %s: f�r m�nga kommandoradsargument (f�rsta �r "%s")
 %s: ogiltigt operationsl�ge "%s"
 %s: ogiltigt st�ngningsmetod "%s"
 %s: ogiltigt signalnamn "%s"
 (Standard �r att v�nta p� nedst�ngning men inte v�nta p� start eller omstart.)

 Om flaggan -D inte angivits s� anv�nds omgivningsvariabeln PGDATA.
 K�r servern?
 Var v�nlig och stoppa en--anv�ndar-servern och f�rs�k igen.
 Programmet "postgres" beh�vs av %s men hittades inte i samma
katalog som "%s".
Kontrollera din installation.
 Programmet "postgres" hittades av "%s"
men �r inte samma version som %s.
Kontrollera din installation.
 F�rs�k med "%s --help" f�r mer information.
 Anv�ndning:
 barnprocess avslutade med kod %d barnprocess avslutade med ok�nd statuskod %d barnprocess terminerades av signal %d kunde inte byta katalog till "%s" kunde inte hitta en "%s" att k�ra kunde inte identifiera aktuella katalogen: %s kunde inte l�sa bin�r "%s" kunde inte l�sa symbolisk l�nk "%s" kunde inte starta servern
 ogiltig bin�r "%s" servern st�nger ner
 servern signalerad
 servern startad
 servern startar
 servern stoppad
 startar servern �nd�
 v�ntar p� att servern skall st�nga ner... v�ntar p� att servern skall starta... 