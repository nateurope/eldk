��    y      �  �   �      8
  K   9
     �
  ^   �
  
   �
  >     =   D  -   �     �  #   �     �  (        1  <   N  9   �  6   �  H   �  E   E  B   �  6   �  9     C   ?  9   �  4   �  H   �  ;   ;  E   w  :   �  9   �  7   2  4   j  L   �  J   �  3   7  0   k  ;   �  3   �  7     2   D  :   w  5   �  G   �  0   0  <   a  M   �  J   �  G   7  4     H   �  E   �  <   C  6   �  I   �  4     1   6  ;   h  8   �  5   �  =     8   Q  8   �  9   �  /   �  <   -  #   j  #   �  ?   �  #   �       3   6  &   j  5   �  E   �  4     D   B     �  *   �  8   �  6   	  %   @  (   f  #   �      �     �  8   �  4   -  $   b     �  ,   �  ,   �            #   )  G   M  4   �     �  &   �       )   -  7   W     �  +   �     �     �     �          8  
   =     H     a  9   v  >   �  P   �     @   &   I      p   '   x      �      �      �      �   )  �   L   �!     ""  [   <"  
   �"  L   �"  K   �"  0   <#     m#  ,   �#     �#  *   �#      �#  >   $  @   ]$  ;   �$  P   �$  P   +%  I   |%  ;   �%  =   &  F   @&  5   �&  6   �&  T   �&  <   I'  N   �'  A   �'  ;   (  D   S(  I   �(  R   �(  U   5)  4   �)  2   �)  B   �)  =   6*  ;   t*  6   �*  9   �*  6   !+  G   X+  4   �+  E   �+  E   ,  N   a,  ?   �,  >   �,  H   /-  B   x-  L   �-  C   .  Q   L.  5   �.  6   �.  ?   /  ;   K/  2   �/  L   �/  8   0  8   @0  O   y0  0   �0  G   �0  !   B1  %   d1  B   �1  $   �1  "   �1  6   2  *   L2  E   w2  R   �2  S   3  g   d3     �3  /   �3  B   4  C   _4  +   �4  .   �4  *   �4  &   )5  %   P5  5   v5  5   �5  (   �5  '   6  *   36  7   ^6     �6     �6  -   �6  P   �6  =   C7  #   �7  -   �7     �7  .   �7  A   !8     c8  1   u8     �8  ,   �8  +   �8  *   9     >9  
   C9      N9     o9  *   �9  .   �9  T   �9     4:  .   @:  
   o:  .   z:     �:     �:     �:     �:            p       @   G   7   d   w   L   s   ?   J   0   N      q   +   y   Z          $                         -             A   Y           _   x   	   1       H   j          r   )   o       3   V   c   =   6       l   C              K                      
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
 n no y yes Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2004-09-10 13:09+0100
PO-Revision-Date: 2004-09-10 20:00+0100
Last-Translator: Tebaldi Mirko
Language-Team: Mirko Tebaldi <mirko.tebaldi@libero.it>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
 
Di base, un database con lo stesso nome dell'utente corrente verr� creato.
 
Opzioni di connessione:
 
Se uno tra -a, -A, -d, -D ed UTENTE non � specificato, ti sar� richesto interattivamente.
 
Opzioni:
 
Consulta la descrizione del comando SQL CLUSTER per maggiori informazioni.
 
Consulta la descrizione del comando SQL VACUUM per maggiori informazioni.
 
Segnalare bachi a <pgsql-bugs@postgresql.org>.
   %s [OPZIONE]... NOME_DB
   %s [OPZIONE]... NOME_LINGUAGGIO [NOME_DB]
   %s [OPZIONI]... [NOME_DB]
   %s [OPZIONE]... [NOME_DB] [DESCRIZIONE]
   %s [OPZIONI]... [NOME_UTENTE]
   --help                          mostra questi aiuti ed esci
   --help                       mostra questa guida, quindi esce
   --help                    mostra questo aiuto e poi esci
   --version                       mostra informazioni sulla versione e poi esci
   --version                       mostra informazioni sulla versione e poi esce
   --version                 mostra informazioni sulla versione, poi esci
   -A, --no-adduser          l'utente non pu� creare utenti
   -D, --no-createdb         l'utente non pu� creare database
   -D, --tablespace=TABLESPACE  tablespace predefinito per il database
   -E, --encoding=ENCODING      codifica del database
   -E, --encrypted           cifra la password salvata
   -L, --pglib=CARTELLA      cerca il file di interpretazione linguaggio in CARTELLA
   -N, --unencrypted         non cifrare la password salvata
   -O, --owner=OWNER            utente database propietario del nuovo database
   -P, --pwprompt            assegna una password al nuovo utente
   -T, --template=TEMPLATE      modello database da copiare
   -U, --username=USERNAME      nome utente da usare per connettersi
   -U, --username=UTENTE     nome utente da utilizzare per la connessione
   -U, --username=UTENTE     nome utente con cui collegarsi (non quello da creare)
   -U, --username=UTENTE     nome utente con cui collegarsi (non quello da eliminare)
   -W, --password               richiede la password
   -W, --password            richiedi una password
   -W, --password            richiedi una password per connettersi
   -a, --adduser             l'utente pu� creare altri utenti
   -a, --all                       pulisci tutti i database
   -a, --all                 riordina tutti i database
   -d, --createdb            l'utente pu� creare database
   -d, --dbname=NOME_DB             database da pulire
   -d, --dbname=NOME_DB      database dal quale eliminare il linguaggio
   -d, --dbname=NOME_DB       database da riordinare
   -d, --dbname=NOME_DB      database in cui installare il linguaggio
   -e, --echo                      mostra i comandi inviati al server
   -e, --echo                   mostra i comandi che vengono inviati al server
   -e, --echo                mostra i comandi inviati al server
   -f, --full                      esegui una pulizia completa
   -h, --host=HOSTNAME          host server database o directory socket 
   -h, --host=NOME_HOST      indirizzo database o directory socket
   -i, --interactive         chiedi conferma prima di eseguire un operazione
   -i, --sysid=SYSID         seleziona un sysid per il nuovo utente
   -l, --list                mostra la lista dei linguaggi attualmente installati
   -p, --port=PORT          porta del server database
   -p, --port=PORTA          porta del server database
   -q, --quiet                     non stampare alcun messaggio
   -q, --quiet                  non scrive nessun messaggio
   -q, --quiet               non stampare messaggi
   -t, --table='TABELLA[(COLONNE)]'  pulisci solamente una tabella specifica
   -t, --table=TABELLA         riordina solo una tabella
   -v, --verbose                   mostra molti messaggi
   -z, --analyze                   aggiorna i suggerimenti per l'ottimizzazione
 %s pulisce ed analizza un database PostgreSQL.

 %s riordina tutte le tabelle precedentemente riordinate nel database.

 %s crea un database PostgreSQL.

 %s crea un nuovo utente PostgreSQL.

 %s installa un linguaggio procedurale in un database PostgreSQL.

 %s elimina un database PostgreSQL.

 %s elimina un utente PostgreSQL.

 %s elimina un linguaggio procedurale da un database.

 %s: "%s" non � un nome di codifica valido
 %s: impossibile riordinare una tabella specifica in tutti i database
 %s: impossibile riordinare tutti i database ed uno specifico nello stesso momento
 %s: impossibile effettuare la pulizia di una tabella specifica in tutti i database
 %s: impossibile effettuare la pulizia di tutti i database e di uno in particolare nello stesso momento
 %s: riordino del database "%s"
 %s: il riordino del database "%s" � fallito: %s %s: il riordino della tabella "%s" nel database "%s" � fallito: %s %s: creazione del commento fallita (il database � stato creato): %s %s: impossibile connettersi al database %s
 %s: impossibile connettersi al database %s: %s %s: creazione del nuovo utente fallita: %s %s: creazione del database fallita: %s %s: eliminazione database fallita: %s %s: linguaggio "%s" gi� installato nel database "%s"
 %s: linguaggio "%s" non installato nel database "%s"
 %s: installazione linguaggio fallita: %s %s: eliminazione linguaggio fallita: %s %s: parametro mancante, nome del database
 %s: parametro mancante necessario: nome del linguaggio
 %s: query fallita: %s %s: query eseguita: %s
 %s: eliminazione dell'utente "%s" fallita: %s %s: ancora %s funzioni dichiarate nel linguaggio "%s"; linguaggio non eliminato
 %s: troppi parametri dalla riga di comando (il primo � "%s")
 %s: linguaggio non supportato "%s"
 %s: ID utente deve essere un numero positivo
 %s: pulizia del database "%s"
 %s: la pulizia del database "%s" � fallito: %s %s: la pulizia della tabella "%s" nel database "%s" � fallito: %s Sei sicuro? (s/n) Il database "%s" sar� eliminato definitivamente.
 Conferma password: Inserisci il nome dell'utente da aggiungere: Inserisci il nome dell'utente da eliminare: Inserisci la password per il nuovo utente: Nome Password:  Le password non corrispondono. 
 Linguaggi Procedurali Il nuovo utente pu� creare database? (s/n) Il nuovo utente pu� creare altri utenti? (s/n) I linguaggi supportati sono plpgsql, pltcl, pltclu, plperl, plperlu, and plpythonu.
 Affidabile? Prova "%s --help" per avere pi� informazioni.
 Utilizzo:
 L'utente "%s" sar� permanentemente eliminato.
 n no s si 