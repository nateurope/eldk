��    �      �  �   L	      `  K   a     �  e   �  
   )  >   4  >   s  =   �  -   �       #   7     [  (   v     �  <   �  9   �  6   3  H   j  E   �  B   �  9   <  C   v  9   �  4   �  =   )  .   g  ;   �  E   �  :     5   S  7   �  9   �  7   �  4   3  L   h  J   �  3      0   4  ;   e  7   �  2   �  2     J   ?  :   �  5   �  G   �  0   C  <   t  0   �  M   �  J   0  G   {  4   �  H   �  E   A  9   �  v   �  <   8  I   u  5   �  4   �  1   *  ;   \  8   �  5   �  6     3   >  4   r  =   �  8   �  8     8   W  9   �     �  /   �  <     #   C  #   g  ?   �  %   �  #   �       3   5  &   i  5   �  E   �  I     5   V  I   �  5   �  E      F   R   4   �   D   �      !  *   1!  8   \!  6   �!  %   �!  (   �!  (   "  8   D"  #   }"      �"     �"  8   �"  4   #  $   P#     u#  ,   �#  ,   �#     �#     $     $  *   5$  8   `$  ,   �$  8   �$  #   �$  G   #%  4   k%     �%  )   �%  7   �%     &  +   -&     Y&     j&     �&     �&     �&     �&  
   �&     �&     '     $'  '   9'  "   a'  2   �'  7   �'     �'  &   �'     (     '(     )(     ,(     .(  ]  2(  ]   �)     �)  W   *     ^*  N   j*  N   �*  M   +  0   V+     �+  *   �+  !   �+  (   �+     ,  7   5,  7   m,  9   �,  A   �,  A   !-  E   c-  A   �-  G   �-  ]   3.  =   �.  8   �.  7   /  ?   @/  G   �/  @   �/  >   	0  ;   H0  :   �0  ?   �0  ?   �0  y   ?1  }   �1  4   72  4   l2  =   �2  <   �2  ?   3  >   \3  v   �3  >   4  4   Q4  s   �4  6   �4  F   15  6   x5  F   �5  F   �5  J   =6  /   �6  H   �6  H   7  5   J7  �   �7  8   8  H   I8  E   �8  0   �8  0   	9  2   :9  2   m9  7   �9  ;   �9  8   :  ?   M:  U   �:  6   �:  6   ;  C   Q;  8   �;     �;  ;   �;  L   <  '   c<  %   �<  D   �<  +   �<  -   "=  "   P=  9   s=  0   �=  K   �=  a   *>  [   �>  K   �>  [   4?  K   �?  a   �?  `   >@  K   �@  _   �@  &   KA  8   rA  I   �A  F   �A  .   <B  1   kB  7   �B  ?   �B  '   C  -   =C  0   kC  @   �C  @   �C  )   D  )   HD  /   rD  *   �D     �D     �D  &    E  6   'E  F   ^E  :   �E  G   �E  )   (F  Z   RF  /   �F  $   �F  2   G  C   5G     yG  6   �G     �G  %   �G  &   �G  )   "H     LH  #   SH     wH  )   �H      �H     �H  ,   �H  #   I  8   7I  5   pI  
   �I  (   �I     �I     �I     �I     �I     �I     �             	      @   c   K       D      �              [   i   T       4   $       J   �          �   o                <   9   e       =       �   �   2       �   +   �           �   j   %   r   �   O   W      �   _   |   F   `         :               d       �   V   ;   (   f   �   ]   l       *   k   h              L       /           &   
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
 n no y yes Project-Id-Version: pgscripts 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-11-29 19:14-0300
PO-Revision-Date: 2004-12-06 18:46-0300
Last-Translator: Alvaro Herrera <alvherre@alvh.no-ip.org>
Language-Team: Castellano <pgsql-es-ayuda@postgresql.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Si no se especifica, se crear� una base de datos con el mismo nombre que
el usuario actual.
 
Opciones de conexi�n:
 
Si no se especifican -s, -S, -d, -D, -r, -R o el ROL, se preguntar�
interactivamente.
 
Opciones:
 
Lea la descripci�n del comando CLUSTER de SQL para obtener mayores detalles.
 
Lea la descripci�n del comando REINDEX de SQL para obtener mayores detalles.
 
Lea la descripci�n del comando VACUUM de SQL para obtener mayores detalles.
 
Reporte errores a <pgsql-bugs@postgresql.org>.
   %s [OPCI�N]... BASE-DE-DATOS
   %s [OPCI�N]... LENGUAJE [BASE-DE-DATOS]
   %s [OPCI�N]... [BASE-DE-DATOS]
   %s [OPCI�N]... [NOMBRE] [DESCRIPCI�N]
   %s [OPCI�N]... [ROL]
   --help                    mostrar esta ayuda y salir
   --help                    mostrar esta ayuda y salir
   --help                    desplegar esta ayuda y salir
   --version                 mostrar el n�mero de versi�n y salir
   --version                 mostrar el n�mero de versi�n y salir
   --version                 desplegar informaci�n de versi�n y salir
   -D, --no-createdb         el rol no podr� crear bases de datos
   -D, --tablespace=TBLSPC   tablespace por omisi�n de la base de datos
   -E, --encoding=CODIFICACI�N
                            codificaci�n para la base de datos
   -E, --encrypted           almacenar la constrase�a cifrada
   -I, --no-inherit          rol no heredar� privilegios
   -L, --no-login            el rol no podr� conectarse
   -N, --unencrypted         almacenar la contrase�a sin cifrar
   -O, --owner=DUE�O         usuario que ser� due�o de la base de datos
   -P, --pwprompt            asignar una contrase�a al nuevo rol
   -R, --no-createrole       el rol no podr� crear otros roles
   -S, --no-superuser        el rol no ser� un superusuario
   -T, --template=PATR�N     base de datos patr�n a copiar
   -U, --username=USUARIO    nombre de usuario para la conexi�n
   -U, --username=USUARIO    nombre de usuario para la conexi�n
   -U, --username=NOMBRE     nombre de usuario con el cual conectarse
                            (no el usuario a crear)
   -U, --username=USUARIO    nombre del usuario con el cual conectarse
                            (no el usuario a eliminar)
   -W, --password            preguntar la contrase�a
   -W, --password            preguntar la contrase�a
   -W, --password            pedir contrase�a para conectarse
   -a, --all                 limpia todas las bases de datos
   -a, --all                 reordenar todas las bases de datos
   -a, --all                 reindexa todas las bases de datos
   -c, --connection-limit=N  l�mite de conexiones para el rol
                            (predeterminado: sin l�mite)
   -d, --createdb            el rol podr� crear bases de datos
   -d, --dbname=BASE         base de datos a limpiar
   -d, --dbname=BASE         nombre de la base de datos de la cual
                            eliminar el lenguaje
   -d, --dbname=BASE         base de datos a reordenar
   -d, --dbname=BASE         base de datos en que instalar el lenguaje
   -d, --dbname=DBNAME       base de datos a reindexar
   -e, --echo                mostrar los comandos enviados al servidor
   -e, --echo                mostrar los comandos enviados al servidor
   -e, --echo                mostrar los comandos a medida que se ejecutan
   -f, --full                usar �vacuum full�
   -h, --host=ANFITRI�N      nombre del servidor o directorio del socket
   -h, --host=ANFITRI�N      nombre del servidor o directorio del socket
   -i, --index=INDEX         recrear s�lo este �ndice
   -i, --inherit             el rol heredar� los privilegios de los roles de
                            los cuales es miembro (predeterminado)
   -i, --interactive         preguntar antes de eliminar
   -l, --list                listar los lenguajes instalados actualmente
   -l, --login               el rol podr� conectarse (predeterminado)
   -p, --port=PUERTO         puerto del servidor
   -p, --port=PUERTO         puerto del servidor
   -q, --quiet               no desplegar mensajes
   -q, --quiet               no desplegar mensajes
   -q, --quiet               no escribir ning�n mensaje
   -r, --createrole          el rol podr� crear otros roles
   -s, --superuser           el rol ser� un superusuario
   -s, --system              reindexa los cat�logos del sistema
   -t, --table='TABLE[(COLUMNS)]'
                            limpiar s�lo esta tabla
   -t, --table=TABLA         reordenar s�lo esta tabla
   -t, --table=TABLE         reindexar s�lo esta tabla
   -v, --verbose             desplegar varios mensajes informativos
   -z, --analyze             actualizar las estad�sticas
 %s (%s/%s)  %s limpia (VACUUM) y analiza una base de datos PostgreSQL.
 %s reordena todas las tablas previamente reordenadas
en una base de datos.

 %s crea una base de datos PostgreSQL.

 %s crea un nuevo rol de PostgreSQL.

 %s instala un lenguaje procedural en una base de datos PostgreSQL.

 %s reindexa una base de datos PostgreSQL.

 %s elimina una base de datos de PostgreSQL.

 %s elimina un rol de PostgreSQL.

 %s elimina un lenguaje procedural de una base de datos.

 %s: �%s� no es un nombre de codificaci�n v�lido
 %s: no se puede reordenar una tabla espec�fica en todas
las bases de datos
 %s: no se pueden reordenar todas las bases de datos y una de ellas
en particular simult�neamente
 %s: no se puede reindexar un �ndice espec�fico y los cat�logos
del sistema simult�neamente
 %s: no se puede reindexar un �ndice espec�fico en todas las bases de datos
 %s: no se puede reindexar una tabla espec�fica y los cat�logos
del sistema simult�neamente
 %s: no se puede reindexar una tabla espec�fica en todas las bases de datos
 %s: no se pueden reindexar todas las bases de datos y una de ellas
en particular simult�neamente
 %s: no se pueden reindexar todas las bases de datos y los cat�logos
del sistema simult�neamente
 %s: no se puede limpiar a una tabla espec�fica en todas
las bases de datos
 %s: no se pueden limpiar todas las bases de datos y una de ellas
en particular simult�neamente
 %s: reordenando la base de datos �%s�
 %s: fall� el reordenamiento de la base de datos �%s�:
%s %s: fall� el reordenamiento de la tabla �%s� en
la base de datos �%s�:
%s %s: fall� la creaci�n del comentario (la base de datos fue creada):
%s %s: no se pudo conectar a la base de datos %s
 %s: no se pudo conectar a la base de datos %s: %s %s: no se pudo obtener el nombre de usuario actual: %s
 %s: no se pudo obtener informaci�n sobre el usuario actual: %s
 %s: fall� la creaci�n del nuevo rol:
%s %s: fall� la creaci�n de la base de datos:
%s %s: fall� la eliminaci�n de la base de datos: %s %s: el lenguaje �%s� ya est� instalado en la base de datos �%s�
 %s: el lenguaje �%s� no est� instalado en la base de datos �%s�
 %s: fall� la instalaci�n del lenguaje:
%s %s: fall� la eliminaci�n del lenguaje: %s %s: falta el nombre de base de datos requerido
 %s: falta el nombre de lenguaje requerido
 %s: la consulta fall�: %s %s: la consulta era: %s
 %s: reindexando la base de datos �%s�
 %s: fall� la reindexaci�n de la base de datos �%s�: %s %s: fall� la reindexaci�n del �ndice �%s� en la base de datos �%s�: %s %s: fall� la reindexaci�n de los cat�logos del sistema: %s %s: fall� la reindexaci�n de la tabla �%s� en la base de datos �%s�: %s %s: fall� la eliminaci�n del rol �%s�:
%s %s: a�n hay %s funciones declaradas en el lenguaje �%s�;
el lenguaje no ha sido eliminado
 %s: demasiados argumentos (el primero es �%s�)
 %s: limpiando la base de datos �%s�
 %s: fall� la limpieza de la base de datos �%s�:
%s %s: fall� la limpieza de la tabla �%s� en la base de datos �%s�:
%s �Est� seguro? La base de datos �%s� ser� eliminada permanentemente.
 Ingr�sela nuevamente:  Ingrese el nombre del rol a agregar:  Ingrese el nombre del rol a eliminar:  Ingrese la contrase�a para el nuevo rol:  Nombre El cifrado de la contrase�a fall�.
 Contrase�a:  Las contrase�as ingresadas no coinciden.
 Por favor conteste �%s� o �%s�.
 Lenguajes Procedurales El rol �%s� ser� eliminado permanentemente.
 �Ser� el nuevo rol un superusuario? �Debe permit�rsele al rol la creaci�n de bases de datos? �Debe permit�rsele al rol la creaci�n de otros roles? Confiable? Use �%s --help� para mayor informaci�n.
 Empleo:
 n no s s� 