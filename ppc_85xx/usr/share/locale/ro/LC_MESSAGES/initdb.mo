��    l      |  �   �      0	  R   1	     �	  
   �	  -   �	  �   �	  �   g
         $  J   D  5   �  J   �  6     P   G  C   �  :   �  4     B   L  H   �  >   �  9     3   Q  ?   �  /   �  -   �  E   #  y   i  (   �  7     (   D  3   m  '   �  5   �  -   �  -   -  /   [  "   �  6   �  �   �  0   �  $   �  �   �  ~   v  1   �     '  J   E  �   �     X  D   k  -   �  !   �  4      ,   5     b     �     �     �     �     �  ;     9   =  �   w  >     0  G  u   x  q   �  f   `  &   �     �     �  &     0   ,  )   ]     �  &   �  "   �  #   �  "         8  (   Y  "   �     �  "   �  !   �  .     ,   4  6   a  %   �  !   �     �     �           3     T  -   o  2   �  0   �                  <      P      l      p   &      3   �      �   +   �   !   !  U  >!  V   �"     �"  
   	#  3   #  �   H#  �   �#     �$    �$  U   �%  5   &  X   L&  F   �&  X   �&  T   E'  9   �'  L   �'  M   !(  Q   o(  =   �(  8   �(  6   8)  F   o)  6   �)  ;   �)  F   )*  �   p*  -   �*  I   *+  +   t+  ;   �+  *   �+  F   ,  9   N,  :   �,  4   �,  )   �,  M   "-  �   p-  6   !.  &   X.  �   .  �   /  A   �/  %   �/  f   �/  �   _0     51  M   O1  4   �1  $   �1  @   �1  /   82  +   h2     �2  9   �2     �2     �2     3  9   23  <   l3  �   �3  P   =4  >  �4  �   �5  u   U6  d   �6  3   07     d7     p7      �7  /   �7  +   �7  %   8  .   (8  "   W8  #   z8  (   �8  (   �8  .   �8  )   9     I9  '   g9  *   �9  ?   �9  *   �9  F   %:  '   l:  "   �:     �:     �:     �:       ;     !;  /   @;  ?   p;  7   �;     �;     <     !<     5<     S<     W<  7   m<  D   �<     �<  3   �<  "   1=         T   6      ;                                                @                  L   k   U      3   2   ,   F   >       H   N   X   '   M              a          f   5       h             <                 4       !   Q   Y          V   ]   8   I       [                 b   S   d   \   +      *          G   j   :   O   J              1      -   l   D       _   E   C   7   .       
   i   ^              #          c      %       &       K   `   B         Z   $   e   (             	   /       g   0      9           P   ?       R       W   A   )   =      "    
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

    %s%s%spostmaster%s -D %s%s%s
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
 could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing dependencies ...  initializing pg_authid ...  invalid binary "%s" loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-ro
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-01-24 15:25+0100
PO-Revision-Date: 2006-02-05 17:46+0200
Last-Translator: Alin Vaida <alin.vaida@gmail.com>
Language-Team: Rom�n� <en@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.2
 
Dac� nu este specificat directorul de date, este folosit� variabila de mediu PGDATA.
 
Op�iuni mai pu�in folosite:
 
Op�iuni:
 
Raporta�i erorile la <pgsql-bugs@postgresql.org>.
 
Succes. Acum pute�i porni serverul de baze de date folosind:

    %s%s%s/postmaster%s -D %s%s%s
sau
    %s%s%s/pg_ctl%s -D %s%s%s -l fi�ier_jurnal start

 
AVERTISMENT: activare autentificare "trust" pentru conexiunile locale
Pute�i modifica acest lucru edit�nd pg_hba.conf sau folosind op�iunea -A
la urm�toarea rulare a initdb.
   %s [OP�IUNE]... [DIRDATE]
   --lc-collate, --lc-ctype, --lc-messages=LOCALIZARE
  --lc-monetary, --lc-numeric, --lc-time=LOCALIZARE
                            ini�ializeaz� grupul de baze de date cu localizarea dat�
                            �n categoria respectiv� (implicit, luat� din mediu)
   --locale=LOCALIZARE       ini�ializeaz� grupul de baze de date cu localizarea dat�
   --no-locale               echivalent cu --locale=C
   --pwfile=FI�IER           citire parol� pentru noul utilizator privilegiat din fi�ier
   -?, --help                afi�eaz� acest mesaj de ajutor, apoi iese
   -A, --auth=METOD�         metoda de autentificare implicit� pentru conexiunile locale
   -E, --encoding=CODIFICARE seteaz� codificarea implicit� pentru bazele de date noi
   -L DIRECTOR               loca�ia fi�ierele de intrare
   -U, --username=NUME       nume utilizator privilegiat pentru baza de date
   -V, --version             afi�eaz� informa�iile despre versiune, apoi iese
   -W, --pwprompt            solicitare parol� pentru noul utilizator privilegiat
   -d, --debug               genereaz� mesaje pentru depanare
   -n, --noclean             nu se face curat dup� erori
   -s, --show                afi�eaz� set�rile interne
  [-D, --pgdata=]DIRDATE     loca�ia pentru acest grup de baze de date
 %s ini�ializeaz� un grup de baze de date PostgreSQL.

 %s: "%s" nu este un nume valid de codificare pentru server
 %s: Fi�ierul de parole nu a fost generat. Raporta�i aceast� problem�.
 %s: nu poate fi rulat ca root
Autentifica�i-v� (folosind, de exempu, "su") ca utilizatorul (neprivilegiat)
care va de�ine procesul server.
 %s: imposibil de accesat directorul "%s": %s
 %s: imposibil de schimbat drepturile de acces pentru directorul "%s": %s
 %s: imposibil de creat directorul "%s": %s
 %s: imposibil de determinat �irul scurt de versiune corect
 %s: imposibil de executat comanda"%s": %s
 %s: imposibil de g�sit o codificare potrivit� pentru localizarea "%s"
 %s: imposibil de deschis fi�ierul "%s" pentru citire: %s
 %s: imposibil de deschis fi�ierul "%s" pentru scriere: %s
 %s: imposibil de citit parola din fi�ierul "%s": %s
 %s: imposibil de scris fi�ierul "%s": %s
 %s: directorul de date "%s" nu a fost eliminat la solicitarea utilizatorului
 %s: directorul "%s" exist�, dar nu este gol
Dac� dori�i s� crea�i un nou sistem de baze de date, elimina�i sau goli�i
directorul "%s" sau rula�i %s
cu alt argument dec�t "%s".
 %s: eliminare con�inut al directorului de date e�uat�
 %s: eliminare director de date e�uat�
 %s: fi�ierul "%s" nu exist�
Acest lucru �nseamn� c� ave�i o instalare corupt� sau c� a�i specificat
un director gre�it pentru op�iunea -L.
 %s: fi�ierul de intrare "%s" nu apar�ine de PostgreSQL %s
Verifica�i instalarea sau specifica�i calea corect� folosind op�iunea -L.
 %s: loca�ia fi�ierului de intrare trebuie s� fie o cale absolut�
 %s: nume de localizare incorect "%s"
 %s: trebuie s� specifica�i o parol� pentru utilizatorul privilegiat pentru a activa autentificarea %s
 %s: nici un director de date specificat
Trebuie s� identifica�i un director �n care vor sta datele pentru acest sistem
de baze de date.  Pute�i face acest lucru folosind op�iunea -D sau
variabila de mediu PGDATA.
 %s: memorie insuficient�
 %s: solicitarea parolei �i fi�ierul de parole nu pot fi specificate �mpreun�
 %s: eliminare con�inut al directorului de date "%s"
 %s: eliminare director de date "%s"
 %s: prea multe argumente �n linia de comand� (primul este "%s")
 %s: metod� de autentificare nerecunoscut� "%s"
 %s: avertisment: nepotrivire de codificare
 Introduce�i din nou:  Introduce�i noua parol� pentru utilizatorul privilegiat:  Parola nu se verific�
 Re-rula�i %s cu op�iunea -E.
 Rulare �n mod depanare.
 Rulare �n mod "noclean".  Gre�elile nu vor fi corectate.
 Grupul de baze de date va fi ini�ializat cu localizarea %s.
 Grupul de baze de date va fi ini�ializat cu localiz�rile
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Codificarea implicit� a bazei de date a fost setat� �n mod corespunz�tor la %s.
 Codificarea selectat� (%s) �i codificarea folosit� de localizarea selectat� (%s)
nu se potrivesc.  Acest lucru poate genera probleme �n diverse 
func�ii de prelucrare a �irurilor de caractere.  Pentru a remedia situa�ia,
rula�i %s din nou �i fie nu specifica�i nici o codificare, fie selecta�i
o combina�ie potrivit�.
 Fi�ierele acestui sistem de baze de date vor apar�ine utilizatorului "%s".
Acest utilizator trebuie s� de�in� �i procesul serverului.

 Programul "postgres" este necesar pentru %s, dar nu a fost g�sit
�n acela�i director cu "%s".
Verifica�i instalarea.
 Pogramul "postgres" a fost g�sit de "%s",
dar nu are aceea�i versiune ca %s.
Verifica�i instalarea.
 �ncerca�i "%s --help" pentru mai multe informa�ii.
 Utilizare:
 interceptare semnal
 procesul fiu a ie�it cu codul %d procesul fiu a ie�it cu starea nerecunoscut� %d procesul fiu a fost terminat cu semnalul %d eliminarea fi�ierului "%s" terminat�
 redenumirea fi�ierului "%s" �n "%s" terminat�
 copiere template1 �n postgres ...  copiere template1 �n template0 ...  imposibil de schimbat directorul �n "%s" imposibil de g�sit "%s" pentru executare imposibil de identificat directorul curent: %s imposibil de deschis directorul "%s": %s
 imposibil de citit binar "%s" imposibil de citit directorul "%s": %s
 imposibil de citit leg�tura simbolic� "%s" imposibil de eliminat fi�ierul "%s", se �ncearc� �n continuare
 imposibil de eliminat directorul "%s": %s
 imposibil de redenumit fi�ierul "%s" �n %s, se �ncearc� �n continuare
 imposibil de scris �n procesul fiu: %s
 creare fi�iere de configurare ...  creare conversii ...  creare director %s ...  creare director %s/%s ...  creare schem� de informa�ii ...  creare vizualiz�ri sistem ...  creare baz� de date template1 �n %s/base/1 ...  activare dimensiune r�nd nelimitat� pentru tabelele sistem ...  stabilire permisiuni pentru directorul existent %s ...  ini�ializare dependin�e ...  ini�ializare pg_authid ...  binar incorect "%s" �nc�rcare pg_description ...  ok
 memorie insuficient�
 selectare valoare implicit� pentru max_connections ...  selectare valoare implicit� pentru shared_buffers/max_fsm_pages ...  setare parol� ...  setare privilegii pentru obiectele predefinite ...  vidare baz� de date template1 ...  