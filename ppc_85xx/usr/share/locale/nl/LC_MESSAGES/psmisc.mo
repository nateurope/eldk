��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  �  �  &   	  6  0  /   g  �   �  �   !  !   �     �  5   �  
     "   '  &   J  9   q  +   �     �  &   �          ;  #   V      z  )   �  .   �  #   �  +     5   D  <   z      �  .   �                  >   -   Y      �   -   �   )   �      �   "   !  �   <!     "     3"     K"  �  i"  J   �&  *   I'    t'  �  y(  =   \+  "   �+  2   �+     �+     ,     #,  0   7,     	          
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
PO-Revision-Date: 2006-03-06 21:12+0100
Last-Translator: Benno Schulenberg <benno@nietvergeten.nl>
Language-Team: Dutch <vertaling@vrijschrift.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.1
 
%*s GEBRUIKER   PID TOEGANGSOPDRACHT
           killall -l, --list
          killall -V, --version

  -e,--exact          zeer lange namen moeten exact overeenkomen
  -g,--process-group  een procesgroep afbreken in plaats van een proces
  -i,--interactive    om bevestiging vragen alvorens af te breken
  -I,--ignore-case    verschil tussen hoofd- en kleine letters negeren
  -l,--list           lijst van bekende signalen tonen
  -q,--quiet          geen foutmeldingen geven
  -r,--regexp         NAAM is een uitgebreide reguliere expressie
  -s,--signal SIGNAAL dit signaal sturen in plaats van TERM
  -u,--user GEBRUIKER alleen proces(sen) van deze gebruiker afbreken
  -v,--verbose        melden of het signaal succesvol verstuurd is
  -V,--version        de programmaversie tonen
  -w,--wait           wachten tot processen ook werkelijk afgebroken zijn

     -Z      SELinux-veiligheidscontexten tonen
     PID     bij dit proces-ID beginnen; standaard is 1 (init)
    USER    alleen bomen tonen beginnend bij processen van deze gebruiker

   -Z,--context REGEXP alleen proces(sen) met deze context afbreken
                      (dient aan andere argumenten vooraf te gaan)
 %s is leeg -- niet aangekoppeld?
 %s: geen proces afgebroken
 %s: onbekend signaal; %s -l toont lijst van signalen
 (onbekend) Ongeldige reguliere expressie: %s
 Kan terminalcapaciteiten niet bepalen
 Onvoldoende geheugen om gevonden proces te verwerken: %s
 Kan apparaatnummer van socket niet vinden.
 Kan gebruiker %s niet vinden
 Kan uit processtatus geen UID bepalen
 Kan /etc/mtab niet openen: %s
 Kan /proc niet openen: %s
 Kan /proc/net/unix niet openen: %s
 Kan netwerk-socket niet openen.
 Kan protocolbestand '%s' niet openen: %s
 Kan lokale poort %s nergens toe herleiden: %s
 Kan status van %s niet bepalen: %s
 Kan status van bestand %s niet bepalen: %s
 Kan status van aankoppelingspunt %s niet bepalen: %s
 Copyright (C) 1993-2005 Werner Almesberger and Craig Small

 Kan proces %d niet afbreken: %s
 Interne fout: MAX_DEPTH is niet groot genoeg.
 Ongeldige naamsruimte Proces %s(%s%d) afbreken? (j/N)  Proces %d afbreken? (j/N)  Proces %s(%s%d) is afgebroken met signaal %d
 Het maximum aantal namen is %d
 De naamsruimte-optie -n vereist een argument. Geen naam van bestand of socket opgegeven Geen processen gevonden.
 Geen bestaande gebruikersnaam: %s
 PSmisc kent GEEN ENKELE GARANTIE.
Dit is vrije programmatuur en mag vrijelijk verspreid worden onder
de voorwaarden van de GNU General Public License.
Zie voor meer informatie hierover het bestand genaamd COPYING.
 Druk op Enter om af te sluiten
 TERM is niet ingesteld
 Onbekende lokale poort AF %d
 Gebruik:  fuser [-a|-s|-c] [-n RUIMTE] [-SIGNAAL] [ -kimuv ] NAAM...
                [ - ] [-n RUIMTE] [-SIGNAAL] [ -kimuv ] NAAM...
          fuser -l
          fuser -V

De processen tonen die gebruik maken van de genoemde bestanden,
sockets of bestandssystemen

    -a         de ongebruikte bestanden ook noemen
    -c         (hetzelfde als -m)
    -f         (genegeerd, herkend voor POSIX-compatibiliteit)
    -i         om bevestiging vragen (genegeerd zonder -k)
    -k         processen afbreken die het gegeven bestand gebruiken
    -l         lijst van beschikbare signalen tonen
    -m         processen tonen die het gegeven bestandssysteem gebruiken
    -n RUIMTE  in de gegeven naamsruimte ('file', 'udp', of 'tcp') zoeken
    -s         geen uitvoer produceren
    -SIGNAAL   dit signaal sturen in plaats van KILL (zie -l)
    -u         de gebruiker-IDs tonen
    -v         breedsprakige uitvoer produceren
    -V         de programmaversie tonen
    -4         alleen naar IPv4-sockets zoeken
    -6         alleen naar IPv6-sockets zoeken
    -          alle opties herinitialiseren 

  tcp/udp-namen: [lokale_poort][,[gindse_host][,[gindse_poort]]]

 Gebruik:  killall [-Z CONTEXT] [-u USER] [ -egiIqrvw ] [-SIGNAAL] NAAM...
 Gebruik:  killall [OPTIE]... [--] NAAM...
 Gebruik:  pidof [ -eg ] NAAM...
          pidof -V

    -e    zeer lange namen moeten exact overeenkomen
          (genegeerd als de commandoregel niet beschikbaar is)
    -g    procesgroeps-ID tonen in plaats van proces-ID
    -V    de programmaversie tonen

 Gebruik:  pstree [-a] [-c] [ -h | -H PID ] [-l] [-n] [-p] [-u]
                 [ -A | -G | -U ]  [ PID | USER ]
          pstree -V

Huidige processen tonen in een boomstructuur.

    -a      argumenten van de commandoregel tonen
    -A      ASCII-tekens gebruiken voor lijntjes
    -c      identieke subbomen niet compacteren
    -h      huidig proces en zijn voorouders accentueren
    -H PID  dit proces en diens voorouders accentueren
    -G      VT100-tekens gebruiken voor lijntjes
    -l      lange regels niet afkappen
    -n      uitvoer sorteren naar PID
    -p      PIDs tonen (dit impliceert -c)
    -u      UID-overgangen tonen
    -U      Unicode-tekens (UTF-8) gebruiken voor lijntjes
    -V      de programmaversie tonen
 Bij opties -c of -m mogen alleen bestandsnamen gegeven worden De opties -4 en -6 gaan niet samen Opties -c en -m mogen niet allebei gebruikt worden Opties -a en -s gaan niet samen fuser (PSmisc) %s
 pstree (PSmisc) %s
 overgeslagen: gedeeltelijke overeenkomst %s(%d)
 