��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  }  �  &   �  T  %  <   z  �   �  �   9  "   �     �  -     
   1     <  (   \  ;   �  .   �  "   �  (     !   <  &   ^  &   �  '   �  ,   �  +     !   -  '   O  4   w  :   �  #   �  +      "   7      Z      q      �      �   (   �      �      !  '   &!  �   N!  #   >"     b"  ,   v"  �  �"  S   u'  +   �'    �'  �  )  3   �+  =   ,  C   U,  9   �,     �,     �,  '   �,     	          
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
PO-Revision-Date: 2006-03-06 18:01+0100
Last-Translator: Jakub Bogusz <qboosh@pld-linux.org>
Language-Team: Polish <translation-team-pl@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
 
%*s U�YTKOWNIK  PID DOST�P POLECENIE
           killall -l, --list
          killall -V --version

  -e,--exact          wymaganie dok�adnego dopasowania dla bardzo d�ugich nazw
  -I,--ignore-case    dopasowywanie nazw proces�w niewra�liwe na wielko�� liter
  -g,--process-group  zabicie grupy proces�w zamiast procesu
  -i,--interactive    pytanie o potwierdzenie przed zabiciem
  -l,--list           wypisanie wszystkich znanych nazw sygna��w
  -q,--quiet          nie wy�wietlanie narzeka�
  -r,--regexp         u�ycie NAZWY jako rozszerzonego wyra�enia regularnego
  -s,--signal SYGNA�  wys�anie podanego sygna�u zamiast SIGTERM
  -u, --user U�YTK    zabicie tylko proces�w dzia�aj�cych jako podany u�ytkownik
  -v,--verbose        informowanie czy wys�anie sygna�u si� powiod�o
  -V,--version        wy�wietlenie informacji o wersji
  -w,--wait           zaczekanie na �mier� proces�w
     -Z     wy�wietlanie kontekst�w bezpiecze�stwa SELinuksa
     PID    rozpocz�cie od tego PID-u, domy�lnie 1 (init)
 U�YTKOWNIK  tylko drzewa zaczynaj�ce si� od proces�w tego u�ytkownika

   -Z,--context REGEXP zabicie tylko procesu(�w) maj�cych dany kontekst bezp.
                        (musi poprzedza� inne argumenty)
 %s jest pusty (nie podmontowany?)
 %s: nie zabito �adnego procesu
 %s: nieznany sygna�; %s -l wypisuje sygna�y.
 (nieznany) B��dne wyra�enie regularne: %s
 Nie mo�na odczyta� mo�liwo�ci terminala
 Nie mo�na przydzieli� pami�ci dla dopasowanego procesu: %s
 Nie mo�na odnale�� numeru urz�dzenia gniazda.
 Nie mo�na odnale�� u�ytkownika %s
 Nie mo�na pobra� UID-a ze stanu procesu
 Nie mo�na otworzy� /etc/mtab: %s
 Nie mo�na otworzy� katalogu /proc: %s
 Nie mo�na otworzy� /proc/net/unix: %s
 Nie mo�na otworzy� gniazda sieciowego.
 Nie mo�na otworzy� pliku protoko�u "%s": %s
 Nie mo�na rozwi�za� portu lokalnego %s: %s
 Nie mo�na wykona� stat na %s: %s
 Nie mo�na wykona� stat na pliku %s: %s
 Nie mo�na wykona� stat na punkcie montowania %s: %s
 Copyright (C) 1993-2005 Werner Almesberger i Craig Small

 Nie uda�o si� zabi� procesu %d: %s
 B��d wewn�trzny: MAX_DEPTH jest zbyt ma�e.
 Niepoprawna nazwa przestrzeni nazw Zabi� %s(%s%d)? (t/N)  Zabi� proces %d? (y/N)  Zabito %s(%s%d) sygna�em %d
 Maksymalna liczba nazw to %d
 Opcja przestrzeni nazw wymaga argumentu. Nie podano okre�lenia proces�w Nie znaleziono proces�w.
 Nie ma u�ytkownika o takiej nazwie: %s
 PSmisc jest rozpowszechniany BEZ �ADNEJ GWARANCJI.
To oprogramowanie jest darmowe i mo�e by� dystrybuowane na warunkach
Powszechnej Licencji Publicznej GNU (General Public License).
Wi�cej informacji znajduje si� w pliku o nazwie COPYING.
 Naci�ni�cie return zamknie program
 TERM nie ustawiony
 Nieznana rodzina adres�w portu lokalnego %d
 Sk�adnia: fuser [ -a | -s | -c ] [ -n PRZESTRZE� ] [ -SYGNA� ] [ -kimuv ] NAZWA...
                [ - ] [ -n PRZESTRZE� ] [ -SYGNA� ] [ -kimuv ] NAZWA...
          fuser -l
          fuser -V
Pokazywanie, kt�re procesy u�ywaj� plik�w, gniazd lub system�w plik�w
o podanych nazwach.

    -a             wy�wietlenie tak�e nie u�ywanych plik�w
    -c             podmontowany system plik�w
    -f             po cichu ignorowane (dla kompatybilno�ci z POSIX)
    -i             pytanie przed zabiciem (ignorowane bez -k)
    -k             zabicie proces�w u�ywaj�cych podanego pliku
    -l             lista nazw sygna��w
    -m             pokazanie proces�w u�ywaj�cych podanych system�w plik�w
    -n PRZESTRZE�  szukanie w podanej przestrzeni nazw (file, udp lub tcp)
    -s             dzia�anie po cichu
    -SYGNA�        wys�anie podanego sygna�u zamiast SIGKILL
    -u             wy�wietlenie identyfikator�w u�ytkownik�w
    -v             podanie wi�kszej ilo�ci informacji
    -V             wy�wietlenie informacji o wersji
    -4             szukanie tylko gniazd IPv4
    -6             szukanie tylko gniazd IPv6
    -              wyzerowanie opcji

  nazwy tcp/udp: [port_lokalny][,[zdalny_host][,[port_zdalny]]]

 Sk�adnia: killall [-Z KONTEKST] [-u U�YTKOWNIK] [ -eIgiqrvw ] [ -SYGNA� ] NAZWA...
 Sk�adnia: killall [OPCJE]... [--] NAZWA...
 Sk�adnia: pidof [ -eg ] NAZWA...
          pidof -V

    -e    wymaganie dok�adnego dopasowania dla bardzo d�ugich nazw;
            pomijane je�li linia polece� nie jest dost�pna
    -g    wy�wietlanie ID grup proces�w zamiast ID proces�w
    -V    wy�wietlenie informacji o wersji

 Sk�adnia: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
                 [ -A | -G | -U ] [ PID | U�YTKOWNIK ]
          pstree -V
Wy�wietlanie drzewa proces�w.

    -a     wy�wietlenie argument�w linii polece�
    -A     u�ycie znak�w ramek ASCII
    -c     nie scalanie identycznych poddrzew
    -h     pod�wietlenie bie��cego procesu i jego przodk�w
    -H PID pod�wietlenie podanego procesu i jego przodk�w
    -G     u�ycie znak�w ramek VT100
    -l     nie obcinanie d�ugich linii
    -n     sortowanie wyj�cia wg PID-u
    -p     wy�wietlanie PID-�w; w��cza tak�e -c
    -u     wy�wietlanie zmian uid�w
    -U     u�ycie znak�w ramek UTF-8 (Unicode)
    -V     wy�wietlenie informacji o wersji
 Z opcj� punktu montowania mo�na u�ywa� tylko plik�w Nie mo�na naraz szuka� gniazd wy��cznie IPv4 i wy��cznie IPv6 Nie mo�na u�y� jednocze�nie flag podmontowanego i punktu montowania opcja wszystkich plik�w nie mo�e by� u�yta z opcj� ciszy. fuser (PSmisc) %s
 pstree (PSmisc) %s
 pomini�to cz�ciowe dopasowanie %s(%d)
 