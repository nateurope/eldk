��    l      |  �   �      0	  R   1	     �	  
   �	  -   �	  �   �	  �   e
         "  J   B  5   �  J   �  6     P   E  C   �  :   �  4     B   J  H   �  >   �  9     3   O  ?   �  /   �  -   �  E   !  y   g  (   �  7   
  (   B  3   k  '   �  5   �  -   �  -   +  /   Y  "   �  6   �  �   �  0   �  $   �  �   �  ~   t  1   �     %  J   C  �   �     V  D   i  -   �  !   �  4   �  ,   3     `     �     �     �     �     �  ;   �  9   ;  �   u  >     0  E  u   v  q   �  f   ^  &   �     �     �  &     0   *  )   [     �  &   �  "   �  #   �  "         6  (   W  "   �     �  "   �  !   �  .     ,   2  6   _  $   �  %   �  !   �                8     Y     v  -   �  0   �     �           +   )   ?      i      m   &   |   3   �      �   +   �   !   !  q  ;!  Z   �"  )   #  	   2#  -   <#  �   j#  �   $     �$  D  �$  a   &  8   {&  R   �&  ;   '  R   C'  U   �'  E   �'  G   2(  J   z(  D   �(  9   
)  5   D)  :   z)  F   �)  <   �)  9   9*  H   s*  �   �*  (   S+  4   |+  &   �+  '   �+  '    ,  >   (,  1   g,  1   �,  +   �,  '   �,  A   -  �   a-  5   .  )   O.  �   y.  �   /  =   �/  !   �/  ]   �/  �   U0     .1  [   ?1  2   �1  &   �1  <   �1  -   22  '   `2     �2  $   �2     �2  %   �2  !   3  ;   $3  A   `3  �   �3  =   :4  `  x4  �   �5  x   a6  l   �6  5   G7     }7     �7  .   �7  2   �7  *   �7  "   $8  /   G8  %   w8  &   �8  "   �8  )   �8  (   9  "   :9     ]9      y9      �9  2   �9  0   �9  =   :  &   ]:  (   �:  %   �:     �:     �:     ;     %;     @;  2   _;  3   �;     �;     �;     <  0   <     L<     P<  (   ]<  5   �<     �<  0   �<  &   =         T   6      ;              G                                  @       ^          L   k   U      3   2   ,   F   >       H   N   Y   '   M              a          f   5       h             <                 4   X   !   Q   Z          V   ]   8   I       \                 b   S   d       +      *             j   :   O   J              1      -   l   D       `   E   C   7   .   e   
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
POT-Creation-Date: 2006-10-23 23:49-0200
PO-Revision-Date: 2005-10-04 22:36-0300
Last-Translator: Euler Taveira de Oliveira <euler@timbira.com>
Language-Team: Brazilian Portuguese <pgbr-dev@listas.postgresql.org.br>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Se o diret�rio de dados n�o for especificado, a vari�vel de ambiente PGDATA
� utilizada.
 
Op��es utilizadas com menos frequ�ncia:
 
Op��es:
 
Relate erros a <pgsql-bugs@postgresql.org>.
 
Sucesso. Voc� pode iniciar o servidor de banco de dados utilizando:

    %s%s%spostgres%s -D %s%s%s
ou
    %s%s%spg_ctl%s -D %s%s%s -l logfile start

 
AVISO: habilitando m�todo de autentica��o "trust" para conex�es locais
Voc� pode mud�-lo editando o pg_hba.conf ou utilizando a op��o -A na
pr�xima vez que voc� executar o initdb.
   %s [OP��O]... [DIRDADOS]
   --lc-collate, --lc-ctype, --lc-messages=LOCALIDADE
  --lc-monetary, --lc-numeric, --lc-time=LOCALIDADE
                               inicializa o agrupamento de banco de dados com o idioma informado
                               na respectiva categoria (o ambiente � assumido
                               como padr�o)
   --locale=LOCALIDADE          inicializa o agrupamento de banco de dados com o idioma informado
   --no-locale                  equivalente a --locale=C
   --pwfile=ARQUIVO             l� senha do novo super-usu�rio a partir do arquivo
   -?, --help                   mostra essa ajuda e termina
   -A, --auth=M�TODO            m�todo de autentica��o padr�o para conex�es locais
   -E, --encoding=CODIFICA��O  ajusta a codifica��o padr�o para novos bancos de dados
   -L DIRET�RIO                 onde encontrar os arquivos de entrada
   -U, --username=NOME          nome do super-usu�rio do banco de dados
   -V, --version                mostra informa��o sobre a vers�o e termina
   -W, --pwprompt               pergunta senha do novo super-usu�rio
   -d, --debug                  mostra sa�da da depura��o
   -n, --noclean                n�o remove ap�s erros
   -s, --show                   mostra defini��es internas
  [-D, --pgdata=]DIRDADOS       local do agrupamento de banco de dados
 %s inicializa um agrupamento de banco de dados PostgreSQL.

 %s: "%s" n�o � um nome de codifica��o do servidor v�lido
 %s: O arquivo de senhas n�o foi gerado. Por favor relate este problema.
 %s: n�o pode ser executado como root
Por favor entre (utilizando, i.e., "su") como usu�rio (sem privil�gios) que ser�
o dono do processo do servidor.
 %s: n�o p�de acessar diret�rio "%s": %s
 %s: n�o p�de mudar permiss�es do diret�rio "%s": %s
 %s: n�o p�de criar diret�rio "%s": %s
 %s: n�o p�de obter vers�o curta v�lida
 %s: n�o p�de executar comando "%s": %s
 %s: n�o p�de encontrar codifica��o ideal para localidade "%s"
 %s: n�o p�de abrir arquivo "%s" para leitura: %s
 %s: n�o p�de abrir arquivo "%s" para escrita: %s
 %s: n�o p�de ler senha do arquivo "%s": %s
 %s: n�o p�de escrever arquivo "%s": %s
 %s: diret�rio de dados "%s" n�o foi removido a pedido do usu�rio
 %s: diret�rio "%s" existe mas n�o est� vazio
Se voc� quer criar um novo sistema de banco de dados, remova ou esvazie
o diret�rio "%s" ou execute %s
com um argumento ao inv�s de "%s".
 %s: falhou ao remover conte�do do diret�rio de dados
 %s: falhou ao remover diret�rio de dados
 %s: arquivo "%s" n�o existe
Isso significa que voc� tem uma instala��o corrompida ou especificou
o diret�rio errado com a invoca��o da op��o -L.
 %s: arquivo de entrada "%s" n�o pertence ao PostgreSQL %s
Verifique sua instala��o ou especifique o caminho correto utilizando a op��o -L.
 %s: local do arquivo de entrada deve ser um caminho absoluto
 %s: nome de idioma inv�lido "%s"
 %s: voc� precisa especificar uma senha para o super-usu�rio para habilitar a autentica��o %s
 %s: nenhum diret�rio de dados foi especificado
Voc� deve identificar o diret�rio onde os dados para esse sistema de banco de dados
ir� residir. Fa�a isso com o invoca��o da op��o -D ou a
vari�vel de ambiente PGDATA.
 %s: sem mem�ria
 %s: op��o para perguntar a senha e um arquivo de senhas n�o podem ser especificados juntos
 %s: removendo conte�do do diret�rio de dados "%s"
 %s: removendo diret�rio de dados "%s"
 %s: muitos argumentos de linha de comando (primeiro � "%s")
 %s: m�todo de autentica��o desconhecido "%s"
 %s: aviso: codifica��o n�o corresponde
 Digite-a novamente:  Digite nova senha de super-usu�rio:  Senhas n�o correspondem.
 Execute novamente %s com a op��o -E.
 Executando no modo de depura��o.
 Executando no modo sem limpeza. Erros n�o ser�o removidos.
 O agrupamento de banco de dados ser� inicializado com idioma %s.
 O agrupamento de banco de dados ser� inicializado com idioma
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 A codifica��o padr�o do banco de dados foi definida para %s.
 A codifica��o que voc� escolheu (%s) e a codifica��o que o idioma
selecionado utiliza (%s) n�o tem correspond�ncia. Isto pode conduzir
a um comportamento inesperado em fun��es de processamento de cadeia de caracteres. Para corrigir
esta situa��o, execute novamente o %s e n�o especifique uma codifica��o
explicitamente ou escolha uma outra combina��o.
 Os arquivos deste sistema de banco de dados pertencer�o ao usu�rio "%s".
Esse usu�rio deve ser o dono do processo do servidor tamb�m.

 O programa "postgres" � requerido pelo %s mas n�o foi encontrado no
mesmo diret�rio que "%s".
Verifique sua instala��o.
 O programa "postgres" foi encontrado pelo "%s"
mas n�o tem a mesma vers�o que %s.
Verifique sua instala��o.
 Tente "%s --help" para obter informa��es adicionais.
 Uso:
 sinal foi recebido
 processo filho terminou com c�digo de sa�da %d processo filho terminou com status desconhecido %d processo filho foi terminado pelo sinal %d remo��o de arquivo "%s" conclu�da
 renomea��o de arquivo "%s" para "%s" conclu�da
 copiando template1 para postgres ...  copiando template1 para template0 ...  n�o p�de mudar diret�rio para "%s" n�o p�de encontrar o "%s" para execut�-lo n�o p�de identificar diret�rio atual: %s n�o p�de abrir diret�rio "%s": %s
 n�o p�de ler o bin�rio "%s" n�o p�de ler diret�rio "%s": %s
 n�o p�de ler link simb�lico "%s" n�o p�de remover arquivo "%s", tentando novamente
 n�o p�de remover arquivo ou  diret�rio "%s": %s
 n�o p�de renomear arquivo "%s" para "%s", tentando novamente
 n�o p�de definir jun��o para "%s": %s
 n�o p�de escrever em processo filho: %s
 criando arquivos de configura��o ...  criando convers�es ...  criando diret�rio %s ...  criando esquema informa��o ...  criando subdiret�rios ...  criando vis�es do sistema ...  criando banco de dados template1 em %s/base/1 ...  alterando permiss�es no diret�rio existente %s ...  inicializando depend�ncias ...  inicializando pg_authid ...  bin�rio "%s" � inv�lido carregando descri��es de objetos do sistema ...  ok
 sem mem�ria
 selecionando max_connections padr�o ...  selecionando shared_buffers/max_fsm_pages padr�o ...  definindo senha ...  definindo privil�gios dos objetos embutidos ...  limpando banco de dados template1 ...  