��    n      �  �   �      P	  !   Q	  3   s	  "   �	  )   �	  �   �	  �   }
     2  s   M  q   �  $   3     X  "   r     �  ,   �     �  %   �  ,      -   M      {  &   �     �     �     �       )   8  *   b     �     �     �     �  !   �     �       b        ~     �     �     �     �  5   �  7   0  �   h  z      �   �  �   �       [   ,  0   �  �  �  !   E     g  �   |  1   \  3   �  q   �     4     :     @  �   B     ;     X     o  
   �     �     �     �     �  !   �     �     �          2     M     k  P   ~  )   �  K   �     E     W     v  (   �  )   �  *   �          $  )   (  %   R  -   x  -   �      �  �   �     �  	  �  6   �     #  )  *     T     o  W   w  I  �  -   !  +   G!  q   s!  >   �!  L   $"  "   q"  -   �"  �   �"  $   �#  Z  �#     (%  1   E%  %   w%  U   �%  �   �%  �   }&     9'  u   S'  u   �'  %   ?(     e(  $   �(     �(  /   �(      �(  *   )  /   <)  2   l)  #   �)  *   �)     �)     *     #*     >*  .   Y*  /   �*     �*     �*     �*     �*     	+     (+     @+  m   N+     �+     �+     �+     ,  "   ,  :   ;,  8   v,  �   �,  s   n-  �   �-  }   �.     E/  W   W/  *   �/  �  �/     g1     �1  �   �1  6   �2  8   �2  j   3     n3     t3     |3  �   ~3     {4     �4     �4     �4     �4  #   �4     5     5      %5  %   F5  .   l5     �5     �5     �5     �5  8   �5     86  0   W6     �6     �6     �6  $   �6  &   �6  .   7     N7     k7  .   r7     �7  &   �7  &   �7     8  �   *8     �8    �8  @   :     T:  -  [:     �;     �;  r   �;  ?  <  1   Y=  0   �=  ]   �=  B   >  J   ]>  "   �>  -   �>  �   �>  "   �?     ]   l   i   /   N                  $      @   [   +              %      7      h      k   m       )   X   B   #   F           Y   8       A   Z      -   g                  *   J           a      L            D       G   M          C   _   0   9   '              ^   !   .   1   P   R      ,   5                :   <                  	      (       =   6       ;   d   W       I   `                f   V           "   K          n   E          O   ?   >                      S   \   4   3       Q   b   U   c   &       T   2              
      j       H   e        
	%s contain newline characters,  
	and %s contain characters with the high bit set.
 
	of which %s contain whitespace,  
Report bugs to <bug-findutils@gnu.org>.
 
default path is the current directory; default expression is -print
expression may consist of: operators, options, tests, and actions:
       -nouser -nogroup -path PATTERN -perm [+-]MODE -regex PATTERN
      -wholename PATTERN -size N[bcwkMG] -true -type [bcdpflsD] -uid N
      -used N -user NAME -xtype [bcdpfls]
 %s terminated by signal %d %s%s changed during execution of %s (old device number %ld, new device number %ld, filesystem type is %s) [ref %ld] %s%s changed during execution of %s (old inode number %ld, new inode number %ld, filesystem type is %s) [ref %ld] %s: exited with status 255; aborting %s: illegal option -- %c
 %s: invalid number for -%c option
 %s: invalid option -- %c
 %s: option `%c%s' doesn't allow an argument
 %s: option `%s' is ambiguous
 %s: option `%s' requires an argument
 %s: option `--%s' doesn't allow an argument
 %s: option `-W %s' doesn't allow an argument
 %s: option `-W %s' is ambiguous
 %s: option requires an argument -- %c
 %s: stopped by signal %d %s: terminated by signal %d %s: unrecognized option `%c%s'
 %s: unrecognized option `--%s'
 %s: value for -%c option should be < %ld
 %s: value for -%c option should be >= %ld
 ' < %s ... %s > ?  Cannot open input file `%s' Compression ratio %4.2f%%
 Database %s is in the %s format.
 Features enabled:  Filenames: %s  Filesystem loop detected; `%s' has the same device number and inode as a directory which is %d %s. GNU find version %s
 GNU findutils version %s
 GNU locate version %s
 GNU xargs version %s
 Locate database size: %s bytes
 Maximum length of command we could actually use: %ld
 Only one instance of {} is supported with -exec%s ... + Report (and track progress on fixing) bugs via the findutils bug-reporting
page at http://savannah.gnu.org/ or, if you have no web access, by sending
email to <bug-findutils@gnu.org>. Symbolic link `%s' is part of a loop in the directory hierarchy; we have already visited the directory to which it points. The current directory is included in the PATH environment variable, which is insecure in combination with the %s action of find.  Please remove the current directory from your $PATH (that is, remove "." or leading or trailing colons) The environment variable FIND_BLOCK_SIZE is not supported, the only thing that affects the block size is the POSIXLY_CORRECT environment variable Unknown system error Usage: %s [--version | --help]
or     %s most_common_bigrams < file-list > locate-database
 Usage: %s [-H] [-L] [-P] [path...] [expression]
 Usage: %s [-d path | --database=path] [-e | -E | --[non-]existing]
      [-i | --ignore-case] [-w | --wholename] [-b | --basename] 
      [--limit=N | -l N] [-S | --statistics] [-0 | --null] [-c | --count]
      [-P | -H | --nofollow] [-L | --follow] [-m | --mmap ] [ -s | --stdio ]
      [-A | --all] [-p | --print] [-r | --regex ] [--regextype=TYPE]
      [-version] [--help]
      pattern...
 Usage: %s [path...] [expression]
 Valid arguments are: WARNING: Hard link count is wrong for %s: this may be a bug in your filesystem driver.  Automatically turning on find's -noleaf option.  Earlier results may have failed to include directories that should have been searched. Warning: filesystem %s has recently been mounted. Warning: filesystem %s has recently been unmounted. You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem. ^[nN] ^[yY] ` actions: -delete -print0 -printf FORMAT -fprintf FILE FORMAT -print 
      -fprint0 FILE -fprint FILE -ls -fls FILE -prune -quit
      -exec COMMAND ; -exec COMMAND {} + -ok COMMAND ;
      -execdir COMMAND ; -execdir COMMAND {} + -okdir COMMAND ;
 ambiguous argument %s for %s argument line too long argument to --limit block size cannot fork cannot get current directory days double environment is too large for exec error waiting for %s error waiting for child process invalid -size type `%c' invalid argument %s for %s invalid argument `%s' to `%s' invalid expression invalid expression; I was expecting to find a ')' somewhere but did not see one. invalid expression; you have too many ')' invalid expression; you have used a binary operator with nothing before it. invalid mode `%s' invalid null argument to -size invalid predicate `%s' level higher in the filesystem hierarchy levels higher in the filesystem hierarchy locate database `%s' is corrupt or invalid missing argument to `%s' old oops -- invalid default insertion of and! oops -- invalid expression type (%d)! oops -- invalid expression type in mark_stat! oops -- invalid expression type in mark_type! oops -- invalid expression type! operators (decreasing precedence; -and is implicit where no others are given):
      ( EXPR )   ! EXPR   -not EXPR   EXPR1 -a EXPR2   EXPR1 -and EXPR2
      EXPR1 -o EXPR2   EXPR1 -or EXPR2   EXPR1 , EXPR2
 paths must precede expression positional options (always true): -daystart -follow -regextype

normal options (always true, specified before other expressions):
      -depth --help -maxdepth LEVELS -mindepth LEVELS -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 sanity check of the fnmatch() library function failed. single tests (N can be +N or -N or N): -amin N -anewer FILE -atime N -cmin N
      -cnewer FILE -ctime N -empty -false -fstype TYPE -gid N -group NAME
      -ilname PATTERN -iname PATTERN -inum N -iwholename PATTERN -iregex PATTERN
      -links N -lname PATTERN -mmin N -mtime N -name PATTERN -newer FILE unexpected extra predicate unknown unmatched %s quote; by default quotes are special to xargs unless you use the -0 option warning: Unix filenames usually don't contain slashes (though pathnames do).  That means that '%s %s' will probably evaluate to false all the time on this system.  You might find the '-wholename' test more useful, or perhaps '-samefile'.  Alternatively, if you are using GNU grep, you could use 'find ... -print0 | grep -FzZ %s'. warning: database `%s' is more than %d %s old warning: not following the symbolic link %s warning: the -d option is deprecated; please use -depth instead, because the latter is a POSIX-compliant feature. warning: the locate database can only be read from stdin once. warning: the predicate -ipath is deprecated; please use -iwholename instead. warning: unrecognized escape `\%c' warning: unrecognized format directive `%%%c' warning: you have specified the %s option after a non-option argument %s, but options are not positional (%s affects tests specified before it as well as those specified after it).  Please specify options before other arguments.
 with a cumulative length of %s bytes Project-Id-Version: findutils 4.2.24
Report-Msgid-Bugs-To: bug-findutils@gnu.org
POT-Creation-Date: 2006-08-19 19:53+0100
PO-Revision-Date: 2005-08-01 18:25+0200
Last-Translator: Ole Laursen <olau@hardworking.dk>
Language-Team: Danish <dansk@klid.dk>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
	%s indeholder linjeskift,  
	og %s indeholder tegn med den h�jeste bit sat.
 
	af hvilke %s indeholder mellemrum,  
Rapport�r fejl til <bug-findutils@gnu.org> (overs�ttelsesfejl til <dansk@klid.dk>).
 
hvis ikke andet angivet er stien det aktuelle katalog og udtrykket -print
udtryk kan best� af: operatorer, tilvalg, test og handlinger:
       -nouser -nogroup -path M�NSTER -perm [+-]RETTIGHEDER -regex M�NSTER
      -wholename M�NSTER -size N[bckwMG] -true -type [bcdpflsD] -uid N
      -used N -user NAVN -xtype [bcdpfls]
 %s afsluttet af signal %d %s%s �ndrede sig under k�rsel af %s (tidligere enhedsnummer %ld, nyt enhedsnummer %ld, filsystemtype er %s) [ref %ld] %s%s �ndrede sig under k�rsel af %s (tidligere inode-nummer %ld, nyt inode-nummer %ld, filsystemtype er %s) [ref %ld] %s: stoppede med status 255; afbryder %s: ugyldigt tilvalg - %c
 %s: ugyldig v�rdi til tilvalget -%c
 %s: ugyldigt tilvalg - %c
 %s: tilvalget '%c%s' m� ikke have en parameter
 %s: tilvalget '%s' er tvetydigt
 %s: tilvalget '%s' skal have en parameter
 %s: tilvalget '--%s' m� ikke have en parameter
 %s: tilvalget '-W %s' skal ikke have en parameter
 %s: tilvalget '-W %s' er tvetydigt
 %s: tilvalget skal have en parameter - %c
 %s: standset af signal %d %s: afsluttet af signal %d %s: ukendt tilvalg '%c%s'
 %s: ukendt tilvalg '--%s'
 %s: v�rdien for tilvalget -%c skal v�re < %ld
 %s: v�rdien for tilvalget -%c skal v�re >= %ld
 ' < %s ... %s > ?  Kan ikke �bne inddatafilen '%s' Komprimeringsforhold %4.2f%%
 Database %s er i formatet %s.
 Faciliteter aktiveret:  Filnavne: %s  Filsystemsl�kke fundet; '%s' har det samme enhedsnummer og indekseringsknude som et katalog hvilket er %d %s. GNU find version %s
 GNU findutils version %s
 GNU locate version %s
 GNU xargs version %s
 Locate-databasest�rrelse: %s byte
 Maksimal l�ngde af kommando der faktisk kunne bruges: %ld
 Kun en forekomst af {} er underst�ttet med -exec%s ... + Rapport�r (og f�lg fremgangen p�) fejl via findutils' fejlrapporteringsside
p� http://savannah.gnu.org/ eller, hvis du ikke kan tilg� denne, ved
at sende et brev til <bug-findutils@gnu.org>. Symbolsk k�de '%s' er del af en l�kke i kataloghierarkiet; det katalog som den peger p�, er allerede blevet bes�gt. Det aktuelle katalog er medtaget i milj�variablen PATH hvilket er usikkert n�r det kombineres med handlingen %s til find. Fjern venligst det aktuelle katalog fra din $PATH (dvs. fjern "." eller begyndende og afsluttende koloner) Milj�variablen FIND_BLOCK_SIZE er ikke underst�ttet, det eneste der p�virker blokst�rrelsen er milj�variablen POSIXLY_CORRECT Ukendt systemfejl Brug: %s [--version | --help]
eller %s mest-brugte-bigrammer < liste > locate-database
 Brug: %s [-H] [-L] [-P] [sti...] [udtryk]
 Brug: %s [-d STI | --database=STI] [-e | -E | --[non-]existing]
      [-i | --ignore-case] [-w | --wholename] [-b | --basename]
      [-l N | --limit=N] [-S | --statistics] [-0 | --null] [-c | --count]\n"
      [-P | -H | --nofollow] [-L | --follow] [-m | --mmap ] [ -s | --stdio ]\n"
      [-A | --all] [-p | --print] [-r | -regex] [--regextype=TYPE]
      [--version] [--help]
      M�NSTER...
 Brug: %s [sti...] [udtryk]
 Gyldige parametre er: ADVARSEL: Antallet af h�rde k�der for %s er forkert: dette kan v�re en fejl i styringsprogram til filsystemet. Sl�r automatisk find's tilvalg -noleaf til. Tidligere resultater kan have mislykket at medtage kataloger som skulle have v�ret gennems�gt. Advarsel: filsystemet %s er blevet monteret for nylig. Advarsel: filsystemet %s er blevet afmonteret for nylig. Det kan ikke bruge {} i programnavnet for -execdir og -okdir fordi der er et potentielt sikkerhedsproblem. ^[nN] ^[yYjJ] ' handlinger: -delete -print0 -printf FORMAT -fprint FIL FORMAT -print 
      -fprint0 FIL -fprint FIL -ls -fls FIL -prune -quit
      -exec KOMMANDO ; -exec KOMMANDO {} + -ok KOMMANDO ;
      -execdir KOMMANDO ; -execdir KOMMANDO {} + -okdir KOMMANDO ;
 tvetydig parameter %s til %s parameterlinje for lang parameter til --limit blokst�rrelse kan ikke fraspalte en ny proces kan ikke hente det aktuelle katalog dage dobbelt milj� for stort til at eksekvere fejl i forbindelse med at vente p� %s fejl i forbindelse med at vente p� afkomproces ugyldig -size type '%c' ugyldig parameter %s til %s ugyldig parameter '%s' til '%s' ugyldigt udtryk ugyldigt udtryk; ')' var forventet, men blev ikke fundet ugyldigt udtryk; for mange ')' ugyldigt udtryk; bin�r operator uden noget foran ugyldig tilstand '%s' ugyldig tom parameter til -size ugyldigt udsagn '%s' niveau h�jere i filsystemshierarkiet niveauer h�jere i filsystemshierarkiet locate-databasen '%s' er �delagt eller ugyldig manglende parameter til '%s' gammel ups - ugyldig automatisk inds�ttelse af 'and'! ups - ugyldig udtrykstype (%d)! ups - ugyldig udtrykstype i mark_stat! ups - ugyldig udtrykstype i mark_type! ups - ugyldig udtrykstype! operatorer (i aftagende prioritet, udeladelse medf�rer -and):
      ( UDTR )  ! UDTR  -not UDTR  UDTR1 -a UDTR2  UDTR1 -and UDTR2
      UDTR1 -o UDTR2  UDTR1 -or UDTR2  UDTR1 , UDTR2
 stier skal st� f�r udtrykket positionsafh�ngige tilvalg (altid sande): -daystart -follow -regextype

normale tilvalg (altid sande, angives f�r andre udtryk): -depth
      -depth --help -maxdepth NIVEAUER -mindepth NIVEAUER -mount -noleaf
      --version -xdev -ignore_readdir_race -noignore_readdir_race
 fornuftighedstjek af biblioteksfunktionen fnmatch() mislykkedes. enkelt test (N kan v�re +N eller -N eller N): -amin N -anewer FIL -atime N -cmin N
      -cnewer FIL -ctime N -empty -false -fstype TYPE -gid N -group NAVN
      -ilname M�NSTER -iname M�NSTER -inum N -iwholename M�NSTER -iregex M�NSTER
      -links N -lname M�NSTER -mmin N -mtime N -name M�NSTER -newer FIL uventet ekstra udsagn ukendt uafbalanceret citationstegn %s; som standard er citationstegn specielle for xargs medmindre du bruger tilvalget -0 advarsel: Unix-filnavne indeholder som regel ikke skr�streger (selvom stier g�r). Det betyder at '%s %s' sandsynligvis vil v�re falsk altid p� dette system. Muligvis vil testen '-wholename' eller m�ske '-samefile' v�re mere brugbar. Alternativt kan du hvis du bruger GNU grep, benytte 'find ... -print0 | grep -FzZ %s'. advarsel: databasen '%s' er mere end %d %s gammel advarsel: kunne ikke f�lge det symbolske link %s advarsel: tilvalget -d er for�ldet; benyt -depth i stedet som er i overenstemmelse med POSIX. advarsel: locate-databasen kan kun l�ses fra standard-ind en gang. advarsel: udsagnet -ipath er for�ldet; brug venligst -iwholename i stedet. advarsel: ukendt undvigetegn '\%c' advarsel: ukendt formatteringsdirektiv '%%%c' advarsel: du har angivet tilvalget %s efter parameteren %s som ikke er et tilvalg, men tilvalg er ikke positionsafh�ngige (tilvalget %s p�virker b�de test angivet f�r og efter det); angiv venligst tilvalg f�r andre parametre.
 men en kumulativ l�ngde p� %s byte 