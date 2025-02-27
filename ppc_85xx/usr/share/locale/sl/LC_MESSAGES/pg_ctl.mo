��    a      $  �   ,      8      9     Z  &   l     �     �  -   �      	     	  r   3	     �	  F   �	  A   
     O
  7   j
  !   �
  3   �
  ?   �
  ?   8  H   x  D   �  E     ?   L  B   �  <   �  �     0   �  F   �  8     2   >  O   q  7   �     �        �   	  !   �  :   �  I   �  y   A  =   �  >   �  ;   8  *   t  1   �  $   �  /   �  #   &     J  3   h  0   �  ,   �  .   �  7   )  1   a  0   �  5   �     �  $     ,   6  J   c     �  0   �     �  "     %   1  $   W      |  4   �  %   �  $   �  "     F   @  F   �     �  )   �  s     h   �  &   �       &     0   C  )   t  "   �      �  (   �       !   &     H     d     x     �     �     �     �     �  &      "   '  �  J  +   �     �  7     &   F  ,   m  :   �     �     �  �     )   �  U   �  P     $   `  E   �  !   �  E   �  O   3  P   �  R   �  Z   '   V   �   5   �   F   !  C   V!  �   �!  K   4"  3   �"  4   �"  >   �"  �   (#  ;   �#     �#     �#  �   $  !   �$  A   �$  [   %  �   w%  c   *&  N   �&  M   �&  4   +'  2   `'  0   �'  :   �'  0   �'  *   0(  ?   [(  G   �(  5   �(  A   )  O   [)  I   �)  :   �)  =   0*     n*  &   �*  ,   �*  S   �*     3+  ?   S+     �+     �+  $   �+  "   �+     ,  7   8,     p,  '   �,     �,  ^   �,  S   2-     �-  (   �-  �   �-  �   P.  )   �.  	   /  2   /  7   O/  '   �/  2   �/  6   �/  .   0  0   H0  .   y0  -   �0  !   �0     �0     1     1     21     I1  1   a1     �1     �1        B       *   `   ;   J       [            2          I   :   Q   X   ^   &   (       T       C   P         S      W       #      '              V      1          N       .   
         _       5                 Z   R   U   Y                  ?   6   <       9   0       !                      @              %   8   3   K   M   =      /   -   G   ,   F   O       "   )   \      >       $   E   7       L   A      ]          4   H          	                     +          D              a    
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
   -o OPTIONS             command line options to pass to the postmaster
                         (PostgreSQL server executable)
   -p PATH-TO-POSTMASTER  normally not necessary
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
 %s: a standalone backend "postgres" is running (PID: %ld)
 %s: another postmaster may be running; trying to start postmaster anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload postmaster; postgres is running (PID: %ld)
 %s: cannot restart postmaster; postgres is running (PID: %ld)
 %s: cannot stop postmaster; postgres is running (PID: %ld)
 %s: could not find own program executable
 %s: could not find postmaster program executable
 %s: could not open PID file "%s": %s %s: could not open service "%s": error code %d
 %s: could not open service manager
 %s: could not read file "%s"
 %s: could not register service "%s": error code %d
 %s: could not send reload signal (PID: %ld): %s
 %s: could not send signal %d (PID: %ld): %s
 %s: could not send stop signal (PID: %ld): %s
 %s: could not start postmaster
Examine the log output.
 %s: could not start postmaster: exit code was %d
 %s: could not start service "%s": error code %d
 %s: could not unregister service "%s": error code %d
 %s: invalid option %s
 %s: missing arguments for kill mode
 %s: neither postmaster nor postgres running
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: option file "%s" must have exactly one line
 %s: out of memory
 %s: postmaster does not shut down
 %s: postmaster is running (PID: %ld)
 %s: service "%s" already registered
 %s: service "%s" not registered
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized operation mode "%s"
 %s: unrecognized shutdown mode "%s"
 %s: unrecognized signal name "%s"
 (The default is to wait for shutdown, but not for start or restart.)

 If the -D option is omitted, the environment variable PGDATA is used.
 Is postmaster running?
 Please terminate postgres and try again.
 The program "postmaster" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postmaster" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not start postmaster
 invalid binary "%s" postmaster shutting down
 postmaster signaled
 postmaster started
 postmaster starting
 postmaster stopped
 starting postmaster anyway
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2005-01-16 01:11+0000
PO-Revision-Date: 2005-01-17 01:41+0100
Last-Translator: Aleksander Kmetec <aleksander.kmetec@intera.si>
Language-Team: Slovenian <aleksander.kmetec@intera.si>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Slovenian
X-Poedit-Country: SLOVENIA
 
Imena dovoljenih signalov za ukaz "kill":
 
Pogoste mo�nosti:
 
Mo�nosti za registracijo in odstranitev registracije:
 
Mo�nosti za zagon ali ponovni zagon:
 
Mo�nosti za zaustavitev ali ponovni zagon:
 
Napake sporo�ajte na naslov <pgsql-bugs@postgresql.org>.
 
Na�ini zaustavitve so:
   %s kill    IME_SIGNALA  PID
   %s register   [-N IME_SERVISA] [-U UPORABNI�KO_IME] [-P GESLO] [-D PODATKOVNI_IMENIK]
                    [-w] [-o "MO�NOSTI"]
   %s reload  [-D PODATKOVNI_IMENIK] [-s]
   %s restart [-w] [-D PODATKOVNI_IMENIK] [-s] [-m NA�IN_ZAUSTAVITVE] [-o "MO�NOSTI"]
   %s start   [-w] [-D PODATKOVNI_IMENIK] [-s] [-l IME_DATOTEKE] [-o "MO�NOSTI"]
   %s status  [-D PODATKOVNI_IMENIK]
   %s stop    [-W] [-D PODATKOVNI_IMENIK] [-s] [-m NA�IN_ZAUSTAVITVE]
   %s unregister [-N IME_SERVISA]
   --help                       prika�i to pomo�, nato kon�aj program
   --version                    izpi�i podatke o razli�ici, nato kon�aj program
   -D, --pgdata PODATKOVNI_IMENIK   lokacija za shranjevanje podatkovnih datotek
   -N IME_SERVISA      ime servisa, pod katerim bo registriran PostgreSQL stre�nik
   -P GESLO            geslo za uporabni�ki ra�un, ki ga bo uporabljal PostgreSQL stre�nik
   -U UPORABNI�KO_IME  uporabni�ko ime ra�una, ki ga bo uporabljal PostgreSQL stre�nik
   -W           ne �akaj na konec izvajanja operacije
   -l, --log DATOTEKA      dnevnik stre�nika zapisuj v podano datoteko
   -m NA�IN-ZAUSTAVITVE   lahko je 'smart', 'fast', ali 'immediate'
   -o MO�NOSTI             ukazne mo�nosti, ki bodo podane programu postmaster
                          (postmaster je PostgreSQL-ov stre�ni�ki program)
   -p PATH-TO-POSTMASTER   pot do programa postmaster; ponavadi ni potrebna
   -s, --silent  izpisuj samo napake, brez obvestil
   -w           po�akaj na konec izvajanja operacije
   fast        kon�aj takoj, s pravilnim postopkom zaustavitve
   immediate   kon�aj takoj, brez pravilnega postopka zaustavitve;
              ob zagonu bo spro�eno preverjanje/obnavljanje podatkov
   smart       kon�aj, ko vsi uporabniki prekinejo povezavo
  opravljeno
  spodletelo
 %s je orodje za zagon, zaustavitev, ponovni zagon, ponovno nalaganje konfiguracije
in poro�anje o statusu PostgreSQL stre�nika, ali za prisilno pokon�anje PostgreSQL procesa.

 %s: PID datoteka "%s" ne obstaja
 %s: zagnan je samostojni stre�ni�ki proces "postgres" (PID: %ld)
 %s: obstaja verjetnost, da je postmaster �e zagnan; poizkus zagona se nadaljuje kljub temu
 %s: poganjanje programa pod uporabnikom root ni mogo�e
Lastnik stre�ni�kega procesa je lahko le obi�ajni uporabnik.
(Kot drug uporabnik se lahko prijavite z uporabo ukaza "su".)
 %s: ponovno nalaganje konfiguracije za program postmaster ni mogo�e; postgres je zagnan (PID: %ld)
 %s: ponovni zagon programa postmaster ni mogo�; postgres je zagnan (PID: %ld)
 %s: zaustavitev programa postmaster ni mogo�a; postgres je zagnan (PID: %ld)
 %s: lastne izvr�ljive datoteke ni bilo mogo�e najti
 %s: postmaster izvr�ilna datoteka ni bila najdena
 %s: PID datoteke ni bilo mogo�e odpreti "%s": %s %s: servisa "%s" ni bilo mogo�e odpreti [koda napake: %d]
 %s: upravljavca servisov ni bilo mogo�e odpreti
 %s: datoteke "%s" ni bilo mogo�e prebrati
 %s: servisa "%s" ni bilo mogo�e registrirati [koda napake: %d]
 %s: signala za ponovno nalaganje ni bilo mogo�e poslati (PID: %ld): %s
 %s: signala %d ni bilo mogo�e poslati (PID: %ld): %s
 %s: signala za zaustavitev ni bilo mogo�e poslati (PID: %ld): %s
 %s: programa postmaster ni bilo mogo�e zagnati
Preglejte sporo�ila v dnevniku.
 %s: programa postmaster ni bilo mogo�e zagnati; izhodna koda je bila: %d
 %s: servisa "%s" ni bilo mogo�e zagnati [koda napake: %d]
 %s: servisa "%s" ni bilo mogo�e odstraniti [koda napake: %d]
 %s: neveljavna mo�nost "%s"
 %s: manjkajo argumenti za "kill" ukaz
 %s: niti postmaster niti postgres ni zagnan
 %s: podatkovni imenik ni bil podan in okoljska spremenljivka PGDATA ni nastavljena
 %s: operacija ni bila navedena
 %s: datoteka z mo�nostmi "%s" mora vsebovati natanko 1 vrstico
 %s: zmanjkalo je pomnilnika
 %s: postmaster se ni zaustavil
 %s: postmaster je zagnan (PID: %ld)
 %s: servis "%s" je �e registriran
 %s: servis "%s" ni registriran
 %s: preve� argumentov na ukazni vrstici (prvi je "%s")
 %s: "%s" ni podprta operacija
 %s: "%s" ni veljaven na�in zaustavitve
 %s: neveljaven signal "%s"
 (Privzeto je �akanje na konec zaustavitve, ne pa tudi na konec zagona ali ponovnega zagona.)

 �e je mo�nost -D izpu��ena, je uporabljena vrednost okoljske spremenljivke PGDATA.
 Ali je postmaster zagnan?
 Zaustavite postgres in poskusite znova.
 %s potrebuje program "postmaster", vendar pa ta ni bil najden
v istem imeniku kot "%s".
Preverite, ali je program name��en pravilno.
 %s: program "postmaster" je bil najden, vendar se njegova
razli�ica razlikuje od razli�ice programa "%s".
Preverite, ali je program name��en pravilno.
 Za ve� informacij poskusite "%s --help".
 Uporaba:
 podproces je zaklju�il izvajanje z izhodno kodo %d podproces je zaklju�il izvajanje z neznanim statusom %d podproces je bil pokon�an s signalom %d delovnega imenika ni bilo mogo�e spremeniti v "%s" izvr�ljive datoteke z imenom "%s" ni bilo mogo�e najti trenutnega imenika ni bilo mogo�e izvedeti: %s izvr�ljive datoteke "%s" ni bilo mogo�e prebrati simbolne povezave "%s" ni bilo mogo�e prebrati programa "postmaster" ni bilo mogo�e zagnati
 "%s" ni veljavna binarna datoteka postmaster se zaustavlja
 ukaz poslan
 postmaster zagnan
 postmaster se zaganja
 postmaster zaustavljen
 zagon programa posmaster se nadaljuje kljub temu
 postmaster se zaustavlja... postmaster se zaganja... 