��    l      |  �   �      0	  R   1	     �	  
   �	  -   �	  �   �	  �   e
         "  J   B  5   �  J   �  6     P   E  C   �  :   �  4     B   J  H   �  >   �  9     3   O  ?   �  /   �  -   �  E   !  y   g  (   �  7   
  (   B  3   k  '   �  5   �  -   �  -   +  /   Y  "   �  6   �  �   �  0   �  $   �  �   �  ~   t  1   �     %  J   C  �   �     V  D   i  -   �  !   �  4   �  ,   3     `     �     �     �     �     �  ;   �  9   ;  �   u  >     0  E  u   v  q   �  f   ^  &   �     �     �  &     0   *  )   [     �  &   �  "   �  #   �  "         6  (   W  "   �     �  "   �  !   �  .     ,   2  6   _  $   �  %   �  !   �                8     Y     v  -   �  0   �     �           +   )   ?      i      m   &   |   3   �      �   +   �   !   !  h  ;!  b   �"     #     ##  5   /#  �   e#  �   	$     �$  *  �$  J   &  4   [&  ~   �&  ;   '  ^   K'  z   �'  F   %(  J   l(  ;   �(  q   �(  K   e)  ;   �)  =   �)  3   +*  &   _*  7   �*  W   �*  �   +  2   �+  >   ,  0   D,  ?   u,  1   �,  B   �,  9   *-  :   d-  E   �-  .   �-  N   .  �   c.  B   -/  7   p/  �   �/  �   C0  P   �0  #   1  e   91  �   �1     �2  t   �2  =   3  2   N3  E   �3  1   �3  ,   �3     &4  8   @4  (   y4     �4     �4  H   �4  .   #5  �   R5  S   �5  u  -6  w   �7  �   8  }   �8  0   !9     R9     [9  4   h9  8   �9  1   �9  (   :  -   1:  $   _:  %   �:  '   �:  '   �:  0   �:  ,   +;  !   X;  *   z;  )   �;  ;   �;  =   <  D   I<  4   �<  )   �<  *   �<     =     5=  %   S=  !   y=     �=  ;   �=  7   �=  "   ->     P>     p>  3   �>     �>     �>  8   �>  D   
?  "   O?  5   r?  8   �?         T   6      ;              G                                  @       ^          L   k   U      3   2   ,   F   >       H   N   Y   '   M              a          f   5       h             <                 4   X   !   Q   Z          V   ]   8   I       \                 b   S   d       +      *             j   :   O   J              1      -   l   D       `   E   C   7   .   e   
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
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-fr
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-16 01:15-0300
PO-Revision-Date: 2006-11-04 16:27+0100
Last-Translator: Guillaume Lelarge <gleu@wanadoo.fr>
Language-Team:  <pgsql-fr-general@postgresql.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-15
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.10.2
 
Si le r�pertoire des donn�es n'est pas indiqu�, la variable d'environnement
PGDATA est utilis�e.
 
Options moins utilis�es :
 
Options :
 
Rapportez les bogues � <pgsql-bugs@postgresql.org>.
 
Succ�s. Vous pouvez maintenant lancer le serveur de bases de donn�es par :

    %s%s%spostgres%s -D %s%s%s
ou
    %s%s%spg_ctl%s -D %s%s%s -l journaltrace start

 
ATTENTION : active l'authentification � trust � pour les connexions locales.
Vous pouvez modifier ceci en �ditant pg_hba.conf ou en utilisant l'option -A au prochain lancement d'initdb.
   %s [OPTION]... [REP_DONNEES]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            initialise le cluster avec la locale pr�cis�e
                            dans la cat�gorie respective
                            (prise, par d�faut, dans l'environnement)
   --locale=LOCALE           initialise le cluster avec la locale indiqu�e
   --no-locale               �quivalent � --locale=C
   --pwfile=nomfichier       lit le mot de passe du nouveau superutilisateur
                            � partir d'un fichier
   -?, --help                affiche cette aide puis quitte
   -A, --auth=M�THODE        m�thode d'authentification par d�faut pour les connexions locales
   -E, --encoding=ENCODAGE     initialise l'encodage par d�faut des nouvelles
                            bases de donn�es
   -L DIRECTORY              indique o� trouver les fichiers d'entr�es
   -U, --username=NOM        nom du superutilisateur de la base de donn�es
   -V, --version             affiche la version puis quitte
   -W, --pwprompt            demande un mot de passe pour le nouveau
                            superutilisateur
   -d, --debug               engendre un grand nombre de traces de d�bogage
   -n, --noclean             ne nettoie pas en cas d'erreur
   -s, --show                affiche la configuration interne
  [-D, --pgdata=]REP_DONNEES emplacement du cluster
 %s initialise un cluster PostgreSQL.

 %s : � %s � n'est pas un nom d'encodage serveur valide
 %s : le fichier de mots de passe n'a pas �t� engendr�. Merci de rapporter ce probl�me.
 %s : ne peut pas �tre ex�cut� en tant qu'utilisateur root
Connectez-vous (par exemple en utilisant � su �) sous l'utilisateur (non privil�gi�) qui sera propri�taire du processus serveur.
 %s : n'a pas pu acc�der au r�pertoire � %s � : %s
 %s : n'a pas pu modifier les droits du r�pertoire � %s � : %s
 %s : n'a pas pu cr�er le r�pertoire � %s � : %s
 %s : n'a pas pu d�terminer une cha�ne de version courte valide
 %s : n'a pas pu �x�cuter la commande � %s � : %s
 %s : n'a pas pu trouver un encodage ad�quat pour la locale � %s �
 %s : n'a pas pu ouvrir le fichier � %s � en lecture : %s
 %s : n'a pas pu ouvrir le fichier � %s � en �criture : %s
 %s : n'a pas pu lire le mot de passe � partir du fichier � %s � : %s
 %s : n'a pas pu �crire le fichier � %s � : %s
 %s : r�pertoire des donn�es � %s � non supprim� � la demande de l'utilisateur
 %s: le r�pertoire � %s � existe mais n'est pas vide
Si vous voulez cr�er un nouveau syst�me de bases de donn�es,
supprimez ou videz le r�pertoire � %s �
ou lancez %s avec un argument autre que � %s �.
 %s : �chec de la suppression du contenu du r�pertoire des donn�es
 %s : �chec de la suppression du r�pertoire des donn�es
 %s : le fichier � %s � n'existe pas
Cela signifie que votre installation est corrompue ou que vous avez
identifi� le mauvais r�pertoire avec l'option -L.
 %s : le fichier � %s � n'appartient pas � PostgreSQL %s
V�rifiez votre installation ou indiquez le bon chemin avec l'option -L.
 %s : l'emplacement du fichier d'entr�es doit �tre indiqu� avec un chemin absolu
 %s : nom de locale invalide (�%s�)
 %s : vous devez indiquer un mot de passe pour le superutilisateur pour activer l'authentification %s
 %s : aucun r�pertoire de donn�es indiqu�
Vous devez identifier le r�pertoire o� r�sideront les donn�es pour ce syst�me
de bases de donn�es. Faites-le soit avec l'option -D soit en
initialisant la variable d'environnement PGDATA.
 %s : m�moire �puis�e
 %s : les options d'invite du mot de passe et de fichier de mot de passe ne peuvent pas �tre indiqu�es simultan�ment
 %s : suppression du contenu du r�pertoire des donn�es � %s �
 %s : suppression du r�pertoire des donn�es � %s �
 %s : trop d'arguments en ligne de commande (le premier �tant � %s �)
 %s : m�thode d'authentification � %s � inconnue.
 %s : attention : incompatibilit� d'encodage
 Saisissez-le � nouveau :  Saisissez le nouveau mot de passe du superutilisateur :  Les mots de passe ne correspondent pas.
 Relancez %s avec l'option -E.
 Lanc� en mode d�bogage.
 Lanc� en mode � sans nettoyage �. Les erreurs ne seront pas supprim�es.
 Le cluster sera initialis� avec la locale %s.
 Le cluster sera initialis� avec les locales
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 L'encodage par d�faut des bases de donn�es a �t� configur� en cons�quence avec %s.
 L'encodage que vous avez s�lectionn� (%s) et celui que la locale
s�lectionn�e utilise (%s) ne sont pas connus pour leur compatibilit�. Ceci peut
aboutir � un mauvais comportement des fonctions de manipulation
de cha�nes de caract�res. Pour corriger cette situation, r�-ex�cutez
%s soit sans sp�cifier explicitement d'encodage, soit en
choisissant une combinaison possible.
 Les fichiers de ce cluster appartiendront � l'utilisateur � %s �.
Le processus serveur doit �galement lui appartenir.

 Le programme � postgres � est n�cessaire � %s mais n'a pas �t� trouv� dans
le m�me r�pertoire que � %s �.
V�rifiez votre installation.
 Le programme � postgres � a �t� trouv� par � %s � mais n'est pas de la m�me version que � %s �.
V�rifiez votre installation.
 Essayez � %s --help � pour plus d'informations.
 Usage :
 signal re�u
 le processus fils a quitt� avec le code de sortie %d le processus fils a quitt� avec un statut %d non reconnu le processus fils a �t� termin� avec le signal %d fin de la suppression du fichier � %s �
 fin du renommage du fichier � %s � en � %s �
 copie de template1 vers postgres...  copie de template1 vers template0...  n'a pas pu acc�der au r�pertoire � %s � n'a pas pu trouver de � %s � � ex�cuter n'a pas pu identifier le r�pertoire courant : %s n'a pas pu ouvrir le r�pertoire � %s � : %s
 n'a pas pu lire le binaire � %s � n'a pas pu lire le r�pertoire � %s � : %s
 n'a pas pu lire le lien symbolique � %s � n'a pas pu supprimer le fichier � %s �, nouvelle tentative
 n'a pas pu supprimer le fichier ou le r�pertoire � %s � : %s
 n'a pas pu renommer le fichier � %s � en � %s �, nouvelle tentative
 n'a pas pu initialiser la jonction pour � %s � : %s
 n'a pas pu �crire au processus fils : %s
 cr�ation des fichiers de configuration...  cr�ation des conversions...  cr�ation du r�pertoire %s...  cr�ation du sch�ma d'informations...  cr�ation des sous-r�pertoires...  cr�ation des vues syst�me...  cr�ation de la base de donn�es template1 dans %s/base/1...  correction des droits sur le r�pertoire existant %s...  initialisation des d�pendances...  initialisation de pg_authid...  binaire � %s � invalide chargement de la description des objets syst�me...  ok
 m�moire �puis�e
 s�lection de la valeur par d�faut de max_connections...  s�lection des valeurs par d�faut de shared_buffers/max_fsm_pages...  initialisation du mot de passe...  initialisation des droits sur les objets internes...  lancement du vacuum sur la base de donn�es template1...  