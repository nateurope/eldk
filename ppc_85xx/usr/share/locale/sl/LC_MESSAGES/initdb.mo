��    d      <  �   \      �  R   �     �  
   �  -   �  �   +	  �   �	     X
    t
  J   �  5   �  J     6   `  P   �  C   �  :   ,  4   g  B   �  H   �  >   (  9   g  3   �  ?   �  /     -   E  E   s  y   �  (   3  7   \  (   �  3   �  '   �  5     -   O  -   }  /   �  "   �  6   �  �   5  0   �  $     �   :  ~   �  1   E     w  J   �  �   �     �  D   �  -      !   .  4   P  ,   �     �     �     �               9  ;   Q  9   �  �   �  >   X  0  �  u   �  q   >  f   �  &        >     F  &   U  0   |  )   �  #   �  "   �        (   ?     h  !   �  %   �  !   �     �          "      @     a  -   |  2   �  0   �          *     F     Z     v     z  &   �  %   �     �  +   �  !     �  :  X   �      !     7!  :   C!  �   ~!  �   "  &   �"  >  #  c   [$  1   �$  U   �$  A   G%  M   �%  P   �%  5   (&  =   ^&  L   �&  L   �&  >   6'  3   u'  7   �'  @   �'  5   "(  2   X(  H   �(  �   �(  1   �)  ;   �)  .   �)  =   $*  +   b*  @   �*  7   �*  8   +  7   @+  .   x+  E   �+  �   �+  ;   �,  3   �,  �   -  �   �-  5   [.  /   �.  \   �.  �   /     �/  K   0  5   T0  -   �0  7   �0  '   �0  &   1     ?1  ,   U1     �1  $   �1     �1  M   �1  F   (2  �   o2  <   3  2  I3  �   |4  �   5  �   �5  )   !6  	   K6     U6  2   i6  7   �6  '   �6  #   �6  2    7  6   S7  .   �7  0   �7  .   �7  &   8  (   @8  -   i8     �8     �8  (   �8  #   �8  >   9  =   ]9  4   �9     �9     �9  !   
:     ,:     I:     M:  1   f:  0   �:     �:  -   �:     ;         <       D   :       1   0       8   7   2   Y      /      &   b                        U   W       	   R           ^   V           P   a   ;   d       K          "   ,             Z   %   (   )   A       T      F   \      9      J       N      +             C          5   3       #   '   Q   
                  -   *       $       .              X   c   6   [      @   E   >   !                           =               `       S   H         L   ]   M   I       ?   4                 G       B         O   _    
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

    %s%s%s%spostmaster -D %s%s%s
or
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to template0 ...  could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  invalid binary "%s" loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2005-01-16 01:09+0000
PO-Revision-Date: 2005-01-17 01:39+0100
Last-Translator: Aleksander Kmetec <aleksander.kmetec@intera.si>
Language-Team: Slovenian <aleksander.kmetec@intera.si>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Slovenian
X-Poedit-Country: SLOVENIA
 
�e podatkovni imenik ni podan, bo uporabljena vrednost okoljske
spremenljivke PGDATA.

 
Redkeje uporabljane mo�nosti:
 
Mo�nosti:
 
Napake sporo�ajte na naslov <pgsql-bugs@postgresql.org>.
 
Uspeh. Podatkovni stre�nik lahko sedaj za�enete z ukazom:

    %s%s%s%spostmaster -D %s%s%s
ali
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

 
OPOZORILO: za lokalne povezave bo uporabljen "trust" na�in
avtentikacije, ki od uporabnikov ne zahteva gesla.
To nastavitev lahko spremenite v datoteki pg_hba.conf, ali z
uporabo stikala -A ob naslednjem zagonu programa initdb.
   %s [MO�NOST]... [PODATKOVNI_IMENIK]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            gru�o podatkovnih baz inicializiraj s podanimi podro�nimi
                            nastavitvami za posamezno kategorijo (privzeta vrednost
                            je dobljena iz okolja)
   --locale=LOCALE           gru�o podatkovnih baz inicializiraj s podanimi podro�nimi nastavitvami
   --no-locale               enako kot --locale=C
   --pwfile=DATOTEKA         geslo za superuser uporabnika preberi iz podane datoteke
   -?, --help                izpi�i to pomo�, nato kon�aj program
   -A, --auth=NA�IN          privzeti na�in avtentikacije za lokalne povezave
   -E, --encoding=ENCODING   nastavi privzeto kodno tabelo novih podatkovnih baz
   -L IMENIK                 lokacija vhodnih datotek
   -U, --username=NAME       nastavi ime superuser uporabnika
   -V, --version             izpi�i podatke o razli�ici, nato kon�aj program
   -W, --pwprompt            vpra�aj za geslo za novega superuser uporabnika
   -d, --debug               prika�i podatke za razhro��evanje
   -n, --noclean             ne po�isti za napakami
   -s, --show                prika�i interne nastavitve
  [-D, --pgdata=]DATADIR     lokacija nove gru�e podatkovnih baz
 %s incializira gru�o podatkovnih baz za PostgreSQL.

 %s: "%s" ni veljavno ime kodne tabele za stre�nik
 %s: Datoteka z gesli ni bila ustvarjena. Prosimo, prijavite ta problem.
 %s: poganjanje programa pod uporabnikom root ni mogo�e
Lastnik stre�ni�kega procesa je lahko le obi�ajni uporabnik.
(Kot drug uporabnik se lahko prijavite z uporabo ukaza "su".)
 %s: do imenika "%s" ni bilo mogo�e dostopati: %s
 %s: dovoljenj za imenik "%s" ni bilo mogo�e spremeniti: %s
 %s: imenika "%s" ni bilo mogo�e ustvariti: %s
 %s: veljavnega niza s kratko razli�ico ni bilo mogo�e dobiti
 %s: ukaza "%s" ni bilo mogo�e izvr�iti: %s
 %s: ne najdem primerne kodne tabele za podro�ne nastavitve "%s"
 %s: datoteke "%s" ni bilo mogo�e odpreti za branje: %s
 %s: datoteke "%s" ni bilo mogo�e odpreti za pisanje: %s
 %s: iz datoteke "%s" ni bilo mogo�e prebrati gesla: %s
 %s: datoteke "%s" ni bilo mogo�e zapisati: %s
 %s: podatkovni imenik "%s" na uporabnikovo zahtevo ni bil odstranjen
 %s: imenik "%s" obstaja, vendar ni prazen
�e �elite ustvariti nov sistem podatkovnih baz, morate
imenik "%s" odstraniti ali izprazniti, ali pa programu %s
podajte vrednost, ki ni enaka "%s".
 %s: vsebine podatkovnega imenika ni bilo mogo�e odstraniti
 %s: podatkovnega imenika ni bilo mogo�e odstraniti
 %s: datoteka "%s" ne obstaja
To pomeni, da program ni pravilno name��en, ali pa ste
z uporabo mo�nosti -E navedli napa�no lokacijo vhodnih datotek.
 %s: vhodna datoteka "%s" ne pripada PostgreSQL-u %s
Preverite, ali je program pravilno name��en, ali pa z uporabo mo�nosti -L
navedite pravilno pot do vhodnih datotek.
 %s: lokacija vhodnih datotek mora biti absolutna pot
 %s: "%s" ni veljavno ime podro�nih nastavitev 
 %s: da bi omogo�ili "%s" na�in avtentikacije, morate navesti geslo za superuser uporabnika.
 %s: podatkovni imenik ni naveden
Navesti morate imenik, kjer bodo shranjeni podatki za ta sistem podatkovnih baz.
To lahko storite z uporabo mo�nosti -D, ali z nastavitvijo okoljske spremenljivke PGDATA.
 %s: zmanjkalo je pomnilnika
 %s: ro�no vpisovanje gesla in navajanje datoteke z geslom nista zdru�ljiva
 %s: odstranjevanje vsebine podatkovnega imenika "%s"
 %s: odstranjevanje podatkovnega imenika "%s"
 %s: preve� argumentov na ukazni vrstici (prvi je "%s")
 %s: "%s" ni podprt na�in avtentikacije
 %s: opozorilo: neskladje kodnih tabel
 Ponovite vnos gesla:  Vpi�ite novo geslo za superuser uporabnika:  Gesli se ne ujemata.
 Ponovno po�enite %s z mo�nostjo -E.
 Izvajanje v "debug" na�inu.
 Izvajanje v "noclean" na�inu.  Posledice morebitnih napak ne bodo po�i��ene.
 Gru�a podatkovnih baz bo inicializirana s podro�nimi nastavitvami %s.
 Gru�a podatkovnih baz bo inicializirana s podro�nimi nastavitvami
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Privzeta stre�ni�ka kodna tabela je bila nastavljena na %s.
 Izbrana kodna tabela (%s) in kodna tabela izbranih podro�nih
nastavitev (%s) nista kompatibilni.  To lahko pripelje do nepravilnega
delovanja nekaterih funkcij za delo z nizi.  Da bi popravili to situacijo,
ponovno po�enite %s in pri tem ne navedite kodne tabele, ali pa izberite
ujemajo�o se kombinacijo.
 Lastnik datotek, ki pripadajo temu sistemu podatkovnih baz, bo uporabnik "%s".
Ta uporabnik mora biti tudi lastnik stre�ni�kega procesa.

 %s potrebuje program "postgres", vendar pa ta ni bil najden
v istem imeniku kot "%s".
Preverite, ali je program name��en pravilno.
 %s: program "postgres" je bil najden, vendar se njegova
razli�ica razlikuje od razli�ice programa "%s".
Preverite, ali je program pravilno name��en.
 Za ve� informacij poskusite "%s --help".
 Uporaba:
 ujet je bil signal
 podproces je zaklju�il izvajanje z izhodno kodo %d podproces je zaklju�il izvajanje z neznanim statusom %d podproces je bil pokon�an s signalom %d kopiranje template1 v template0 ... delovnega imenika ni bilo mogo�e spremeniti v "%s" izvr�ljive datoteke z imenom "%s" ni bilo mogo�e najti trenutnega imenika ni bilo mogo�e izvedeti: %s izvr�ljive datoteke "%s" ni bilo mogo�e prebrati simbolne povezave "%s" ni bilo mogo�e prebrati v podproces ni bilo mogo�e pisati: %s
 ustvarjanje konfiguracijskih datotek ... ustvarjanje pretvorb med kodnimi tabelami ... ustvarjanje imenika %s ... ustvarjanje imenika %s/%s ...  ustvarjanje sheme information_schema ... ustvarjanje sistemskih pogledov ... ustvarjanje podatkovne baze template1 v imeniku %s/base/1 ...  omogo�anje neomejene velikosti vrstic za sistemske tabele ... popravljanje dovoljenj na obstoje�em imeniku %s ...  inicializacija pg_depend ... inicializacija pg_shadow ... "%s" ni veljavna binarna datoteka nalaganje pg_description ... ok
 zmanjkalo je pomnilnika
 izbiranje privzete vrednosti max_connections ...  izbiranje privzete vrednosti shared_buffers ...  nastavljanje gesla ... nastavljanje pravic na vgrajenih objektih ... sesanje baze template1 ... 