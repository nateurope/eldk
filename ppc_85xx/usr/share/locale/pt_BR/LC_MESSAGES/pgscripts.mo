��    �      �  �   L	      `  K   a     �  e   �  
   )  >   4  >   s  =   �  -   �       #   7     [  (   v     �  <   �  9   �  6   3  H   j  E   �  B   �  9   <  C   v  9   �  4   �  =   )  .   g  ;   �  E   �  :     5   S  7   �  9   �  7   �  4   3  L   h  J   �  3      0   4  ;   e  7   �  2   �  2     J   ?  :   �  5   �  G   �  0   C  <   t  0   �  M   �  J   0  G   {  4   �  H   �  E   A  9   �  v   �  <   8  I   u  5   �  4   �  1   *  ;   \  8   �  5   �  6     3   >  4   r  =   �  8   �  8     8   W  9   �     �  /   �  <     #   C  #   g  ?   �  %   �  #   �       3   5  &   i  5   �  E   �  I     5   V  I   �  5   �  E      F   R   4   �   D   �      !  *   1!  8   \!  6   �!  %   �!  (   �!  (   "  8   D"  #   }"      �"     �"  8   �"  4   #  $   P#     u#  ,   �#  ,   �#     �#     $     $  *   5$  8   `$  ,   �$  8   �$  #   �$  G   #%  4   k%     �%  )   �%  7   �%     &  +   -&     Y&     j&     �&     �&     �&     �&  
   �&     �&     '     $'  '   9'  "   a'  2   �'  7   �'     �'  &   �'     (     '(     )(     ,(     .(  q  2(  E   �)     �)  r   �)  	   r*  >   |*  >   �*  =   �*  -   8+     f+  #   +     �+  %   �+     �+  >    ,  ;   ?,  8   {,  M   �,  J   -  G   M-  F   �-  U   �-  A   2.  ;   t.  <   �.  6   �.  ?   $/  U   d/  :   �/  >   �/  :   40  D   o0  =   �0  =   �0  \   01  ^   �1  +   �1  +   2  7   D2  >   |2  <   �2  >   �2  K   73  B   �3  =   �3  M   4  :   R4  C   �4  <   �4  J   5  G   Y5  D   �5  ;   �5  Z   "6  Z   }6  C   �6  {   7  :   �7  E   �7  A   8  @   [8  @   �8  =   �8  ;   9  7   W9  :   �9  4   �9  =   �9  F   =:  A   �:  C   �:  :   
;  E   E;     �;  2   �;  G   �;  '   <  &   :<  C   a<  +   �<  )   �<  #   �<  6   =  -   V=  G   �=  M   �=  U   >  H   p>  V   �>  I   ?  O   Z?  Y   �?  F   @  L   K@  "   �@  1   �@  @   �@  @   .A  +   oA  .   �A  -   �A  6   �A  #   /B  (   SB  (   |B  <   �B  =   �B  &    C  #   GC  4   kC  /   �C     �C     �C  $   �C  1   #D  @   UD  3   �D  @   �D  #   E  Q   /E  >   �E  !   �E  -   �E  <   F     MF  3   _F     �F  (   �F  &   �F  !   �F     G     G     >G     FG  !   `G     �G  )   �G  *   �G  )   �G  %   H  
   >H  5   IH     H     �H     �H     �H     �H     �             	      @   c   K       D      �              [   i   T       4   $       J   �          �   o                <   9   e       =       �   �   2       �   +   �           �   j   %   r   �   O   W      �   _   |   F   `         :               d       �   V   ;   (   f   �   ]   l       *   k   h              L       /           &   
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
 n no y yes Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-23 23:49-0200
PO-Revision-Date: 2005-10-06 00:21-0300
Last-Translator: Euler Taveira de Oliveira <euler@timbira.com>
Language-Team: Brazilian Portuguese <pgbr-dev@listas.postgresql.org.br>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Por padr�o, um banco de dados com o mesmo nome do usu�rio � criado.
 
Op��es de conex�o:
 
Se nenhuma das op��es -s, -S, -d, -D, -r, -R e NOME_ROLE for especificada, voc� ser�
perguntado interativamente.
 
Op��es:
 
Leia a descri��o do comando SQL CLUSTER para obter detalhes.
 
Leia a descri��o do comando SQL REINDEX para obter detalhes.
 
Leia a descri��o do comando SQL VACUUM para obter detalhes.
 
Relate erros a <pgsql-bugs@postgresql.org>.
   %s [OP��O]... NOMEBD]
   %s [OP��O]... LINGUAGEM [NOMEBD]
   %s [OP��O]... [NOMEBD]
   %s [OP��O]... [NOMEBD] [DESCRI��O]
   %s [OP��O]... [NOME_ROLE]
   --help                          mostra esta ajuda e termina
   --help                       mostra esta ajuda e termina
   --help                    mostra esta ajuda e termina
   --version                       mostra informa��o sobre a vers�o e termina
   --version                    mostra informa��o sobre a vers�o e termina
   --version                 mostra informa��o sobre a vers�o e termina
   -D, --no-createdb         role n�o pode criar novos bancos de dados
   -D, --tablespace=ESPA�O_DE_TABELAS  espa�o de tabelas padr�o para o banco de dados
   -E, --encoding=CODIFICA��O   codifica��o para o banco de dados
   -E, --encrypted           criptografa a senha armazenada
   -I, --no-inherit               role n�o herda privil�gios
   -L, --no-login          role n�o pode efetuar login
   -N, --unencrypted         n�o criptografa a senha armazenada
   -O, --owner=DONO             usu�rio do banco que ser� dono do novo banco de dados
   -P, --pwprompt            atribui uma senha a nova role
   -R, --no-createrole         role n�o pode criar novas roles
   -S, --no-superuser          role n�o ser� super-usu�rio
   -T, --template=MODELO        modelo de banco de dados para copiar
   -U, --username=USU�RIO    nome do usu�rio para se conectar
   -U, --username=USU�RIO    nome do usu�rio para se conectar
   -U, --username=USU�RIO    nome do usu�rio para se conectar (n�o � o usu�rio a ser criado)
   -U, --username=USU�RIO    nome do usu�rio para se conectar (n�o � o usu�rio a ser removido)
   -W, --password            pergunta senha
   -W, --password            pergunta senha
   -W, --password            pergunta senha ao conectar
   -a, --all                       limpa todos bancos de dados
   -a, --all                 agrupa todos os bancos de dados
   -a, --all                 reindexa todos os bancos de dados
   -c, --connection-limit=N  limite de conex�o por role (padr�o: ilimitado)
   -d, --createdb            role pode criar novos bancos de dados
   -d, --dbname=NOMEBD             banco de dados a ser limpo
   -d, --dbname=NOMEBD       banco de dados no qual ser� removido a linguagem
   -d, --dbname=NOMEBD       banco de dados a ser agrupado
   -d, --dbname=NOMEBD       banco de dados para instalar linguagem
   -d, --dbname=NOMEBD       banco de dados a ser reindexado
   -e, --echo                      mostra os comandos enviados ao servidor
   -e, --echo                   mostra os comandos enviados ao servidor
   -e, --echo                mostra os comandos enviados ao servidor
   -f, --full                      faz uma limpeza completa
   -h, --host=M�QUINA        m�quina do servidor de banco de dados ou diret�rio do soquete
   -h, --host=M�QUINA        m�quina do servidor de banco de dados ou diret�rio do soquete
   -i, --index=�NDICE        reindexa somente o �ndice especificado
   -i, --inherit             role herda privil�gios de roles das quais ela
                            � um membro (padr�o)
   -i, --interactive         pergunta antes de apagar algo
   -l, --list                mostra a lista das linguagens instaladas
   -l, --login                   role pode efetuar login (padr�o)
   -p, --port=PORTA          porta do servidor de banco de dados
   -p, --port=PORTA          porta do servidor de banco de dados
   -q, --quiet                     n�o exibe nenhuma mensagem
   -q, --quiet                  n�o mostra nenhuma mensagem
   -q, --quiet               n�o exibe nenhuma mensagem
   -r, --createrole            role pode criar novas roles
   -s, --superuser           role ser� super-usu�rio
   -s, --system              reindexa os cat�logos do sistema
   -t, --table='TABELA[(COLUNAS)]' limpa somente uma tabela espec�fica
   -t, --table=TABELA        agrupa somente a tabela especificada
   -t, --table=TABELA        reindexa somente a tabela especificada
   -v, --verbose                   mostra muitas mensagens
   -z, --analyze                   atualiza indicadores do otimizador
 %s (%s/%s)  %s limpa e analisa um banco de dados PostgreSQL.

 %s agrupa todas as tabelas agrupadas anteriormente no banco de dados.

 %s cria um banco de dados PostgreSQL.

 %s cria uma nova role do PostgreSQL.

 %s instala uma linguagem procedural no banco de dados PostgreSQL.

 %s reindexa um banco de dados PostgreSQL.

 %s remove um banco de dados PostgreSQL.

 %s remove uma role do PostgreSQL.

 %s remove uma linguagem procedural do banco de dados.
 %s: "%s" n�o � um nome de codifica��o v�lido
 %s: n�o pode agrupar uma tabela espec�fica em todos os bancos de dados
 %s: n�o pode agrupar todos os bancos de dados e um espec�fico ao mesmo tempo
 %s: n�o pode reindexar um �ndice espec�fico e os cat�logos do sistema ao mesmo tempo
 %s: n�o pode reindexar um �ndice espec�fico em todos os bancos de dados
 %s: n�o pode reindexar uma tabela espec�fica e os cat�logos do sistema ao mesmo tempo
 %s: n�o pode reindexar uma tabela espec�fica em todos os bancos de dados
 %s: n�o pode reindexar todos os bancos de dados e um espec�fico ao mesmo tempo
 %s: n�o pode reindexar todos os bancos de dados e os cat�logos do sistema ao mesmo tempo
 %s: n�o pode limpar uma tabela espec�fica em todos os bancos de dados
 %s: n�o pode limpar todos os bancos de dados e um espec�fico ao mesmo tempo
 %s: agrupando banco de dados "%s"
 %s: agrupamento do banco de dados "%s" falhou: %s %s: agrupamento da tabela "%s" no banco de dados "%s" falhou: %s %s: cria��o de coment�rio falhou (banco de dados foi criado): %s %s: n�o p�de conectar ao banco de dados %s
 %s: n�o p�de conectar ao banco de dados %s: %s %s: n�o p�de obter nome de usu�rio atual: %s
 %s: n�o p�de obter informa��o sobre usu�rio atual: %s
 %s: cria��o de nova role falhou: %s %s: cria��o do banco de dados falhou: %s %s: remo��o do banco de dados falhou: %s %s: linguagem "%s" j� est� instalada no banco de dados "%s"
 %s: linguagem "%s" n�o est� instalada no banco de dados "%s"
 %s: instala��o de linguagem falhou: %s %s: remo��o da linguagem falhou: %s %s: nome do banco de dados � um argumento requerido
 %s: nome da linguagem � um argumento requerido
 %s: consulta falhou: %s %s: consulta foi: %s
 %s: reindexando banco de dados "%s"
 %s: reindexa��o do banco de dados "%s" falhou: %s %s: reindexa��o do �ndice "%s" no banco de dados "%s" falhou: %s %s: reindexa��o dos cat�logos do sistema falhou: %s %s: reindexa��o da tabela "%s" no banco de dados "%s" falhou: %s %s: remo��o da role "%s" falhou: %s %s: ainda h� %s fun��es declaradas na linguagem "%s"; linguagem n�o foi removida
 %s: muitos argumentos para linha de comando (primeiro � "%s")
 %s: limpando banco de dados "%s"
 %s: limpeza no banco de dados "%s" falhou: %s %s: limpeza na tabela "%s" no banco de dados "%s" falhou: %s Voc� tem certeza? Banco de dados "%s" ser� permanentemente removido.
 Digite-a novamente:  Digite o nome da role a ser adicionada:  Digite o nome da role a ser removida:  Digite a senha para a nova role:  Nome Criptografia de senha falhou.
 Senha:  Senhas n�o correspondem.
 Por favor responda "%s" ou "%s".
 Linguagens Procedurais Role "%s" ser� permanentemente removida.
 A nova role poder� criar um super-usu�rio? A nova role poder� criar bancos de dados? A nova role poder� criar novas roles? Confi�vel? Tente "%s --help" para obter informa��es adicionais.
 Uso:
 n n�o s sim 