��    y      �  �   �      8
  K   9
     �
  ^   �
  
   �
  >     =   D  -   �     �  #   �     �  (        1  <   N  9   �  6   �  H   �  E   E  B   �  6   �  9     C   ?  9   �  4   �  H   �  ;   ;  E   w  :   �  9   �  7   2  4   j  L   �  J   �  3   7  0   k  ;   �  3   �  7     2   D  :   w  5   �  G   �  0   0  <   a  M   �  J   �  G   7  4     H   �  E   �  <   C  6   �  I   �  4     1   6  ;   h  8   �  5   �  =     8   Q  8   �  9   �  /   �  <   -  #   j  #   �  ?   �  #   �       3   6  &   j  5   �  E   �  4     D   B     �  *   �  8   �  6   	  %   @  (   f  (   �  8   �  #   �           6  8   V  4   �  $   �     �  ,   	  ,   6     c     x  #   �  G   �  4   �     ,  &   K     r  )   �  7   �     �  +        2     C     _     |     �  
   �     �     �  9   �  >      P   Q      �   &   �      �   '   �      !     !  ,  	!  8   6"     o"  _   "  	   �"  '   �"  &   #  /   8#  !   h#  *   �#  #   �#  ,   �#  #   $  A   *$  >   l$  ;   �$  A   �$  >   )%  ;   h%  D   �%  A   �%  <   +&  <   h&  2   �&  O   �&  5   ('  A   ^'  8   �'  E   �'  =   (  :   ](  N   �(  N   �(  ,   6)  )   c)  8   �)  A   �)  8   *  8   A*  >   z*  @   �*  C   �*  @   >+  G   +  D   �+  A   ,  >   N,  A   �,  K   �,  K   -  >   g-  7   �-  ;   �-  =   .  :   X.  8   �.  5   �.  2   /  C   5/  @   y/  >   �/  D   �/  *   >0  >   i0  '   �0  $   �0  3   �0  *   )1  *   T1  2   1  %   �1  9   �1  K   2  3   ^2  ?   �2     �2  (   �2  9   3  0   U3  !   �3  %   �3  /   �3  /   �3  "   .4     Q4     q4  /   �4  ,   �4     �4     5  '   (5  $   P5     u5     �5  #   �5  ;   �5  .   6     06      M6     n6  #   �6  3   �6     �6  #   �6     7     +7  #   I7     m7     �7  	   �7     �7     �7  /   �7  5   �7  M    8     n8  *   ~8     �8  #   �8     �8     �8            r       @   G   7   f       L   u   ?   J   0   N      s   +   y   \          $                 S       -             A   [           a       	   1       H   l          t   )   q       3   X   e   =   6   R   n   C              K                      
   M             E   P   9          ]          %   v               w   .   Q   `   T       d   *      p         o           D       #       4       ;   F      O   k      b          ,   x   I   (      _   <      i      :   "   B      /      m   U   '   g                  j   h       Y      !   8       >       ^       V           5   Z   &      c       2   W    
By default, a database with the same name as the current user is created.
 
Connection options:
 
If one of -a, -A, -d, -D, and USERNAME is not specified, you will
be prompted interactively.
 
Options:
 
Read the description of the SQL command CLUSTER for details.
 
Read the description of the SQL command VACUUM for details.
 
Report bugs to <pgsql-bugs@postgresql.org>.
   %s [OPTION]... DBNAME
   %s [OPTION]... LANGNAME [DBNAME]
   %s [OPTION]... [DBNAME]
   %s [OPTION]... [DBNAME] [DESCRIPTION]
   %s [OPTION]... [USERNAME]
   --help                          show this help, then exit
   --help                       show this help, then exit
   --help                    show this help, then exit
   --version                       output version information, then exit
   --version                    output version information, then exit
   --version                 output version information, then exit
   -A, --no-adduser          user cannot add new users
   -D, --no-createdb         user cannot create databases
   -D, --tablespace=TABLESPACE  default tablespace for the database
   -E, --encoding=ENCODING      encoding for the database
   -E, --encrypted           encrypt stored password
   -L, --pglib=DIRECTORY     find language interpreter file in DIRECTORY
   -N, --unencrypted         do not encrypt stored password
   -O, --owner=OWNER            database user to own the new database
   -P, --pwprompt            assign a password to new user
   -T, --template=TEMPLATE      template database to copy
   -U, --username=USERNAME      user name to connect as
   -U, --username=USERNAME   user name to connect as
   -U, --username=USERNAME   user name to connect as (not the one to create)
   -U, --username=USERNAME   user name to connect as (not the one to drop)
   -W, --password               prompt for password
   -W, --password            prompt for password
   -W, --password            prompt for password to connect
   -a, --adduser             user can add new users
   -a, --all                       vacuum all databases
   -a, --all                 cluster all databases
   -d, --createdb            user can create new databases
   -d, --dbname=DBNAME             database to vacuum
   -d, --dbname=DBNAME       database from which to remove the language
   -d, --dbname=DBNAME       database to cluster
   -d, --dbname=DBNAME       database to install language in
   -e, --echo                      show the commands being sent to the server
   -e, --echo                   show the commands being sent to the server
   -e, --echo                show the commands being sent to the server
   -f, --full                      do full vacuuming
   -h, --host=HOSTNAME          database server host or socket directory
   -h, --host=HOSTNAME       database server host or socket directory
   -i, --interactive         prompt before deleting anything
   -i, --sysid=SYSID         select sysid for new user
   -l, --list                show a list of currently installed languages
   -p, --port=PORT              database server port
   -p, --port=PORT           database server port
   -q, --quiet                     don't write any messages
   -q, --quiet                  don't write any messages
   -q, --quiet               don't write any messages
   -t, --table='TABLE[(COLUMNS)]'  vacuum specific table only
   -t, --table=TABLE         cluster specific table only
   -v, --verbose                   write a lot of output
   -z, --analyze                   update optimizer hints
 %s cleans and analyzes a PostgreSQL database.

 %s clusters all previously clustered tables in a database.

 %s creates a PostgreSQL database.

 %s creates a new PostgreSQL user.

 %s installs a procedural language into a PostgreSQL database.

 %s removes a PostgreSQL database.

 %s removes a PostgreSQL user.

 %s removes a procedural language from a database.

 %s: "%s" is not a valid encoding name
 %s: cannot cluster a specific table in all databases
 %s: cannot cluster all databases and a specific one at the same time
 %s: cannot vacuum a specific table in all databases
 %s: cannot vacuum all databases and a specific one at the same time
 %s: clustering database "%s"
 %s: clustering of database "%s" failed: %s %s: clustering of table "%s" in database "%s" failed: %s %s: comment creation failed (database was created): %s %s: could not connect to database %s
 %s: could not connect to database %s: %s %s: could not get current user name: %s
 %s: could not obtain information about current user: %s
 %s: creation of new user failed: %s %s: database creation failed: %s %s: database removal failed: %s %s: language "%s" is already installed in database "%s"
 %s: language "%s" is not installed in database "%s"
 %s: language installation failed: %s %s: language removal failed: %s %s: missing required argument database name
 %s: missing required argument language name
 %s: query failed: %s %s: query was: %s
 %s: removal of user "%s" failed: %s %s: still %s functions declared in language "%s"; language not removed
 %s: too many command-line arguments (first is "%s")
 %s: unsupported language "%s"
 %s: user ID must be a positive number
 %s: vacuuming database "%s"
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? (y/n)  Database "%s" will be permanently removed.
 Enter it again:  Enter name of user to add:  Enter name of user to drop:  Enter password for new user:  Name Password:  Passwords didn't match.
 Procedural Languages Shall the new user be allowed to create databases? (y/n)  Shall the new user be allowed to create more new users? (y/n)  Supported languages are plpgsql, pltcl, pltclu, plperl, plperlu, and plpythonu.
 Trusted? Try "%s --help" for more information.
 Usage:
 User "%s" will be permanently removed.
 no yes Project-Id-Version: PostgreSQL 8.0
POT-Creation-Date: 2004-11-11 01:25+0000
PO-Revision-Date: 2004-11-11 13:39+0800
Last-Translator: Zhenbang Wei <forth@zbwei.net>
Language-Team: Zhenbang Wei <forth@zbwei.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
 
預設會建立一個與使用者同名的資料庫。
 
連線選項:
 
如果-a、-A、-d、-D和使用者名稱其中之一未被指定，你會
被要求輸入。
 
選項:
 
請參考SQL命令CLUSTER的說明。
 
請參考SQL命令VACUUM的說明。
 
回報錯誤至<pgsql-bugs@postgresql.org>。
   %s [選項]... 資料庫名稱
   %s [選項]... 語言 [資料庫名稱]
   %s [選項]... [資料庫名稱]
   %s [選項]... [資料庫名稱] [描述]
   %s [選項]... [使用者名稱]
   --help                          顯示這份說明然後結束
   --help                       顯示這份說明然後結束
   --help                    顯示這份說明然後結束
   --version                       顯示版本資訊然後結束
   --version                    顯示版本資訊然後結束
   --version                 顯示版本資訊然後結束
   -A, --no-adduser          使用者不可以建立其他使用者
   -D, --no-createdb         使用者不可以建立新資料庫
   -D, --tablespace=TABLESPACE  資料庫的預設tablespace
   -E, --encoding=編碼名稱      指定資料庫的編碼
   -E, --encrypted           加密儲存的密碼
   -L, --pglib=目錄          在指定的目錄中尋找語言直譯器檔案
   -N, --unencrypted         不加密儲存的密碼
   -O, --owner=擁有者           指定新資料庫的擁有者
   -P, --pwprompt            設定新使用者的密碼
   -T, --template=樣版名稱      指定要使用的資料庫樣板
   -U, --username=使用者名稱    用來連線的使用者
   -U, --username=使用者名稱 用來連線的使用者
   -U, --username=使用者名稱 用來連線的使用者(不是要建立的)
   -U, --username=使用者名稱 用來連線的使用者(不是要刪除的)
   -W, --password               詢問密碼
   -W, --password            詢問密碼
   -W, --password            詢問用來連線的密碼
   -a, --adduser             使用者可以建立其他使用者
   -a, --all                       重整所有資料庫
   -a, --all                 重新排列所有資料庫
   -d, --createdb            使用者可以建立新資料庫
   -d, --dbname=資料庫名稱         重整指定的資料庫
   -d, --dbname=資料庫名稱   指定要刪除語言的資料庫
   -d, --dbname=資料庫名稱   重新排列指定的資料庫
   -d, --dbname=資料庫名稱       指定要安裝語言的資料庫
   -e, --echo                      顯示被送到伺服器的命令
   -e, --echo                   顯示被送到伺服器的命令
   -e, --echo                顯示被送到伺服器的命令
   -f, --full                      進行完整的資料庫重整
   -h, --host=主機名稱          資料庫伺服器主機或socket目錄
   -h, --host=主機名稱       資料庫伺服器的主機或socket目錄
   -i, --interactive         刪除任何東西前要先詢問
   -i, --sysid=SYSID         設定新使用者的sysid
   -l, --list                顯示目前已安裝的語言
   -p, --port=埠號              資料庫伺服器的埠號
   -p, --port=埠號           資料庫伺服器的埠號
   -q, --quiet                     不顯示任何訊息
   -q, --quiet                  不顯示任何訊息
   -q, --quiet               不顯示任何訊息
   -t, --table='資料表名稱[(欄位)]' 重整指定的資料表
   -t, --table=資料表名稱    重新排列指定的資料表
   -v, --verbose                   顯示詳細的執行訊息
   -z, --analyze                   更新效能調整器統計資料
 %s 清理並分析PostgreSQL資料庫。

 %s 重新排列所有資料庫中曾經重排的資料庫。

 %s 建立一個PostgreSQL資料庫。

 %s 建立新PostgreSQL使用者。

 %s 安裝了程序語言至PostgreSQL資料庫。

 %s 刪除了一個PostgreSQL資料庫。

 %s 刪除了一個PostgreSQL使用者。

 %s 刪除了一個資料庫中的程序語言。

 %s："%s"不是有效的編碼名稱
 %s：不能對所有資料庫指定重新排列資料表
 %s：不能同時重新排列所有資料庫和重新排列指定資料庫
 %s：不能對所有資料庫指定重整資料表
 %s：不能同時重整所有資料庫和重整指定資料庫
 %s：重新排列資料庫"%s"
 %s：重新排列資料庫"%s"失敗: %s %s：重新排列資料表"%s"於資料庫"%s"失敗：%s %s：建立註解失敗(資料庫已建立)：%s %s：無法連線至資料庫 %s
 %s：無法連線至資料庫 %s：%s %s：無法取得目前使用者的名稱：%s
 %s：無法取得目前使用者的資訊：%s
 %s：建立新使用者失敗：%s %s：建立資料庫失敗：%s %s：刪除資料庫失敗：%s %s：語言"%s"已經被安裝至資料庫"%s"
 %s：語言"%s"未被安裝至資料庫"%s"
 %s：安裝語言失敗：%s %s：刪除語言失敗：%s %s：缺少必要參數資料庫名稱
 %s：缺少必要參數語言名稱
 %s：查詢失敗：%s %s：查詢是：%s
 %s：刪除使用者"%s"失敗：%s %s：仍有 %s 個函式以語言"%s"宣告，不予刪除
 %s：命令列參數過多(第一個是 "%s")
 %s：不支援的語言"%s"
 %s：使用者ID必須是正數
 %s：重整資料庫"%s"
 %s：重整資料庫"%s"失敗：%s %s：重整資料表"%s"於資料庫"%s"失敗：%s 是否確定？(y/n) 資料庫"%s"會被永久刪除。
 再輸入一次:  輸入新使用者的名稱:  輸入要刪除的使用者名稱:  輸入新使用者的密碼:  名稱 密碼： 密碼不符。
 程序語言 是否允許新使用者建立資料庫？(y/n) 是否允許新使用者建立其他使用者？(y/n) 支援的語言有plpgsql、pltcl、pltclu、plperl、plperlu和plpythonu。
 是否信任？ 執行"%s --help"以取得更多資訊。
 使用方法:
 使用者"%s"將被永久刪除。
 否 是 