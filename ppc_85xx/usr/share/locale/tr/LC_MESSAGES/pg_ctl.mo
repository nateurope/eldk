��    g      T  �   �      �      �     �  &   �     	     +	  -   J	     x	     �	  r   �	     
  F   >
  A   �
     �
  7   �
  !     3   <  ?   p  ?   �  H   �  D   9  E   ~  ?   �  >     9   C  B   }  <   �  z   �  0   x  F   �  8   �  2   )  O   \  7   �     �     �  �   �  !   �  C   �  y   �  C   e  D   �  4   �  A   #  *   e  /   �  %   �  /   �  #        :  3   X  0   �  ,   �  .   �  3     -   M  0   {  5   �  "   �  $     J   *     u     �  3   �  0   �             !   ?  $   a      �  -   �  4   �  %   
  $   0  "   U  F   x  F   �       7     q   R  f   �  &   +     R  &   Z  0   �  .   �  )   �  )     "   5      X  (   y     �  !   �     �     �          !     2     B     S     c  "   {     �  {  �  )   9     c  2   x  8   �  8   �  <        Z  *   n  p   �  '   
  R   2  N   �  "   �  ?   �  !   7   7   Y   >   �   ;   �   D   !  J   Q!  Q   �!  5   �!  L   $"  2   q"  f   �"  ?   #  �   K#  2   �#  O   $  3   n$  5   �$  h   �$  E   A%     �%     �%  �   �%  "   t&  S   �&  �   �&  T   �'  P   �'  C   )(  N   m(  +   �(  9   �(  '   ")  ,   J)  $   w)     �)  -   �)  1   �)  4   *  5   O*  ;   �*  0   �*  0   �*  .   #+  (   R+  &   {+  S   �+      �+     ,  1   2,  7   d,     �,     �,  $   �,  ,   �,  "   -  ?   ;-  7   {-     �-      �-     �-  g   .  X   |.     �.  A   �.  �   1/  �   �/  ?   60     v0  :   �0  ;   �0  =   �0  9   91  9   s1  /   �1  '   �1  #   2  '   )2      Q2     r2     �2     �2     �2     �2     �2     3     3  "   83  #   [3     L   >       R   D          ;       4   )   :          N   Z   	   c   9   J   B       !   5   F   '                     X                  b   V   C   /   Y   +         %      ,      G   2      ?   Q              #   _         O       I   \      6   d                                 [      U          -       K      =           a   M   H   "               A   ^         S   .      T   *       <         ]   3   $          7   `       0   e   &   @       8   W           
   f         (   1       P          E   g    
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
   -c, --core-files       allow postgres to produce core files
   -c, --core-files       not applicable on this platform
   -l, --log FILENAME     write (or append) server log to FILENAME
   -m SHUTDOWN-MODE   can be "smart", "fast", or "immediate"
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
 %s: another server might be running; trying to start server anyway
 %s: cannot be run as root
Please log in (using, e.g., "su") as the (unprivileged) user that will
own the server process.
 %s: cannot reload server; single-user server is running (PID: %ld)
 %s: cannot restart server; single-user server is running (PID: %ld)
 %s: cannot set core size, disallowed by hard limit.
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
 child process exited with exit code %d child process exited with unrecognized status %d child process was terminated by exception 0x%X child process was terminated by signal %d child process was terminated by signal %s could not change directory to "%s" could not find a "%s" to execute could not identify current directory: %s could not read binary "%s" could not read symbolic link "%s" could not start server
 invalid binary "%s" server shutting down
 server signaled
 server started
 server starting
 server stopped
 starting server anyway
 waiting for server to shut down... waiting for server to start... Project-Id-Version: pg_ctl-tr
POT-Creation-Date: 2005-01-04 19:05+0000
PO-Revision-Date: 2007-02-14 13:20+0200
Last-Translator: Nicolai Tufar <ntufar@gmail.com>
Language-Team: Turkish <ceviri@postgresql.org.tr>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.9.1
X-Poedit-Language: Turkish
X-Poedit-Country: TURKEY
 
kill için izin verilen sinyal adları:
 
Ortak seçenekler:
 
Kaydetmek ya da kaydı silmek için seçenekler:
 
Başlatmak ya da yeniden başlatmak için seçenekler:
 
Başlatmak ya da yeniden başlatmak için seçenekler:
 
Hataları <pgsql-bugs@postgresql.org> adresine bildiriniz.
 
Kapatma modları:
   %s kill    SİNYAL_ADI SÜREÇ_NUMARASI
   %s register   [-N servis adı] [-U kullanıcı adı] [-P şifre] [-D VERİ_DİZİNİ] [-w] [-o "SEÇENEKLER"]
   %s reload  [-D VERİ_DİZİNİ] [-s]
   %s restart [-w] [-D VERİ_DİZİNİ] [-s] [-m SHUTDOWN-MODE] [-o "SEÇENEKLER"]
   %s start   [-w] [-D VERİ_DİZİNİ] [-s] [-l DOSYA_ADI] [-o "SEÇENEKLER"]
   %s status  [-D VERİ_DİZİNİ]
   %s stop    [-W] [-D VERİ_DİZİNİ] [-s] [-m SHUTDOWN-MODE]
   %s unregister [-N SERVİS_ADI]
   --help                 Bu yardımı göster ve çık
   --version             sürüm numarasını yazar ve çıkar
   -D, --pgdata VERİ_DİZİNİ   verinin tutulacağı alan
   -N SERVICENAME  PostgreSQL sunucusunu kaydedeceğiniz servis adı
   -P PASSWORD     PostgreSQL sunucusunu kaydetmek için hesabın şifresi
   -U USERNAME     PostgreSQL sunucusunu kaydetmek için gerekli kullanıcı adı
   -W                     işlem bitene kadar bekleme
   -c, --core-files       postgresin core dosyları oluşturmasına izin ver
   -c, --core-files       bu platformda uygulanmaz
   -l, --log DOSYA_ADI      Sunucu loglarını DOSYA_ADI dosyasına yaz (ya da dosyanın sonuna ekle).
   -m KAPANMA-MODU   "smart", "fast", veya "immediate" olabilir
   -o SEÇENEKLER             postmaster'a geçilecek komut satırı seçenekleri
                         (PostgreSQL sunucusu çalıştırılabilir dosyası)
   -p PATH-TO-POSTGRES  normalde gerekli değildir
   -s, --silent           sadece hataları yazar, hiç bir bilgi mesajı yazmaz
   -w                     işlem bitene kadar bekle
   fast        düzgünce kapanmadan direk olarak dur
   immediate   tam bir kapanma gerçekleşmeden dur; yeniden başladığında recovery modunda açılır
   smart       tüm istemciler bağlantılarını kestikten sonra dur
  tamam
  başarısız oldu
 %s başlatmak, durdurmak, yeniden başlatmak, yapılandırma dosyalarını yeniden yüklemek
PostgreSQL sunucusunun durumunu bildirmek, ya da PostgreSQL sürecini öldürmek için bir yardımcı programdır

 %s: "%s" PID dosyası bulunamadı
 %s: başka bir sunucu çalışıyor olabilir; yine de başlatmaya çalışıyorum.
 %s: root olarak çalıştırılamaz
Lütfen  (yani "su" kullanarak) sunucu sürecine sahip olacak (yetkisiz) kullanıcı
ile sisteme giriş yapınız.
 %s: sunucu yeniden yüklenemedi, tek kullanıcılı sunucu çalışıyor (PID: %ld)
 %s: sunucu başlatılamadı; tek kullanıcılı sunucu çalışıyor (PID: %ld)
 %s: core boyutu ayarlanma, hard limit tarafından sınırlanmış.
 %s: sunucu durdurulamadı; tek kullanıcılı sunucu çalışıyor (PID: %ld)
 %s:Çalıştırılabilir dosya bulunamadı
 %s: çalıştırılabilir postgres programı bulunamadı
 %s: "%s" PID dosyası açılamadı: %s
 %s: "%s" servisi açılamadı: Hata kodu %d
 %s: servis yöneticisi açılamadı
 %s: "%s" dosyası okunamadı
 %s: "%s" servisi kaydedilemedi: Hata kodu %d
 %s: reload sinyali gönderilemedi (PID: %ld): %s
 %s: %d reload sinyali gönderilemedi (PID: %ld): %s
 %s:durdurma sinyali başarısız oldu (PID: %ld): %s
 %s: sunucu başlatılamadı
Kayıt dosyasını inceleyiniz
 %s: sunucu başlatılamadı: çıkış kodu: %d
 %s: "%s" servisi başlatılamadı: Hata kodu %d
 %s:  "%s" servisi kaydedilemedi: Hata kodu %d
 %s: "%s" PID dosyasında geçersiz veri
 %s: kill modu için eksik argümanlar
 %s: Hiçbir veritabanı dizini belirtilmemiş ve PGDATA çevresel değişkeni boş
 %s: hiçbir işlem belirtilmedi
 %s: çalışan sunucu yok
 %s: eski sunucu süreci (PID: %ld) kaybolmuştur
 %s: "%s" seçenek dosyası sadece 1 satır olmalıdır
 %s: yetersiz bellek
 %s: sunucu kapanmaz
 %s: sunucu çalışıyor (PID: %ld)
 %s: "%s" servisi daha önce kaydedilmiştir
 %s: "%s" servisi kayıtlı değil
 %s: sunucu, tek kulanıcı biçiminde çalışıyor (PID: %ld)
 %s: çok fazla komut satırı argümanı (ilki : "%s")
 %s: geçersiz işlem modu "%s"
 %s: geçersiz kapanma modu "%s"
 %s: geçersiz sinyal adı "%s"
 (Ön tanımlı işlem kapanmak için beklemektir; ancak başlamak ya da yeniden başlamak değildir.)

 Eğer -D seçeneği gözardı edilirse, PGDATA çevresel değişkeni kullanılacaktır.
 sunucu çalışıyor mu?
 Lütfen tek kullanıcılı sunucuyu durdurun ve yeniden deneyin.
 "postgres" programına %s tarafından gereksinim duyuluyor ancak 
"%s" ile aynı dizinde bulunamadı.
Kurulumunuzu kontrol ediniz.
 "postgres" programı "%s" tarafından
bulundu ancak %s ile aynı sürüm numarasına sahip değil.
Kurulumunuzu kontrol ediniz.
 Daha fazla bilgi için "%s --help" komutunu kullanabilirsiniz.
 Kullanımı:
 alt süreç %d çıkış koduyla sonuçlandırılmıştır alt süreç %d bilinmeyen durumu ile sonlandırılmıştır alt süreç 0x%X exception tarafından sonlandırılmıştır alt süreç %d sinyali tarafından sonlandırılmıştır alt süreç %s sinyali tarafından sonlandırılmıştır çalışma dizini "%s" olarak değiştirilemedi "%s"  çalıştırmak için bulunamadı geçerli dizin tespit edilemedi: %s "%s" ikili (binary) dosyası okunamadı symbolic link "%s" okuma hatası sunucu başlatılamadı
 geçersiz ikili (binary) "%s" sunucu kapatılıyor
 sunucuya sinyal gönderildi
 sunucu başlatıldı
 sunucu başlıyor
 sunucu durduruldu
 sunucu yine de başlatılıyor
 sunucunun kapanması bekleniyor... sunucunun başlaması bekleniyor... 