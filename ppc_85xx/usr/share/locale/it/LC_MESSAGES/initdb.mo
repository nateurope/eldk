��    2      �  C   <      H     I  
   g  -   r  �   �     *  J   F  5   �  6   �  B   �  >   A  3   �  /   �  E   �  +   *  5   V  .   �  -   �  -   �       �   #  ~   �     .	     L	  -   _	  !   �	  4   �	     �	     �	     
     -
  j   E
  &   �
     �
     �
  #   �
  !     !   4     V     p     �      �     �  0   �          2     N     R  +   h  !   �  A  �     �  
     /     �   N     �  Z   �  5   O  :   �  I   �  9   
  8   D  3   }  L   �  /   �  >   .  -   m  7   �  9   �       �     �   �      )     J  6   `  (   �  >   �     �  $         2     S  t   q  -   �  
          #   5  )   Y  )   �     �     �     �  (     $   1  7   V  !   �  !   �     �     �  :   �  "   +     (   	           -            1           2         +                             %                !         *   &      0   )       ,                        .   '                  #   "          /          
                      $        
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

   %s [OPTION]... [DATADIR]
   --locale=LOCALE           initialize database cluster with given locale
   --no-locale               equivalent to --locale=C
   -?, --help                show this help, then exit
   -V, --version             output version information, then exit
   -d, --debug               generate lots of debugging output
   -s, --show                show internal settings
 %s initializes a PostgreSQL database cluster.

 %s: The password file was not generated. Please report this problem.
 %s: child process exited with exit code %d
 %s: child process exited with unrecognized status %d
 %s: child process was terminated by signal %d
 %s: could not open file "%s" for reading: %s
 %s: could not open file "%s" for writing: %s
 %s: failed
 %s: file "%s" does not exist
This means you have a corrupted installation or identified
the wrong directory with the invocation option -L.
 %s: input file "%s" does not belong to PostgreSQL %s
Check your installation or specify the correct path using the option -L.
 %s: invalid locale name "%s"
 %s: out of memory
 %s: removing contents of data directory "%s"
 %s: removing data directory "%s"
 %s: too many command-line arguments (first is "%s")
 Enter it again:  Enter new superuser password:  Passwords didn't match.
 Running in debug mode.
 The program "postgres" is needed by %s but was not found in 
the directory "%s". Check your installation.
 Try "%s --help" for more information.
 Usage:
 caught signal
 copying template1 to template0 ...  could not write to child process
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  ok
 setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2003-12-11 01:23-0400
PO-Revision-Date: 2003-12-11 20:32+0100
Last-Translator: Fabrizio Mazzoni <veramente@libero.it>
Language-Team: Fabrizio Mazzoni <veramente@libero.it>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
 
Opzioni meno utilizzate:
 
Opzioni:
 
Segnalare bugs a <pgsql-bugs@postgresql.org>.
 
Successo. Ora si pu� attivare il database server con:

    %s%s%s/postmaster -D %s%s%s
or
    %s%s%s/pg_ctl -D %s%s%s -l logfile start

   %s [OPTION]... [DATADIR]
   --locale=LOCALE           inizzializza il cluster di database con il locale specificato
   --no-locale               equivalente a --locale=C
   -?, --help                mostra questo aiuto, poi esci
   -V, --version             mostra informazioni sulla versione, poi esci
   -d, --debug               genera molto output di debug
   -s, --show                mostra impostazioni interne
 %s inizializza un cluster di database PostgreSQL.

 %s: Il file delle password non � stato generato. Segnalare questo problema.
 %s: processo figlio terminato con exit code %d
 %s: processo figlio terminato con uno stato irriconosciuto %d
 %s: processo figlio terminato dal segnale %d
 %s: impossibile aprire il file "%s" per la lettura: %s
 %s: impossibile aprire il file "%s" per la scrittura: %s
 %s: fallito
 %s: il file "%s" non esiste
Questo indica una corruzione dell'installazione oppure
avete indicato una directory errata con l'opzione -L.
 %s: input file "%s" non appartiene a PostgreSQL %s
Controllare l'installazione o specificare un percorso corretto con l'opzione -L.
 %s: nome locale non valido "%s"
 %s: memoria esaurita
 %s: rimozione dei contenuti della data directory "%s"
 %s: rimozione della data directory "%s"
 %s: troppi parametri dalla linea di comando (il primo � "%s")
 Reinserirla:  Inserire la password del superuser:  Le password non corrispondono. 
 Esecuzione in modalit� debug
 Il programma "postgres" e richiesto da %s ma non � stato trovato 
nella directory "%s". Verificare l'installazione.
 Prova "%s --help" per maggiori informazioni.
 Utilizzo:
 intercettato segnale
 copia di template1 a template0 ...  impossibile scrivere sul processo figlio
 creazione dei file di configurazione ...  creazione delle conversioni ... creazione directory %s ...  creazione directory %s/%s ...  creazione dello schema informazioni ...  creazione delle viste di sistema ... modifica dei permessi sulla directory esistente %s ...  inizializzazione di pg_depend ... inizializzazione di pg_shadow ... ok
 impostazione password ... impostazione dei privilegi per gli oggetti incorporati ... vacuum del database template1 ...  