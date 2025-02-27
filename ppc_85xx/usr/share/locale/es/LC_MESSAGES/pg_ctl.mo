��    b      ,  �   <      H      I     j  &   |     �     �  -   �     	     &	  r   C	     �	  F   �	  A   
     _
  7   z
  !   �
  3   �
  ?     ?   H  H   �  D   �  E     ?   \  B   �  <   �  z     0   �  F   �  8     2   H  O   {  7   �          
  �     !   �  A   �  y     C   �  D   �  A     *   M  /   x  %   �  /   �  #   �     "  3   @  0   t  ,   �  .   �  3     -   5  0   c  5   �  "   �  $   �  J        ]     y  3   �  0   �     �       !   '  $   I      n  -   �  4   �  %   �  $     "   =  F   `  F   �     �  7     q   :  f   �  &        :  &   B  0   i  )   �  "   �      �  (        1  !   L     n     �     �     �     �     �     �     �  "   
     -  W  L  *   �     �  (   �  "     %   /  0   U     �  (   �  o   �     9  H   Y  A   �     �  8   �     8  4   W  C   �  G   �  r     w   �  ~      N   �   F   �   A   !  �   Z!  5   �!  J   "  K   h"  8   �"  h   �"  I   V#     �#     �#  �   �#  %   c$  V   �$  �   �$  d   u%  e   �%  c   @&  .   �&  0   �&  0   '  :   5'  ,   p'  $   �'  >   �'  -   (  1   /(  /   a(  F   �(  @   �(  <   )  @   V)  ,   �)  -   �)  O   �)     B*  !   b*  ;   �*  >   �*     �*     +  -   3+  (   a+  +   �+  B   �+  D   �+  )   >,  '   h,  '   �,  O   �,  C   -      L-  A   m-  x   �-  q   (.  .   �.     �.  /   �.  3   /  .   6/  '   e/  *   �/  /   �/     �/  (   0     10     Q0     l0  $   �0     �0     �0     �0  '   �0  '   1  &   41     A           _                                1          (   9   N               .       U   <   C             T      X   `   #      &          4   W      0      I   O       %   
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
 waiting for server to shut down... waiting for server to start... Project-Id-Version: pg_ctl 8.0
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-11-29 18:24-0300
PO-Revision-Date: 2004-11-02 23:45-0400
Last-Translator: alvherre <alvherre@dcc.uchile.cl>
Language-Team: PgSQL-es-Ayuda <pgsql-es-ayuda@postgresql.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Nombres de se�ales permitidos para kill:
 
Opciones comunes:
 
Opciones para registrar y dar de baja:
 
Opciones para inicio y reinicio:
 
Opciones para detenci�n y reinicio:
 
Reporte errores a <pgsql-bugs@postgresql.org>.
 
Modos de detenci�n son:
   %s kill    NOMBRE-SE�AL ID-DE-PROCESO
   %s register   [-N SERVICIO] [-U USUARIO] [-P PASSWORD] [-D DATADIR]
                    [-w] [-o �OPCIONES�]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m MODO-DETENCI�N] [-o �OPCIONES�]
   %s start   [-w] [-D DATADIR] [-s] [-l ARCHIVO] [-o �OPCIONES�]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m MODO-DETENCI�N]
   %s unregister [-N SERVICIO]
   --help                 mostrar este texto y salir
   --version              mostrar informaci�n sobre versi�n y salir
   -D, --pgdata DATADIR   ubicaci�n del �rea de almacenamiento de datos
   -N SERVICIO            nombre de servicio con el cual registrar
                         el servidor PostgreSQL
   -P CONTRASE�A          contrase�a de la cuenta con la cual registrar
                         el servidor PostgreSQL
   -U USUARIO             nombre de usuario de la cuenta con la cual
                         registrar el servidor PostgreSQL
   -W                     no esperar hasta que la operaci�n se haya completado
   -l  --log ARCHIVO      guardar el registro del servidor en ARCHIVO.
   -m MODO-DE-DETENCI�N   puede ser �smart�, �fast� o �immediate�
   -o OPCIONES            par�metros de l�nea de �rdenes a pasar a postgres
                         (ejecutable del servidor de PostgreSQL)
   -p RUTA-A-POSTGRES     normalmente no es necesario
   -s, --silent           mostrar s�lo errores, no mensajes de informaci�n
   -w                     esperar hasta que la operaci�n se haya completado
   fast        salir directamente, con apagado apropiado
   immediate   salir sin apagado completo; se ejecutar� recuperaci�n
              en el pr�ximo inicio

   smart       salir despu�s que todos los clientes se hayan desconectado
  listo
  fall�
 %s es un programa para iniciar, detener, reiniciar, recargar archivos de
configuraci�n, reportar el estado de un servidor PostgreSQL o enviar una
se�al a un proceso PostgreSQL.

 %s: el archivo de PID �%s� no existe
 %s: otro postmaster puede estar en ejecuci�n; tratando de ejecutarlo de todas formas.
 %s: no puede ser ejecutado como root
Por favor con�ctese (por ej. usando �su�) con un usuario no privilegiado,
quien ejecutar� el proceso servidor.
 %s: no se puede recargar el servidor;
un servidor en modo mono-usuario est� en ejecuci�n (PID: %ld)
 %s: no se puede reiniciar el servidor;
un servidor en modo mono-usuario est� en ejecuci�n (PID: %ld)
 %s: no se puede detener el servidor;
un servidor en modo mono-usuario est� en ejecuci�n (PID: %ld)
 %s: no se pudo encontrar el propio ejecutable
 %s: no se pudo encontrar el ejecutable postgres
 %s: no se pudo abrir el archivo de PID �%s�: %s
 %s: no se pudo abrir el servicio �%s�: c�digo de error %d
 %s: no se pudo abrir el gestor de servicios
 %s: no se pudo leer el archivo �%s�
 %s: no se pudo registrar el servicio �%s�: c�digo de error %d
 %s: la se�al de recarga fall� (PID: %ld): %s
 %s: no se pudo enviar la se�al %d (PID: %ld): %s
 %s: fall� la se�al de detenci�n (PID: %ld): %s
 %s: no se pudo iniciar el servidor.
Examine el registro del servidor.
 %s: no se pudo iniciar el servidor: el c�digo de retorno fue %d
 %s: no se pudo iniciar el servicio �%s�: c�digo de error %d
 %s: no se pudo dar de baja el servicio �%s�: c�digo de error %d
 %s: datos no v�lidos en archivo de PID �%s�
 %s: argumentos faltantes para env�o de se�al
 %s: no se especific� directorio de datos y la variable PGDATA no est� definida
 %s: no se especific� operaci�n
 %s: no hay servidor en ejecuci�n
 %s: el proceso servidor antiguo (PID: %ld) parece no estar
 %s: archivo de opciones �%s� debe tener exactamente una l�nea
 %s: memoria agotada
 %s: el servidor no se detiene
 %s: el servidor est� en ejecuci�n (PID: %ld)
 %s: el servicio �%s� ya est� registrado
 %s: el servicio �%s� no ha sido registrado
 %s: un servidor en modo mono-usuario est� en ejecuci�n (PID: %ld)
 %s: demasiados argumentos de l�nea de comandos (el primero es �%s�)
 %s: modo de operaci�n �%s� no reconocido
 %s: modo de apagado �%s� no reconocido
 %s: nombre de se�al �%s� no reconocido
 (Por omisi�n se espera para las detenciones, pero no los inicios o reinicios)

 Si la opci�n -D es omitida, se usa la variable de ambiente PGDATA.
 �Est� el servidor en ejecuci�n?
 Por favor termine el servidor mono-usuario e intente nuevamente.
 %s necesita el programa �postgres�, pero no pudo encontrarlo en el mismo
directorio que �%s�.
Verifique su instalaci�n.
 El programa �postgres� fue encontrado por %s, pero no es
de la misma versi�n que �%s�.
Verifique su instalaci�n.
 Use �%s --help� para obtener m�s informaci�n.
 Empleo:
 el proceso hijo termin� con c�digo de salida %d el proceso hijo termin� con c�digo no reconocido %d el proceso hijo fue terminado por una se�al %d no se pudo cambiar el directorio a �%s� no se pudo encontrar un �%s� para ejecutar no se pudo identificar el directorio actual: %s no se pudo leer el binario �%s� no se pudo leer el enlace simb�lico �%s� no se pudo iniciar el servidor
 el binario %s no es v�lida servidor deteni�ndose
 se ha enviado una se�al al servidor
 servidor iniciado
 servidor inici�ndose
 servidor detenido
 iniciando el servidor de todas maneras
 esperando que el servidor se detenga... esperando que el servidor se inicie... 