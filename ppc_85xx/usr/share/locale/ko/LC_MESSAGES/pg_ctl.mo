Þ    b      ,     <      H      I     j  &   |     £     Ã  -   â     	     &	  r   C	     ¶	  F   Ö	  A   
     _
  7   z
  !   ²
  3   Ô
  ?     ?   H  H     D   Ñ  E     ?   \  B     <   ß  z     0     F   È  8     2   H  O   {  7   Ë          
       !   ¤  A   Æ  y     C     D   Æ  A     *   M  /   x  %   ¨  /   Î  #   þ     "  3   @  0   t  ,   ¥  .   Ò  3     -   5  0   c  5     "   Ê  $   í  J        ]     y  3     0   Ä     õ       !   '  $   I      n  -     4   ½  %   ò  $     "   =  F   `  F   §     î  7     q   :  f   ¬  &        :  &   B  0   i  )     "   Ä      ç  (        1  !   L     n               °     Á     Ñ     â     ò  "   
     -  K  L  <        Õ  '   é  4     4   F  ,   {     ¨  !   ¿     á     b  J     J   Í       6   3  %   j  :     >   Ë  V   
  L   a  G   ®  >   ö  H   5   F   ~   A   Å      !  4   !  Y   È!  >   ""  W   a"  b   ¹"  N   #     k#     t#  Ô   }#  $   R$  T   w$  ã   Ì$  l   °%  _   &  K   }&  =   É&  @   '  *   H'  7   s'  *   «'  %   Ö'  =   ü'  9   :(  5   t(  7   ª(  I   â(  5   ,)  =   b)  N    )  /   ï)  7   *  U   W*  5   ­*  #   ã*  ?   +  E   G+     +  "   £+  '   Æ+  2   î+  1   !,  8   S,  4   ,  &   Á,  !   è,  $   
-  c   /-  J   -     Þ-  @   þ-  ½   ?.     ý.  *   /     È/  8   Ô/  ?   0  4   M0  *   0  *   ­0  )   Ø0  '   1  *   *1      U1     v1     1  +   «1     ×1     é1     2  $   2  .   >2  1   m2     A           _                                1          (   9   N               .       U   <   C             T      X   `   #      &          4   W      0      I   O       %   
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
POT-Creation-Date: 2007-02-07 00:38+0900
PO-Revision-Date: 2006-12-19 01:20+0900
Last-Translator: Ioseph Kim <ioseph@uri.sarang.net>
Language-Team: KOREAN <pgsql-kr@postgresql.or.kr>
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
 
ì¬ì©í  ì ìë ì¤ì§ì©(for kill) ìê·¸ë ì´ë¦:
 
ì¼ë° ìµìë¤:
 
ìë¹ì¤ ë±ë¡/ì ê±°ì© ìµìë¤:
 
start, restart ë ì¬ì©í  ì ìë ìµìë¤:
 
stop, restart ë ì¬ì© í  ì ìë ìµìë¤:
 
ì¤ë¥ë³´ê³ : <pgsql-bugs@postgresql.org>.
 
ì¤ì§ë°©ë² ì¤ëª:
   %s kill    ìê·¸ëì´ë¦ PID
   %s register   [-N ìë¹ì¤ì´ë¦] [-U ì¬ì©ì] [-P ë¹ë°ë²í¸] [-D DATADIR]
                    [-w] [-o "ìë²ìµì"]
   %s reload  [-D DATADIR] [-s]
   %s restart [-w] [-D DATADIR] [-s] [-m ì¤ì§ë°©ë²] [-o "ìë²ìµì"]
   %s start   [-w] [-D DATADIR] [-s] [-l ë¡ê·¸íì¼] [-o "ìë²ìµì"]
   %s status  [-D DATADIR]
   %s stop    [-W] [-D DATADIR] [-s] [-m ì¤ì§ë°©ë²]
   %s unregister [-N ìë¹ì¤ì´ë¦]
   --help                 ëìë§ì ë³´ì¬ì£¼ê³  ë§ì¹¨
   --version              ë²ì  ì ë³´ë¥¼ ë³´ì¬ì£¼ê³  ë§ì¹¨
   -D, --pgdata DATADIR   ë°ì´í°ë² ì´ì¤ ìë£ê° ì ì¥ëì´ìë ëë í ë¦¬
   -N SERVICENAME  ìë¹ì¤ ëª©ë¡ì ë±ë¡ë  PostgreSQL ìë¹ì¤ ì´ë¦
   -P PASSWORD     ì´ ìë¹ì¤ë¥¼ ì¤íí  ì¬ì©ìì ë¹ë°ë²í¸
   -U USERNAME     ì´ ìë¹ì¤ë¥¼ ì¤íí  ì¬ì©ì ì´ë¦
   -W                     ììì´ ëë  ëê¹ì§ ê¸°ë¤ë¦¬ì§ ìì
   -l, --log íì¼ì´ë¦     ìë² ë¡ê·¸ë¥¼ ì´ íì¼ì ê¸°ë¡í¨
   -m ì¤ì§ë°©ë²        "smart", "fast", "immediate" ì¤ íë
   -o ìµìë¤              PostgreSQL ìë²íë¡ê·¸ë¨ì¸ postgres ì¤íí  ë
                         ì¬ì©í  ëªë ¹í ìµìë¤
   -p PATH-TO-POSTGRES    ë³´íµì íìì¹ ìì
   -s, --silent           ì¼ë°ì ì¸ ë©ìì§ë ë³´ì´ì§ ìê³ , ì¤ë¥ë§ ë³´ì¬ì¤
   -w                     ììì´ ëë  ëê¹ì§ ê¸°ë¤ë¦¼
   fast        í´ë¼ì´ì¸í¸ì ì°ê²°ì ê°ì ë¡ ëê³  ì ìì ì¼ë¡ ì¤ì§ ë¨
   immediate   ê·¸ë¥ ë¬´ì¡°ê±´ ì¤ì§í¨; ë¤ì ììí  ë ë³µêµ¬ ììì í  ìë ìì
   smart       ëª¨ë  í´ë¼ì´ì¸í¸ì ì°ê²°ì´ ëê¸°ê² ëë©´ ì¤ì§ ë¨
  ìë£
  ì¤í¨
 %s íë¡ê·¸ë¨ì PostgreSQL ìë¹ì¤ë¥¼ ìì, ì¤ì§, ì¬ìì, íê²½ì¤ì  ì¬ì ì©,
ìë² ìí ë³´ê¸°, ëë PostgreSQL íë¡ì¸ì¤ì í¹ì  ìê·¸ëì ë³´ë¼ ì ìë
íë¡ê·¸ë¨ìëë¤.

 %s: "%s" PID íì¼ì´ ììµëë¤
 %s: ë¤ë¥¸ ìë²ê° ê°ë ì¤ì¸ ê² ê°ì; ì´ì§¸ë  ìë² ê°ëì ìëí¨
 %s: rootë¡ ì´ íë¡ê·¸ë¨ì ì¤ííì§ ë§ì­ìì¤
ìì¤íê´ë¦¬ì ê¶íì´ ìë, ìë²íë¡ì¸ì¤ì ìì ì£¼ê° ë  ì¼ë° ì¬ì©ìë¡
ë¡ê·¸ì¸ í´ì("su", "runas" ê°ì ëªë ¹ ì´ì©) ì¤ííì­ìì¤.
 %s: ìë² íê²½ì¤ì ì ë¤ì ë¶ë¬ì¬ ì ìì; ë¨ì¼ ì¬ì©ì ìë²ê° ì¤í ì¤ì (PID: %ld)
 %s: ìë²ë¥¼ ë¤ì ìì í  ì ìì; ë¨ì¼ì¬ì©ì ìë²ê° ì¤í ì¤ì (PID: %ld)
 %s: ìë² ì¤ì§ ì¤í¨; ë¨ì¼ ì¬ì©ì ìë²ê° ì¤í ì¤ (PID: %ld)
 %s: ì¤í ê°ë¥í íë¡ê·¸ë¨ì ì°¾ì ì ììµëë¤
 %s: ì¤í ê°ë¥í postgres íë¡ê·¸ë¨ì ì°¾ì ì ìì
 %s: "%s" PID íì¼ì ì´ ì ìì: %s
 %s: "%s" ìë¹ì¤ë¥¼ ì´ ì ìì: ì¤ë¥ ì½ë %d
 %s: ìë¹ì¤ ê´ë¦¬ìë¥¼ ì´ ì ìì
 %s: "%s" íì¼ì ì½ì ì ìì
 %s: "%s" ìë¹ì¤ë¥¼ ë±ë¡í  ì ìì: ì¤ë¥ ì½ë %d
 %s: reload ìê·¸ëì ë³´ë¼ ì ìì (PID: %ld): %s
 %s: %d ìê·¸ëì ë³´ë¼ ì ìì (PID: %ld): %s
 %s: stop ìê·¸ëì ë³´ë¼ ì ìì (PID: %ld): %s
 %s: ìë²ë¥¼ ìì í  ì ìì
ë¡ê·¸ ì¶ë ¥ì ì´í´ë³´ì­ìì¤.
 %s: ìë²ë¥¼ ììí  ì ìì: ì¢ë£ ì½ë %d
 %s: "%s" ìë¹ì¤ë¥¼ ììí  ì ìì: ì¤ë¥ ë²í¸ %d
 %s: "%s" ìë¹ì¤ë¥¼ ìë¹ì¤ ëª©ë¡ìì ëº ì ìì: ì¤ë¥ ì½ë %d
 %s: "%s" PID íì¼ì ìëª»ë ê°ì´ ìì
 %s: kill ììì íìí ì¸ìê° ë¹ ì¡ìµëë¤
 %s: -D ìµìë ìê³ , PGDATA íê²½ë³ìê°ë ì§ì ëì´ ìì§ ììµëë¤.
 %s: ìíí  ììì ì§ì íì§ ìììµëë¤
 %s: ê°ë ì¤ì¸ ìë²ê° ìì
 %s: ì´ì  ìë² íë¡ì¸ì¤(PID: %ld)ê° ìì´ì¡ìµëë¤
 %s: "%s" íê²½ì¤ì íì¼ì ë°ëì í ì¤ì ê°ì ¸ì¼íë¤?
 %s: ë©ëª¨ë¦¬ ë¶ì¡±
 %s: ìë²ë¥¼ ë©ì¶ì§ ëª»íì
 %s: ìë²ê° ì¤í ì¤ì (PID: %ld)
 %s: "%s" ìë¹ì¤ê° ì´ë¯¸ ë±ë¡ ëì´ ìì
 %s: "%s" ìë¹ì¤ê° ë±ë¡ëì´ ìì§ ìì
 %s: ë¨ì¼ ì¬ì©ì ìë²ê° ì¤í ì¤ì (PID: %ld)
 %s: ëë¬´ ë§ì ëªë ¹í ì¸ìë¤ (ìì "%s")
 %s: ì ì ìë ìì ëª¨ë "%s"
 %s: ìëª»ë ì¤ì§ ë°©ë² "%s"
 %s: ìëª»ë ìê·¸ë ì´ë¦ "%s"
 (ê¸°ë³¸ ì¤ì ì ì¤ì§ í  ëë ê¸°ë¤ë¦¬ê³ , ììì´ë ì¬ììí  ëë ì ê¸°ë¤ë¦¼.)
 -D ìµìì ì¬ì©íì§ ìì¼ë©°, PGDATA íê²½ë³ìê°ì ì¬ì©í¨.
 ìë²ê° ì¤í ì¤ìëê¹?
 ë¨ì¼ ì¬ì©ì ìë²ë¥¼ ë©ì¶ê³  ë¤ì ìëíì­ìì¤.
 %s íë¡ê·¸ë¨ì "postgres" íë¡ê·¸ë¨ì íìë¡ í©ëë¤. ê·¸ë°ë°, ì´ íì¼ì´
"%s" íì¼ì´ ìë ëë í ë¦¬ ìì ììµëë¤.
ì¤ì¹ ìíë¥¼ íì¸í´ ì£¼ì­ìì¤.
 "%s" íë¡ê·¸ë¨ì "postgres" íë¡ê·¸ë¨ì ì°¾ìì§ë§ ì´ íì¼ì
%s íë¡ê·¸ë¨ì ë²ì ê³¼ íë¦½ëë¤.
ì¤ì¹ ìíë¥¼ íì¸í´ ì£¼ì­ìì¤.
 ë³´ë¤ ìì¸í ì¬ì©ë²ì "%s --help"
 ì¬ì©ë²:
 íì íë¡ì¸ì¤ê° ì¢ë£ëìì, ì¢ë£ ì½ë %d íì íë¡ì¸ì¤ê° ì¢ë£ëìì, ìì ìë ìí %d íì íë¡ì¸ì¤ê° ì¢ë£ëìì, ìê·¸ë %d "%s" ëë í ë¦¬ë¡ ì´ë í  ì ìì ì¤íí  "%s" íì¼ì ì°¾ì ì ìì íì¬ ëë í ë¦¬ë¥¼ ì ì ìì: %s "%s" ì´ì§ íì¼ì ì½ì ì ìì "%s" ì¬ë²ë¦­ ë§í¬ë¥¼ ì½ì ì ìì ìë²ë¥¼ ìì í  ì ìì
 ìëª»ë ì´ì§ íì¼ "%s" ìë²ë¥¼ ë©ì¶¥ëë¤
 ìë²ê° ìì¤í ìê·¸ëì ë°ìì
 ìë² ììë¨
 ìë²ë¥¼ ììí©ëë¤
 ìë² ë©ì¶ìì
 ì´ì§¸ë  ìë²ë¥¼ ììí©ëë¤
 ìë²ë¥¼ ë©ì¶ê¸° ìí´ ê¸°ë¤ë¦¬ë ì¤... ìë²ë¥¼ ììíê¸° ìí´ ê¸°ë¤ë¦¬ë ì¤... 