��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  �  �  @     �  O  R   0  �   �  �   z  1   b  -   �  [   �        7   1   ^   i   _   �   o   (!  M   �!  �   �!  3   �"  B   �"  8   �"  B   2#  U   u#  L   �#  0   $  =   I$  W   �$  :   �$  =   %  n   X%  &   �%  +   �%  5   &  0   P&  3   �&  B   �&  C   �&  7   <'  -   t'  �  �'  9   p)  4   �)  ]   �)  �  =*  p   71  ?   �1  �  �1  �  �3  t   �8  u   9  X   |9  Y   �9     /:     B:  K   V:     	          
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
PO-Revision-Date: 2006-03-07 11:49+0200
Last-Translator: Anton Zinoviev <zinoviev@debian.org>
Language-Team: Bulgarian <dict@fsa-bg.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
 
%*s ПОТРЕБИТЕЛ Пот№ ДОСТЪП КОМАНДА
        killall -l, --list
       killall -V, --version

  -e,--exact          изисква точно съвпадение при много дълги имена
  -I,--ignore-case    нечувствително към малки/големи букви сравнение с името
  -g,--process-group  убива групата на процеса вместо самия процес
  -i,--interactive    пита за потвърждение преди да убие
  -l,--list           извежда всички познати имена на сигнали
  -q,--quiet          да не протестира (например ако никой процес не е убит)
  -r,--regexp         използва ИМЕ като разширен регулярен израз
  -s,--signal СИГНАЛ  изпраща този сигнал вместо SIGTERM
  -u,--user ПОТРЕБ    убива само процес(и), изпълнявани от ПОТРЕБителя
  -v,--verbose        съобщава, ако успешно е изпратен сигнал
  -V,--version        извежда информация за версията
  -w,--wait           чака докато процесът умре
     -Z     показва контекста на сигурност за SELinux
     ПРОЦЕС    започва от този номер на процес; по подразбиране от 1 (init)
    ПОТРЕБ    показва само поддърветата, основани от този потребител

   -Z,--context РЕГИЗР убива само процес(и) от посочения контекст на сигурност
                      (трябва да предхожда останалите аргументи)
 %s е празна (не е монтирана?)
 %s: никой процес не е убит
 %s: непознат сигнал; %s -l извежда познатите сигнали.
 (неизвест) Неправилен регулярен израз: %s
 Не може да се определят възможностите на терминала
 Не може да се задели памет за съответстващ процес: %s
 Не може да бъде намерен номерът на устройството на гнездото.
 Не може да бъде намерен потребител с име %s
 Въз основа на състоянието на процеса не може да се установи потребителят собственик
 Не може да се отвори /etc/mtab: %s
 Каталогът /proc не може да се отвори: %s
 Не може да се отвори /proc/net/unix: %s
 Не може да се отвори мрежово гнездо.
 Не може да се отвори файлът за протокол „%s“: %s
 Не може да се определи локалният порт %s: %s
 Не може да се достигне %s: %s
 Файлът %s не може да се достигне: %s
 Не може да се достигне мястото на монтиране %s: %s
 Copyright © 1993-2005 Werner Almesberger и Craig Small

 Процесът %d не може да бъде убит: %s
 Вътрешна грешка: стойността на MAX_DEPTH не е достатъчно голяма.
 Неправилен вид имена Да се убие ли %s(%s%d) ? (д/Н)  Да се убие ли процесът %d? (д/Н)  %s(%s%d) се убива със сигнал %d
 Максималният брой имена е %d
 Опцията за вид име изисква аргумент. Не е зададена спецификация на процес Не е намерен нито един процес.
 Няма такъв потребител: %s
 PSmisc се разпространява без АБСОЛЮТНО НИКАКВИ ГАРАНЦИИ.
Това е свободен софтуер и вие може да го разпространявате свободно съгласно
условията на Основната общодостъпна лицензия на ГНУ.
За повече информация относно това, погледнете файловете с име COPYING.
 Натиснете Return, за да се завърши
 Не е зададена стойност на TERM
 Непознат вид адрес на локалния порт %d (unknown local port AF)
 Използване: fuser [ -a | -s | -c ] [ -n ВИДИМЕ ] [ -СИГНАЛ ] [ -kimuv ] ИМЕ...
                  [ - ] [ -n ВИДИМЕ ] [ -СИГНАЛ ] [ -kimuv ] ИМЕ...
            fuser -l
            fuser -V
Показва кои процеси използват посочените файлове, гнезда или файлови системи.

    -a        извежда също и неизползваните файлове
    -c        монтирана файлова система (същото като -m)
    -f        игнорира се (за съвместимост с POSIX)
    -i        пита преди да убие (без -k се игнорира)
    -k        убива процесите, използващи посочения файл
    -l        извежда достъпните имена на сигнали
    -m        показва всички процеси, използващи зададената файлова система
    -n ВИДИМЕ използва такъв вид имена (може да бъде file, udp или tcp)
    -s        „тих режим“ - не съобщава какво се прави
    -СИГНАЛ   изпраща този сигнал вместо SIGKILL
    -u        извежда собствениците на процесите
    -v        подробен изход
    -V        извежда информация за версията на fuser
    -4        търси само IPv4-гнезда
    -6        търси само IPv6-гнезда
    -         отменя всички опции

Имената от вид udp/tcp са: [локален_порт][,[отдалечен_хост][,[отдалечен_порт]]]

 Използване: killall [-Z КОНТЕКСТ] [-u ПОТРЕБ] [ -eIgiqrvw ] [ -СИГНАЛ ] ИМЕ...
 Използвване: killall [ОПЦИЯ]... [--] ИМЕ...
 Използване: pidof [ -eg ] ИМЕ...
            pidof -V

    -e      изисква точно съвпадение при много дълги имена;
            пропускане, ако командният ред не е достъпен
    -g      показва групата на процеса вместо собственика
    -V      извежда информация за версията

 Използване: pstree [ -a ] [ -c ] [ -h | -H ПРОЦЕС ] [ -l ] [ -n ] [ -p ] [ -u ]
                   [ -A | -G | -U ] [ ПРОЦЕС | ПОТРЕБ ]
            pstree -V
Извежда дървото на процесите.

    -a        извежда аргументите от командните редове
    -A        използва само ASCII-знаци за линиите
    -c        не свива идентичните поддървета
    -h        подчертава текущия процес и предшествениците му
    -H ПРОЦЕС подчертава този процес и предшествениците му
    -G        използва псевдографичните знаци на VT100
    -l        не отсича дългите редове
    -n        сортира изхода според номера на процеса
    -p        извежда номерата на процесите; влече -c
    -u        посочва промените на собственика
    -U        използва псевдографичните знаци на UTF-8 (Уникод)
    -V        извежда информация за версията на pstree
 При опцията за файлова система може да се посочват само файлове Не може да търсите само IPv4-гнезда и в същото време само IPv6-гнезда Не може да използвате едновременно опциите -m и -c опцията -a не може да се използва едновременно с -q fuser (PSmisc) %s
 pstree (PSmisc) %s
 пропуска се частичнотото съвпадение %s(%d)
 