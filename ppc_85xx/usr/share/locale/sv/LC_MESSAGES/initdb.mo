��    l      |  �   �      0	  R   1	     �	  
   �	  -   �	  �   �	  �   e
         "  J   B  5   �  J   �  6     P   E  C   �  :   �  4     B   J  H   �  >   �  9     3   O  ?   �  /   �  -   �  E   !  y   g  (   �  7   
  (   B  3   k  '   �  5   �  -   �  -   +  /   Y  "   �  6   �  �   �  0   �  $   �  �   �  ~   t  1   �     %  J   C  �   �     V  D   i  -   �  !   �  4   �  ,   3     `     �     �     �     �     �  ;   �  9   ;  �   u  >     0  E  u   v  q   �  f   ^  &   �     �     �  &     0   *  )   [     �  &   �  "   �  #   �  "         6  (   W  "   �     �  "   �  !   �  .     ,   2  6   _  $   �  %   �  !   �                8     Y     v  -   �  0   �     �           +   )   ?      i      m   &   |   3   �      �   +   �   !   !  A  ;!  H   }"     �"  
   �"  5   �"  �   !#  �   �#     W$    w$  E   �%  1   �%  M   &  @   R&  N   �&  C   �&  9   &'  9   `'  D   �'  M   �'  @   -(  5   n(  7   �(  ;   �(  -   )  6   F)  I   })  ~   �)  +   F*  7   r*  (   �*  8   �*  )   +  9   6+  0   p+  2   �+  3   �+  #   ,  9   ,,  �   f,  <   -  +   P-  z   |-  �   �-  9   .     �.  U   �.  �   )/     �/  8   �/  +   60     b0  4   �0  #   �0  (   �0     1  /   1      F1     g1     �1  4   �1  1   �1  �   �1  .   �2    �2  v   �3  q   :4  k   �4  ,   5     E5     R5      b5  ,   �5  %   �5     �5     �5  %   
6  &   06  !   W6  !   y6  -   �6  $   �6     �6  #   	7  #   -7  6   Q7  2   �7  @   �7  6   �7  '   38     [8     z8     �8     �8     �8     �8  +   �8  1   )9     [9     t9     �9  (   �9     �9     �9  .   �9  ;   :     H:  +   ]:  &   �:         T   6      ;              G                                  @       ^          L   k   U      3   2   ,   F   >       H   N   Y   '   M              a          f   5       h             <                 4   X   !   Q   Z          V   ]   8   I       \                 b   S   d       +      *             j   :   O   J              1      -   l   D       `   E   C   7   .   e   
   i   _              #          c      %       &       K       B         [   $       (             	   /       g   0      9           P   ?       R       W   A   )   =      "    
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

    %s%s%spostgres%s -D %s%s%s
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
 could not set junction for "%s": %s
 could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating information schema ...  creating subdirectories ...  creating system views ...  creating template1 database in %s/base/1 ...  fixing permissions on existing directory %s ...  initializing dependencies ...  initializing pg_authid ...  invalid binary "%s" loading system objects' descriptions ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-11-06 19:11-0400
PO-Revision-Date: 2006-11-07 11:52+0100
Last-Translator: Dennis Bj�rklund <db@zigo.dhs.org>
Language-Team: Swedish <sv@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
On datakatalogen inte anges s� tas den fr�n omgivningsvaribeln PGDATA.
 
Mindre vanliga flaggor:
 
Flaggor:
 
Rapportera buggar till <pgsql-bugs@postgresql.org>.
 
Det lyckadas. Du kan nu starta databasservern med:

    %s%s%spostgres%s -D %s%s%s
eller
    %s%s%spg_ctl%s -D %s%s%s -l logfil start

 
VARNING: sl�r p� autentiseringsmetod "trust" f�r lokala anslutningar.
Du kan �ndra detta genom att redigera pg_hba.conf eller anv�nda
flaggan -A n�sta g�ng du k�r initdb.
   %s [FLAGGA]... [DATAKATALOG]
   --lc-collate, --lc-ctype, --lc-messages=LOKAL
  --lc-monetary, --lc-numeric, --lc-time=LOKAL
                            initiera databasklustret med given lokal
                            i respektive kategori (standard tagen fr�n
                            omgivningen)
   --locale=LOKAL            initiera databasklustret med given lokal
   --no-locale               samma som --locale=C
   --pwfile=FIL              l�s in l�senord f�r nya superanv�ndaren fr�n fil
   -?, --help                visa den h�r hj�lpen, avsluta sedan
   -A, --auth=METOD          standardautentiseringsmetod f�r lokal uppkoppling
   -E, --encoding=KODNING    s�tt standardkodning f�r nya databaser
   -L KATALOG                var indatafilerna kan hittas
   -U, --username=NAMN       databasens superanv�ndarnamn
   -V, --version             visa versionsinformation, avsluta sedan
   -W, --pwprompt            fr�ga efter l�senord f�r den nya superanv�ndaren
   -d, --debug               generera massor med debugutskrifter
   -n, --noclean             st�da inte upp efter fel
   -s, --show                visa interna inst�llningar
  [-D, --pgdata=]DATAKATALOG plats f�r detta databaskluster
 %s initierar ett PostgreSQL databaskluster.

 %s: "%s" �r inte ett giltigt kodningsnamn f�r servern
 %s: L�senordsfilen skapades inte. Var v�nlig och rapportera detta felet.
 %s: kan inte k�ras som root
Logga in (dvs. anv�nd "su") som den (ickepriviligerade) anv�ndaren som
skall �ga serverprocessen.
 %s: kunde inte komma �t katalogen "%s": %s
 %s: kunde inte �ndra r�ttigheter p� katalogen "%s": %s
 %s: kunde inte skapa katalogen "%s": %s
 %s: kunde inte fastst�lla en giltig kort versionsstr�ng
 %s: kunde inte utf�ra kommandot "%s": %s
 %s: kunde inte hitta en l�mplig kodning f�r lokalen "%s"
 %s: kunde inte �ppna filen "%s" f�r l�sning: %s
 %s: kunde inte �ppna filen "%s" f�r skrivning: %s
 %s: kunde inte l�sa l�senordet fr�n filen "%s": %s
 %s: kunde inte skriva fil "%s": %s
 %s: datakatalog "%s" ej borttagen p� anv�ndarens beg�ran
 %s: katalog "%s" finns men �r inte tom
Om du vill skapa ett nytt databassystem, s� antingen ta bort eller t�m
katalogen "%s", eller k�r %s med ett annat argument
�n "%s".

 %s: misslyckades med att ta bort inneh�llet i datakatalogen
 %s: misslyckades att ta bort datakatalogen
 %s: filen "%s" finns inte
Det betyder att du har en korrupt installation eller att du angivit
fel katalog till flaggan -L
 %s: indatafil "%s" h�r inte till PostgreSQL %s
Kontrollera din installation eller ange den korrekta katalogen
med hj�lp av flaggan -L.
 %s: platsen f�r indatafiler m�ste vara en absolut s�kv�g
 %s: ok�nt lokalnamn "%s"
 %s: du m�ste ange ett l�senord f�r superanv�ndaren f�r att
sl� p� "%s"-autentisering
 %s: ingen datakatalog angiven
Du m�ste ange den katalog d�r data f�r det h�r databassystemet skall
lagras. G�r detta antingen med flaggan -D eller genom att s�tta
omgivningsvariabeln PGDATA.
 %s: slut p� minnet
 %s: l�senordsfr�ga och l�senordsfil kan inte b�da anges
 %s: tar bort inneh�llet i datakatalog "%s"
 %s: tar bort datakatalog "%s"
 %s: f�r m�nga kommandoradsargument (f�rsta �r "%s")
 %s: ok�nd autentiseringsmetod "%s"
 %s: varning: kodningar passar inte ihop
 Mata in det igen:  Mata in ett nytt l�senord f�r superanv�ndaren:  L�senorden st�mde inte �verens.
 K�r %s igen med flaggan -E.
 K�r i debug-l�ge.
 K�r i noclean-l�ge. Misstag kommer inte st�das upp.
 Databasklustret kommer initieras med lokalen %s.
 Databasklustret kommer initieras med lokalerna
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Databasens standardkodning har satts till %s.
 Kodningen du valt (%s) och kodningen f�r den valda
lokalen (%s) passar troligen inte ihop. Detta kan leda
till problem f�r funktioner som arbetar med str�ngar.
L�s problemet genom att k�ra %s igen och l�t bli att ange en
kodning eller v�lj kodningar som passar ihop.
 Filerna tillh�rande databasen kommer att �gas av anv�ndaren "%s".
Denna anv�ndare m�ste ocks� k�ra server-processen.

 Programmet "postgres" beh�vs av %s men kunde inte hittas i samma
katalog som "%s".
Kontrollera din installation.
 Programmet "postgres" hittades av "%s" men var inte av samma version som %s.
Kontrollera din installation.
 F�rs�k med "%s --help" f�r mer information.
 Anv�ndning:
 f�ngade signal
 barnprocess avslutade med kod %d barnprocess avslutade med ok�nd statuskod %d barnprocess terminerades av signal %d tog bort filen "%s"
 d�pte om filen "%s" till "%s"
 kopierar template1 till postgres ...  kopierar template1 till template0 ...  kunde inte byta katalog till "%s" kunde inte hitta en "%s" att k�ra kunde inte identifiera aktuella katalogen: %s kunde inte �ppna katalogen "%s": %s
 kunde inte l�sa bin�r "%s" kunde inte l�sa katalogen "%s": %s
 kunde inte l�sa symbolisk l�nk "%s" kunde inte ta bort filen "%s", forts�tter att f�rs�ka
 kunde inte ta bort filen eller katalogen "%s": %s
 kunde inte d�pa om filen "%s" till "%s", forts�tter att f�rs�ka
 kunde inte skapa en knutpunkt (junction) f�r "%s": %s
 kunde inte skriva till barnprocess: %s
 skapar konfigurationsfiler ... skapar konverteringar ...  skapar katalog %s ...  skapar informationsschema ...  skapar underkataloger ...  skapar systemvyer ...  skapar databasen template1 i %s/base/1 ...  s�tter r�ttigheter p� existerande katalog %s ...  initierar beroenden ...  initierar pg_authid ...  ogiltig bin�r "%s" laddar systemobjektens beskrivningar...  ok
 slut p� minnet
 v�ljer initialt v�rde f�r max_connections ...  v�ljer initialt v�rde f�r shared_buffers/max_fsm_pages ...  sparar l�senord ...  s�tter r�ttigheter f�r inbyggda objekt ...  k�r vacuum p� databasen template1 ...  