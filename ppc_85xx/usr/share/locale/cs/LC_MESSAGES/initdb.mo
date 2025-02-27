��    T      �  q   \         R   !     t  
   �  -   �  �   �  �   U     �    	  J   2
  5   }
  J   �
  6   �
  P   5  C   �  :   �  4     B   :  H   }  >   �  9     3   ?  ?   s  /   �  -   �  E     y   W  3   �  5     -   ;  -   i  /   �  6   �  �   �     �  �   �  ~   E  1   �     �  J     �   _     '  D   :  -     !   �  4   �  ,        1     Q     b     �     �     �  ;   �  9     �   F  >   �  0    u   G  q   �  f   /  &   �     �     �  #   �  !   �  !        <     V     q      �     �  -   �  2   �  0   ,     ]     y     �     �  &   �  %   �       +     !   D  -  f  O   �  !   �       5     �   I  �   �     �  1  �  K   �  2   !   K   T   =   �   K   �   K   *!  <   v!  >   �!  B   �!  I   5"  ?   "  /   �"  3   �"  A   ##  1   e#  *   �#  J   �#  �   $  0   �$  <   �$  ,   !%  ,   N%  -   {%  <   �%  �   �%     �&  �   �&  }   /'  :   �'  5   �'  G   (  �   f(     )  D   ,)  ,   q)  #   �)  =   �)  &    *  (   '*     P*  '   c*     �*  "   �*     �*  9   �*  ?   +  �   T+  K   �+  <  6,     s-  {   �-  l   o.  '   �.  	   /     /  $   /  "   C/  !   f/     �/     �/     �/     �/     �/  ,   0  ;   C0  1   0     �0     �0     �0     1  /   
1  .   :1     i1  .   ~1  )   �1     +   C   2   .   4          K       <   N   J   I   >            Q   -             L      1      "           8           :   ,   !                 6   	   E              P                    $   ?       *       #         
   M   A   0          D   =      9   5   H   T                   B      O   )              3       S   7      (   '   /   G       R   %      &                     ;   F                   @            
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
 copying template1 to template0 ...  could not write to child process
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  loading pg_description ...  ok
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-cs
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-10-27 14:06+0200
PO-Revision-Date: 2004-10-27 14:25+0200
Last-Translator: 
Language-Team:  <cs@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3.1
 
Pokud nen� specifikov�n datov� adres��, pou�ije se prom�nn�
prost�ed� PGDATA.
 
M�n� �asto pou��van� p�ep�na�e:
 
P�ep�na�e:
 
Chyby hlaste na adresu <pgsql-bugs@postgresql.org>.
 
Povedlo se. M��ete za��t pou��vat datab�zov� server spu�t�n�m:

    %s%s%s/postmaster -D %s%s%s
nebo
    %s%s%s/pg_ctl -D %s%s%s -l soubor_logu start

 
VAROV�N�: zap�n�m "trust" autentizaci pro lok�ln� spojen�
Toto m��ete zm�nit �pravou souboru pg_hba.conf nebo pou�it�m
parametru -A p�i p���t�m spu�t�n� initdb.
   %s [P�EP�NA�]... [DATAADR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            inicializuj klastr s dan�m n�rodn�m nastaven�m
                            v p��slu�n�ch kategori�ch (v�choz� hodnoty se 
                            vezmou z nastaven� prost�ed�)
   --locale=LOCALE           inicializuj klastr s t�mto n�rodn�m nastaven�m
   --no-locale               ekvivalent --locale=C
   --pwfile=SOUBOR         na�ti heslo pro nov�ho superu�ivatele ze souboru
   -?, --help                uka� tuto n�pov�du, potom skon�i
   -A, --auth=METODA         v�choz� autentiza�n� metoda pro lok�ln�spojen�
   -E, --encoding=K�DOV�N�   nastaven� v�choz�ho k�dov�n� pro nov� datab�ze
   -L DIRECTORY              kde se nal�zaj� vstupn� soubory
   -U, --username=JM�NO      jm�no datab�zov�ho superu�ivatele
   -V, --version             vypi� informace o verzi, potom skon�i
   -W, --pwprompt            zeptej se na heslo pro nov�ho superu�ivatele
   -d, --debug               generuj spoustu ladic�ch informac�
   -n, --noclean             neukl�zet po chyb�
   -s, --show                uka� intern� nastaven�
  [-D, --pgdata=]DATAADR     um�st�n� tohoto datab�zov�ho klastru
 %s inicializuji prostor pro PostgreSQL.datab�ze

 %s: "%s" nen� platn� n�zev k�dov�n� znak�
 %s: Soubor s hesly nebyl vytvo�en. Pros�me oznamte tento probl�m tv�rc�m.
 %s: nem��e b�et pod u�ivatelem root
Pros�m p�ihlaste se jako (neprivilegovan�) u�ivatel, kter� bude vlastn�kem
serverov�ho procesu (nap��klad pomoc� p��kazu "su").
 %s: nemohu zjistit platn� kr�tk� ozna�en� verze
 %s: nemohu naj�t vhodn� k�dov�n� pro n�rodn� nastaven� "%s"
 %s: nelze otev��t soubor "%s" pro �ten�: %s
 %s: nelze otev��t soubor "%s" pro z�pis: %s
 %s: nemohu p�e��st heslo ze souboru "%s": %s
 %s: datov� adres�� "%s" nebyl na ��dost u�ivatele odstran�n
 %s: adres�� "%s" existuje, ale nen� pr�zdn�
Pokud chcete v tomto adres��i inicializovat datab�zi, odstra�te nebo
vypr�zdn�te adres�� "%s" nebo spus�te %s
s argumentem jin�m ne� "%s".
 %s: selhalo
 %s: soubor "%s" neexistuje
To znamen�, �e va�e instalace je po�kozena, nebo jste
zadal chybn� adres�� v parametru -L p�i spu�t�n�.
 %s: vstupn� soubor "%s" nepat�� PostgreSQL %s
Zkontrolujte si va�i instalaci nebo zadejte platnou cestu pomoc�
parametru -L.
 %s: cesta k um�st�n� vstupn�ho souboru mus� b�t absolutn�
 %s: neplatn� n�zev n�rodn�ho nastaven� (locale) "%s"
 %s: mus�te zadat heslo superu�ivatele pro pou�it� autentizace typu %s.
 %s: nen� zad�n datov� adres��
Mus�te zadat adres��, ve kter�m se bude nach�zet tato datab�ze.
U�i�te tak bu� pou�it�m p�ep�na�e -D nebo nastaven�m prom�nn�
prost�ed� PGDATA.
 %s: nedostatek pam�ti
 %s:dotaz na heslo a soubor s heslem nemohou b�t vy�adov�ny najednou
 %s: odstra�uji obsah datov�ho adres��e "%s"
 %s: odstra�uji datov� adres�� "%s"
 %s: p��li� mnoho argument� v p��kazov� ��dce (prvn� je "%s")
 %s: nezn�m� autentiza�n� metoda "%s".
 %s: varov�n�: nesouhlas� k�dov�n� znak�
 Zadejte ho znovu:  Zadejte nov� heslo pro superu�ivatele:  Hesla nesouhlas�.
 Spus�te znovu %s s p�ep�na�em -E.
 B��m v ladic�m re�imu.
 B��m v ne�ist�m re�imu.  Chybn� kroky nebudou uklizeny.
 Datab�zov� klastr bude inicializov�n s n�rodn�m nastaven�m %s.
 Datab�zov� klastr bude inicializov�n s n�rodn�m nastaven�m
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 V�choz� k�dov�n� pro datab�ze bylo odpov�daj�c�m zp�sobem nastaveno na %s.
 Vybran� k�dov�n� znak� (%s) a k�dov�n� pou�it� vybran�m
n�rodn�m nastaven�m (%s) si neodpov�daj�. To m��e v�st k neo�ek�van�mu
chov�n� r�zn�ch funkc� pro manipulaci s �et�zci. Pro opravu t�to situace
spus�te znovu %s a bu� nespecifikujte k�dov�n� znak� explicitn�, nebo
vyberte takovou kombinaci, kter� si odpov�d�.
 Soubory pat��c� k t�to datab�zi budou vlastn�ny u�ivatelem "%s".
Tento u�ivatel mus� b�t tak� vlastn�kem serverov�ho procesu.

 Program "postgres" je vy�adov�n aplikac� %s, ale nebyl nalezen ve stejn�m
adres��i jako "%s".
Zkontrolujte va�i instalaci.
 Program "postgres" byl nalezen pomoc� "%s",
ale nebyl ve stejn� verzi jako %s.
Zkontrolujte va�i instalaci.
 Zkuste "%s --help" pro v�ce informac�.
 Pou�it�:
 sign�l obdr�en
 kop�ruji template1 do template0 ...  nemohu zapsat do d�tsk�ho procesu
 vytv���m konfigura�n� soubory ... vytv���m konvertory ...  vytv���m adres�� %s ...  vytv���m adres�� %s/%s ...  vytv���m informa�n� sch�ma ...  vytv���m syst�mov� pohledy ...  vytv���m datab�zi template1 v %s/base/1 ...  zap�n�m neomezenou velikost ��dku pro syst�mov� tabulky ... opravuji opr�vn�n� pro existuj�c� adres�� %s ...  inicializuji pg_depend ...  inicializuji pg_shadow ...  vytv���m pg_description ...  ok
 vyb�r�m z�kladn� nastaven� max_connections ...  vyb�r�m z�kladn� nastaven� shared_buffers ...  nastavuji heslo ...  nastavuji opr�vn�n� pro vestav�n� objekty ...  pou�t�m VACUUM na datab�zi template1 ...  