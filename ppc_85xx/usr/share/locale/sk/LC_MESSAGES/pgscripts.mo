��    y      �  �   �      8
  K   9
     �
  ^   �
  
   �
  >     =   D  -   �     �  #   �     �  (        1  <   N  9   �  6   �  H   �  E   E  B   �  6   �  9     C   ?  9   �  4   �  H   �  ;   ;  E   w  :   �  9   �  7   2  4   j  L   �  J   �  3   7  0   k  ;   �  3   �  7     2   D  :   w  5   �  G   �  0   0  <   a  M   �  J   �  G   7  4     H   �  E   �  <   C  6   �  I   �  4     1   6  ;   h  8   �  5   �  =     8   Q  8   �  9   �  /   �  <   -  #   j  #   �  ?   �  #   �       3   6  &   j  5   �  E   �  4     D   B     �  *   �  8   �  6   	  %   @  (   f  #   �      �     �  8   �  4   -  $   b     �  ,   �  ,   �            #   )  G   M  4   �     �  &   �       )   -  7   W     �  +   �     �     �     �          8  
   =     H     a  9   v  >   �  P   �     @   &   I      p   '   x      �      �      �      �   /  �   M   �!     )"  i   >"  	   �"  8   �"  7   �"  6   ##     Z#  #   v#     �#  %   �#  %   �#  G   $  D   L$  A   �$  L   �$  J    %  G   k%  W   �%  K   &  q   W&  5   �&  6   �&  L   6'  8   �'  Q   �'  A   (  P   P(  S   �(  X   �(  Z   N)  Y   �)  .   *  +   2*  :   ^*  U   �*  ?   �*  :   /+  I   j+  H   �+  L   �+  F   J,  G   �,  E   �,  P   -  M   p-  =   �-  �   �-  {   .  6   �.  >   2/  O   q/  ;   �/  8   �/  4   60  1   k0  .   �0  A   �0  >   1  F   M1  B   �1  0   �1  @   2  ,   I2  7   v2  >   �2  $   �2  0   3  /   C3  *   s3  H   �3  d   �3  A   L4  R   �4  )   �4  5   5  F   A5  K   �5  6   �5  9   6  9   E6  .   6  0   �6  8   �6  7   7  -   P7  -   ~7  2   �7  /   �7     8     .8  8   A8  L   z8  C   �8     9  /   *9     Z9  3   y9  A   �9     �9  %   :     *:  4   A:  9   v:  $   �:     �:     �:     �:     �:  :   ;  @   L;  L   �;     �;  3   �;     <  ,   )<     V<     X<     \<     ^<            p       @   G   7   d   w   L   s   ?   J   0   N      q   +   y   Z          $                         -             A   Y           _   x   	   1       H   j          r   )   o       3   V   c   =   6       l   C              K                      
   M             E   P   9          [          %   t               u   .   Q   ^   R       b   *      n         m           D       #       4       ;   F      O   i      `          ,   v   I   (      ]   <      g      :   "   B      /      k   S   '   e                  h   f       W      !   8       >       \       T           5   X   &      a       2   U    
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
 %s: could not connect to database %s: %s %s: creation of new user failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
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
 n no y yes Project-Id-Version: pgscripts
POT-Creation-Date: 2004-08-05 07:25-0300
PO-Revision-Date: 2004-08-13 14:19+0200
Last-Translator: Zoltan Bartko <bartko.zoltan@pobox.sk>
Language-Team: slovak
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.3
 
Implicitne sa vytvára databáza s názvom totožným s menom užívateľa.
 
Voľby pripojenia:
 
Ak nie je určené jedno z -a, -A, -d, -D, či UŽÍVATEĽ, budete zadávať 
informácie interaktívne
 
Voľby:
 
Detaily nájdete v popise príkazu CLUSTER jazyka SQL.
 
Detaily nájdete v popise príkazu VACUUM jazyka SQL.
 
Chyby hláste na adresu <pgsql-bugs@postgresql.org>.
   %s [VOĽBA]... NÁZOV_DB
   %s [VOĽBA]... JAZYK [NÁZOV_DB]
   %s [VOĽBA]... [NÁZOV_DB]
   %s [VOĽBA]... [NÁZOV_DB] [POPIS]
   %s [VOĽBA]... [MENO_UŽÍVATEĽA]
   --help                          zobraz túto nápovedu, potom koniec
   --help                       zobraz túto nápovedu, potom koniec
   --help                    zobraz túto nápovedu, potom koniec
   --version                       zobraz informácie o verzii, potom koniec
   --version                    vypíš informácie o verzii, potom koniec
   --version                 vypíš informácie o verzii, potom koniec
   -A, --no-adduser          užívateľ nebude môcť vytvárať nových užívateľov
   -D, --no-createdb         užívateľ nebude môcť vytvárať databázy
   -D, --tablespace=TABULKOVÝ_PRIESTOR
                               implicitný tabuľkový priestor databázy
   -E, --encoding=KÓDOVANIE     kódovanie databázy
   -E, --encrypted           zašifruj uložené heslo
   -L, --pglib=ADRESÁR       nájdi súbor interpretera jazykov v ADRESÁRi
   -N, --unencrypted         nezašifruj uložené heslo
   -O, --owner=VLASTNÍK         užívateľ databázy, vlastník novej databázy
   -P, --pwprompt            priraď heslo novému užívateľovi
   -T, --template=ŠABLÓNA       šablóna databázy, ktorá sa má kopírovať
   -U, --username=UŽÍVATEĽ      užívateľ, ktorý sa má využiť pre spojenie
   -U, --username=UŽÍVATEĽ   meno užívateľa, ktorý sa má použiť pre pripojenie
   -U, --username=UŽÍVATEĽ   meno užívateľa, ktorý sa má pripojiť (nie vytvoriť)
   -U, --username=UŽÍVATEĽ   meno užívateľa, ktorý sa má pripojiť (nie vymazať)
   -W, --password               žiadať heslo
   -W, --password            žiadať heslo
   -W, --password            žiadať heslo pre pripojenie
   -a, --adduser             užívateľ bude môcť vytvárať nových užívateľov
   -a, --all                       povysávaj všetky databázy
   -a, --all                 klastrovať všetky databázy
   -d, --createdb            užívateľ bude môcť vytvárať databázy
   -d, --dbname=NÁZOV_DB           databáza, ktorú chcete povysávať
   -d, --dbname=NÁZOV_DB       databáza, z ktorej sa má odstrániť jazyk
   -d, --dbname=NÁZOV_DB      databáza, ktorá má byť klastrovaná
   -d, --dbname=NÁZOV_DB      databáza, kam sa má inštalovať jazyk
   -e, --echo                      zobraz príkazy posielané serveru
   -e, --echo                   vypíš príkazy, ktoré sa posielajú na server
   -e, --echo                vypíš príkazy, ktoré sa posielajú na server
   -f, --full                      vykonaj úplné vysávanie
   -h, --host=POČÍTAČ           meno počítača databázového servera alebo 
                               adresára soketov
   -h, --host=POČÍTAČ        meno počítača databázového servera alebo                             adresára soketov
   -i, --interactive         pýtaj sa pred vymazaním
   -i, --sysid=SYSID         určí sysid nového užívateľa
   -l, --list                vypíš zoznam aktuálne nainštalovaných jazykov
   -p, --port=PORT              port databázového servera
   -p, --port=PORT           port databázového servera
   -q, --quiet                     nevypisuj správy
   -q, --quiet                  nevypisuj správy
   -q, --quiet               nevypisuj správy
   -t, --table='TABUĽKA[(STĹPCE)]' vysávať iba danú tabuľku
   -t, --table=TABUĽKA       klastrovať iba zadanú tabuľku
   -v, --verbose                   výpis veľkého množstva výstupu
   -z, --analyze                   aktualizuj údaje optimalizéra
 %s vyčistí a analyzuje databázu PostgreSQL.

 %s klastruje všetky predtým klastrované tabuľky databázy.

 %s vytvorí databázu systému PostgreSQL.

 %s vytvorí nového užívateľa systému PostgreSQL.

 %s nainštaluje procedurálny jazyk do databázy PostgreSQL.

 %s odstráni databázu PostgreSQL.

 %s odstráni užívateľa systému PostgreSQL.

 %s odstráni procedurálny jazyk z databázy.

 %s: "%s" nie je platný názov kódovania
 %s: nie je možné klastrovať danú tabuľku vo všetkých databázach
 %s :nie je možné klastrovať (zoskupovať) všetky databázy a jednu konkrétnu v tom istom čase
 %s: nie je možné konkrétnu tabuľku vo všetkých databázach
 %s: nie je možné vysávať všetky databázy a jednu konkrétnu v rovnaký čas
 %s: prebieha klastrovanie databázy "%s"
 %s: klastrovanie databázy "%s" bolo neúspešné: %s %s: klastrovanie tabuľky "%s" v databáze "%s" bolo neúspešné: %s  %s: vytvorenie komentára bolo neúspešné (databáza bola vytvorená): %s %s: nebolo možné vytvoriť spojenie s databázou %s
 %s: nebolo možné vytvoriť spojenie s databázou %s: %s %s: vytvorenie nového užívateľa bolo neúspešné: %s %s: vytvorenie databázy bolo neúspešné: %s %s: odstránenie databázy bolo neúspešné: %s %s: jazyk "%s" je už nainštalovaný do databázy "%s"
 %s: jazyk "%s" nie je nainštalovaný v databáze "%s"
 %s: inštalácia jazyka bola neúspešná: %s %s: odstránenie jazyka bolo neúspešné: %s %s: chýba požadovaný argument názov databázy
 %s: chýba požadovaný argument názov jazyka
 %s: dotaz bol neúspešný: %s %s: dotaz bol: %s
 %s: odstránenie užívateľa "%s" bolo neúspešné: %s %s: ešte %s funkcií je deklarovaných v jazyku "%s"; jazyk sa neodstráni
 %s: príliš veľa argumentov príkazového riadku (prvý je "%s")
 %s: nepodporovaný jazyk "%s"
 %s: ID užívateľa musí byť kladné číslo
 %s: vysáva sa databáza "%s"
 %s: vysávanie databázy "%s" bolo neúspešné: %s %s: vysávanie tabuľky "%s" databázy "%s" bolo neúspešné: %s Ste si istý? (a/n)  Databáza "%s" sa odstráni nadobro.
 Zadajte ho ešte raz:  Zadajte meno užívateľa, ktorého chcete pridať:  Zadajte meno užívateľa, ktorý má byť odstránený:  Zadajte heslo nového užívateľa:  Meno Heslo:  Heslá neboli totožné.
 Procedurálne jazyky Bude môcť nový užívateľ vytvárať databázy? (a/n)  Bude môcť užívateľ vytvárať nových užívateľov? (a/n)  Podporované jazyky sú plpgsql, pltcl, pltclu, plperl, plperlu aplpythonu.
 Dôveryhodný? Zadajte '%s --help' pre detailnejšie informácie.
 Použitie:
 Užívateľ "%s" bude nadobro odstránený.
 n nie a áno 