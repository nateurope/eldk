��    T      �  q   \         '   !  "   I  Y   l     �  F   �  A   -     o  7   �  !   �  )   �  5   	  ?   D	  A   �	  =   �	  >   
  5   C
  �   y
  =     �   E  2   �  <   �  .   8  $   g  2   �  P   �  7        H  �   Q  J   �  :   *     e  =   y  >   �  3   �  ;   *     f     }     �     �     �     �       J         k  ,   �     �  "   �  %   �  '     F   8          �  G   �     �  2        C     b  )   �  ,   �      �     �       s   *  h   �       !        <  %   \  $   �  '   �     �     �     �     �          ,     A     V  $   j      �  "   �  &   �  "   �  /    J   M      �  k   �  )   %  Q   O  H   �  $   �  C     $   S  P   x  K   �  O     �   e  z   �  �   d  B   �  �   .  b   �  �   ]  7   8  Q   p  C   �  $     5   +  j   a  :   �        �      f   �   5   <!     r!  U   �!  P   �!  U   9"  E   �"     �"  %   �"  #   #  "   >#     a#  !   |#     �#  W   �#     $  4   1$     f$  *   ~$  !   �$  '   �$  h   �$  :   \%     �%  C   �%     �%  @   &  1   M&  2   &  -   �&  8   �&  $   '  "   >'     a'  �   x'  ~   (  +   �(  *   �(  *   �(  0   )  4   8)  6   m)     �)  +   �)     �)     �)     �)     *  !   /*     Q*  7   f*  +   �*  -   �*  "   �*  +   +     O             F       "   $   3   7   C   1   .       @                T   %       G   ?          8   <   P   9                /   =      5       M         E           B         L       J      +       -          N   !       
      #   A         6   0           )   D              &               H           	   >          Q          :   4   '           K         (         2   ;   S               I   R      *      ,    
Try "%s --help" for more information.
   %s kill    SIGNALNAME PROCESSID
   %s register   [-N servicename] [-U username] [-P password] [-D DATADIR] [-o "OPTIONS"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m SHUTDOWN-MODE] [-o "OPTIONS"]
   %s start   [-w] [-D DATADIR] [-s] [-l FILENAME] [-o "OPTIONS"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m SHUTDOWN-MODE]
   %s unregister [-N servicename]
   --help       show this help, then exit
   --version    output version information, then exit
   -D, --pgdata DATADIR   location of the database storage area
   -N       service name with which to register PostgreSQL server
   -P       password of account to register PostgreSQL server
   -U       user name of account to register PostgreSQL server
   -W           do not wait until operation completes
   -l, --log FILENAME      write (or append) server log to FILENAME.  The
                          use of this option is highly recommended.
   -m SHUTDOWN-MODE   may be 'smart', 'fast', or 'immediate'

   -o OPTIONS              command line options to pass to the postmaster
                          (PostgreSQL server executable)
   -p PATH-TO-POSTMASTER   normally not necessary

   -s, --silent only print errors, no informational messages
   -w           wait until operation completes
   HUP INT QUIT ABRT TERM USR1 USR2

   fast        quit directly, with proper shutdown
   immediate   quit without complete shutdown; will lead to recovery on restart

   smart       quit after all clients have disconnected
  failed
 %s is a utility to start, stop, restart, reload configuration files,
report the status of a PostgreSQL server, or kill a PostgreSQL process

 %s: Another postmaster may be running. Trying to start postmaster anyway.
 %s: a standalone backend "postgres" is running (PID: %ld)
 %s: cannot read %s
 %s: cannot reload postmaster; postgres is running (PID: %ld)
 %s: cannot restart postmaster; postgres is running (PID: %ld)
 %s: cannot start postmaster
Examine the log output
 %s: cannot stop postmaster; postgres is running (PID: %ld)
 %s: could not find %s
 %s: extra operation mode %s
 %s: invalid kill syntax
 %s: invalid operation mode %s
 %s: invalid option %s
 %s: invalid shutdown mode %s
 %s: invalid signal "%s"
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: option file %s must have exactly 1 line
 %s: out of memory
 %s: postmaster does not shut down
 %s: postmaster is running (PID: %ld)
 %s: postmaster or postgres not running
 (The default is to wait for shutdown, but not for start or restart.)

 Allowed signal names for kill:
 Common options:
 If the -D option is omitted, the environment variable PGDATA is used.

 Is postmaster running?
 Is postmaster running?
starting postmaster anyway
 Options for start or restart:
 Options for stop or restart:
 Please terminate postgres and try again.
 Report bugs to <pgsql-bugs@postgresql.org>.
 Service "%s" already registered
 Service "%s" not registered
 Shutdown modes are:
 The program "postmaster" is needed by %s but was not found in the same directory as "%s".
Check your installation.
 The program "postmaster" was found by %s but was not the same version as "%s".
Check your installation.
 Unable to find exe Unable to open service "%s" [%d]
 Unable to open service manager
 Unable to register service "%s" [%d]
 Unable to run the postmaster binary
 Unable to unregister service "%s" [%d]
 Usage:
 could not start postmaster
 done
 done
postmaster started
 postmaster shutting down
 postmaster signaled
 postmaster starting
 postmaster stopped
 reload signal failed (PID: %ld): %s
 signal %d failed (PID: %ld): %s
 stop signal failed (PID: %ld): %s
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: pg_ctl-sk
POT-Creation-Date: 2004-08-02 07:22-0300
PO-Revision-Date: 2004-08-02 16:00+0200
Last-Translator: Zoltan Bartko <bartko.zoltan@pobox.sk>
Language-Team: slovak
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3
 
Použite príkaz "%s --help" pre získanie detailnejších informácií.
   %s kill    SIGNÁL ID_PROCESU
   %s register   [-N názov_služby] [-U meno_užívateľa] [-P heslo] [-D DÁTOVÝ_ADRESÁR] [-o "VOĽBY"]
   %s reload  [-D DÁTOVÝ_ADRESÁR] [-s]
   %s restart [-w] [-D DÁTOVÝ_ADRESÁR] [-s] [-m REŽIM_VYPNUTIA] [-o "VOĽBY"]
   %s start   [-w] [-D DÁTOVÝ_ADRESÁR] [-s] [-l SÚBOR] [-o "VOĽBY"]
   %s status  [-D DÁTOVÝ_ADRESÁR]
   %s stop    [-W] [-D DÁTOVÝ_ADRESÁR] [-s] [-m REŽIM_VYPNUTIA]
   %s unregister [-N názov_služby]
   --help                        vypíš túto nápovedu, potom ukonč činnosť
   --version                     vypíš informácie o verzii, potom koniec
   -D, --pgdata DÁTOVÝ_ADRESÁR   umiestnenie úložného priestoru databázy
   -N                            názov služby, pod ktorým sa má server 
                                PostgreSQL registrovať
   -P                            heslo účtu, pod ktorým sa server PostgreSQL
                                registruje
   -U                            meno užívateľa účtu, pod ktorým sa server
                                PostgreSQL registruje
   -W                            nepočkaj do ukončenia operácie
   -l, --log SÚBOR               zapíš (alebo pripíš na koniec) log servera 
                                do SÚBORu. Použitie tejto voľby sa veľmi 
                                odporúča.
   -m REŽIM_VYPNUTIA  môže byť 'smart' (múdro), 'fast' (rýchlo), alebo 'immediate' (ihneď)

   -o VOĽBY                      voľby príkazového riadku, ktoré majú byť 
                                odovzdané programu postmaster (spustiteľný
                                súbor servera PostgreSQL)
   -p CESTA_K_POSTMASTERU        obyčajne nepotrebné

   -s, --silent                  vypíš iba chyby, žiadne informatívne správy
   -w                            počkaj, kým operácia neskončí
   HUP INT QUIT ABRT TERM USR1 USR2

   fast        priame ukončenie, s riadnym vypnutím
   immediate   koniec bez kompletného vypnutia. Spôsobí obnovu pri opätovnom 
              spustení

   smart       ukončenie po odpojení všetkých klientov
  neúspešné
 %s je program pre spustenie, zastavenie, opätovné spustenie, opätovné 
načítanie konfiguračných súborov, hlásenie stavu servera PostgreSQL alebo
pre ukončenie procesu PostgreSQL

 %s: Pravdepodobne beží už iný postmaster. Pokúšam sa spustiť program 
postmaster napriek tomu.
 %s: beží samostatný backend "postgres" (PID: %ld)
 %s: nebolo možné čítať %s
 %s: nebolo možné opätovne spustiť program postmaster, postgres beží (PID: %ld)
 %s: nebolo možné reštartovať program postmaster, postgres beží (PID: %ld)
 %s: Nebolo možné spustiť program postmaster
Prekontrolujte výpisy denníka (log)
 %s: nie je možné zastaviť postmaster - postgres beží (PID: %ld)
 %s: nebolo možné nájsť %s
 %s: nadbytočný režim operácie %s
 %s: neplatná syntax príkazu kill
 %s: neplatný režim činnosti %s
 %s: neplatná voľba "%s"
 %s: neplatný režim vypnutia %s
 %s: neplatný signál "%s"
 %s: nebol určený adresár databázy a premenná prostredia PGDATA nie je 
nastavená
 %s: nebola určená operácia
 %s: súbor s voľbami %s musí mať práve 1 riadok
 %s: nedostatok pamäte
 %s: postmaster neukončil svoju činnosť
 %s: postmaster beží (PID: %ld)
 %s: postmaster alebo postgres nebeží
 (Implicitne sa čaká v prípade vypnutia, ale nie v prípade spustenia alebo 
opätovného spustenia)

 Povolené názvy signálov pre príkaz kill (ukončenie):
 Často používané voľby:
 Ak sa vynechá voľba -D, použije sa premenná prostredia PGDATA.
 Beží postmaster?
 Beží ešte postmaster?
spúšťam posmaster bez ohľadu na to
 Voľby pre spustenie alebo opätovné spustenie:
 Voľby pre zastavenie alebo opätovné spustenie:
 Prosím, ukončite postgres a skúste znovu.
 Chyby hláste na adresu <pgsql-bugs@postgresql.org>.
 Služba "%s" je už zaregistrovaná
 Služba "%s" nie je registrovaná
 Režimy vypnutia sú:
 Program "postmaster" je vyžadovaný programom %s, avšak sa nenašiel 
v adresári rovnakom ako "%s".
Prekontrolujte inštaláciu systému.
 Program "postmaster" bol nájdený programom %s, avšak nie vo verzii
totožnej s "%s".
Prekontrolujte inštaláciu systému.
 Nebolo možné nájsť spustiteľný súbor Nebolo možné otvoriť službu "%s" [%d]
 Nebolo možné otvoriť správcu služieb
 Nebolo možné zaregistrovať službu "%s" [%d]
 Nebolo možné spustiť binárny program postmaster
 Nebolo možné zmazať registráciu služby "%s" [%d]
 Použitie:
 nebolo možné spustiť program postmaster
 hotovo
 hotovo
postmaster beží
 postmaster sa vypína
 postmaster vydal signál
 spúšťanie programu postmaster
 postmaster vypnutý
 signál reload (načítaj znova) zlyhal (PID: %ld): %s
 signál %d bol neúspešný (PID: %ld): %s
 signál stop bol neúspešný (PID: %ld): %s
 čakám na vypnutie postmastera... čakám na spustenie programu postmaster... 