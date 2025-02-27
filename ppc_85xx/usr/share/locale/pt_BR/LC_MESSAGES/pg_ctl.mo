��    b      ,  �   <      H      I     j  &   |     �     �  -   �     	     &	  r   C	     �	  F   �	  A   
     _
  7   z
  !   �
  3   �
  ?     ?   H  H   �  D   �  E     ?   \  B   �  <   �  z     0   �  F   �  8     2   H  O   {  7   �          
  �     !   �  A   �  y     C   �  D   �  A     *   M  /   x  %   �  /   �  #   �     "  3   @  0   t  ,   �  .   �  3     -   5  0   c  5   �  "   �  $   �  J        ]     y  3   �  0   �     �       !   '  $   I      n  -   �  4   �  %   �  $     "   =  F   `  F   �     �  7     q   :  f   �  &        :  &   B  0   i  )   �  "   �      �  (        1  !   L     n     �     �     �     �     �     �     �  "   
     -  q  L  %   �     �  ,   �  !   "  $   D  -   i     �     �  o   �      A  J   b  @   �     �  <   
  "   G  5   j  D   �  L   �  M   2  E   �  F   �  G      M   U   A   �   �   �   :   p!  L   �!  C   �!  ?   <"  `   |"  A   �"     #     &#  �   .#  #   �#  R   �#  �   P$  R   �$  Q   6%  M   �%  "   �%  9   �%  +   3&  3   _&  *   �&     �&  7   �&  4   '  ,   J'  3   w'  :   �'  8   �'  5   (  A   U(  )   �(  &   �(  c   �(  "   L)  $   o)  ?   �)  9   �)     *     *  (   :*  $   c*  %   �*  4   �*  <   �*  )    +  +   J+  $   v+  G   �+  F   �+     *,  =   G,  x   �,  l   �,  5   k-     �-  .   �-  2   �-  *   	.  "   4.  )   W.  (   �.     �.      �.     �.     /     /     6/     O/     b/     {/     �/      �/     �/     A           _                                1          (   9   N               .       U   <   C             T      X   `   #      &          4   W      0      I   O       %   
                 b   :             D   S   V   L                      ]         Y   /   R   !              M   5                  J   7   2   [   @   ;      H   -       ,   G   P       "   B   )      >   a   $   F   6   K   Q   \      +          3   =          	                 8   *   '      E   ?       ^   Z    
Allowed signal names for kill:
 
Common options:
 
Options for register and unregister:
 
Options for start or restart:
 
Options for stop or restart:
 
Report bugs to <pgsql-bugs@postgresql.org>.
 
Shutdown modes are:
   %s kill    SIGNALNAME PID
   %s register   [-N SERVICENAME] [-U USERNAME] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o "OPTIONS"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m SHUTDOWN-MODE] [-o "OPTIONS"]
   %s start   [-w] [-D DATADIR] [-s] [-l FILENAME] [-o "OPTIONS"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m SHUTDOWN-MODE]
   %s unregister [-N SERVICENAME]
   --help                 show this help, then exit
   --version              output version information, then exit
   -D, --pgdata DATADIR   location of the database storage area
   -N SERVICENAME  service name with which to register PostgreSQL server
   -P PASSWORD     password of account to register PostgreSQL server
   -U USERNAME     user name of account to register PostgreSQL server
   -W                     do not wait until operation completes
   -l, --log FILENAME     write (or append) server log to FILENAME
   -m SHUTDOWN-MODE   may be "smart", "fast", or "immediate"
   -o OPTIONS             command line options to pass to postgres
                         (PostgreSQL server executable)
   -p PATH-TO-POSTGRES    normally not necessary
   -s, --silent           only print errors, no informational messages
   -w                     wait until operation completes
   fast        quit directly, with proper shutdown
   immediate   quit without complete shutdown; will lead to recovery on restart
   smart       quit after all clients have disconnected
  done
  failed
 %s is a utility to start, stop, restart, reload configuration files,
report the status of a PostgreSQL server, or signal a PostgreSQL process.

 %s: PID file "%s" does not exist
 %s: another server may be running; trying to start server anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload server; single-user server is running (PID: %ld)
 %s: cannot restart server; single-user server is running (PID: %ld)
 %s: cannot stop server; single-user server is running (PID: %ld)
 %s: could not find own program executable
 %s: could not find postgres program executable
 %s: could not open PID file "%s": %s
 %s: could not open service "%s": error code %d
 %s: could not open service manager
 %s: could not read file "%s"
 %s: could not register service "%s": error code %d
 %s: could not send reload signal (PID: %ld): %s
 %s: could not send signal %d (PID: %ld): %s
 %s: could not send stop signal (PID: %ld): %s
 %s: could not start server
Examine the log output.
 %s: could not start server: exit code was %d
 %s: could not start service "%s": error code %d
 %s: could not unregister service "%s": error code %d
 %s: invalid data in PID file "%s"
 %s: missing arguments for kill mode
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: no server running
 %s: old server process (PID: %ld) seems to be gone
 %s: option file "%s" must have exactly one line
 %s: out of memory
 %s: server does not shut down
 %s: server is running (PID: %ld)
 %s: service "%s" already registered
 %s: service "%s" not registered
 %s: single-user server is running (PID: %ld)
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized operation mode "%s"
 %s: unrecognized shutdown mode "%s"
 %s: unrecognized signal name "%s"
 (The default is to wait for shutdown, but not for start or restart.)

 If the -D option is omitted, the environment variable PGDATA is used.
 Is server running?
 Please terminate the single-user server and try again.
 The program "postgres" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postgres" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not start server
 invalid binary "%s" server shutting down
 server signaled
 server started
 server starting
 server stopped
 starting server anyway
 waiting for server to shut down... waiting for server to start... Project-Id-Version: PostgreSQL 8.2
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-10-23 23:49-0200
PO-Revision-Date: 2005-10-04 22:15-0300
Last-Translator: Euler Taveira de Oliveira <euler@timbira.com>
Language-Team: Brazilian Portuguese <pgbr-dev@listas.postgresql.org.br>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Sinais permitidos para sinaliza��o:
 
Op��es comuns:
 
Op��es para registrar ou remover registro:
 
Op��es para in�cio ou rein�cio:
 
Op��es para desligar ou reiniciar:
 
Relate erros a <pgsql-bugs@postgresql.org>.
 
Modos de desligamento s�o:
   %s kill    NOME_SINAL PID
   %s register   [-N NOME_SERVI�O] [-U USU�RIO] [-P SENHA] [-D DIRDADOS]
                    [-w] [-o "OP��ES"]
   %s reload  [-D DIRDADOS] [-s]
   %s restart [-w] [-D DIRDADOS] [-s] [-m MODO-DESLIGAMENTO] [-o "OP��ES"]
   %s start   [-w] [-D DIRDADOS] [-s] [-l ARQUIVO] [-o "OP��ES"]
   %s status  [-D DIRDADOS]
   %s stop    [-W] [-D DIRDADOS] [-s] [-m MODO-DESLIGAMENTO]
   %s unregister [-N NOME_SERVI�O]
   --help                 mostra esta ajuda e termina
   --version              mostra informa��o sobre a vers�o e termina
   -D, --pgdata DIRDADOS  local da �rea de armazenamento dos bancos de dados
   -N NOME_SERVI�O nome do servi�o no qual se registrou o servidor PostgreSQL
   -P SENHA        senha da conta que registrou o servidor PostgreSQL
   -U USU�RIO      nome do usu�rio que registrou o servidor PostgreSQL
   -W                     n�o espera at� que a opera��o seja completada
   -l, --log ARQUIVO      escreve (ou concatena) log do servidor para ARQUIVO
   -m MODO-DESLIGAMENTO   pode ser "smart", "fast" ou "immediate"
   -o OP��ES              op��es de linha de comando passadas para o postgres
                         (execut�vel do servidor PostgreSQL)
   -p CAMINHO-PARA-POSTGRES   normalmente n�o � necess�rio
   -s, --silent           mostra somente erros, nenhuma mensagem informativa
   -w                     espera at� que a opera��o seja completada
   fast        termina diretamente, com desligamento apropriado
   immediate   termina sem desligamento completo; conduzir� a uma recupera��o durante o rein�cio
   smart       termina depois que todos os clientes desconectarem
 feito
 falhou
 %s � um utilit�rio que inicia, para, reinicia, recarrega arquivos de configura��o,
relata o estado do servidor PostgreSQL ou envia um sinal a um processo do PostgreSQL.

 %s: arquivo do PID "%s" n�o existe
 %s: outro servidor pode estar executando; tentando iniciar o servidor assim mesmo
 %s: n�o pode ser executado como root
Por favor entre (utilizando "su") como um usu�rio (sem privil�gios) que
ser� o dono do processo do servidor.
 %s: n�o pode recarregar servidor; servidor monousu�rio est� executando (PID: %ld)
 %s: n�o pode reiniciar servidor; servidor monousu�rio est� executando (PID: %ld)
 %s: n�o pode parar servidor; servidor monousu�rio est� executando (PID: %ld)
 %s: n�o p�de encontrar execut�vel
 %s: n�o p�de encontrar o programa execut�vel do postgres
 %s: n�o p�de abrir arquivo do PID "%s": %s
 %s: n�o p�de abrir servi�o "%s": c�digo de erro %d
 %s: n�o p�de abrir gerenciador de servi�o
 %s: n�o p�de ler arquivo "%s"
 %s: n�o p�de registrar servi�o "%s": c�digo de erro %d
 %s: n�o p�de enviar sinal de recarga (PID: %ld): %s
 %s: n�o p�de enviar sinal %d (PID: %ld): %s
 %s: n�o p�de enviar sinal de parada (PID: %ld): %s
 %s: n�o pode iniciar o servidor
Examine o arquivo de log.
 %s: n�o p�de iniciar o servidor: c�digo de sa�da foi %d
 %s: n�o p�de iniciar servi�o "%s": c�digo de erro %d
 %s: n�o p�de remover registro do servi�o "%s": c�digo de erro %d
 %s: dado inv�lido no arquivo do PID "%s"
 %s: faltando argumento para modo kill
 %s: nenhum diret�rio de banco de dados especificado e vari�vel de ambiente PGDATA n�o foi definida
 %s: nenhuma opera��o especificada
 %s: nenhum servidor est� executando
 %s: processo servidor antigo (PID: %ld) parece estar terminado
 %s: arquivo de op��es "%s" deve ter exatamente uma linha
 %s: sem mem�ria
 %s: servidor n�o desligou
 %s: servidor est� executando (PID: %ld)
 %s: servi�o "%s" j� est� registrado
 %s: servi�o "%s" n�o est� registrado
 %s: servidor monousu�rio est� executando (PID: %ld)
 %s: muitos argumentos de linha de comando (primeiro � "%s")
 %s: modo de opera��o "%s" � desconhecido
 %s: modo de desligamento "%s" desconhecido
 %s: nome de sinal "%s" desconhecido
 (O padr�o � esperar o desligamento, mas n�o para in�cio ou rein�cio).

 Se a op��o -D for omitida, a vari�vel de ambiente PGDATA � utilizada.
 O servidor est� executando?
 Por favor finalize o servidor monousu�rio e tente novamente.
 O programa "postgres" � requerido pelo %s mas n�o foi encontrado no
mesmo diret�rio que "%s".
Verifique sua instala��o.
 O programa "postgres" foi encontrado pelo "%s"
mas n�o tem a mesma vers�o que %s.
Verifique sua instala��o.
 Tente "%s --help" para obter informa��es adicionais.
 Uso:
 processo filho terminou com c�digo de sa�da %d processo filho terminou com status desconhecido %d processo filho foi terminado pelo sinal %d n�o p�de mudar diret�rio para "%s" n�o p�de encontrar o "%s" para execut�-lo n�o p�de identificar diret�rio atual: %s n�o p�de ler o bin�rio "%s" n�o p�de ler link simb�lico "%s" n�o p�de iniciar o servidor
 bin�rio "%s" � inv�lido servidor est� desligando
 servidor foi sinalizado
 servidor iniciado
 servidor est� iniciando
 servidor est� parado
 iniciando servidor mesmo assim
 esperando o servidor desligar... esperando o servidor iniciar... 