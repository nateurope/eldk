��    W      �     �      �      �     �  &   �     �       -   "     P     f  r   �     �  F   	  A   ]	     �	  7   �	  !   �	  3   
  ?   H
  ?   �
  H   �
  D     E   V  ?   �  B   �  <     �   \  0   �  F     8   U  2   �  O   �  7        I     P  �   Y  !   �  :     I   G  y   �  =     >   I  ;   �  *   �  1   �  $   !  /   F  #   v     �  3   �  0   �  ,     .   J  7   y  1   �  5   �       $   0  ,   U  J   �     �  0   �       "   -  %   P  $   v      �  4   �  %   �  $     "   <  F   _  F   �     �  )     s   /  h   �  &        3     ;     W     q     �     �     �     �  &   �  "     -  )     W     v  #   �  #   �  '   �  5   �     2     H  r   h     �  G   �  A   C     �  6   �  %   �  =   �  A   ;  4   }  I   �  A   �  E   >  6   �  Q   �  >     �   L  ?   �  F     4   _  2   �  P   �  9         R   	   [   �   e      !  *   !!  5   L!  �   �!  <   "  <   V"  9   �"     �"  '   �"  %   
#  .   0#  "   _#     �#  4   �#  2   �#  5   $  ,   <$  9   i$  7   �$  4   �$     %  &   *%  #   Q%  M   u%     �%  4   �%     &     /&     M&  $   m&  "   �&  4   �&     �&      '      #'  J   D'  E   �'     �'  )   �'  x   (  ]   �(  '   �(  	   )      )     ;)     S)     n)     �)     �)     �)      �)     �)     8          3               ?      K   9   :   1   &   L                   ,   2                                  B          H      7       -   *       T   P   A       ;   U      <                  5                          4   G   6       F   S       M   O                      C       '   0         D      N      #                .                  $   E   "   =   !       V          J           /      R   	   
   >   I   (   )           +       %       W   Q      @        
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
 could not start postmaster
 postmaster shutting down
 postmaster signaled
 postmaster started
 postmaster starting
 postmaster stopped
 starting postmaster anyway
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: pg_ctl-cs
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-10-27 14:16+0200
PO-Revision-Date: 2004-10-27 14:51+0200
Last-Translator: 
Language-Team:  <cs@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3.1
 
Povolen� sign�ly pro "kill":
 
Spole�n� p�ep�na�e:
 
P�ep�na�e pro start nebo restart:
 
P�ep�na�e pro start nebo restart:
 
P�ep�na�e pro zastaven� nebo restart:
 
Chyby hlaste na adresu <pgsql-bugs@postgresql.org>.
 
M�dy ukon�en� jsou:
   %s kill    SIGN�L  IDPROCESU
   %s register   [-N SERVICENAME] [-U USERNAME] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o "OPTIONS"]
   %s reload  [-D ADRES��] [-s]
   %s restart [-w] [-D ADRES��] [-s] [-m M�D-UKON�EN�] [-o "P�EP�NA�E"]
   %s start   [-w] [-D ADRES��] [-s] [-l SOUBOR] [-o "P�EP�NA�E"]
   %s status  [-D ADRES��]
   %s stop    [-W] [-D ADRES��] [-s] [-m M�D-UKON�EN�]
   %s odregistrovan� [-N SERVICENAME]
   --help                 vypsat tuto n�pov�du, potom skon�it
   --version              vypsat informace o verzi, potom skon�it
   -D, --pgdata ADRES��   um�st�n� �lo�i�t� datab�ze
   -N SERVICENAME  jm�no slu�by, pod kter�m registrovat PostgreSQL server
   -P PASSWORD     heslo k ��tu pro registraci PostgreSQL serveru
   -U USERNAME     u�ivatelsk� jm�no pro registraci PostgreSQL server
   -W                     ne�ekat na dokon�en� operace
   -l, --log SOUBOR        zapisuj (nebo p�ipoj na konec) log serveru do SOUBORU.
   -m SHUTDOWN-MODE   m��e b�t "smart", "fast", or "immediate"
   -o P�EP�NA�E            p�ep�na�e, kter� budou p�ed�ny postmasteru
                          (co� je vlastn� program PostgreSQL serveru)
   -p CESTA-K-POSTMASTERU  za norm�ln�ch okolnost� nen� pot�eba
   -s, --silent           vypisuj jen chyby, ��dn� informativn� zpr�vy
   -w                     �ekat na dokon�en� operace
   fast        skon�i ihned, s pat�i�n�m ukon�en�m
   immediate   skon�i bez �pln�ho ukon�en�; p�i dal��m startu se spust� obnoven�
   smart       skon�i potom, co se odpoj� v�ichni klienti
  hotovo
  selhalo
 %s je pom�cka pro spu�t�n�, zastaven�, restart, znovuna�ten� konfigura�n�ch
soubor�, nahl�en� stavu PostgreSQL serveru nebo ukon�en� PostgreSQL procesu.

 %s: PID soubor "%s" neexistuje
 %s: samostatn� "postgres" b�� (PID: %ld)
 %s: dal�� postmaster mo�n� b��; i tak zkou��m start
 %s: nelze spustit jako root root
Pros�m p�ihlaste se (nap��klad pomoc�., "su") jako (neprivilegovan�) u�ivatel,
kter� bude vlastnit serverov� proces.
 %s: nemohu znovuna��st postmaster; postgres b�� (PID: %ld)
 %s: nemohu restartovat postmaster; postgres b�� (PID: %ld)
 %s: nemohu zastavit postmaster; postgres b�� (PID: %ld)
 %s: nelze naj�t exe
 %s: nelze naj�t spustiteln� postmaster
 %s: nelze otev��t PID soubor "%s": %s %s: nelze otev��t slu�bu "%s": ch�bov� k�d %d
 %s: nelze otev��t mana�era slu�eb
 %s: nelze ��st soubor "%s"
 %s: nelze zaregistrovat slu�bu "%s": chybov� k�d %d
 %s: nelze poslat sign�l pro reload (PID: %ld): %s
 %s: nelze poslat sign�l pro reload %d (PID: %ld): %s
 %s: nelze poslat stop sign�l (PID: %ld): %s
 %s: nelze spustit postmaster
Zkontrolujte z�znam v logu.
 %s: nelze nastartovat postmaster: n�vratov� k�d byl %d
 %s: nelze odregistrovat slu�bu "%s": ch�bov� k�d %d
 %s: neplatn� p�ep�na� %s
 %s: ch�b�j�c� argument pro "kil!" m�d
 %s: postmaster ani postgres neb��
 %s: nen� zad�n datov� adres�� a ani nen� nastavena prom�nn� prost�ed� PGDATA
 %s: nen� specifikov�na operace
 %s: soubor s p�ep�na�i "%s" mus� m�t p�esn� 1 ��dku
 %s: nedostatek pam�ti
 %s: postmaster se neukon�uje
 %s: postmaster b�� (PID: %ld)
 %s: slu�ba "%s" je ji� registrov�na
 %s: slu�ba "%s" nen� registrov�na
 %s: mnoho parametr� p��kazov� ��dky (prvn� je "%s")
 %s: neplatn� m�d  "%s"
 %s: neplatn� shutdown mode "%s"
 %s: neplatn� jm�no sign�lu "%s"
 (V�choz� chov�n� je �ekat na ukon�en�, ale ne p�i startu nebo restartu.)

 Pokud je vynech�n parametr -D, pou�ije se prom�nn� prost�ed� PGDATA.
 B�� postmaster?
 Pros�m ukon�ete postgres a zkuste znovu.
 %s pot�ebuje program "postmaster", kter� ale nebyl  nalezen ve stejn�m
adres��i jako "%s".
Zkontrolujte va�i instalaci.
 "%s" nalezl program "postmaster",
ten je ale jin� verze ne� %s.
Zkontrolujte va�i instalaci.
 Zkuste "%s --help" pro v�ce informac�.
 Pou�it�:
 nebylo mo�no spustit postmaster
 postmaster se ukon�uje
 postmaster obdr�el sign�l
 postmaster spu�t�n
 postmaster startuje
 postmaster zastaven
 p�esto postmaster spou�t�m
 �ek�m na ukon�en� postmastera... �ek�m na start postmastera... 