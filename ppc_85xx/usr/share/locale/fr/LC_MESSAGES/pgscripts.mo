��    �      �  �   L	      `  K   a     �  e   �  
   )  >   4  >   s  =   �  -   �       #   7     [  (   v     �  <   �  9   �  6   3  H   j  E   �  B   �  9   <  C   v  9   �  4   �  =   )  .   g  ;   �  E   �  :     5   S  7   �  9   �  7   �  4   3  L   h  J   �  3      0   4  ;   e  7   �  2   �  2     J   ?  :   �  5   �  G   �  0   C  <   t  0   �  M   �  J   0  G   {  4   �  H   �  E   A  9   �  v   �  <   8  I   u  5   �  4   �  1   *  ;   \  8   �  5   �  6     3   >  4   r  =   �  8   �  8     8   W  9   �     �  /   �  <     #   C  #   g  ?   �  %   �  #   �       3   5  &   i  5   �  E   �  I     5   V  I   �  5   �  E      F   R   4   �   D   �      !  *   1!  8   \!  6   �!  %   �!  (   �!  (   "  8   D"  #   }"      �"     �"  8   �"  4   #  $   P#     u#  ,   �#  ,   �#     �#     $     $  *   5$  8   `$  ,   �$  8   �$  #   �$  G   #%  4   k%     �%  )   �%  7   �%     &  +   -&     Y&     j&     �&     �&     �&     �&  
   �&     �&     '     $'  '   9'  "   a'  2   �'  7   �'     �'  &   �'     (     '(     )(     ,(     .(  C  2(  L   v)     �)  s   �)     P*  M   \*  M   �*  L   �*  5   E+     {+  &   �+     �+  )   �+     ,  A   ,  ?   `,  ;   �,  A   �,  @   -  ;   _-  J   �-  L   �-  ?   3.  ;   s.  <   �.  =   �.  B   */  S   m/  D   �/  ?   0  ?   F0  @   �0  D   �0  D   1  [   Q1  _   �1  C   2  4   Q2  G   �2  O   �2  G   3  B   f3  _   �3  J   	4  F   T4  V   �4  A   �4  C   45  :   x5  F   �5  J   �5  F   E6  I   �6  ~   �6  Z   U7  7   �7  |   �7  U   e8  I   �8  C   9  D   I9  @   �9  8   �9  6   :  2   ?:  9   r:  9   �:  <   �:  H   #;  =   l;  =   �;  /   �;  J   <     c<  7   o<  O   �<  )   �<  $   !=  H   F=  .   �=  -   �=  !   �=  :   >  /   I>  X   y>  [   �>  X   .?  Q   �?  Y   �?  R   3@  ]   �@  _   �@  Y   DA  d   �A  2   B  B   6B  U   yB  M   �B  5   C  8   SC  =   �C  N   �C  -   D  4   GD  6   |D  G   �D  H   �D  )   DE  ,   nE  =   �E  2   �E  ,   F     9F  0   LF  @   }F  T   �F  :   G  U   NG  0   �G  [   �G  E   1H  5   wH  E   �H  Z   �H     NI  9   ^I     �I  %   �I  $   �I  0   �I     .J  &   2J     YJ  *   iJ  $   �J     �J  -   �J  (   �J  =   %K  :   cK     �K  0   �K     �K     �K     �K     �K     �K     �             	      @   c   K       D      �              [   i   T       4   $       J   �          �   o                <   9   e       =       �   �   2       �   +   �           �   j   %   r   �   O   W      �   _   |   F   `         :               d       �   V   ;   (   f   �   ]   l       *   k   h              L       /           &   
   �       ~       }   ?   N   w              H   3   )   Q   U   B   ^   #   {   n               R   v      �   S   I       7   X           Y   !   y   �           G       �   b                           '   6          �   1   \   x   �   ,   z            "   g   s   p   >   C   0   a       .   5       q             �       u   A          Z   8       t                      M   P   m          E      -    
By default, a database with the same name as the current user is created.
 
Connection options:
 
If one of -s, -S, -d, -D, -r, -R and ROLENAME is not specified, you will
be prompted interactively.
 
Options:
 
Read the description of the SQL command CLUSTER for details.
 
Read the description of the SQL command REINDEX for details.
 
Read the description of the SQL command VACUUM for details.
 
Report bugs to <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [ROLENAME]
   --help                          show this help, then exit
   --help                       show this help, then exit
   --help                    show this help, then exit
   --version                       output version information, then exit
   --version                    output version information, then exit
   --version                 output version information, then exit
   -D, --no-createdb         role cannot create databases
   -D, --tablespace=TABLESPACE  default tablespace for the database
   -E, --encoding=ENCODING      encoding for the database
   -E, --encrypted           encrypt stored password
   -I, --no-inherit          role does not inherit privileges
   -L, --no-login            role cannot login
   -N, --unencrypted         do not encrypt stored password
   -O, --owner=OWNER            database user to own the new database
   -P, --pwprompt            assign a password to new role
   -R, --no-createrole       role cannot create roles
   -S, --no-superuser        role will not be superuser
   -T, --template=TEMPLATE      template database to copy
   -U, --username=USERNAME      user name to connect as
   -U, --username=USERNAME   user name to connect as
   -U, --username=USERNAME   user name to connect as (not the one to create)
   -U, --username=USERNAME   user name to connect as (not the one to drop)
   -W, --password               prompt for password
   -W, --password            prompt for password
   -W, --password            prompt for password to connect
   -a, --all                       vacuum all databases
   -a, --all                 cluster all databases
   -a, --all                 reindex all databases
   -c, --connection-limit=N  connection limit for role (default: no limit)
   -d, --createdb            role can create new databases
   -d, --dbname=DBNAME             database to vacuum
   -d, --dbname=DBNAME       database from which to remove the language
   -d, --dbname=DBNAME       database to cluster
   -d, --dbname=DBNAME       database to install language in
   -d, --dbname=DBNAME       database to reindex
   -e, --echo                      show the commands being sent to the server
   -e, --echo                   show the commands being sent to the server
   -e, --echo                show the commands being sent to the server
   -f, --full                      do full vacuuming
   -h, --host=HOSTNAME          database server host or socket directory
   -h, --host=HOSTNAME       database server host or socket directory
   -i, --index=INDEX         recreate specific index only
   -i, --inherit             role inherits privileges of roles it is a
                            member of (default)
   -i, --interactive         prompt before deleting anything
   -l, --list                show a list of currently installed languages
   -l, --login               role can login (default)
   -p, --port=PORT              database server port
   -p, --port=PORT           database server port
   -q, --quiet                     don't write any messages
   -q, --quiet                  don't write any messages
   -q, --quiet               don't write any messages
   -r, --createrole          role can create new roles
   -s, --superuser           role will be superuser
   -s, --system              reindex system catalogs
   -t, --table='TABLE[(COLUMNS)]'  vacuum specific table only
   -t, --table=TABLE         cluster specific table only
   -t, --table=TABLE         reindex specific table only
   -v, --verbose                   write a lot of output
   -z, --analyze                   update optimizer hints
 %s (%s/%s)  %s cleans and analyzes a PostgreSQL database.

 %s clusters all previously clustered tables in a database.

 %s creates a PostgreSQL database.

 %s creates a new PostgreSQL role.

 %s installs a procedural language into a PostgreSQL database.

 %s reindexes a PostgreSQL database.

 %s removes a PostgreSQL database.

 %s removes a PostgreSQL role.

 %s removes a procedural language from a database.

 %s: "%s" is not a valid encoding name
 %s: cannot cluster a specific table in all databases
 %s: cannot cluster all databases and a specific one at the same time
 %s: cannot reindex a specific index and system catalogs at the same time
 %s: cannot reindex a specific index in all databases
 %s: cannot reindex a specific table and system catalogs at the same time
 %s: cannot reindex a specific table in all databases
 %s: cannot reindex all databases and a specific one at the same time
 %s: cannot reindex all databases and system catalogs at the same time
 %s: cannot vacuum a specific table in all databases
 %s: cannot vacuum all databases and a specific one at the same time
 %s: clustering database "%s"
 %s: clustering of database "%s" failed: %s %s: clustering of table "%s" in database "%s" failed: %s %s: comment creation failed (database was created): %s %s: could not connect to database %s
 %s: could not connect to database %s: %s %s: could not get current user name: %s
 %s: could not obtain information about current user: %s
 %s: creation of new role failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
 %s: language "%s" is not installed in database "%s"
 %s: language installation failed: %s %s: language removal failed: %s %s: missing required argument database name
 %s: missing required argument language name
 %s: query failed: %s %s: query was: %s
 %s: reindexing database "%s"
 %s: reindexing of database "%s" failed: %s %s: reindexing of index "%s" in database "%s" failed: %s %s: reindexing of system catalogs failed: %s %s: reindexing of table "%s" in database "%s" failed: %s %s: removal of role "%s" failed: %s %s: still %s functions declared in language "%s"; language not removed
 %s: too many command-line arguments (first is "%s")
 %s: vacuuming database "%s"
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? Database "%s" will be permanently removed.
 Enter it again:  Enter name of role to add:  Enter name of role to drop:  Enter password for new role:  Name Password encryption failed.
 Password:  Passwords didn't match.
 Please answer "%s" or "%s".
 Procedural Languages Role "%s" will be permanently removed.
 Shall the new role be a superuser? Shall the new role be allowed to create databases? Shall the new role be allowed to create more new roles? Trusted? Try "%s --help" for more information.
 Usage:
 n no y yes Project-Id-Version: pgscripts
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-16 01:19-0300
PO-Revision-Date: 2006-12-22 18:51+0100
Last-Translator: St�phane Schildknecht
Language-Team:  <fr@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.4
 
Par d�faut, la base de donn�e cr��e porte le nom de l'utilisateur courant.
 
Options de connexion :
 
Si une des options -s, -S, -d, -D, -r, -R et NOMROLE n'est pas pr�cis�e,
elle vous sera demand�e interactivement.
 
Options :
 
Lire la description de la commande SQL CLUSTER pour de plus amples d�tails.
 
Lire la description de la commande SQL REINDEX pour de plus amples d�tails.
 
Lire la description de la commande SQL VACUUM pour de plus amples d�tails.
 
Rapportez les bogues � <pgsql-bugs@postgresql.org>.
   %s [OPTION]... NOMBASE
   %s [OPTION]... NOMLANGAGE [NOMBASE]
   %s [OPTION]... [NOMBASE]
   %s [OPTION]... [NOMBASE] [DESCRIPTION]
   %s [OPTION]... [NOMROLE]
   --help                          affiche cette aide puis quitte
   --help                        affiche cette aide puis quitte
   --help                    affiche cette aide puis quitte
   --version                       affiche la version puis quitte
   --version                     affiche la version, puis quitte
   --version                 affiche la version puis quitte
   -D, --no-createdb         le r�le ne peut pas cr�er de bases de donn�es
   -D, --tablespace=TABLESPACE   tablespace par d�faut de la base de donn�es
   -E, --encoding=ENC            encodage de la base de donn�es
   -E, --encrypted           chiffre le mot de passe stock�
   -I, --no-inherit          le r�le n'h�rite pas des droits
   -L, --no-login            le r�le ne peut pas se connecter
   -N, --unencrypted         ne chiffre pas le mot de passe stock�
   -O, --owner=PROPRIETAIRE      nom du propri�taire de la nouvelle base de donn�es
   -P, --pwprompt            affecte un mot de passe au nouveau r�le
   -R, --no-createrole       le r�le ne peut pas cr�er de r�les
   -S, --no-superuser        le r�le n'est pas superutilisateur
   -T, --template=MODELE         base de donn�es mod�le � copier
   -U, --username=NOMUTILISATEUR nom d'utilisateur pour la connexion
   -U, --username=NOMUTILISATEUR nom d'utilisateur pour la connexion
   -U, --username=NOMUTILISATEUR nom de l'utilisateur pour la connexion (pas celui � cr�er)
   -U, --username=NOMUTILISATEUR nom de l'utilisateur pour la connexion (pas celui � supprimer)
   -W, --password                force la demande d'un mot de passe
   -W, --password            demande un mot de passe
   -W, --password            demander un mot de passe pour la connexion
   -a, --all                       nettoie (vacuum) toutes les bases de donn�es
   -a, --all                 met en cluster toutes les bases de donn�es
   -a, --all                 r�-indexe toutes les bases de donn�es
   -c, --conn-limit=N        nombre maximum de connexions pour le r�le (par d�faut sans limite)
   -d, --createdb            l'utilisateur peut cr�er des bases de donn�es
   -d, --dbname=NOMBASE            base de donn�es � nettoyer (vacuum)
   -d, --dbname=NOMBASE      base de donn�es � partir de laquelle supprimer le langage
   -d, --dbname=NOMBASE       base de donn�es � mettre en cluster
   -d, --dbname=NOMBASE      base sur laquelle installer le langage
   -d, --dbname=NOMBASE       base de donn�es � r�-indexer
   -e, --echo                affiche les commandes envoy�es au serveur
   -e, --echo                    affiche les commandes envoy�es au serveur
   -e, --echo                affiche les commandes envoy�es au serveur
   -f, --full                      effectue un nettoyage (vacuum) complet
   -h, --host=HOTE               h�te du serveur de bases de donn�es
                                ou r�pertoire des sockets
   -h, --host=HOTE           h�te du serveur de bases de donn�es ou r�pertoire des sockets
   -i, --index=INDEX        recr�e uniquement cet index
   -i, --inherit             le r�le h�rite des droits des r�les dont il est membre
                            (par d�faut)
   -i, --interactive         demande confirmation avant de supprimer quoi que ce soit
   -l, --list                affiche la liste des langages d�j� install�s
   -l, --login               le r�le peut se connecter (par d�faut)
   -p, --port=PORT               port du serveur de bases de donn�es
   -p, --port=PORT           port du serveur de bases de donn�es
   -q, --quiet                     n'�crit aucun message
   -q, --quiet                   n'�crit aucun message
   -q, --quiet               n'�crit aucun message
   -r, --createrole          le r�le peut cr�er des r�les
   -s, --superuser           le r�le est superutilisateur
   -s, --system             r�-indexe les catalogues syst�me
   -t, --table='TABLE[(COLONNES)]' nettoie (vacuum) une table sp�cifique
   -t, --table=TABLE         met cette seule table en cluster
   -t, --table=TABLE         r�-indexe uniquement cette table
   -v, --verbose                   mode verbeux
   -z, --analyze                   met � jour les conseils de l'optimiseur
 %s (%s/%s)  %s nettoie et analyse une base de donn�es PostgreSQL.

 %s met en cluster toutes les tables d�j� en cluster dans une base de donn�es.

 %s cr�e une base de donn�es PostgreSQL.

 %s cr�e un nouvel r�le PostgreSQL.

 %s installe un langage proc�dural dans une base de donn�es PostgreSQL.

 %s r�-indexe une base de donn�es PostgreSQL.

 %s supprime une base de donn�es PostgreSQL.

 %s supprime un r�le PostgreSQL.

 %s supprime un langage proc�dural d'une base de donn�es.

 %s : � %s � n'est pas un nom d'encodage valide
 %s: ne peut pas mettre en cluster une table sp�cifique dans toutes les bases de donn�es
 %s : ne peut pas mettre en cluster � la fois toutes les bases de donn�es et une sp�cifique
 %s : ne peut pas r�-indexer un index sp�cifique et les catalogues syst�me en m�me temps
 %s : ne peut pas r�-indexer un index sp�cifique dans toutes les bases de donn�es
 %s : ne peut pas r�-indexer une table sp�cifique et les catalogues syst�me en m�me temps
 %s : ne peut pas r�-indexer une table sp�cifique dans toutes les bases de donn�es
 %s : ne peut pas r�-indexer toutes les bases de donn�es et une base sp�cifique en m�me temps
 %s: ne peut pas r�-indexer toutes les bases de donn�es et les catalogues syst�me en m�me temps
 %s : ne peut pas nettoyer (vacuum) une table sp�cifique dans toutes les bases de donn�es
 %s : ne peut pas nettoyer (vacuum) toutes les bases de donn�es et une base sp�cifique
en m�me temps
 %s : mise en cluster de la base de donn�es � %s �
 %s : la mise en cluster de la base de donn�es � %s � a �chou� : %s %s : la mise en cluster de la table � %s � de la base de donn�es � %s � a �chou� : %s %s: la cr�ation du commentaire a �chou� (la base de donn�es a �t� cr��e) : %s %s : n'a pas pu se connecter � la base de donn�es %s
 %s : n'a pas pu se connecter � la base de donn�es %s: %s %s: n'a pas pu r�cup�rer le nom de l'utilisateur actuel : %s
 %s : n'a pas pu obtenir les informations concernant l'utilisateur actuel : %s
 %s : la cr�ation du nouvel r�le a �chou� : %s %s : la cr�ation de la base de donn�es a �chou� : %s %s: la suppression de la base de donn�es a �chou� : %s %s : le langage � %s � est d�j� install� sur la base de donn�es � %s �
 %s: le langage � %s � n'est pas install� dans la base de donn�es � %s �
 %s : installation du langage �chou�e : %s %s : la suppression du langage a �chou� : %s %s : argument nom de la base de donn�es requis mais manquant
 %s : argument nom du langage requis mais manquant
 %s : l'ex�cution de la requ�te a �chou� : %s %s : requ�te : %s
 %s : r�-indexation de la base de donn�es � %s �
 %s : la r�-indexation de la base de donn�es � %s � a �chou� : %s %s : la r�-indexation de l'index � %s � dans la base de donn�es � %s � a �chou� : %s %s : la r�-indexation des catalogues syst�me a �chou� : %s %s : la r�-indexation de la table � %s � dans la base de donn�es � %s � a �chou� : %s %s : la suppression du r�le � %s � a �chou� : %s %s : il existe encore %s fonctions d�clar�es dans le langage � %s � ; langage non supprim�
 %s : trop d'arguments en ligne de commande (le premier �tant � %s �)
 %s : nettoyage (vacuum) de la base de donn�es � %s �
 %s : le nettoyage (vacuum) de la base de donn�es � %s � a �chou� : %s %s : le nettoyage (vacuum) de la table � %s � dans la base de donn�es � %s � a �chou� : %s �tes vous s�r ? La base de donn�es � %s � sera d�finitivement supprim�e.
 Saisissez-le � nouveau :  Saisissez le nom du r�le � ajouter :  Entrez le nom du r�le � supprimer :  Saisissez le mot de passe pour le nouvel r�le :  Nom �chec du chiffrement du mot de passe.
 Mot de passe :  Les mots de passe ne sont pas identiques.
 Merci de r�pondre � %s � ou � %s �.
 Langages proc�duraux Le r�le � %s � sera d�finitivement supprim�.
 Le nouvel r�le est-il superutilisateur ? Le nouvel r�le est-il autoris� � cr�er des bases de donn�es ? Le nouvel r�le est-il autoris� � cr�er de nouveaux r�les ? De confiance (trusted) ? Essayez � %s --help � pour plus d'informations.
 Usage :
 n non o oui 