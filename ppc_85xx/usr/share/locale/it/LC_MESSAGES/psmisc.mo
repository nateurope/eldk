��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  `  �  %   �  6    2   >  �   q  t   �     o     �  =   �     �  $   �  3     @   O  9   �      �  4   �  !      *   B  &   m  &   �  2   �  -   �        &   =  -   d  :   �  )   �  4   �     ,      H       c   "   �       �   ,   �   #   �      !  "   3!  �   V!     *"     F"     ]"  0  }"  J   �&  '   �&  !  !'  �  C(  1   -+  I   _+  6   �+  4   �+     ,     (,  (   <,     	          
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
PO-Revision-Date: 2006-03-13 14:16+0000
Last-Translator: Marco Colombo <m.colombo@ed.ac.uk>
Language-Team: Italian <tp@lists.linux.it>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
 
%*s UTENTE      PID ACCESSO COMANDO
      killall -l, --list
     killall -V --version

  -e,--exact          richiede una corrispondenza esatta per i nomi molto lunghi
  -I,--ignore-case    ignora maiuscole/minuscole nei nomi
  -g,--process-group  termina il gruppo di processi invece del processo
  -i,--interactive    chiede conferma prima di terminare
  -l,--list           elenca i nomi di segnale conosciuti
  -q,--quiet          opera silenziosamente
  -r,--regexp         interpreta NOME come un'espressione regolare estesa
  -s,--signal SEGNALE invia il segnale indicato invece di SIGTERM
  -u,--user UTENTE    termina solo i processi eseguiti dall'UTENTE
  -v,--verbose        riporta se il segnale è stato inviato con successo
  -V,--version        mostra le informazioni sulla versione
  -w,--wait           aspetta la terminazione del processo

     -Z     mostra i contesti di sicurezza SELinux
     PID       comincia dal pid indicato, predefinito 1 (init)
    UTENTE    mostra solo gli alberi con radice nei processi dell'utente

   -Z,--context REGEXP termina solo i processi aventi context
                      (deve precedere altri argomenti)
 %s è vuoto (non montato?)
 %s: nessun processo terminato
 %s: segnale sconosciuto; usare %s -l per elencare i segnali.
 (sconosciuto) Espressione regolare non valida: %s
 Impossibile determinare le capacità del terminale
 Impossibile allocare memoria per il processo corrispondente: %s
 Impossibile trovare il numero di dispositivo del socket.
 Impossibile trovare l'utente %s
 Impossibile ottenere l'UID dallo stato del processo
 Impossibile aprire /etc/mtab: %s
 Impossibile aprire la directory /proc: %s
 Impossibile aprire /proc/net/unix: %s
 Impossibile aprire un socket di rete.
 Impossibile aprire il file di protocollo "%s": %s
 Impossibile risolvere la porta locale %s: %s
 Impossibile fare stat di %s: %s
 Impossibile fare stat del file %s: %s
 Impossibile fare stat del mount point %s: %s
 Copyright (C) 1993-2005 Werner Almesberger e Craig Small

 Impossibile terminare il processo %d: %s
 Errore interno: MAX_DEPTH non è abbastanza grande.
 Nome di contesto non valido Terminare %s(%s%d)? (y/N)  Terminare il processo %d? (y/N)  Terminato %s(%s%d) con segnale %d
 Il massimo numero di nomi è %d
 L'opzione di contesto richiede un argomento. Nessun tipo di processo specificato Nessun processo trovato.
 Questo nome utente non esiste: %s
 PSmisc è distribuito senza ALCUNA GARANZIA.
Questo è software libero, ed è possibile redistribuirlo secondo i termini
della GNU General Public License.
Si consulti il file COPYING per ulteriori informazioni.
 Premere Invio per chiudere
 TERM non è impostato
 Porta locale AF %d sconosciuta
 Uso: fuser [ -a | -s | -c ] [ -n CONTESTO ] [ -SEGNALE ] [ -kimuv ] NOME...
           [ - ] [ -n CONTESTO] [ -SEGNALE ] [ -kimuv ] NOME...
     fuser -l
     fuser -V
Mostra quali processi stanno usando un certo file, socket o filesystem.

    -a        mostra anche i file inutilizzati
    -c        file system montati
    -f        ignorata (per compatibilità POSIX)
    -i        conferma prima di terminare (ignorato senza -k)
    -k        termina tutti i processi che accedono al file specificato
    -l        elenca i nomi dei segnali
    -m        mostra tutti i processi che usano il filesystem specificato
    -n CONTESTO  cerca nel contesto specificato (file, udp, o tcp)
    -s        opera silenziosamente
    -SEGNALE  invia il segnale indicato invece di SIGKILL
    -u        mostra i nomi utente
    -v        output prolisso
    -V        mostra le informazioni sulla versione
    -4        cerca solo socket IPv4
    -6        cerca solo socket IPv6
    -         riazzera le opzioni

  nomi udp/tcp: [porta locale][,[host remoto][,[porta remota]]]

 Uso: killall [-Z CONTESTO] [-u UTENTE] [ -eIgiqrvw ] [ -SEGNALE ] NOME...
 Uso: killall [OPZIONE]... [--] NOME...
 Uso: pidof [ -eg ] NOME...
     pidof -V

    -e      richiede una corrispondenza esatta per i nomi molto lunghi;
            ignora se la riga di comando non è disponibile
    -g      mostra l'ID del gruppo invece che l'ID del processo
    -V      mostra le informazioni sulla versione

 Uso: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
            [ -A | -G | -U ] [ PID | UTENTE]
     pstree -V
Mostra l'albero dei processi.

    -a        mostra gli argomenti della riga di comando
    -A        usa caratteri grafici ASCII
    -c        non comprime i sottoalberi identici
    -h        evidenzia il processo corrente e i suoi antenati
    -H PID    evidenzia il processo PID e i suoi antenati
    -G        usa caratteri grafici VT100
    -l        non tronca le righe lunghe
    -n        ordina l'output in base al PID
    -p        mostra i PID; implica -c
    -u        mostra le transizioni di uid
    -U        usa caratteri grafici UTF-8 (Unicode)
    -V        mostra le informazioni sulla versione
 Con l'opzione -m si possono specificare solo file Impossibile cercare solo socket IPv4 e solo socket IPv6 allo stesso tempo Impossibile usare le opzioni -c e -m allo stesso tempo L'opzione -a non può essere usata con l'opzione -s. fuser (PSmisc) %s
 pstree (PSmisc) %s
 ignorata corrispondenza parziale %s(%d)
 