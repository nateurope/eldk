��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  m  �  %   �  �    +     �   >  r   �     A     ^  )   z     �      �  -   �  /   �  (   +     T  %   q     �  #   �  "   �  "   �  %     #   E     i  !   �  -   �  8   �       2   0     c     ~     �  !   �     �  (   �  !         <      S   x  n      �!     "     "  "  ."  R   Q&  -   �&  �   �&  �  �'  5   s*  C   �*  D   �*  A   2+     t+     �+  -   �+     	          
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
 Project-Id-Version: psmisc 22.2pre1
Report-Msgid-Bugs-To: csmall@small.dropbear.id.au
POT-Creation-Date: 2006-08-09 21:28+1000
PO-Revision-Date: 2006-05-04 00:08+0100
Last-Translator: Daniel Nylander <po@danielnylander.se>
Language-Team: Swedish <tp-sv@listor.tp-sv.se>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
%*s ANV�NDARE   PID �TKOMS KOMMANDO
        killall -l, --list
       killall -V, --version

  -e,--exact         kr�ver exakt matchning f�r v�ldigt l�nga namn
  -I,--ignore-case   ingen skillnad p� gemener/versaler vid namnmatchning
  -g,--process-group d�da processgrupp ist�llet f�r process
  -i,--interactive   fr�ga efter bekr�ftelse f�re d�dandet
  -l,--list          lista alla k�nda signalnamn
  -q,--quiet         skriv inte ut klagom�l
  -r,--regexp         tolka NAMN som ett ut�kat regulj�rt uttryck
  -s,--signal SIGNAL  skicka signal ist�llet f�r SIGTERM
  -u,--user ANV�NDARE d�da endast process(er) som k�rs som ANV�NDARE
  -v,--verbose       rapportera om signalen blev skickad korrekt
  -V,--version       visa versionsinformation
  -w,--wait          v�nta tills processerna �r d�da
     -Z     visa SELinux s�kerhetskontexter
     PID    starta vid denna PID; f�rvald �r 1 (init)
    ANV�NDARE   visa endast tr�d med denna anv�ndares
                processer som rot.

   -Z,--context REGEXP d�da endast process(er) som har kontext
                      (m�ste f�reg� andra argument)
 %s �r tom (inte monterad ?)
 %s: ingen process avslutad
 %s: ok�nd signal; %s -l listar signaler.
 (ok�nd) Felaktigt regulj�rt uttryck: %s
 Kan inte ta reda p� terminalens beskaffenhet
 Kan inte allokera minne f�r matchande proc: %s
 Kunde inte hitta uttagets enhetsnummer.
 Kan inte hitta anv�ndare %s
 Kan inte h�mta UID fr�n processtatus
 Kan inte �ppna /etc/mtab: %s
 Kan inte �ppna katalogen /proc: %s
 Kan inte �ppna /proc/net/unix: %s
 Kan inte �ppna ett n�tverksuttag.
 Kan inte �ppna protokollfil "%s": %s
 Kan inte sl� upp lokal port %s: %s
 Kan inte ta status p� %s: %s
 Kan inte ta status p� fil %s: %s
 Kan inte ta status p� monteringspunkt %s: %s
 Copyright 1993-2005 Werner Almesberger och Craig Small

 Kunde inte d�da process %d: %s
 Internt fel: MAX_DEPTH �r inte tillr�ckligt stor.
 Ogiltigt namn f�r namnrymd Avsluta %s(%s%d) ? (y/N)  Avsluta process %d ? (y/N)  Avslutade %s(%s%d) med signal %d
 Maximalt antal namn �r %d
 Flagga f�r namnrymd kr�ver ett argument. Ingen processpecifikation angiven Inga processer funna.
 Ingen s�dan anv�ndare: %s
 PSmisc kommer med ABSOLUT INGEN GARANTI.
Detta �r fri programvara och du �r v�lkommen att distribuera den under
villkoren f�r GNU General Public License.
F�r mer information om dessa villkor, se filerna kallade COPYING.
F�ljande text �r en informell �vers�ttning som enbart tillhandah�lls
i informativt syfte. F�r alla juridiska tolkningar g�ller den engelska originaltexten.
 Tryck retur f�r att st�nga
 TERM �r inte satt
 Ok�nt lokal port AF %d
 Anv�ndning: fuser [ -a | -s | -c ] [ -n UTRYMME ] [ -SIGNAL ] [ -kimuv ] NAMN ...
             [ - ] [ -n UTRYMME ] [ -SIGNAL ] [ -kimuv ] NAMN...
       fuser -l
       fuser -V
Visar vilka processer som anv�nder angivna filer, uttag eller filsystem.

    -a       visa �ven filer som inte anv�nds
    -c       monterat filsystem
    -f       ignorera tyst (f�r POSIX-kompatibilitet)
    -i       fr�ga innan process avslutas (ignoreras om -k ej anv�nds)
    -k       avsluta processer som anv�nder filen
    -l       lista tillg�ngliga signalnamn
    -m        visa alla processer som anv�nder namngivna filsystem
    -n UTRYMME    utrymme leta i specifierat namnutrymme (fil, udp, tcp)
    -s       tyst anv�ndning
    -SIGNAL  skicka denna signal ist�llet f�r SIGKILL
    -u       visa anv�ndarid
    -v       informativ utskrift
    -V       visa versionsinformation
    -4       s�k bara bland IPv4-uttag (socket)
    -6       s�k bara bland IPv6-uttag (socket)
    -        nollst�ll flaggor

  udp/tcp-namn: [lokal_port][,[fj�rrv�rd][,[fj�rrport]]]

 Anv�ndning: killall [-Z KONTEXT] [-u ANV�NDARE] [ -eIgiqrvw ] [ -SIGNAL ] NAMN...
 Anv�ndning: killall [FLAGGA]... [--] NAMN...
 anv�ndning: pidof [-eg] NAMN...
       pidof -V

    -e      kr�v exakt matchning f�r l�nga namn;
             hoppa �ver om kommandorad �r otillg�nglig
    -g      visa processgruppens ID ist�llet f�r processens ID
    -V      visa versionsinformation

 Anv�ndning: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
              [ -A | -G | -U ] [ PID | ANV�NDARE]
       pstree -V
Visar ett tr�d av processer.

    -a     visa kommandoradsargument
    -A     anv�nd ASCII linjeritningstecken
    -c     packa inte identiska undertr�d
    -h     framh�v nuvarande process och dess f�rf�der
    -H PID framh�v processen "pid" och dess f�rf�der
    -G     anv�nd VT100 linjeritningstecken
    -l     klipp inte l�nga rader
    -n     sortera utskrift efter PID
    -p     visa PID; medf�r -c
    -u     visa uid �verg�ngar
    -U     anv�nd UTF-8 (Unicode) linjeritningstecken
    -V     visa versionsinformation
 Du kan endast anv�nda filer med monteringspunktflagga Du kan inte s�ka efter endast IPv4- och endast IPv6-uttag samtidigt Du kan inte anv�nda monterade och monteringspunktflaggorna samtidigt flagga f�r alla, -m,  kan inte anv�ndas med flaggan f�r tyst, -s. fuser (PSmisc) %s
 pstree (PSmisc) %s
 hoppar �ver delvis matchande process: %s(%d)
 