��    a      $  �   ,      8  R   9     �  
   �  -   �  �   �  �   o	     
    ,
  J   L  5   �  J   �  6     P   O  C   �  :   �  4     B   T  H   �  >   �  9     3   Y  ?   �  /   �  -   �  E   +  y   q  (   �  7     (   L  3   u  '   �  5   �  -     -   5  /   c  "   �  6   �  �   �  0   �  $   �  �   �  ~   ~  1   �     /  J   M  �   �     `  D   s  -   �  !   �  4     ,   =     j     �     �     �     �     �  ;   	  9   E  �     >     0  O  u   �  q   �  f   h  &   �     �     �  &     0   4  )   e  #   �  "   �  (   �  !   �  %   !  !   G     i     �     �      �     �  -   �  2   &  0   Y     �     �     �     �     �  &   �  %        >  +   T  !   �  
  �  a   �           )   >   2   �   q   �   !  #   �!  �   �!  V   �"  0   ,#  E   ]#  3   �#  K   �#  I   #$  0   m$  4   �$  6   �$  E   
%  4   P%  /   �%  ,   �%  =   �%  *    &  +   K&  D   w&  }   �&  &   :'  2   a'  )   �'  9   �'  '   �'  H    (  1   i(  0   �(  .   �(  %   �(  <   !)  �   ^)  6   #*  ,   Z*  y   �*  �   +  8   �+     �+  E   �+  �   ,,     �,  ?   �,  /   5-  "   e-  0   �-  #   �-     �-     �-     .     0.  (   J.     s.  :   �.  @   �.  �   
/  <   �/    �/  �    1  v   �1  k   2  2   t2  
   �2     �2  -   �2  8   �2  /   +3  0   [3  "   �3  0   �3  0   �3  +   4  &   =4     d4     }4     �4  &   �4  "   �4  2    5  E   35  $   y5     �5     �5     �5     �5     �5  5   6  4   A6     v6  2   �6     �6            ?   U      W          V   &           
   R       Y   =   C       F   .   Q      \   <   ,   "      2   K               M      	             [   6   )       H                        $   `   :       G      ^      L              -      ]   7           S   /           3       (            5              a   D       X   +              9   P   #   E   >   N           A   T   J      %   8   ;           B   _                  @   Z   I                  O   *       1   4   0   !      '    
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to template0 ...  could not change directory to "%s" could not identify current directory: %s could not read symbolic link "%s" could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-cs
POT-Creation-Date: 2005-01-08 13:03+0000
PO-Revision-Date: 2005-01-12 15:24+0100
Last-Translator: toczek <xxxtoczekxxx@wp.pl>
Language-Team:
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
 
Je�li katalog nie jest wskazany wtedy u�ywana jest zmienna PGDATA
do okre�lenia tego� katalogu.
 
Rzadziej u�ywane opcje:
 
Opcje:
 
B��dy prosz� przesy�a� na adres <pgsql-bugs@postgresql.org>.
 
Utworzono. Teraz mo�esz uruchomi� serwer bazy danych u�ywaj�c:

    %s%s%s%spostmaster -D %s%s%s
lub
    %s%s%s%spg_ctl -D %s%s%s -l plik_z_logami start

 
UWAGA: metoda autoryzacji ustawiona jako "trust" dla po��cze�.
Metod� autoryzacji mo�esz zmieni� edytuj�c plik pg_hba.conf
lub u�ywaj�c opcji -A przy uruchomieniu initdb.
   %s [OPCJA]... [KATALOG-DOCELOWY]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            przygotowanie klastra bazy danych z podamymi
                            regu�ami j�zykowymi dla poszczeg�lnych kategori
   --locale=LOCALE			 przygotowanie klastra bazy danych z podanymi regu�ami j�zykowymi
  --no-locale			   r�wnowa�ne z opcj� --locale=C
   --pwfile=PLIK            czytaj has�o dla w�a�ciciela bazy z pliku
   -?, --help				poka� t� pomoc i zako�cz dzia�anie
   -A, --auth=METODA		 podstawowa metoda autoryzacji dla lokalnych po��cze�
   -E, --encoding=KODOWANIE   ustawia podstawowe kodowanie dla nowej bazy
   -L KATALOG				gdzie szuka� plik�w wej�ciowych
   -U, --username=NAZWA       w�a�ciciel bazy danych
   -V, --versin				poka� informacje o wersji i zako�cz
   -W, --pwprompt            pro� o has�o dla w�a�ciciela bazy danych
   -d, --debug				wy�wietlanie informacji debugger'a
   -n, --noclean				b��dy nie b�d� porz�dkowane
   -s, --show				poka� wewn�trzne ustawienia
  [-D, --pgdata=]KATALOG-DOCELOWY     lokalizacja bazy danych
 %s Przygotowanie bazy danych PostgreSQL.

 %s: "%s" nie jest poprawn� nazw� kodowania
 %s: Plik z has�em nie zosta� stworzony. Prosz� zg�osi� ten problem.
 %s: nie mo�na uruchomi� jako root
Prosz� zalogowa� (u�ywajac np: "su") si� na u�ytkownika kt�ry
b�dzie w�a�cicielem procesu.
 %s: brak dostepu do katalogu "%s": %s
 %s: nie mo�na zmieni� uprawnie� katalogu "%s": %s
 %s: nie mo�na utworzy� katalogu "%s": %s
 %s: nie mo�na ustali� poprawnego skr�conego opisu wersji
 %s: nie mo�na wykona� komendy "%s": %s
 %s: nie mo�na znale�� odpowiedniego kodowania dla regu� j�zykowych "%s"
 %s: nie mo�na otworzy� pliku "%s" do odczytu: %s
 %s: nie mo�na otworzy� pliku "%s" do zapisu: %s
 %s: nie mo�na odczyta� has�a z pliku "%s": %s
 %s: nie mo�na zapisa� pliku "%s": %s
 %s: katalog "%s" nie zosta� usuni�ty na �adanie u�ytkownika
 %s: katalog "%s" istnieje ale nie jest pusty
Je�li chcesz stworzy� now� baz� danych usu� ten katalog,
wyczy�� katalog "%s" lub uruchom program %s
z innym parametrem okre�laj�cym katalog ni� "%s".
 %s: nie uda�o si� usun�� zawarto�ci w katalogu danych
 %s: nie uda�o si� usuni�cie katalogu danych
 %s: plik "%s" nie istnieje
Oznacza to i� posiadasz uszkodzon� instalacj� lub wskaza�e�
z�y katalog przy u�yciu opcji -L.
 %s: plik wej�ciowy "%s" nie nale�y do bazy danych PostgreSQL %s
Sprawd� swoj� instalacj� lub podaj popraw� scie�k� przy pomocy zmiennej -L.
 %s: lokalizacja plik�w wej�ciowych musi by� bezwzgl�dna
 %s: b��dna nazwa lokalna "%s"
 %s: musisz poda� has�o superu�ytkownika aby aktywowa� %s autoryzacj�
 %s: nie ustawiony katalog danych
Musisz poda� katalog gdzie dane bazy danych b�d� przechowywane.
Mo�esz tego dokona� u�ywaj�c opcj� -D lub przy pomocy
zmiennej �rodowiskowej PGDATA.
 %s: brak pami�ci
 %s: podane has�o i plik has�a nie mog� by� podane jednocze�nie
 %s: usuwanie zawarto�ci w katalogu danych "%s"
 %s: usuwanie katalogu danych "%s"
 %s: za du�a ilo�� parametr�w (pierwszy to "%s")
 %s: b��dny spos�b autoryzacji "%s"
 %s: uwaga: b��dne kodowanie
 Powt�rz podane has�o:  Podaj has�o superu�ytkownika:  Podane has�a r�ni� si�.
 W��cz polecenie %s ponownie z opcj� -E.
 Dzia�anie w trybie debug.
 Dzia�anie w trybie nonclean. B��dy nie b�d� porz�dkowane.
 Klaster bazy zostanie utworzony z zestawem regu� j�zykowych %s.
 Klaster bazy danych zostanie utowrzony z zestawem regu� j�zykowych
  COLLATE: %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Podstawowe kodowanie bazy danych zosta�o ustawione jako %s.
 Kodowanie kt�re wybra�e� (%s) i kodowanie kt�re jest u�ywane przez
regu�y j�zykowe (%s) nie zgadzaj� si�. Mo�e to prowadzi�
do b��d�w w wielu funkcjach operuj�cuch na stringach.
Aby poprawi� ten b��d uruchom ponownie %s i albo nie ustawiaj kodowania
lub wybierz pasuj�c� kombinacj�.
 W�a�cicielem plik�w nale��cych do sytemu bazy danych b�dzie u�ytkownik "%s".
Ten u�ytkownik musi jednocze�nie by� w�a�cicielem procesu serwera.
 Program "postgres" jest wymagany przez %s ale nie zosta� znaleziony 
w tym samym folderze co "%s".
Sprawd� instalcj�.
 Program "postgres" zosta� znaleziony przez "%s"nale nie jest w tej samej wersji co %s.
Sprawd� instalacj�.
 Spr�buj "%s --help" aby uzyka� wiecej informacji.
 Sk�adnia:
 sygna� otrzymany
 proces potomny zako�czyl dzia�anie z kodem %d proces potomny zako�czy� dzia�anie z nieznanym stanem %d proces potomny zosta� przerwany przez sygna� %d kopiowanie bazy template1 do bazy template0 ...  nie mo�na zmieni� katalogu na "%s" nie mo�na zidentyfikowa� aktualnego katalogu: %s nie mo�na odczyta� odwo�ania symbolicznego  "%s" nie mo�na zapisa� do procesu potomnego: %s
 tworzenie plik�w konfiguracyjnych ...  tworzenie konwersji ...  tworzenie katalogu %s ...  tworzenie katalogu %s/%s ...  tworzenie schematu informacyjnego ...  tworzenie widok�w systemowych ...  tworzenie bazy template1 w folderze %s/base/1 ...  umo�liwienie niesko�czonego rozmiaru wiersza w tabeli systemowej ...  ustalanie uprawnie� katalogu %s ...  przygotowywanie pg_depend ...  przygotowywanie pg_shadow ...  �adowanie pg_decription ...  ok
 brak pami�ci
 wybieranie standardowej warto�ci max_connections ...  wybieranie standardowej warto�ci shared_buffers ...  ustawianie has�a ...  ustawianie uprawnie� dla wbudowanych obiekt�w ...  czyszczenie bazy template1 ...  