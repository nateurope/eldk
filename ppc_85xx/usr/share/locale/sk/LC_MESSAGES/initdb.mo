��    S      �  q   L        R        d  
   �  -   �  �   �  �   E     �    	  J   !
  5   l
  J   �
  6   �
  P   $  C   u  :   �  4   �  B   )  H   l  >   �  9   �  3   .  ?   b  /   �  -   �  E      y   F  3   �  5   �  -   *  -   X  /   �  6   �  �   �     �  �   �  ~   4     �  �   �     �  -   �  !   �  4   �  (   1     Z  >   z  R   �               <     U     s  ;   �  9   �  �     >   �  0  �  u     q   x  f   �  &   Q     x     �  #   �  !   �  !   �     �          ,      J     k  -   �  2   �  0   �          4     P     l  &   p  %   �     �  +   �  !   �  /  !  Y   Q  #   �  	   �  6   �  �     �   �  %   s  Q  �  s   �  2   _   S   �   G   �   x   .!  q   �!  B   "  =   \"  R   �"  I   �"  B   7#  9   z#  7   �#  d   �#  1   Q$  2   �$  N   �$  �   %  F   �%  L   �%  :   @&  7   {&  7   �&  O   �&  �   ;'     �'  �   
(  �   �(  1   ")  �   T)     &*  3   >*  *   r*  C   �*  0   �*  $   +  2   7+  \   j+     �+  '   �+     ,  ,    ,     M,  <   f,  F   �,  �   �,  I   �-  \  �-  �   9/  �   �/  |   R0  3   �0     1     1  (   #1  -   L1  *   z1     �1     �1     �1  %    2  (   &2  0   O2  I   �2  A   �2     3     +3  !   J3     l3  5   p3  4   �3     �3  5   �3  #   )4     4   B   1   +   3                  <      I   H   =   A      E   P   *             ;      0      "           7       /   9   )   !                     	   D              O                R   $   >   .   (       #         
   L   @   -          C   ?      8       G   M                          N   '              2       ,   6      F   &   5           Q   %      S                     :   J                   K           
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

    %s%s%s/postmaster -D %s%s%s
or
    %s%s%s/pg_ctl -D %s%s%s -l logfile start

 
WARNING: enabling "trust" authentication for local connections.
You can change this by editing pg_hba.conf or using the -A flag the
next time you run initdb.
   %s [OPTION]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            initialize database cluster with given locale
                            in the respective category (default taken from
                            environment)
   --locale=LOCALE           initialize database cluster with given locale
   --no-locale               equivalent to --locale=C
   --pwfile=filename         read password for the new superuser from file
   -?, --help                show this help, then exit
   -A, --auth=method         default authentication method for local connections
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
 %s: could not determine valid short version string
 %s: could not find suitable encoding for locale "%s"
 %s: could not open file "%s" for reading: %s
 %s: could not open file "%s" for writing: %s
 %s: could not read password from file "%s": %s
 %s: data directory "%s" not removed at user's request
 %s: directory "%s" exists but is not empty
If you want to create a new database system, either remove or empty
the directory "%s" or run %s
with an argument other than "%s".
 %s: failed
 %s: file "%s" does not exist
This means you have a corrupted installation or identified
the wrong directory with the invocation option -L.
 %s: input file "%s" does not belong to PostgreSQL %s
Check your installation or specify the correct path using the option -L.
 %s: invalid locale name "%s"
 %s: no data directory specified
You must identify the directory where the data for this database system
will reside.  Do this with either the invocation option -D or the
environment variable PGDATA.
 %s: out of memory
 %s: removing contents of data directory "%s"
 %s: removing data directory "%s"
 %s: too many command-line arguments (first is "%s")
 %s: unknown authentication method "%s".
 %s: warning: encoding mismatch
 %s: you cannot specify both password prompt and password file
 %s: you need to specify a password for the superuser to enable %s authentication.
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

 The program "postgres" is needed by %s but was not found in the same directory as "%s".
Check your installation.
 The program "postgres" was found by %s but was not the same version as "%s".
Check your installation.
 Try "%s --help" for more information.
 Usage:
 caught signal
 copying template1 to template0 ...  could not write to child process
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  loading pg_description ...  ok
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-sk
POT-Creation-Date: 2004-08-02 07:22-0300
PO-Revision-Date: 2004-08-02 15:10+0200
Last-Translator: Zoltan Bartko <bartko.zoltan@pobox.sk>
Language-Team: slovak
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3
 
Ak sa neurčí dátový adresár, použije sa nastavenie z premennej prostredia
PGDATA.
 
Menej často používané voľby:
 
Voľby:
 
Chyby hláste na adresu <pgsql-bugs@postgresql.org>.
 
Úspech. Teraz môžete spustiť databázový server príkazom:

    %s%s%s/postmaster -D %s%s%s
alebo
    %s%s%s/pg_ctl -D %s%s%s -l súbor_logu start

 
UPOZORNENIE: povoľuje sa metóda overenia totožnosti "trust" (dôvera).
Môžete to zmeniť úpravou súboru pg_hba.conf alebo použitím príznaku -A
pri nasledujúcom spustení programu initdb.
   %s [VOĽBA]... [DÁTOVÝ_ADRESÁR]
   --lc-collate, --lc-ctype, --lc-messages=NÁRODNÉ_PROSTREDIE
  --lc-monetary, --lc-numeric, --lc-time=NÁRODNÉ_PROSTREDIE
                            inicializácia zoskupenia databáz na dané národné
                            prostredie v danej kategórii (implicitná hodnota
                            sa berie z prostredia)
   --locale=NÁRODNÉ_PROSTREDIE
                  inicializácia zoskupenia databáz na dané národné prostedie
   --no-locale               ekvivalent --locale=C
   --pwfile=názov_súboru      načíta heslo nového superužívateľa zo súboru
   -?, --help                zobraz túto nápovedu a ukonči činnosť
   -A, --auth=metóda         implicitná metóda overenia totožnosti pre lokálne
                            spojenia
   -E, --encoding=KÓDOVANIE  nastavenie implicitného kódovania pre nové
                            databázy
   -L ADRESÁR                kde sa nachádzajú vstupné súbory
   -U, --username=MENO       meno superužívateľa databázy
   -V, --version             vypýš informácie o verzii, potom ukonči činnosť
   -W, --pwprompt            vyžiadaj si heslo nového superužívateľa
   -d, --debug               generuj množstvo ladiacich výstupov
   -n, --noclean             neupratuj, ak dôjde k chybe
   -s, --show                zobraz interné nastavenia
  [-D, --pgdata=]DÁTOVÝ_ADRESÁR                             umiestnenie tohto zoskupenia databáz
 %s inicializuje zoskupenie databáz PostgreSQL.

 %s: "%s" nie je platný názov kódovania servera
 %s: Súbor hesiel sa nevygeneroval. Prosím, oznámte tento problém autorom.
 %s: nie je možné spustiť ako root
Prosím, prihláste sa (t.j. použite príkaz "su") ako (neprivilegovaný) užívateľ,
ktorý bude vlastníkom procesu servera.
 %s: nebolo možné určiť platný krátky reťazec označenia verzie
 %s: nebolo možné nájsť vhodné kódovanie pre národné nastavenie "%s"
 %s: nebolo možné otvoriť súbor "%s" pre čítanie: %s
 %s: nebolo možné otvoriť súbor "%s" pre zápis: %s
 %s: nebolo možné čítať zo súboru hesiel "%s": %s
 %s: obsah dátového adresára "%s" neodstránený na požiadanie užívateľa
 %s: adresár "%s" existuje, ale nie je prázdny
Ak chcete vytvoriť nový databázový systém, odstráňte alebo vyprázdnite
adresár "%s" alebo spustite %s s iným argumentom ako
"%s".
 %s: neúspešné
 %s: súbor "%s" neexistuje
To znamená, že máte porušenú inštaláciu alebo ste označili
nesprávny adresár pri voľbe spustenia -L.
 %s: vstupný súbor "%s" nie je vlastníctvom PostgreSQL %s
Prekontrolujte inštaláciu alebo zadajte správnu cestu použitím voľby -L.
 %s: neplatný názov národného prostredia "%s"
 %s: Nebol určený dátový adresár
Musíte zadať adresár, kde sa budú nachádzať dáta tohto databázového systému
Môžete tak urobiť buď voľbou spustenia -D alebo cez premennú prostredia
PGDATA.
 %s: nedostatok pamäte
 %s: odstraňuje sa obsah dátového adresára "%s"
 %s: odstraňuje sa dátový adresár "%s"
 %s: príliš veľa argumentov príkazového riadku (prvý je "%s")
 %s: neznáma metóda overania totožnosti "%s".
 %s: varovanie: rozdielne kódovanie
 %s nemôžete zadať prompt hesla a súbor hesiel
 %s: pre povolenie overenia totožnosti metódou %s musíte zadať heslo 
superužívateľa.
 Zadajte ho ešte raz:  Zadajte nové heslo superužívateľa:  Heslá neboli totožné.
 Opätovne spustite program %s s voľbou -E.
 Beh v ladiacom režime.
 Beh v režime "noclean". Nevykoná sa upratovanie po chybe.
 Zoskupenie databáz bude inicialozované s národným nastavením %s.
 Zoskupenie databáz bude inicializované s týmito národnými nastaveniami:
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Implicitné kódovanie databázy bolo v súlade s tým nastavené na %s.
 Kódovanie, ktoré ste zvolili (%s) a kódovanie, ktoré sa používa v národných
nastaveniach (%s) sú nezlučiteľné. Môže to viesť k neželanému chovaniu 
v rôznych funkciách pre spracovanie reťazcov. Pre napravenie situácie treba 
opätovne spustiť %s a buď nezadať kódovanie explicitne alebo zvoliť zlúčiteľnú
kombináciu.
 Súbory patriace tomuto databázovému systému budú vlastnené užívateľom
"%s". Tento užívateľ musí tiež byť vlastníkom procesu servera.

 Program "postgres" je vyžadovaný programom %s, avšak sa nenašiel v rovnakom
adresári ako "%s".
Prekontrolujte inštaláciu.
 Program "postgres" bol nájdený programom %s, avšak sa nenašiel v rovnakej
verzii ako "%s".
Prekontrolujte inštaláciu.
 Zadajte "%s --help" pre detailnejšie informácie.
 Použitie:
 zachytený signál
 kopíruje sa template1 do template0 ...  nebolo možné zapisovať do procesu potomka
 vytvárajú sa konfiguračné súbory ...  vytvárajú sa konverzie ...  vytvára sa adresár %s ...  vytvára sa adresár %s/%s ...  vytvára sa informačná schéma ...  vytvárajú sa systémové pohľady ...  vytvára sa databáza template1 v %s/base/1 ...  Povoľuje sa neobmedzená veľkosť riadkov pre systémové tabuľky ...  opravujú sa prístupové práva pre existujúci adresár %s ...  inicializuje sa pg_depend ...  inicializuje sa pg_shadow ...  načítava sa pg_description ...  ok
 nastavuje sa implicitná hodnota max_connections ...  nastavuje sa implicitná hodnota shared_buffers ...  nastavuje sa heslo ...  nastavujú sa právomoci pre zabudované objekty ...  vysáva sa databáza template1 ...  