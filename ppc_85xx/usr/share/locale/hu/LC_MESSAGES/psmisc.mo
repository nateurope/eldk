��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  �  �  $   #  (  H  7   q  �   �  �   R  %   �       6   #     Z     g  0   �  C   �  /   �  $   +  4   P  -   �  .   �  2   �  .     2   D  4   w     �     �  3   �  ;      +   X   '   �      �   &   �       �   ,   !     8!  &   S!  $   z!     �!     �!  �   �!     �"     �"     �"  w  �"  U   r'  )   �'    �'    )  7   ,  9   O,  >   �,  .   �,     �,     
-  $   -     	          
   3       "                 +      (   4          #           &      %      .   $   *             )                                 '   /         !   ,                       -                        5   2                0              1    
%*s USER        PID ACCESS COMMAND
        killall -l, --list
       killall -V, --version

  -e,--exact          require exact match for very long names
  -I,--ignore-case    case insensitive process name match
  -g,--process-group  kill process group instead of process
  -i,--interactive    ask for confirmation before killing
  -l,--list           list all known signal names
  -q,--quiet          don't print complaints
  -r,--regexp         interpret NAME as an extended regular expression
  -s,--signal SIGNAL  send this signal instead of SIGTERM
  -u,--user USER      kill only process(es) running as USER
  -v,--verbose        report if the signal was successfully sent
  -V,--version        display version information
  -w,--wait           wait for processes to die
     -Z     show SELinux security contexts
     PID    start at this PID; default is 1 (init)
    USER   show only trees rooted at processes of this user

   -Z,--context REGEXP kill only process(es) having context
                      (must precede other arguments)
 %s is empty (not mounted ?)
 %s: no process killed
 %s: unknown signal; %s -l lists signals.
 (unknown) Bad regular expression: %s
 Can't get terminal capabilities
 Cannot allocate memory for matched proc: %s
 Cannot find socket's device number.
 Cannot find user %s
 Cannot get UID from process status
 Cannot open /etc/mtab: %s
 Cannot open /proc directory: %s
 Cannot open /proc/net/unix: %s
 Cannot open a network socket.
 Cannot open protocol file "%s": %s
 Cannot resolve local port %s: %s
 Cannot stat %s: %s
 Cannot stat file %s: %s
 Cannot stat mount point %s: %s
 Copyright (C) 1993-2005 Werner Almesberger and Craig Small

 Could not kill process %d: %s
 Internal error: MAX_DEPTH not big enough.
 Invalid namespace name Kill %s(%s%d) ? (y/N)  Kill process %d ? (y/N)  Killed %s(%s%d) with signal %d
 Maximum number of names is %d
 Namespace option requires an argument. No process specification given No processes found.
 No such user name: %s
 PSmisc comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it under
the terms of the GNU General Public License.
For more information about these matters, see the files named COPYING.
 Press return to close
 TERM is not set
 Unknown local port AF %d
 Usage: fuser [ -a | -s | -c ] [ -n SPACE ] [ -SIGNAL ] [ -kimuv ] NAME...
             [ - ] [ -n SPACE ] [ -SIGNAL ] [ -kimuv ] NAME...
       fuser -l
       fuser -V
Show which processes use the named files, sockets, or filesystems.

    -a        display unused files too
    -c        mounted FS
    -f        silently ignored (for POSIX compatibility)
    -i        ask before killing (ignored without -k)
    -k        kill processes accessing the named file
    -l        list available signal names
    -m        show all processes using the named filesystems
    -n SPACE  search in this name space (file, udp, or tcp)
    -s        silent operation
    -SIGNAL   send this signal instead of SIGKILL
    -u        display user IDs
    -v        verbose output
    -V        display version information
    -4        search IPv4 sockets only
    -6        search IPv6 sockets only
    -         reset options

  udp/tcp names: [local_port][,[rmt_host][,[rmt_port]]]

 Usage: killall [-Z CONTEXT] [-u USER] [ -eIgiqrvw ] [ -SIGNAL ] NAME...
 Usage: killall [OPTION]... [--] NAME...
 Usage: pidof [ -eg ] NAME...
       pidof -V

    -e      require exact match for very long names;
            skip if the command line is unavailable
    -g      show process group ID instead of process ID
    -V      display version information

 Usage: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
              [ -A | -G | -U ] [ PID | USER ]
       pstree -V
Display a tree of processes.

    -a     show command line arguments
    -A     use ASCII line drawing characters
    -c     don't compact identical subtrees
    -h     highlight current process and its ancestors
    -H PID highlight this process and its ancestors
    -G     use VT100 line drawing characters
    -l     don't truncate long lines
    -n     sort output by PID
    -p     show PIDs; implies -c
    -u     show uid transitions
    -U     use UTF-8 (Unicode) line drawing characters
    -V     display version information
 You can only use files with mountpoint option You cannot search for only IPv4 and only IPv6 sockets at the same time You cannot use the mounted and mountpoint flags together all option cannot be used with silent option. fuser (PSmisc) %s
 pstree (PSmisc) %s
 skipping partial match %s(%d)
 Project-Id-Version: psmisc 22.2
Report-Msgid-Bugs-To: csmall@small.dropbear.id.au
POT-Creation-Date: 2006-08-09 21:28+1000
PO-Revision-Date: 2006-08-05 02:34+0200
Last-Translator: Miklos Vajna <vmiklos@frugalware.org>
Language-Team: Hungarian <translation-team-hu@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=1; plural=0;
 
%*s FELHASZN�L� PID EL�R�S PARANCS
        killall -l, --list
       killall -V, --version

  -e,--exact          teljes egyez�s ig�nyl�se nagyon hossz� nevek eset�re
  -I,--ignore-case    kisbet�/nagybet�-�rz�kenys�g kikapcsol�sa
  -g,--process-group  a folyamatcsoport meg�l�se a folyamat helyett
  -i,--interactive    meger�s�t�s k�r�se meg�l�s el�tt
  -l,--list           az �sszes ismert szign�ln�v list�z�sa
  -q,--quiet          ne nyomtasson kifog�sokat
  -r,--regexp         �rtelmezze a NEVET kiterjesztett regul�ris kifejez�sk�nt
  -s,--signal SZIGN�L ezt a szign�lt k�ldje SIGTERM helyett
  -u,--user FELHASZN�L� csak a FELHASZN�L�k�nt fut� folyamatok meg�l�se
  -v,--verbose        jelentse ha a szign�lt sikeresen elk�ldte
  -V,--version        verzi�inform�ci� megjelen�t�se
  -w,--wait           v�rja meg m�g meghal a folyamat
     -Z     mutassa az SELinux biztons�gi k�rnyezeteket
     PID    induljon enn�l a PID-n�l; az alap�rtelmez�s az 1 (init)
    FELHASZN�L� csak azokat a f�kat mutassa amik ennek a felhaszn�l�nak a folyamatain�l gy�kereznek

   -Z,--context REGEXP csak az adott k�rnyezettel rendelkez� folyamat(ok) meg�l�se
                      (meg kell el�zze a t�bbi argumentumot)
 Nem �res: %s (nincs csatlakoztatva?)
 %s: nincs meg�lt folyamat
 %s: ismeretlen szign�l; %s -l list�zza a szign�lokat.
 (ismeretlen) Rossz regul�ris kifejez�s: %s
 Nem siker�lt a termin�l kapacit�sait lek�rdezni
 Nem siker�lt allok�lni mem�ri�t a k�vetkez� egyez� folyamatnak: %s
 Nem siker�lt megtal�lni a socket eszk�zsz�m�t.
 %s: nem tal�lhat� ilyen felhaszn�l�
 Nem siker�lt megkapni a UID-t a folyamat �llapotb�l
 Nem siker�lt megnyitni a /etc/mtab f�jlt: %s
 Nem siker�lt megnyitni a /proc k�nyvt�rat: %s
 Nem siker�lt megnyitni a /proc/net/unix f�jlt: %s
 Nem siker�lt megnyitni egy h�l�zati socketet.
 Nem siker�lt megnyitni a "%s" protokoll-f�jlt: %s
 Nem siker�lt feloldani a %s. sz�m� helyi portot: %s
 Nem siker�lt statolni: %s: %s
 Nem �rhet� el a %s file: %s
 Nem siker�lt statolni a %s csatlakoz�si pontot: %s
 Copyright (C) 1993-2005 Werner Almesberger �s Craig Small

 Nem siker�lt meg�lni a %d-s folyamatot: %s
 Bels� hiba: a MAX_DEPTH nem el�g nagy.
 �rv�nytelen n�vt�r n�v Meg�li a k�vetkez�t: %s(%s%d) ? (y/N)  Meg�li a %d-s folyamatot? (y/N)  %s(%s%d) meg�lve a k�vetkez� szign�llal: %d
 A neve maxim�lis sz�ma %d
 A n�vt�r opci� ig�nyel egy param�tert. Nem adott meg folyamat-specifik�ci�t Nem tal�lhat� folyamat.
 Nincs ilyen felhaszn�l�n�v: %s
 A PSmisc nem v�llal SEMMILYEN garanci�t.
Ez egy szabad szoftver, szabadon terjeszthet� a GNU General Public License
felt�telei mellett.
Ezzel kapcsolatban egy�b inform�ci�k tal�lhat�k a COPYING nev� f�jlban.
 �ss�n entert a bez�r�shoz
 a TERM nincs be�ll�tva
 Ismeretlen helyi port: AF %d
 Haszn�lat: fuser [ -a | -s | -c ] [ -n T�R ] [ -SZIGN�L ] [ -kimuv ] N�V...
                 [ - ] [ -n T�R ] [ -SZIGN�L ] [ -kimuv ] N�V...
           fuser -l
           fuser -V
Megmutatja, hogy mely folyamatok haszn�lj�k az adott f�jlt, socketet vagy f�jlrendszert.

    -a        megjelen�ti a nem haszn�lt k�nyvt�rakat is
    -c        csatlakoztatott FS
    -f        cs�ndben figyelmen k�v�l hagyva (POSIX kompatibilit�s miatt)
    -i        k�rdezzen meg�l�s el�tt (figyelmen k�v�l hagyva a -k n�lk�l)
    -k        a f�jlt haszn�l� folyamtok meg�l�se
    -l        az el�rhet� szign�lnevek list�z�sa
    -m        mutassa az �sszes folyamatot amely az adott f�jlrendszert haszn�lja
    -n T�R    keressen ebben a n�vt�rben (file, udp, vagy tcp)
    -s        csendes m�k�d�s
    -SZIGN�L  k�ldje ezt a szign�lt a SIGKILL helyett
    -u        felhaszn�l�i azonos�t�k megjelen�t�se
    -v        besz�des kimenet
    -V        verzi�inform�ci� megjelen�t�se
    -4        csak IPv4 socketek keres�se
    -6        csak IPv6 socketek keres�se
    -         opci�k t�rl�se

  udp/tcp nevek: [helyi_port][,[t�voli_g�p][,[t�voli_port]]]

 Haszn�lat: killall [-Z K�RNYEZET] [-u FELHASZN�L�] [ -eIgiqrvw ] [ -SZIGN�L ] N�V...
 Haszn�lat: killal [OPCI�]... [--] N�V...
 Haszn�lat: pidof [ -eg ] N�V...
           pidof -V

    -e      teljes egyez�s ig�nyl�se nagyon hossz� nevek eset�n;
            kihagy�s, ha a parancssor nem el�rhet�
    -g      a folyamat csoport ID-j�nak mutat�sa a folyamat ID helyett
    -V      verzi�inform�ci� megjelen�t�se

 Haszn�lat: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
                  [ -A | -G | -U ] [ PID | FELHASZN�L� ]
           pstree -V
Megjelen�ti a folyamtok egy f�j�t.

    -a     a parancssori argumentumok mutat�sa
    -A     haszn�ljon ASCII sor rajzol� karaktereket
    -c     ne vegye egynek az egyez� alf�kat
    -h     a jelenlegi folyamat �s annak �seinek kiemel�se
    -H PID ennek a folyamatnak �s �seinek kiemel�se
    -G     haszn�ljon VT100 sor rajzol� karaktereket
    -l     ne v�gja le a hossz� sorokat
    -n     rendezze a kimenetet PID szerint
    -p     PID-ek mutat�sa; a -c-t bekapcsolja
    -u     mutassa az uid v�ltoz�sokat
    -U     haszn�ljon UTF-8 (Unicode) sor rajzol� karaktereket
    -V     verzi�inform�ci�k megjelen�t�se
 Csak csatlakoztat�si-pont opci�k�nt haszn�lhat f�jlokat Nem kereshet csak IPv4 �s csak IPv6 socketeket egy id�ben Nem haszn�lhat� a csatolt �s csatol�si pont kapcsol� egyszerre a -a opci� nem haszn�lhat� a csendes opci�val. fuser (PSmisc) %s
 pstree (PSmisc) %s
 r�szleges egyez�s kihagy�sa: %s(%d)
 