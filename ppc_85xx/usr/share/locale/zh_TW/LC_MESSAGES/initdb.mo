��    a      $  �   ,      8  R   9     �  
   �  -   �  �   �  �   o	     
    ,
  J   L  5   �  J   �  6     P   O  C   �  :   �  4     B   T  H   �  >   �  9     3   Y  ?   �  /   �  -   �  E   +  y   q  (   �  7     (   L  3   u  '   �  5   �  -     -   5  /   c  "   �  6   �  �   �  0   �  $   �  �   �  ~   ~  1   �     /  J   M  �   �     `  D   s  -   �  !   �  4     ,   =     j     �     �     �     �     �  ;   	  9   E  �     >     0  O  u   �  q   �  f   h  &   �     �     �  &     0   4  )   e  #   �  "   �  (   �  !   �  %   !  !   G     i     �     �      �     �  -   �  2   &  0   Y     �     �     �     �     �  &   �  %        >  +   T  !   �  ,  �  ?   �           "   /   .   �   ^   �   �       �!  �   �!  H   �"  1   �"  A   #  ;   O#  A   �#  8   �#  :   $  5   A$  ;   w$  8   �$  /   �$  5   %  /   R%  6   �%  +   �%  /   �%  6   &  n   L&  !   �&  *   �&  !   '  !   *'  !   L'  +   n'  ,   �'  ,   �'  *   �'  !   (  8   A(  �   z(  '   )     ?)  t   ^)  h   �)  *   <*     g*  F   �*  �   �*     V+  6   l+  %   �+     �+  .   �+  %   ,     <,     X,     k,     �,      �,     �,  8   �,  ,   -  �   <-  %   �-  �   �-  Q   �.  e   /  Y   �/  '   �/     0     0  !   '0  '   I0     q0     �0     �0      �0     �0     1     "1     51     L1     `1     w1     �1  ,   �1  1   �1  "   	2     ,2     B2     X2     p2     x2  "   �2  !   �2     �2      �2     �2            ?   U      W          V   &           
   R       Y   =   C       F   .   Q      \   <   ,   "      2   K               M      	             [   6   )       H                        $   `   :       G      ^      L              -      ]   7           S   /           3       (            5              a   D       X   +              9   P   #   E   >   N           A   T   J      %   8   ;           B   _                  @   Z   I                  O   *       1   4   0   !      '    
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

    %s%s%s%spostmaster -D %s%s%s
or
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by signal %d copying template1 to template0 ...  could not change directory to "%s" could not identify current directory: %s could not read symbolic link "%s" could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating directory %s/%s ...  creating information schema ...  creating system views ...  creating template1 database in %s/base/1 ...  enabling unlimited row size for system tables ...  fixing permissions on existing directory %s ...  initializing pg_depend ...  initializing pg_shadow ...  loading pg_description ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2004-12-13 01:05+0000
PO-Revision-Date: 2004-12-13 13:23+0800
Last-Translator: Zhenbang Wei <forth@zbwei.net>
Language-Team: Zhenbang Wei <forth@zbwei.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
 
如果沒有指定資料普錄就?使用環境變數PGDATA。
 
非常用選項:
 
選項：
 
回報錯誤給<pgsql-bugs@postgresql.org>。
 
執行成功，現在你可以用下列命令啟動資料庫伺服器：

    %s%s%s%spostmaster -D %s%s%s
或
    %s%s%s%spg_ctl -D %s%s%s -l logfile start

 
警告：對本地端連線使用"trust"驗證
你可以編輯pg_hba.conf改變設定，或在執行initdb時使用 -A 選項。
   %s [選項]... [資料目錄]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            指定不同種類的locale以初始化資料庫cluster
                            (預設從環境變數取得)
   --locale=LOCALE           以指定的locale初始化資料庫cluster
   --no-locale               功能同 --locale=C
   --pwfile=FILE             從檔案讀取新管理者的密碼
   -?, --help                顯示這份說明然後結束
   -A, --auth=METHOD         本地端預設的連線驗證方式
   -E, --encoding=ENCODING   新資料庫的預設編稼
   -L DIRECTORY              where to find the input files
   -U, --username=NAME       資料庫管理者名稱
   -V, --version             顯示版本資訊然後結束
   -W, --pwprompt            詢問新管理者的密碼
   -d, --debug               顯示除錯訊息
   -n, --noclean             發生錯誤時不清除
   -s, --show                顯示內部設定
  [-D, --pgdata=]DATADIR     資料庫cluster的目錄
 %s 初始化PostgreSQL資料庫cluster。

 %s："%s" 不是有效的伺服器編碼名稱
 %s：無法產生密碼檔，請回報這個錯誤。
 %s：無法以root身份執行
請以將會擁有伺服器行程的非特權使用者登入(例如用"su")。
 %s：無法存取目錄"%s"：%s
 %s：無法修改目錄"%s"的權限：%s
 %s：無法建立目錄"%s"：%s
 %s：無法取得短版本字串
 %s：無法執行命令"%s"：%s
 %s: 找不到適合的編碼給locale "%s"
 %s：無法開啟檔案"%s"讀取資料: %s
 %s：無法開啟檔案"%s"寫入資料: %s
 %s：無法從檔案"%s"讀取密碼：%s
 %s：無法寫入檔案"%s"：%s
 %s：無法依使用者的要求刪除資料目錄 "%s"
 %s：目錄"%s"不是空的
如果你想建立新的資料庫系統，請將目錄"%s"刪除或清空，
或是在執行 %s 時加上"%s"以外的參數。
 %s：無法刪除資料目錄的內容
 %s：無法刪除資料目錄
 %s：檔案 "%s" 不存在
這表示你的安裝可能發生錯誤，或是指定了錯誤的
目錄給選項 -L。
 %s：輸入檔"%s"不屬於 PostgreSQL %s
請檢查你的安裝或用 -L 選項指定正確的路徑。
 %s：輸入檔位置必須是絕對路徑
 %s：無效的locale名稱"%s"
 %s：你必須提供管理者的密碼才能使用 %s 驗證方式。
 %s：未指定資料目錄
你必須指定資料庫系統存放資料的目錄，你可以使用 -D 選項
或是環境變數PGDATA。
 %s：記憶體用盡
 %s：不能同時使用詢問密碼和指定密碼檔
 %s：刪除資料目錄"%s"的內容
 %s：刪除資料目錄 "%s"
 %s：命令列參數過多(第一個是 "%s")
 %s：無法辨認的驗證方式"%s"
 %s：警告：編碼不符
 再輸入一次： 輸入新的管理者密碼： 密碼不符。
 用 -E 選項重新執行 %s。
 以除錯模式執行。
 以noclean模式執行，發生錯誤時不會清理。
 資料庫cluster會以locale %s初始化。
 資料庫cluster會以下列locale初始化
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 預設資料庫編碼被設為 %s。
 你選擇的編碼(%s)和locale使用的編碼(%s)不符，這樣可能會讓文
字處理函式出現異常行為，要修正這個問題，請重新執行 %s 且
不指定使用的編碼或是指定正確的編碼組合。
 使用者"%s"將會成為資料庫系統檔案和伺服器行程的擁有者。

 %s 需要程式 "postgres"，但是在與"%s"相同的目錄中找不到。
請檢查你的安裝。
 "%s"已找到程式"postgres"，但是與 %s 的版本不符。
請檢查你的安裝。
 執行"%s --help"取得更多資訊。
 使用方法：
 捕捉到信號
 子行程結束，結束代碼 %d 子行程結束，不明結束代碼 %d 子行程被信號 %d 結束 複製template1到template0 ... 無法切換目錄至"%s" 無法識別目前的目錄：%s 無法讀取符號連結"%s" 無法寫至子行程：%s
 建立設定檔... 建立conversions ...  建立目錄 %s ... 建立目錄 %s/%s ... 建立information schema ...  建立系統views... 建立 template1 資料庫於 %s/base/1 ...  啟用系統資料表的無資料筆數限制 ... 修正現有目錄 %s 的權限... 初始化pg_depend... 初始化pg_shadow... 載入pg_description... 成功
 記憶體用盡
 選擇預設的max_connections ... 選擇預設的shared_buffers ... 設定密碼... 設定內建物件的權限 ...  重整資料庫template1 ... 