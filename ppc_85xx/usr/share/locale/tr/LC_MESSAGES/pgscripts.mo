��    �      �  �   |	      �  K   �       e   +  
   �  >   �  >   �  =     -   X     �  #   �     �  (   �       <   $  9   a  6   �  H   �  E     B   a  9   �  C   �  9   "  4   \  =   �  .   �  ;   �  E   :  :   �  5   �  7   �  9   )  7   c  4   �  L   �  J     3   h  0   �  ;   �  7   	  2   A  2   t  J   �  :   �  5   -  G   c  0   �  <   �  0     M   J  J   �  G   �  4   +  H   `  E   �  9   �  v   )  <   �  I   �  5   '  4   ]  1   �  ;   �  8      5   9  6   o  3   �  4   �  =     8   M  8   �  8   �  9   �     2  /   >  <   n  #   �  #   �  ?   �  %   3  #   Y     }  3   �  &   �  5   �  E   .  I   t  5   �  I   �  5   >   E   t   F   �   4   !  D   6!     {!  *   �!  8   �!  6   �!  %   4"  (   Z"  (   �"  8   �"  #   �"      	#     *#  8   J#  4   �#  $   �#     �#  ,   �#  ,   *$     W$     l$     $  *   �$  8   �$  ,   %  8   .%  #   g%  G   �%  4   �%     &  )   %&  7   O&     �&     �&  !   �&  "   �&  +   �&     '     ,'     H'     e'     �'     �'  
   �'     �'     �'     �'  '   �'  "   #(  2   F(  7   y(     �(  &   �(     �(     �(     �(     �(     �(    �(  R    +     S+  �   n+     �+  U   �+  P   T,  J   �,  C   �,  #   4-  .   X-  %   �-  -   �-      �-  @   �-  =   =.  :   {.  E   �.  B   �.  ?   ?/  :   /  I   �/  @   0  =   E0  ?   �0  0   �0  <   �0  ]   11  6   �1  =   �1  8   2  @   =2  D   ~2  A   �2  W   3  g   ]3  9   �3  8   �3  8   84  B   q4  @   �4  @   �4  \   65  C   �5  D   �5  L   6  G   i6  M   �6  L   �6  F   L7  G   �7  D   �7  ;    8  N   \8  K   �8  G   �8  X   ?9  J   �9  A   �9  3   %:  8   Y:  :   �:  6   �:  4   ;  1   9;  ;   k;  6   �;  =   �;  G   <  H   d<  V   �<  5   =  B   :=     }=  ;   �=  [   �=  )   !>  (   K>  :   t>  1   �>  %   �>  #   ?  .   +?  ,   Z?  @   �?  M   �?  O   @  @   f@  N   �@  @   �@  T   7A  P   �A  =   �A  H   B  &   dB  >   �B  P   �B  I   C  &   eC  )   �C  .   �C  9   �C  5   D  -   UD  3   �D  >   �D  1   �D  &   (E  +   OE  -   {E  -   �E     �E     �E  +   F  D   :F  Z   F  ?   �F  R   G  /   mG  M   �G  7   �G  #   #H  <   GH  S   �H     �H     �H  !   I  "   $I  /   GI     wI     �I  "   �I     �I     �I     �I     J     J      'J     HJ  )   YJ     �J  )   �J  :   �J     K  7   K     LK     ZK     \K     cK     eK     0   �   4   X       h          �   6   !       o           �   �       K          �   L   q                  Z   :   `      ^   
       f              g                  {   �   w   N   9       "   =   t          m          A                   a   &      E   U   �      C   �      R       #   ;   Q      	   -   J   W       >           i   n   |       .      �   P   Y   v   _   �   �      �       H   T   �             �   b   <   8   r   )          %   '   p   �      �       s       +   2                   ,           d      l       3      [                      ]       1   x   c   V      D           �   F   �   �   �   G   7      �           /   y   M   I           j   \   }   k              e   S           @   �       *              u   z       (      �   ?      5       ~      $       O          B    
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
 %s: vacuuming of database "%s" failed: %s %s: vacuuming of table "%s" in database "%s" failed: %s Are you sure? Cancel request sent
 Could not send cancel request: %s Could not send cancel request: %s
 Database "%s" will be permanently removed.
 Enter it again:  Enter name of role to add:  Enter name of role to drop:  Enter password for new role:  Name Password encryption failed.
 Password:  Passwords didn't match.
 Please answer "%s" or "%s".
 Procedural Languages Role "%s" will be permanently removed.
 Shall the new role be a superuser? Shall the new role be allowed to create databases? Shall the new role be allowed to create more new roles? Trusted? Try "%s --help" for more information.
 Usage:
 n no y yes Project-Id-Version: pgscripts-tr
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-01-06 01:34-0400
PO-Revision-Date: 2007-04-12 14:10+0200
Last-Translator: Nicolai Tufar <ntufar@gmail.com>
Language-Team: Turkish <ceviri@postgresql.org.tr>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.9.1
X-Poedit-Language: Turkish
X-Poedit-Country: TURKEY
X-Poedit-Basepath: /home/ntufar/pg/pgsql/src/bin/scripts
X-Poedit-SearchPath-0: /home/ntufar/pg/pgsql/src/bin/scripts
 
Öntanımlı olarak , mevcut kullanıcı ile aynı adda veritabanı yaratılır.
 
Bağlantı seçenekleri:
 
Eğer -s, -S, -d, -D, -r, -R gibi seçenekler ve ROL_ADI belirtilmemişse,
girilmesini çalıştırma zamanında istenecektir.
 
Seçenekler:
 
Ayrıntılar için bir SQL komutu olan CLUSTER'in açıklamasını okuyabilirsiniz.
 
Ayrıntılar için bir REINDEX SQL komutunun açıklamasını okuyabilirsiniz.
 
Ayrıntılar için, bir SQL komutu olan VACUUM'un tanımlarını okuyun.
 
Hataları <pgsql-bugs@postgresql.org> adresine bildirebilirsiniz.
   %s [SEÇENEK]... VERİTABANI_ADI
   %s [SEÇENEK]... DİL_ADI [VERİTABANI_ADI]
   %s [SEÇENEK]... [VERİTABANI_ADI]
   %s [SEÇENEK]... [VERİTABANI_ADI] [TANIM]
   %s [SEÇENEKLER]... [ROL_ADI]
   --help                          bu yardımı göster ve çık
   --help                       bu yardımı göster ve çık
   --help                    bu yardımı göster ve çık
   --version                       sürüm bilgisini göster ve çık
   --version                    sürüm bilgisini göster ve çık
   --version                 sürüm bilgisini göster ve çık
   -D, --no-createdb         rol, veritabanı oluşturamaz
   -D, --tablespace=TABLESPACE  veritabanı için öntanımlı tablespace
   -E, --encoding=ENCODING      veritabanı için dil kodlaması
   -E, --encrypted           saklanan şifreleri encrypt eder
   -I, --no-inherit          rol, hiçbir yetki inherit etmiyor
   -L, --no-login            role giriş yapamaz
   -N, --unencrypted         saklanmış şifreyi kriptolama
   -O, --owner=OWNER            Yeni veritabanının sahibi olacak veritabanı kullanıcısı
   -P, --pwprompt            yeni role bir şifre atar
   -R, --no-createrole       rol, başka bir rol oluşturamaz
   -S, --no-superuser        rol, superuser olmayacktır
   -T, --template=TEMPLATE      kopyalanacak şablon veritabanı
   -U, --username=KULLANICI_ADI      bağlanılacak kullanıcı adı
   -U, --username=KULLANICI_ADI   bağlanılacak kullanıcı adı
   -U, --username=KULLANICI_ADI   bağlanılacak kullanıcı adı (yaratılacak değil)
   -U, --username=KULLANICI _ADI   bağlanırken kullanılacak kullanıcı adı (silinecek olan değil)
   -W, --password               şifre sormasını sağla
   -W, --password            şifre sorulmasını sağla
   -W, --password            bağlanmak için şifre sor
   -a, --all                       tüm veritabanlarını vakumlar
   -a, --all                 tüm veritabanlarını cluster eder
   -a, --all                tüm veritabanları yeniden indeksle
   -c, --connection-limit=N  rol için azami bağlantı sayısın (varsayılan: sınırsız)
   -d, --createdb            rol, yeni veritabanı oluşturabiliyor
   -d, --dbname=VERİTABANI_ADI             vakumlanacak veritabanı
   -d, --dbname=VERİTABANI_ADI       dilin sileneceği veritabanının adı
   -d, --dbname=VERİTABANI_ADI       cluster edilecek veritabanı adı
   -d, --dbname=VERİTABANI_ADI       dilin kurulacağı veritabanının adı
   -d, --dbname=VERİTABANI_ADI      yeniden indekslenecek veritabanın adı
   -e, --echo                      sunucuya gönderilen komutları yaz
   -e, --echo                   sunucuya gönderilen komutları göster
   -e, --echo                sunucuya gönderilen komutları göster
   -f, --full                      tam (FULL) vakumlama yap
   -h, --host=HOSTNAME          veritabanı sunucusu adresi ya da soket dizini
   -h, --host=HOSTNAME       veritabanı sunucusu adresi ya da soket dizini
   -i, --index=INDEX        sadece belirli bir indeksi yeniden oluştur
   -i, --inherit             rol, üye olduğu rollerin (default) yetikelri inherit eder
   -i, --interactive         herhangi birşeyi silmeden önce uyarı verir
   -l, --list                Şu anda kurulu olan dilleri göster
   -l, --login               rol giriş yapabiliyor
   -p, --port=PORT              veritabanı sunucu portu
   -p, --port=PORT           veritabanı sunucusunun portu
   -q, --quiet                     hiçbir mesaj yazma
   -q, --quiet                  Hiç bir mesaj yazma
   -q, --quiet               hiçbir ileti yazmaz
   -r, --createrole          rol, yeni rol oluşturabiliyor
   -s, --superuser           rol, superuser olacaktır
   -s, --system             sistem kataloğu yeniden indeksle
   -t, --table='TABLO[(KOLONLAR)]'  sadece belirli bir tabloyu vakumlar
   -t, --table=TABLO_ADI         sadece belirli bir tabloyu cluster eder
   -t, --table=TABLO_ADI        sadece belirli bir tablonun indexleri yeniden oluştur
   -v, --verbose                   bolca çıktı yaz
   -z, --analyze                   optimizer bilgilerini güncelle
 %s (%s/%s)  %s bir PostgreSQL veritabanını temizler ve analiz eder.

 %s Konutu bir veritabanında daha önceden cluster edilmiş tüm tabloları cluster eder.

 %s bir PostgreSQL veritabanı yaratır.

 %s yeni bir PostgreSQL rol oluşturur.

 %s Bir PostgreSQL veritabanına yordamsal bir dil kurar.

 %s PostgreSQL veritabanını yeniden indeksler.

 %s PostgreSQL veritabanını siler.

 %s bir PostgreSQL rolünü siler.

 %s veritabanından yordamsal bir dili siler.

 %s: "%s" geçerli bir dil kodlaması değil
 %s: tüm veritabanlarındaki belirli tablolar cluster edilemez.
 %s: Aynı anda tüm veritabanları ve de belirli bir tanesi cluster edilemez
 %s: aynı anda hem belirli bir indeks hem de sistem kataloğu reindex edilemez
 %s: tüm veritabanlarındaki belirli bir index reindex edilemez
 %s: aynı anda hem belirli bir tablo hem de sistem kataloğu reindex edilemez
 %s: tüm veritabanlarındaki belirli bir tablo reindex edilemez
 %s: aynı anda hem tüm veritabanları hem belirli bir veritabanı reindex edilemez
 %s: aynı anda hem tüm veritabanları hem de sistem kataloğu reindex edilemez
 %s: Tüm veritabanlarındaki belirli bir tablo vakumlanamaz.
 %s:Aynı anda tüm veritabanları ve de belirli bir tanesi vakumlanamaz
 %s: "%s" veritabanı cluster ediliyor
 %s: "%s" veritabanının cluster işlemi başarısız oldu: %s %s: "%s"tablosunun ("%s" veritabanındaki) cluster işlemi başarısız oldu: %s %s: yorum yaratma işlemi başarısız oldu (veritabanı yaratıldı): %s %s: %s veritabanına bağlanılamadı
 %s: %s veritabanına bağlanılamadı: %s %s: geçerli kullanıcı adı alınamadı: %s
 %s: geçerli kullanıcı hakkında bilgi alınamadı: %s
 %s: yeni rol oluşturma işlemi başarısız oldu: %s %s: veritabanı yaratma başarısız oldu: %s %s: veritabanı silme işlemi başarısız oldu: %s %s: "%s" dili daha önceden veritabanına yüklenmiştir "%s"
 %s: "%s" dili "%s" veritabanında kurulu değil 
 %s: Dil kurulumu başarısız oldu: %s %s: dil silme işlemi başarısız oldu: %s %s: Gerekli argüman eksik: Veritabanı adı
 %s: Gerekli bir argüman olan dil adı eksik
 %s: sorgu başarısız oldu: %s %s: sorgu şu idi: %s
 %s: "%s" veritabanı yeniden indeksleniyor
 %s: "%s" veritabanının yeniden indekslenmesi başarısız oldu: %s %1$s: "%3$s" veritabanındaki "%2$s" indeksinin yeniden oluşturulması başarısız: %4$s %s: sistem kataloğların yeniden indekslemesi başarısız: %s %1$s: "%3$s" veritabanındaki "%2$s" tablosunun reindex işlemi başarısız: %4$s %s: "%s" rolün silinmesi başarısız oldu: %s %s: %s fonksiyon, "%s" dilinde tanımlanmış durumda;  dil kaldırılamadı
 %s: Çok sayıda komut satırı argümanı (ilki "%s")
 %s: "%s" veritabanı vakumlanıyor
 %s: "%s" veritabanının vakumlanması başarısız oldu: %s %s: "%s" tablosunun ("%s" veritabanındaki) vakumlama işlemi başarısız oldu: %s Emin misiniz? İptal isteği gönderildi
 İptal isteği gönderilemedi: %s İptal isteği gönderilemedi: %s
 "%s" veritabanı kalıcı olarak silinecektir.
 Yeniden girin:  Eklenecek rol asını girin:  Silinecek rolün adını giriniz:  Yeni rol için şifre girin:  Adı Parola şifreleme hatası.
 Şifre:  Şifreler uyuşmadı.
 Geçerli cevap: "%s" veya "%s".
 Yordamsal Diller "%s" rolü kalıcı olarak silinecektir.
 Yeni rol superuser olsun mu? Yeni rol, veritabanı oluşturabilsin mi? Yeni rol, yeni rolleri oluşturma hakkına sahip olsun mu? Güvenilir mi? Daha fazla bilgi için "%s --help" komutunu deneyiniz.
 Kullanımı:
 n hayır y evet 