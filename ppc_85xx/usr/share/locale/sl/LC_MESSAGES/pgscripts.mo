��    {      �  �   �      h
  K   i
     �
  ^   �
  
   *  >   5  =   t  -   �     �  #   �       (   8     a  <   ~  9   �  6   �  H   ,  E   u  B   �  6   �  9   5  C   o  9   �  4   �  H   "  ;   k  E   �  :   �  9   (  7   b  4   �  L   �  J     3   g  0   �  ;   �  3     7   <  2   t  :   �  5   �  G     0   `  <   �  M   �  J     G   g  4   �  H   �  E   -  <   s  6   �  I   �  4   1  1   f  ;   �  8   �  5     =   C  8   �  8   �  9   �  /   -  <   ]  #   �  #   �  ?   �  #   "     F  3   f  &   �  5   �  E   �  4   =  D   r     �  *   �  8      6   9  %   p  (   �  (   �  8   �  #   !      E     f  8   �  4   �  $   �       ,   9  ,   f     �     �  #   �  G   �  4   '     \  &   {     �  )   �  7   �     !  +   6     b     s     �     �     �  
   �     �     �  9      >   B   P   �      �   &   �      !  '   
!     2!     4!     7!     9!  �  =!  Z   �"     6#  r   L#     �#  2   �#  1   �#  :   0$     k$  (   �$     �$  $   �$  $   �$  H   %  E   a%  B   �%  R   �%  O   =&  L   �&  I   �&  L   $'  D   q'  =   �'  5   �'  T   *(  :   (  K   �(  ?   )  T   F)  ;   �)  8   �)  L   *  I   ]*  0   �*  -   �*  9   +  C   @+  <   �+  K   �+  H   ,  >   V,  M   �,  V   �,  F   :-  C   �-  @   �-  =   .  ;   D.  ^   �.  S   �.  >   3/  >   r/  G   �/  <   �/  9   60  >   p0  ;   �0  8   �0  ?   $1  L   d1  0   �1  A   �1  3   $2  c   X2  +   �2  *   �2  ;   3  '   O3  $   w3  2   �3  &   �3  R   �3  g   I4  <   �4  P   �4  5   ?5  B   u5  P   �5  K   	6  2   U6  5   �6  <   �6  @   �6  /   <7  +   l7  .   �7  3   �7  0   �7  #   ,8  '   P8  '   x8  )   �8     �8      �8  0   9  Y   89  7   �9     �9  .   �9     :  ,   3:  :   `:     �:  *   �:  $   �:     ;  1   &;  $   X;     };     �;     �;     �;  F   �;  K   �;  I   F<     �<  )   �<  	   �<  %   �<     �<     �<     �<     �<            r   X   j              M   A   K   V   {           "   (   ?       )       =   O   T   ,          v      U               >   &   J   !           g             p   	       7          [           Y   x       Z         ;   /   a       E           B   q   2              D   c   P   t   z       '       w   5       R   4   #   1      n   N   :   y   Q   $   .                 u               3       <          o   W                +   S   G   L   %      ^   ]   9           b   6   s   f   I                   m   _      \   `          -   l           0   h       i   k   H   F       *       
   C      @   e         d   8           
By default, a database with the same name as the current user is created.
 
Connection options:
 
If one of -a, -A, -d, -D, and USERNAME is not specified, you will
be prompted interactively.
 
Options:
 
Read the description of the SQL command CLUSTER for details.
 
Read the description of the SQL command VACUUM for details.
 
Report bugs to <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [USERNAME]
   --help                          show this help, then exit
   --help                       show this help, then exit
   --help                    show this help, then exit
   --version                       output version information, then exit
   --version                    output version information, then exit
   --version                 output version information, then exit
   -A, --no-adduser          user cannot add new users
   -D, --no-createdb         user cannot create databases
   -D, --tablespace=TABLESPACE  default tablespace for the database
   -E, --encoding=ENCODING      encoding for the database
   -E, --encrypted           encrypt stored password
   -L, --pglib=DIRECTORY     find language interpreter file in DIRECTORY
   -N, --unencrypted         do not encrypt stored password
   -O, --owner=OWNER            database user to own the new database
   -P, --pwprompt            assign a password to new user
   -T, --template=TEMPLATE      template database to copy
   -U, --username=USERNAME      user name to connect as
   -U, --username=USERNAME   user name to connect as
   -U, --username=USERNAME   user name to connect as (not the one to create)
   -U, --username=USERNAME   user name to connect as (not the one to drop)
   -W, --password               prompt for password
   -W, --password            prompt for password
   -W, --password            prompt for password to connect
   -a, --adduser             user can add new users
   -a, --all                       vacuum all databases
   -a, --all                 cluster all databases
   -d, --createdb            user can create new databases
   -d, --dbname=DBNAME             database to vacuum
   -d, --dbname=DBNAME       database from which to remove the language
   -d, --dbname=DBNAME       database to cluster
   -d, --dbname=DBNAME       database to install language in
   -e, --echo                      show the commands being sent to the server
   -e, --echo                   show the commands being sent to the server
   -e, --echo                show the commands being sent to the server
   -f, --full                      do full vacuuming
   -h, --host=HOSTNAME          database server host or socket directory
   -h, --host=HOSTNAME       database server host or socket directory
   -i, --interactive         prompt before deleting anything
   -i, --sysid=SYSID         select sysid for new user
   -l, --list                show a list of currently installed languages
   -p, --port=PORT              database server port
   -p, --port=PORT           database server port
   -q, --quiet                     don't write any messages
   -q, --quiet                  don't write any messages
   -q, --quiet               don't write any messages
   -t, --table='TABLE[(COLUMNS)]'  vacuum specific table only
   -t, --table=TABLE         cluster specific table only
   -v, --verbose                   write a lot of output
   -z, --analyze                   update optimizer hints
 %s cleans and analyzes a PostgreSQL database.

 %s clusters all previously clustered tables in a database.

 %s creates a PostgreSQL database.

 %s creates a new PostgreSQL user.

 %s installs a procedural language into a PostgreSQL database.

 %s removes a PostgreSQL database.

 %s removes a PostgreSQL user.

 %s removes a procedural language from a database.

 %s: "%s" is not a valid encoding name
 %s: cannot cluster a specific table in all databases
 %s: cannot cluster all databases and a specific one at the same time
 %s: cannot vacuum a specific table in all databases
 %s: cannot vacuum all databases and a specific one at the same time
 %s: clustering database "%s"
 %s: clustering of database "%s" failed: %s %s: clustering of table "%s" in database "%s" failed: %s %s: comment creation failed (database was created): %s %s: could not connect to database %s
 %s: could not connect to database %s: %s %s: could not get current user name: %s
 %s: could not obtain information about current user: %s
 %s: creation of new user failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
 %s: language "%s" is not installed in database "%s"
 %s: language installation failed: %s %s: language removal failed: %s %s: missing required argument database name
 %s: missing required argument language name
 %s: query failed: %s %s: query was: %s
 %s: removal of user "%s" failed: %s %s: still %s functions declared in language "%s"; language not removed
 %s: too many command-line arguments (first is "%s")
 %s: unsupported language "%s"
 %s: user ID must be a positive number
 %s: vacuuming database "%s"
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? (y/n)  Database "%s" will be permanently removed.
 Enter it again:  Enter name of user to add:  Enter name of user to drop:  Enter password for new user:  Name Password:  Passwords didn't match.
 Procedural Languages Shall the new user be allowed to create databases? (y/n)  Shall the new user be allowed to create more new users? (y/n)  Supported languages are plpgsql, pltcl, pltclu, plperl, plperlu, and plpythonu.
 Trusted? Try "%s --help" for more information.
 Usage:
 User "%s" will be permanently removed.
 n no y yes Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2003-10-05 19:36+0200
PO-Revision-Date: 2004-11-09 22:44+0100
Last-Translator: Aleksander Kmetec <aleksander.kmetec@intera.si>
Language-Team: Slovenian <aleksander.kmetec@intera.si>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
X-Poedit-Language: Slovenian
X-Poedit-Country: SLOVENIA
X-Generator: KBabel 1.3.1
 
�e ni podano druga�e, bo ime ustvarjene baze podatkov enako imenu trenutnega uporabnika.
 
Povezavne mo�nosti:
 
�e katera izmed mo�nosti -a, -A, -d, -D, in UPORABNI�KO_IME ni podana,
vas bo program samodejno vpra�al po njej.
 
Mo�nosti:
 
Za podrobnosti preberite opis SQL ukaza CLUSTER.
 
Za podrobnosti preberite opis SQL ukaza VACUUM.
 
Napake sporo�ajte na naslov <pgsql-bugs@postgresql.org>.
   %s [MO�NOST]... IME_BAZE
   %s [MO�NOST]... IME_JEZIKA [IME_BAZE]
   %s [MO�NOST]... [IME_BAZE]
   %s [MO�NOST]... [IME_BAZE] [OPIS]
   %s [MO�NOST]... [UPORABNI�KO_IME]
   --help                          prika�i to pomo�, nato kon�aj program
   --help                       prika�i to pomo�, nato kon�aj program
   --help                    prika�i to pomo�, nato kon�aj program
   --version                       izpi�i podatke o razli�ici, nato kon�aj program
   --version                    izpi�i podatke o razli�ici, nato kon�aj program
   --version                 izpi�i podatke o razli�ici, nato kon�aj program
   -A, --no-adduser          uporabnik ne more dodajati novih uporabnikov
   -D, --no-createdb         uporabnik ne more ustvarjati novih baz podatkov
   -D, --tablespace=TABLESPACE  privzeti tablespace za bazo podatkov
   -E, --encoding=ENCODING      kodna tabela za bazo podatkov
   -E, --encrypted           �ifriraj shranjeno geslo
   -L, --pglib=IMENIK        datoteko z razlagalcem jezika poi��i v podanem IMENIK-u
   -N, --unencrypted         ne �ifriraj shranjenega gesla
   -O, --owner=LASTNIK          uporabnik, ki bo lastnik nove baze podatkov
   -P, --pwprompt            vpra�aj za geslo novega uporabnika
   -T, --template=PREDLOGA      predloga, po kateri bo ustvarjena nova baza podatkov
   -U, --username=USERNAME      uporabni�ko ime za povezavo
   -U, --username=USERNAME   uporabni�ko ime za povezavo
   -U, --username=UPORABNIK  uporabni�ko ime za povezavo (ne za ustvarjanje)
   -U, --username=USERNAME   uporabni�ko ime za povezavo (ne za brisanje)
   -W, --password               vpra�aj za geslo
   -W, --password            vpra�aj za geslo
   -W, --password            vpra�aj po geslu za povezavo
   -a, --adduser             uporabnik lahko dodaja nove uporabnike
   -a, --all                       posesaj vse baze podatkov
   -a, --all                 skupine podatkov ustvari v vseh bazah podatkov
   -d, --createdb            uporabnik lahko ustvarja nove baze podatkov
   -d, --dbname=IME_BAZE           baza, ki jo �elite posesati
   -d, --dbname=DBNAME       baza podatkov, iz katere naj bo jezik odstranjen
   -d, --dbname=IME_BAZE     baza podatkov, v kateri se naj ustvarijo skupine podatkov
   -d, --dbname=IME_BAZE     baza podatkov, v katero bo jezik name��en
   -e, --echo                      prika�i ukaze, poslane stre�niku
   -e, --echo                   prika�i ukaze, poslane stre�niku
   -e, --echo                prika�i ukaze, poslane stre�niku
   -f, --full                      opravi temeljito sesanje
   -h, --host=GOSTITELJ         gostitelj podatkovnega stre�nika ali pot do imenika z vti�nico
   -h, --host=GOSTITELJ      gostitelj podatkovnega stre�nika ali imenik z vti�nico
   -i, --interactive         pred brisanjem zahtevaj potrditev
   -i, --sysid=SYSID         dolo�i sysid za novega uporabnika
   -l, --list                prika�i seznam trenutno name��enih jezikov
   -p, --port=VRATA             vrata podatkovnega stre�nika
   -p, --port=VRATA          vrata podatkovnega stre�nika
   -q, --quiet                     ne izpisuj nobenih sporo�il
   -q, --quiet                  ne izpisuj nobenih sporo�il
   -q, --quiet               ne izpisuj nobenih sporo�il
   -t, --table='TABELA[(STOLPCI)]' posesaj samo dolo�eno tabelo
   -t, --table=TABELA        skupine podatkov ustvari samo v dolo�eni tabeli
   -v, --verbose                   ob�irni izpis
   -z, --analyze                   posodobi namige za optimizator
 %s po�isti in analizira PostgreSQL bazo podatkov.

 %s obnovi skupine podatkov v vseh tabelah, v katerih so skupine �e bile ustvarjene v preteklosti.

 %s ustvari novo PostgreSQL bazo podatkov.

 %s ustvari novega PostgreSQL uporabnika.

 %s namesti proceduralni jezik v PostgreSQL bazo podatkov.

 %s odstrani PostgreSQL bazo podatkov.

 %s odstrani PostgreSQL uporabnika.

 %s odstrani proceduralni jezik iz baze podatkov.

 %s: "%s" ni veljavno ime kodne tabele
 %s: ustvarjanje skupin podatkov v dolo�eni tabeli v vseh bazah podatkov ni mogo�e
 %s: isto�asno ni mogo�e ustvariti skupin podatkov v vseh podatkovnih bazah in samo to�no dolo�eni bazi
 %s: sesanje dolo�ene tabele v vseh bazah podatkov ni mogo�e
 %s: isto�asno ni mogo�e sesati vseh podatkovnih baz in samo to�no dolo�ene baze
 %s: ustvarjanje skupin podatkov v bazi podatkov "%s"
 %s: ustvarjanje skupin podatkov v bazi podatkov "%s" ni uspelo: %s %s: ustvarjanje skupin podatkov v tabeli "%s" v bazi podatkov "%s" ni uspelo: %s %s: ustvarjanje komentarja ni uspelo (baza podatkov je bila ustvarjena): %s %s: z bazo podatkov %s se ni bilo mogo�e povezati
 %s: z bazo podatkov %s se ni bilo mogo�e povezati: %s %s: imena trenutnega uporabnika ni bilo mogo�e izvedeti: %s
 %s: podatkov o trenutnem uporabniku ni bilo mogo�e izvedeti: %s
 %s: ustvarjanje novega uporabnika ni uspelo: %s %s: ustvarjanje baze podatkov ni uspelo: %s %s: odstranjevanje baze podatkov ni uspelo: %s %s: jezik "%s" je v bazi podatkov "%s" �e name��en
 %s: jezik "%s" v bazi podatkov "%s" ni name��en
 %s: namestitev jezika ni uspela: %s %s: odstranjevanje jezika ni uspelo: %s %s: manjka zahtevan argument: ime baze
 %s: manjka zahtevan argument: ime jezika
 %s: poizvedba ni uspela: %s %s: poizvedba se je glasila: %s
 %s: odstranjevanje uporabnika "%s" ni uspelo: %s %s: �e vedno obstajajo funkcije (%s), ki uporabljajo jezik "%s"; jezik ni bil odstranjen
 %s: preve� argumentov na ukazni vrstici (prvi je "%s")
 %s: "%s" ni podprt jezik
 %s: ID uporabnika mora biti pozitivno �tevilo
 %s: sesanje baze podatkov "%s"
 %s: sesanje baze podatkov "%s" ni uspelo: %s %s: sesanje tabele "%s" v bazi podatkov "%s" ni uspelo: %s Ali ste prepri�ani? (d/n)  Baza podatkov "%s" bo trajno odstranjena.
 Ponovite vnos gesla (za potrditev):  Vnesite ime novega uporabnika:  Vnesite ime uporabnika, ki ga �elite odstraniti:  Vnesite geslo za novega uporabnika:  Ime Geslo:  Gesli se ne ujemata.
 Proceduralni jeziki Ali naj ima novi uporabnik pravico ustvarjanja podatkovnih baz? (d/n)  Ali naj ima novi uporabnik pravico ustvarjanja dodatnih uporabnikov? (d/n)  Podprti jeziki so plpgsql, pltcl, pltclu, plperl, plperlu, in plpythonu.
 Trusted? Za ve� informacij poskusite "%s --help".
 Uporaba:
 Uporabnik "%s" bo trajno odstranjen.
 n ne d da 