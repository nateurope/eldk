��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  �  �  %     �  2  ,   �  �     o   �          "  0   <     m     v  -   �  /   �  '   �       $   6     [  "   x  !   �  "   �  $   �          %  #   D  0   h  ;   �  "   �  )   �     "     ;     S      m     �  "   �  "   �     �        �   "      !     !     3!  &  K!  N   r%  *   �%    �%  �  �&  1   |)  @   �)  =   �)  .   -*     \*     o*      �*     	          
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
PO-Revision-Date: 2006-03-07 12:01+0100
Last-Translator: Trond Endrest�l <Trond.Endrestol@fagskolen.gjovik.no>
Language-Team: Norwegian Bokmaal <i18n-nb@lister.ping.uio.no>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
%*s BRUKER      PID ACCESS KOMMANDO
        killall -l, --list
       killall -V, --version

  -e,--exact          krever n�yaktig treff for veldig lange navn
  -I,--ignore-case    ignorerer store/sm� bokstaver i prosessnavn
  -g,--process-group  drep prosessgrupper i stedet for prosesser
  -i,--interactive    sp�r om bekreftelse f�r dreping
  -l,--list           vis alle kjente signalnavn
  -q,--quiet          ikke syt dersom det ikke g�r bra
  -r,--regexp         tolk NAVN som et utvidet regul�rt uttrykk
  -s,--signal         send signal i stedet for SIGTERM
  -v,--verbose        rapporter dersom signalet ble vellykket sendt
  -V,--version        vis programinformasjon
  -w,--wait           vent til prosessen er d�d
     -Z     vis SELinux sikkerhetskontekster
     PID    begynn med angitt pid, standard er 1 (init)
    BRUKER bare vis tr�r med opphav fra prosesser tilh�rende denne brukeren
   -Z,--context REGEXP bare drep prosesser med kontekst
                      (m� komme foran andre argumenter)
 %s er tom (ikke montert?)
 %s: drepte ingen prosess
 %s: ukjent signal; %s -l angir kjente signaler.
 (ukjent) Ugyldig regul�rt uttrykk: %s
 Kan ikke finne ut egenskapene til terminalen
 Kan ikke allokere minne for funnet prosess: %s
 Kan ikke finne socketens enhetsnummer.
 Kan ikke finne brukeren %s
 Kan ikke finne UID fra prosesstatus
 Kan ikke �pne /etc/mtab: %s
 Kan ikke �pne /proc-katalogen: %s
 Kan ikke �pne /proc/net/unix: %s
 Kan ikke �pne en nettverkssocket.
 Kan ikke �pne protokollfil �%s�: %s
 Kan ikke l�se lokalport %s: %s
 Kan ikke kj�re stat p� %s: %s
 Kan ikke kj�re stat p� fila %s: %s
 Kan ikke kj�re stat p� monteringspunktet %s: %s
 Copyright (C) 1993-2005 Werner Almesberger og Craig Small

 Kunne ikke drepe prosessen %d: %s
 Intern feil: MAX_DEPTH er ikke stor nok.
 Ugyldig navn p� navnerom Drepe %s(%s%d) ? (j/n)  Drepe prosess %d ? (j/N)  Drepte %s(%s%d) med signalet %d
 Maksimalt antall navn er %d
 Navneromvalget krever et argument. Ingen prosesspesifikasjon ble gitt Fant ingen prosesser.
 Fant ikke brukeren �%s�.
 PSmisc kommer ABSOLUTT UTEN NOEN GARANTI.
Dette er fri programvare, og du har tillatelse til � redistribuere det
under betingelsene i GNU General Public License.
For mer informasjon om dette, les filene som heter COPYING.
 Trykk p� enter for � lukke.
 TERM er ikke angitt
 Ukjent lokalport AF %d
 Bruksm�te: fuser [ -a | -s | -c ] [ -n ROM ] [ -SIGNALl ] [ -kimuv ] NAVN ...
                 [ - ] [ -n ROM ] [ -SIGNAL ] [ -kimuv ] NAVN ...
           fuser -l
           fuser -V

Vise hvilke prosesser som bruker de angitte filene, socketer eller filsystemer.

    -a        ogs� vise ubrukte filer
    -c        monterte filsystemer
    -f        ignorert i det stille for POSIX-kompatibilitet
    -i        sp�r f�r dreping (ignorert uten -k)
    -k        drep prosesser som akserer den navngitte filen
    -l        vis liste over tilgjengelige signalnavn
    -m        vis alle prosesser som bruker de angitte monterte filesystemene
    -n ROM    s�k i det angitte navnerommet (file, udp, eller tcp)
    -s        stille utf�relse
    -SIGNAL   send dette signalet i stedet for SIGKILL
    -u        vis bruker-IDer
    -v        ordrik output
    -V        vis programversjon
    -4        s�k bare blant IPv4-socketer
    -6        s�k bare blant IPv6-socketer
    -         nullstill valgene

  udp/tcp-navn: [local_port][,[rmt_host][,[rmt_port]]]

 Bruksm�te: killall [-Z kontekst] [-u bruker] [ -egiqvw ] [ -signal ] navn ...
 Bruksm�te: killall [VALG]... [--] navn...
 Bruksm�te: pidof [ -eg ] navn ...
           pidof -V

    -e      krever n�yaktig treff for veldig lange navn;
            hopp over dersom kommandolinjen er utilgjengelig
    -g      vis prosessgruppe ID i stedet for prosess ID
    -V      vis programversjon

 Bruksm�te: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
                  [ -A | -G | -U ] [ PID | BRUKER ]
           pstree -V

Vis et prosesstre.

    -a     vis argumentene fra kommandolinjen
    -A     tegn linjer med ASCII-tegn
    -c     ikke komprimer identiske undertr�r
    -h     uthev n�v�rende prosess og dets opphav
    -H PID uthev prosessen �pid� og dets opphav
    -G     tegn linjer med VT100-tegn
    -l     ikke avkort lange linjer
    -n     sorter output etter PID
    -p     vis PIDs; medf�rer -c
    -u     vis uid-overganger
    -U     tegn linjer med UTF-8-tegn (Unicode)
    -V     vis programversjon
 Du kan bare bruke filer med monteringspunktvalget Du kan ikke s�ke etter bare IPv4- og bare IPv6-socketer samtidig Du kan ikke bruke montert- og monteringspunktvalgene samtidig alle valg kan ikke bli brukt med stillevalget. fuser (PSmisc) %s
 pstree (psmisc) %s
 hopper over delvis treff %s(%d)
 