��    ]           �      �      �     
  &        C     c  -   �     �     �  r   �     V	  F   v	  A   �	     �	  7   
  !   R
  3   t
  ?   �
  ?   �
  H   (  D   q  E   �  ?   �  B   <  <     �   �  0   =  F   n  8   �  2   �  O   !  7   q     �     �  �   �  !   J  :   l  I   �  y   �  =   k  >   �  ;   �  *   $  1   O  $   �  /   �  #   �     �  3     0   L  ,   }  .   �  7   �  1     5   C     y  $   �  ,   �  J   �     -  0   I     z  "   �  %   �  $   �      �  4     %   Q  $   w  "   �  F   �  F        M  )   e  s   �  h     &   l     �  &   �  0   �  )   �  "     (   @  !   i     �     �     �     �     �     �       &   /  "   V  ,  y  $   �     �  &   �  &     &   +  /   R     �     �  v   �  $   0  I   U  C   �     �  ;     "   ?  8   b  8   �  6   �  E     =   Q  >   �  /   �  H   �  A   G  v   �  ,       A   -   ,   o   !   �   H   �   0   !     8!     A!  �   J!     �!  9   �!  P   ."  v   "  E   �"  D   <#  >   �#     �#  "   �#      $  -   #$  !   Q$     s$  -   �$  .   �$  +   �$  ,   %  /   F%  .   v%  -   �%     �%     �%  '   &  6   4&     k&  (   �&     �&     �&  '   �&     '     +'  -   H'     v'     �'     �'  =   �'  :   (      O(  '   p(  c   �(  X   �(  *   U)     �)  !   �)  '   �)     �)     �)      *     3*     P*     h*     �*     �*     �*     �*     �*     �*     +     8          3               ?      K   9   :   1   &   L   Q               ,   2   P                              B          H      7       -   *       Z   V   A       ;   [      <              S   5                          4   G   6       F   Y       M   U                      C       '   0         D      N      #                .              O   $   E   "   =   !       R   \      J           /      X   	   
   >   I   (   )           +       %   T   ]   W      @        
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
   -o OPTIONS             command line options to pass to the postmaster
                         (PostgreSQL server executable)
   -p PATH-TO-POSTMASTER  normally not necessary
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
 %s: a standalone backend "postgres" is running (PID: %ld)
 %s: another postmaster may be running; trying to start postmaster anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload postmaster; postgres is running (PID: %ld)
 %s: cannot restart postmaster; postgres is running (PID: %ld)
 %s: cannot stop postmaster; postgres is running (PID: %ld)
 %s: could not find own program executable
 %s: could not find postmaster program executable
 %s: could not open PID file "%s": %s %s: could not open service "%s": error code %d
 %s: could not open service manager
 %s: could not read file "%s"
 %s: could not register service "%s": error code %d
 %s: could not send reload signal (PID: %ld): %s
 %s: could not send signal %d (PID: %ld): %s
 %s: could not send stop signal (PID: %ld): %s
 %s: could not start postmaster
Examine the log output.
 %s: could not start postmaster: exit code was %d
 %s: could not unregister service "%s": error code %d
 %s: invalid option %s
 %s: missing arguments for kill mode
 %s: neither postmaster nor postgres running
 %s: no database directory specified and environment variable PGDATA unset
 %s: no operation specified
 %s: option file "%s" must have exactly one line
 %s: out of memory
 %s: postmaster does not shut down
 %s: postmaster is running (PID: %ld)
 %s: service "%s" already registered
 %s: service "%s" not registered
 %s: too many command-line arguments (first is "%s")
 %s: unrecognized operation mode "%s"
 %s: unrecognized shutdown mode "%s"
 %s: unrecognized signal name "%s"
 (The default is to wait for shutdown, but not for start or restart.)

 If the -D option is omitted, the environment variable PGDATA is used.
 Is postmaster running?
 Please terminate postgres and try again.
 The program "postmaster" is needed by %s but was not found in the
same directory as "%s".
Check your installation.
 The program "postmaster" was found by "%s"
but was not the same version as %s.
Check your installation.
 Try "%s --help" for more information.
 Usage:
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d could not change directory to "%s" could not identify current directory: %s could not read symbolic link "%s" could not start postmaster
 postmaster shutting down
 postmaster signaled
 postmaster started
 postmaster starting
 postmaster stopped
 starting postmaster anyway
 waiting for postmaster to shut down... waiting for postmaster to start... Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2004-12-13 01:06+0000
PO-Revision-Date: 2004-12-13 14:30+0800
Last-Translator: Zhenbang Wei <forth@zbwei.net>
Language-Team: Zhenbang Wei <forth@zbwei.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
 
kill可以使用的信號名稱：
 
一般選項：
 
註冊或移除註冊可用選項：
 
啟動或重新啟動可用選項：
 
停止或重新啟動可用選項：
 
回報錯誤至<pgsql-bugs@postgresql.org>。
 
可用關閉模式：
   %s kill    信號名稱 PID
   %s register   [-N 服務名稱] [-U 使用者] [-P 密碼] [-D 資料目錄] [-w]
                    [-o "選項"]
   %s reload  [-D 資料目錄] [-s]
   %s restart [-w] [-D 資料目錄] [-s] [-m 關閉模式] [-o "選項"]
   %s start   [-w] [-D 資料目錄] [-s] [-l 檔名] [-o "選項"]
   %s status  [-D 資料目錄]
   %s stop    [-W] [-D 資料目錄] [-s] [-m 關閉模式]
   %s unregister [-N 服務名稱]
   --help                 顯示這份說明然後結束
   --version              顯示版本資訊然後結束
   -D, --pgdata 資料目錄  存放資料庫的目錄
   -N 服務名稱     用來註冊PostgreSQL伺服器的服務名稱
   -P 密碼         用來註冊PostgreSQL伺服器的密碼
   -U 使用者       用來註冊PostgreSQL伺服器的帳號
   -W                     不等待操作完成
   -l, --log 檔名         將伺服器log寫入(或附加至)檔案。
   -m 關閉模式        可以是"smart"、"fast"或"immediate"
   -o 選項                傳給postmaster(PostgreSQL伺服器執行檔)的
                         命令列選項
   -p postmaster的路徑    通常不需要
   -s, --silent           只顯示錯誤，不顯示其它訊息
   -w                     等待操作完成
   fast        直接正常關閉
   immediate   立即結束，會導致下次啟動時需要復原程序
   smart       在所有用戶端斷線後關閉
  完成
  失敗
 %s 可以用來啟動、停止、重新啟動、重新載入設定檔、
報告PostgreSQL伺服器狀態，或送信號給PostgreSQL行程。

 %s：PID檔"%s"不存在
 %s：一個獨立後端"postgres"正在執行(PID：%ld)
 %s：可能有另一個postmaster正在執行，嘗試強制啟動postmaster。
 %s：無法以root身份執行
請以將會擁有伺服務行程的(非特權)使用者登入(例如用"su"命令)。
 %s：無法重新載入postmaster， postgres正在執行(PID：%ld)
 %s：無法重新啟動postmaster，postgres正在執行(PID：%ld)
 %s：無法停止postmaster，postgres正在執行(PID：%ld)
 %s：找不到程式執行檔
 %s：找不到postmaster執行檔
 %s：無法開啟PID檔"%s"：%s %s：無法開啟服務"%s"：錯誤代碼%d
 %s：無法開啟服務管理員
 %s：無法讀取檔案"%s"
 %s：無法註冊服務"%s"：錯誤代碼%d
 %s：無法傳送reload信號(PID：%ld)：%s
 %s：無法傳送信號 %d(PID：%ld)：%s
 %s：無法傳送stop信號(PID：%ld)：%s
 %s：無法啟動postmaster
請檢查log輸出
 %s：無法啟動postmaster：結束碼是 %d
 %s：無法移除服務"%s"：錯誤代碼%d
 %s：無效的選項 %s
 %s：kill模式未指定參數
 %s：postmaster或postgres尚未執行
 %s：未指定資料目錄和設定環境變數PGDATA
 %s：未指定操作方式
 %s：選項檔"%s"只能有一行內容
 %s：記憶體用盡
 %s：postmaster無法關閉
 %s：postmaster正在執行(PID：%ld)
 %s：服務"%s"已經被註冊
 %s：服務"%s"未被註冊
 %s：命令列參數過多(第一個是"%s")
 %s：無效的操作模式"%s"
 %s：無效的關閉模式"%s"
 %s：無效的信號名稱"%s"
 (預設是關閉時而非啟動或重新啟動時等待。)

 如果沒有使用選項 -D，改用環境變數PGDATA。
 postmaster是否正在執行？
 請結束postgres然後再試一次。
 %s 需要"postmaster"程式，但是在與"%s"相同的目錄中找不到。
檢查你的安裝。
 "%s"已找到程式"postmaster"，但是與 %s 版本不符。
請檢查你的安裝。
 執行"%s --help"以顯示更多資訊。
 使用方法：
 子行程結束，結束代碼 %d 子行程結束，不明狀態代碼 %d 子行程被信號 %d 結束 無法切換目錄至"%s" 無法識別目前的目錄：%s 無法讀取符號連結"%s" 無法啟動postmaster
 postmaster正在關閉
 已通知postmaster
 postmaster已經啟動
 postmaster正在啟動
 postmaster停止執行
 強制啟動postmaster
 等待postmaster關閉... 等待postmaster啟動... 