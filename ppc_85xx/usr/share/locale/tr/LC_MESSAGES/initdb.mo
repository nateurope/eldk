��    u      �  �   l      �	  R   �	     4
  
   R
  -   ]
  �   �
  �        �    �  J   �  5   =  J   s  6   �  P   �  C   F  :   �  4   �  B   �  H   =  G   �  >   �  9     3   G  ?   {  /   �  -   �  E     y   _  (   �  �     7   �  (   �  ,   �  3   '  '   [  5   �  -   �  -   �  /     "   E  6   h  �   �  �   N  0   �  ;     $   B  /   g  �   �  �   #  ~   �  1   5     g  J   �  �   �     �  C   �  -   �  8     !   V  ,   x  0   �  4   �  A     ,   M     z     �     �     �     �       ;     9   U  �   �  >      2  _  u   �  q     f   z  &   �              &      0   F   .   w   )   �   )   �   "   �   #   !  "   A!      d!  (   �!  "   �!     �!  "   �!  !   "  ,   1"  $   ^"  %   �"  !   �"     �"     �"       #     !#     >#  -   Y#  0   �#     �#     �#     �#  )   $     1$     5$  &   D$  3   k$     �$  +   �$  !   �$  �  %  Q   �&  "   '     6'  C   E'  �   �'  �   *(     )  7  %)  P   ]*  4   �*  T   �*  D   8+  [   }+  ]   �+  Q   7,  F   �,  I   �,  >   -  3   Y-  C   �-  <   �-  7   .  <   F.  5   �.  1   �.  A   �.  �   -/  $   �/  �   �/  >   �0  ,   �0  .   1  5   F1  0   |1  8   �1  3   �1  4   2  ,   O2  %   |2  @   �2  �   �2  �   �3  A   H4  L   �4  #   �4  .   �4  �   *5  �   �5  }   �6  7   7     N7  [   m7  �   �7     �8  <   �8  /   �8  ;   9     Z9  *   z9  -   �9  6   �9  K   
:  +   V:  +   �:     �:  #   �:     �:  7   �:     3;  6   Q;  3   �;  �   �;  >   T<  U  �<  �   �=  �   �>  �   ?  A   �?     �?     �?  :   @  ;   =@  =   y@  9   �@  9   �@  (   +A  (   TA  /   }A  '   �A  #   �A  #   �A  '   B  #   EB      iB  '   �B  #   �B      �B  ,   �B     $C     DC  %   `C     �C  #   �C  6   �C  -   D  #   /D     SD     rD  4   �D     �D     �D  -   �D  :   E     FE  0   _E  (   �E     V              +   9   4   &   <   3                  6   ^   s           Z      @            7      ,   I   D   0       "   =       h      ]   8   X   W   P   L   o      e   i   k   `      C      N   !   E          F       \   [   t      J           (   1   m          S   K   l      ?   c          B      )       
   f   q          .             a                   %       -   n   Q   *   b       H   $           ;   G   p   Y      T   g   '   j       O   2          	   u   /                 r   5       #      U                   d                     :           A      >   _   R   M        
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
   -X, --xlogdir=XLOGDIR     location for the transaction log directory
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
 %s: could not access file "%s": %s
This might mean you have a corrupted installation or identified
the wrong directory with the invocation option -L.
 %s: could not change permissions of directory "%s": %s
 %s: could not create directory "%s": %s
 %s: could not create symbolic link "%s": %s
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
 %s: directory "%s" exists but is not empty
If you want to store the transaction log there, either
remove or empty the directory "%s".
 %s: failed to remove contents of data directory
 %s: failed to remove contents of transaction log directory
 %s: failed to remove data directory
 %s: failed to remove transaction log directory
 %s: file "%s" does not exist
This means you have a corrupted installation or identified
the wrong directory with the invocation option -L.
 %s: file "%s" is not a regular file
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
 %s: password prompt and password file cannot be specified together
 %s: removing contents of data directory "%s"
 %s: removing contents of transaction log directory "%s"
 %s: removing data directory "%s"
 %s: removing transaction log directory "%s"
 %s: symlinks are not supported on this plataform %s: too many command-line arguments (first is "%s")
 %s: transaction log directory "%s" not removed at user's request
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
locale uses (%s) are not known to match.  This might lead to
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by exception 0x%X child process was terminated by signal %d child process was terminated by signal %s copying template1 to postgres ...  copying template1 to template0 ...  could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not open directory "%s": %s
 could not read binary "%s" could not read directory "%s": %s
 could not read symbolic link "%s" could not remove file or directory "%s": %s
 could not set junction for "%s": %s
 could not write to child process: %s
 creating configuration files ...  creating conversions ...  creating directory %s ...  creating information schema ...  creating subdirectories ...  creating system views ...  creating template1 database in %s/base/1 ...  fixing permissions on existing directory %s ...  initializing dependencies ...  initializing pg_authid ...  invalid binary "%s" loading system objects' descriptions ...  ok
 out of memory
 selecting default max_connections ...  selecting default shared_buffers/max_fsm_pages ...  setting password ...  setting privileges on built-in objects ...  vacuuming database template1 ...  Project-Id-Version: initdb-tr
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-01-06 01:27-0400
PO-Revision-Date: 2007-02-14 13:15+0200
Last-Translator: Nicolai Tufar <ntufar@gmail.com>
Language-Team: Turkish <ceviri@postgresql.org.tr>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.9.1
X-Poedit-Language: Turkish
X-Poedit-Country: TURKEY
X-Poedit-Basepath: ../postgresql-8.0.3/src
 
Eğer veri dizini belirtilmezse, PGDATA çevresel değişkeni kullanılacaktır
 
Daha az kullanılan seçenekler:
 
Seçenekler:
 
Hataları <pgsql-bugs@postgresql.org> adresine bildirebilirsiniz.
 
İşlem başarılı. Veritabanı sunucusunu:

    %s%s%spostgres%s -D %s%s%s
ile ya da 
    %s%s%spg_ctl%s -D %s%s%s -l logfile start
ile başlatabilirsiniz.

 
UYARI: Yerel bağlantıları için "trust" yetkilendirmesi etkinleştiriliyor.
Bunu, pg_hba.conf dosyasını düzenleyerek ya da  initdb'yi yeniden 
 çalıştırdığınızda -A parametresi ile değiştirebilirsiniz..
   %s [SEÇENEK]... [DATADIR]
   --lc-collate, --lc-ctype, --lc-messages=LOCALE
  --lc-monetary, --lc-numeric, --lc-time=LOCALE
                            veritabanı kümesini, ilgili kategorideki 
                            verilen yerelde ilklendirir.
                            ön tanımlı bilgi çevresel bigilerden alınmıştır)
   --locale=LOCALE           veritabanı kümesini verilen yerel ile ilklendirir
   --no-locale               --locale=C'ye eşdeğer
   --pwfile=DOSYA_ADI         yeni superuser için şifreyi belirtilen dosyadan okur
   -?, --help                bu yardımı gösterir ve sonra çıkar
   -A, --auth=METHOD         yerel bağlantılar için ön tanımlı yetkilendirme yöntemi
   -E, --encoding=ENCODING   yeni veritabanları için öntanımlı dil kodlamasını ayarlar
   -L DIRECTORY              girdi dosyalarının nerede bulunacağını belirtir
   -U, --username=NAME       veritabanı superuser kullanıcısı adı
   -V, --version             sürüm bilgisini gösterir ve sonra çıkar
   -W, --pwprompt            yeni superuser için şifre sorar
   -X, --xlogdir=XLOGDIR     transaction log dizini
   -d, --debug               bol miktarda debug çıktısı üretir
   -n, --noclean             hatalardan sonra temizlik yapma
   -s, --show                dahili ayarları gösterir
 [-D, --pgdata=]DATADIR     bu veritabanı kümesi için yer
 %sbir PostgreSQL Veritabanı kümesini ilklendirir.

 %s: "%s" geçerli bir dil kodlaması adı değil
 %s: Şifre dosyası üretilemedi. Lütfen bu hatayı bildiriniz.
 %s: root olarak çalıştırılamaz.
(Örneğin "su" kullanarak ) sunucu sürecinin sahibi olacak şekilde sisteme yetkisiz bir kullanıcı olarak giriş yapın.
 %s: "%s" dizine erişim hatası: %s
 %s: "%s" dosyasına erişilemedi: %s
Bu durum, bozulmus bir kurulumunuz olduğu ya da
initdb betiğine verdiğiniz -L parametresi ile yanlış dizin belirttiğiniz anlamına gelir.
 %s: "%s" dizininin erişim haklarını değiştirilemiyor: %s
 %s: "%s" dizini oluşturma başarısız: %s
 %s: symbolic link "%s" oluşturma hatası: %s
 %s: geçerli bir kısa sürüm katarı belirlenemedi
 %s: "%s" komutu yürütme başlatma hatası: %s
 %s: "%s" yereli için uygun dil kodlaması bulunamadı.
 %s: "%s"  dosyası, okunmak için açılamadı: %s
 %s: "%s" dosyası, yazılmak için açılamadı: %s
 %s: "%s" dosyasından şifre okunamadı: %s
 %s: "%s" dosyasına yazılamadı: %s
 %s: "%s" veri dizini kullanıcının isteği üzerine silinmedi
 %s: "%s" dizini mevcut ancak boş değil 
Eğer yeni bir veritabanı sistemi yaratmak istiyorsanız, "%s" dizini
ya silin ya da taşıyın; ya da %s komutunu 
"%s" argümanınından farklı bir argümanla çalıştırın.
 %s: "%s" dizini mevcut ancak boş değil 
Eğer transaction logları orada tutmak istiyorsanız
"%s" dizinin boşaltın ya da silin.
 %s: veri dizininin içindekilerinin silme işlemini başarısız
 %s: transaction log dizininin içindekilerinin silme işlemini başarısız
 %s: veri dizini silme başarısız
 %s: transaction log dizini silme başarısız
 %s: "%s" dosyası bulunamadı
Bu ileti, bozulmus bir kurulumunuz olduğu ya da
initdb betiğine verdiğiniz -L parametresi ile yanlış dizin belirttiğiniz anlamına gelir..
 %s: "%s" dosyası normal bir dosya değildir
Bu durum, bozulmus bir kurulumunuz olduğu ya da
initdb betiğine verdiğiniz -L parametresi ile yanlış dizin belirttiğiniz anlamına gelir.
 %s: "%s" girdi dosyası PostgreSQL'e ait değil %s
Kurulumunuzu kontrol edin ya da -L seçeneği ile doğru dizini belirtin.
 %s: girdi dosyasının yeri mutlak bir yol olmalıdır
 %s: geçersiz yerel adı "%s"
 %s: %s yetkilendirmesini etkinleştirmek için superuser'a şifre atamanız gerekmektedir.
 %s: Hiçbir veri dizini belirtilmedi
Bu veritabanı sistemi için verinin hangi dizinde duracağını belirtmeniz gerekmektedir.
Bunu ya -D seçeneği ile ya da PGDATA çevresel değişkeni ile yapabilirsiniz.
 %s: yetersiz bellek
 %s: şifre promptu ve şifre dosyası birlikte belirtilemez
 %s: veri dizininin içindekiler siliniyor "%s"
 %s: transaction log dizininin içindekileri siliniyor "%s"
 %s: veri dizini siliniyor "%s"
 %s: transaction log dizini siliniyor "%s"
 %s: bu platformda symlink desteklenmemektedir %s: Çok fazla komut satırı girdisi var (ilki "%s")
 %s: "%s" transaction log dizini kullanıcının isteği üzerine silinmedi
 %s: bilinmeyen yetkilendirme yöntemi"%s".
 %s: uyarı: dil kodlaması uyuşmazlığı
 Yeniden giriniz:  Yeni superuser şifresini giriniz:  Şifreler uyuşmadı.
 %s komutunu -E seçeneği ile yeniden çalıştırın.
 Debug modunda çalışıyor.
 noclean modunda çalışıyor.  Hatalar silinmeyecek.
 Veritabanı kümesi %s yereli ile ilklendirilecek.
 Veritabanı kümesi aşağıdaki yerellerle ilklendirilecek:
  COLLATE:  %s
  CTYPE:    %s
  MESSAGES: %s
  MONETARY: %s
  NUMERIC:  %s
  TIME:     %s
 Öntanımlı veritabanı dil kodlaması %s olarak ayarlandı.
 Seçtiğiniz (%s) dil kodlaması ve seçilen yerelin kullandığı dil kodlaması
(%s) uyuşmamaktadır.  Bu durum, çeşitli metin işleme fonksiyonlarının
yanlış çalışmasına neden olabilir. Bu durumu düzeltebilmek için
%s komutunu yeniden çalıştırın ve de ya kodlama belirtmeyin
ya da eşleştirilebilir bir kodlama seçin.
 Bu veritabanı sistemine ait olan dosyaların sahibi "%s" kullanıcısı olacaktır.
Bu kullanıcı aynı zamanda sunucu sürecinin de sahibi olmalıdır.

  "postgres"  programına %s gereksinim duymaktadır, ancak bu program  "%s"
ile aynı dizinde bulunamadı.
Kurulumunuzu kontrol ediniz.
  "postgres"  programı "%s" tarafından bulundu; ancak bu program  %s
ile aynı sürüm numarasına sahip değil.
Kurulumunuzu kontrol ediniz.
 Ayrıntılı bilgi için  "%s --help" komutunu deneyebilirsiniz.
 Kullanımı:
 sinyal yakalandı
 alt süreç %d çıkış koduyla sonuçlandırılmıştır alt süreç %d bilinmeyen durumu ile sonlandırılmıştır alt süreç 0x%X exception tarafından sonlandırılmıştır alt süreç %d sinyali tarafından sonlandırılmıştır alt süreç %s sinyali tarafından sonlandırılmıştır template1, postgres'e kopyalanıyor ...  template1 template0'a kopyalanıyor ...  çalışma dizini "%s" olarak değiştirilemedi "%s"  çalıştırmak için bulunamadı geçerli dizin tespit edilemedi: %s "%s" dizini açma başarısız: %s
 "%s" ikili (binary) dosyası okunamadı "%s" dizini okuma başarısız: %s
 symbolic link "%s" okuma hatası "%s" dizini kaldırma başarısız: %s
 "%s" junction ayarlama hatası: %s
 çocuk sürece yazılamadı: %s
 yapılandırma dosyaları yaratılıyor ...  dönüşümler yükleniyor ...  %s dizini yaratılıyor...  information schema yaratılıyor ...  alt dizinler oluşturuluyor...  sistem viewları yaratılıyor ...  %s/base/1 içinde template1 veritabanı yaratılıyor. mevcut %s dizininin izinleri düzeltiliyor... bağlılıklar ilklendiriliyor ...  pg_authid ilklendiriliyor ...  geçersiz ikili (binary) "%s" sistem nesnelerinin açıklamaları yükleniyor ...  tamam
 bellek yetersiz
 ön tanımlı max_connections seçiliyor ...  ön tanımlı shared_buffers/max_fsm_pages seçiliyor ...  şifre ayarlanıyor ...  gömülü nesnelerdeki izinler ayarlanıyor ...  template1 veritabanı vakumlanıyor ...  