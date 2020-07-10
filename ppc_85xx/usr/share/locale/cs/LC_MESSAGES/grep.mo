��    1      �  C   ,      8  �  9  0  �  `    $   {    �  v  �     +     =     W  ,   q     �  %   �  ,   �  -         =  &   ^     �     �     �     �  E   �     4     E  �   Y  (   �       �   &  &   �     �     �     �            )   4  (   ^     �     �     �     �     �               *     C     [     u     �     �  +  �  �  �  4  �  A  �  �   "    �"  �  �#     >%     P%     l%  1   �%  #   �%  $   �%  1   &  2   5&  &   h&  %   �&     �&     �&     �&     '  E   '     d'     t'  �   �'  )   e(     �(  �   �(  -   �)     �)     �)     �)     �)     �)  -   *  -   <*     j*  4   �*      �*     �*  !   �*     +     $+     <+      Z+     {+     �+     �+     �+        ,          #                           /   %          -   	                (   +      )   
   '               1                 *   &          .              "                      $                                0      !            
Context control:
  -B, --before-context=NUM  print NUM lines of leading context
  -A, --after-context=NUM   print NUM lines of trailing context
  -C, --context=NUM         print NUM lines of output context
  -NUM                      same as --context=NUM
      --color, --colour     use markers to distinguish the matching string
  -U, --binary              do not strip CR characters at EOL (MSDOS)
  -u, --unix-byte-offsets   report offsets as if CRs were not there (MSDOS)

`egrep' means `grep -E'.  `fgrep' means `grep -F'.
With no FILE, or when FILE is -, read standard input.  If less than
two FILEs given, assume -h.  Exit status is 0 if match, 1 if no match,
and 2 if trouble.
 
Miscellaneous:
  -s, --no-messages         suppress error messages
  -v, --invert-match        select non-matching lines
  -V, --version             print version information and exit
      --help                display this help and exit
      --mmap                use memory-mapped input if possible
 
Output control:
  -m, --max-count=NUM       stop after NUM matches
  -b, --byte-offset         print the byte offset with output lines
  -n, --line-number         print line number with output lines
      --line-buffered       flush output on every line
  -H, --with-filename       print the filename for each match
  -h, --no-filename         suppress the prefixing filename on output
  -q, --quiet, --silent     suppress all normal output
      --binary-files=TYPE   assume that binary files are TYPE
                            TYPE is 'binary', 'text', or 'without-match'
  -a, --text                equivalent to --binary-files=text
  -I                        equivalent to --binary-files=without-match
  -d, --directories=ACTION  how to handle directories
                            ACTION is 'read', 'recurse', or 'skip'
  -R, -r, --recursive       equivalent to --directories=recurse
      --include=PATTERN     files that match PATTERN will be examine
      --exclude=PATTERN     files that match PATTERN will be skip.
      --exclude-from=FILE   files that match PATTERN in FILE will be skip.
  -L, --files-without-match only print FILE names containing no match
  -l, --files-with-matches  only print FILE names containing matches
  -c, --count               only print a count of matching lines per FILE
  -Z, --null                print 0 byte after FILE name
 
Report bugs to <bug-grep@gnu.org>.
   -E, --extended-regexp     PATTERN is an extended regular expression
  -F, --fixed-strings       PATTERN is a set of newline-separated strings
  -G, --basic-regexp        PATTERN is a basic regular expression
  -P, --perl-regexp         PATTERN is a Perl regular expression
   -e, --regexp=PATTERN      use PATTERN as a regular expression
  -f, --file=FILE           obtain PATTERN from FILE
  -i, --ignore-case         ignore case distinctions
  -w, --word-regexp         force PATTERN to match only whole words
  -x, --line-regexp         force PATTERN to match only whole lines
  -z, --null-data           a data line ends in 0 byte, not newline
 %s (GNU grep) %s
 %s: illegal option -- %c
 %s: invalid option -- %c
 %s: option `%c%s' doesn't allow an argument
 %s: option `%s' is ambiguous
 %s: option `%s' requires an argument
 %s: option `--%s' doesn't allow an argument
 %s: option `-W %s' doesn't allow an argument
 %s: option `-W %s' is ambiguous
 %s: option requires an argument -- %c
 %s: unrecognized option `%c%s'
 %s: unrecognized option `--%s'
 (standard input) Binary file %s matches
 Copyright 1988, 1992-1999, 2000, 2001 Free Software Foundation, Inc.
 Memory exhausted No syntax specified Search for PATTERN in each FILE or standard input.
Example: %s -i 'hello world' menu.h main.c

Regexp selection and interpretation:
 The -P and -z options cannot be combined The -P option is not supported This is free software; see the source for copying conditions. There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 Try `%s --help' for more information.
 Unbalanced ( Unbalanced ) Unbalanced [ Unfinished \ escape Unknown system error Usage: %s [OPTION]... PATTERN [FILE] ...
 Usage: %s [OPTION]... PATTERN [FILE]...
 conflicting matchers specified input is too large to count invalid context length argument invalid max count malformed repeat count memory exhausted out of memory recursive directory loop unfinished repeat count unknown binary-files type unknown directories method warning: %s: %s
 writing output Project-Id-Version: grep 2.5e
POT-Creation-Date: 2001-03-07 00:02-0500
PO-Revision-Date: 2001-08-04 12:01+02:00
Last-Translator: Vladimir Michl <Vladimir.Michl@seznam.cz>
Language-Team: Czech <cs@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
 
��zen� kontextu:
  -B, --before-context=PO�ET vyp��e PO�ET ��dk� p�ed vyhovuj�c�m
  -A, --after-context=PO�ET  vyp��e PO�ET ��dk� za vyhovuj�c�m
  -C, --context=[PO�ET]      vyp��e PO�ET (2) ��dk� kontextu (p�ed
                             i za vyhovuj�c�m). Je potla�eno p�ep�na�i -A a -B
  -PO�ET                     stejn� se zad�n�m --context=NUM
      --color, --colour      pou�ije barev k rozli�en� vyhovuj�c�ch �et�zc�
  -U, --binary               neodstra�uje znak CR na konci ��dku (MSDOS)
  -u, --unix-byte-offsets    vypisuje pozici jako by CR nebyly v souboru (MSDOS)

  Jestli�e nen� zad�n ��dn� z p�ep�na�� -[GEF], pak `egrep' pracuje jako
`grep -E', `fgrep' jako `grep -F' a `grep' jako `grep -G'. Jestli�e SOUBOR
nen� zad�n, nebo je -, je �ten standardn� vstup. Jestli�e jsou zad�ny
m�n� ne� dva SOUBORy, pak je implicitn� parametr -h.
  N�vratov� k�d je 0 p�i nalezen�, 1 nevyhovoval-li ��dn� ��dek a 2 p�i
syntaktick� nebo syst�mov� chyb�.
 
R�zn�:
  -s, --no-messages         potla�� chybov� zpr�vy
  -v, --invert-match        vyp��e ��dky, kter� VZORKu nevyhovuj�
  -V, --version             vyp��e ozna�en� verze a skon��
      --help                vyp��e tuto n�pov�du a skon��
      --mmap                kdy� to jde, namapuje vstup do pam�ti
 
��zen� v�stupu:
  -m, --max-count=��SLO     skon��, pokud najde ��SLO v�raz�
  -b, --byte-offset         s ka�d�m v�stupn�m ��dkem vyp��e jeho pozici
                            v souboru
  -n, --line-number         s ka�d�m v�stupn�m ��dkem vyp��e jeho ��slo ��dku
      --line-buffered       vypr�zdn� v�stup po ka�d�m ��dku
  -H, --with-filename       s ka�d�m v�stupn�m ��dkem vyp��e jm�no souboru
  -h, --no-filename         potla�� vypisov�n� jm�na souboru s v�st. ��dkem
  -q, --quiet, --silent     potla�� obvykl� v�stup
      --binary-files=TYP    definuje typ bin�rn�ch soubor�
                            TYP m��e b�t: 'binary', 'text' nebo 'without-match'
  -a, --text                jako --binary-files=text
  -I                        jako --binary-files=without-match
  -d, --directories=AKCE    jak zpracov�vat adres��e. AKCE m��e b�t:
                            `read', `recurse', `skip'
  -R, -r, --recursive       jako --directories=recurse
      --include=VZOREK      soubory kter� vyhovuj� vzorku, budou zpracov�ny
      --exclude=VZOREK      soubory kter� vyhovuj� vzorku, budou p�esko�eny
      --exclude-from=SOUBOR soubory kter� vyhovuj� vzork�m ze SOUBORu, budou
                            p�esko�eny
  -L, --files-without-match vyp��e pouze jm�na soubor�, ve kter�ch nebyl
                            VZOREK nalezen
  -l, --files-with-matches  vyp��e pouze jm�na soubor�, ve kter�ch byl VZOREK
                            nalezen
  -c, --count               vyp��e pouze po�et vyhovuj�c�ch ��dk� na SOUBOR
  -Z, --null                vyp��e nulov� bajt za jm�nem SOUBORu
 
  Chyby v programu oznamujte na adrese <bug-grep@gnu.org> (pouze
anglicky), p�ipom�nky k p�ekladu zas�lejte na adresu <cs@li.org> (�esky).
   -E, --extended-regexp     VZOREK je roz���en� regul�rn� v�raz
  -F, --fixed-strings       VZOREK je mno�ina �et�zc�, ka�d� na jednom ��dku
  -G, --basic-regexp        VZOREK je z�kladn� regul�rn� v�raz
  -P, --perl-regexp         VZOREK je regul�rn� v�raz Perlu
   -e, --regexp=VZOREK       pou�ije VZOREK jako regul�rn� v�raz
  -f, --file=SOUBOR         na�te VZOREK ze SOUBORu
  -i, --ignore-case         ignoruje rozd�l mezi velikost� p�smen
  -w, --word-regexp         VZOREK bude aplikov�n pouze na cel� slova
  -x, --line-regexp         VZOREK bude aplikov�n pouze na cel� ��dky
  -z, --null-data           ��dek kon�� nulov�m bajtem m�sto znaku nov�ho ��dku
 %s (GNU grep) %s
 %s: nezn�m� p�ep�na� -- %c
 %s: nezn�m� p�ep�na� -- %c
 %s: p�ep�na� `%c%s' mus� b�t zad�n bez argumentu
 %s: p�ep�na� `%s' nen� jednozna�n�
 %s: p�ep�na� `%s' vy�aduje argument
 %s: p�ep�na� `--%s' mus� b�t zad�n bez argumentu
 %s: p�ep�na� `-W %s' mus� b�t zad�n bez argumentu
 %s: p�ep�na� `-W %s' nen� jednozna�n�
 %s: p�ep�na� vy�aduje argument -- %c
 %s: nezn�m� p�ep�na� `%c%s'
 %s: nezn�m� p�ep�na� `--%s'
 (standardn� vstup) Bin�rn� soubor %s odpov�d�
 Copyright 1988, 1992-1999, 2000, 2001 Free Software Foundation, Inc.
 Pame� vy�erp�na Syntaxe nen� ur�ena   Hled� ��dky, jejich� n�kter� ��sti vyhovuj� VZORKu. ��dky jsou �teny postupn�
ze v�ech zadan�ch SOUBOR� nebo ze standardn�ho vstupu.
P��klad: %s -i 'hello world' menu.h main.c

V�b�r a interpretace regul�rn�ho v�razu:
 P�ep�na�e -P a -z nemohou b�t kombinov�ny P�ep�na� -P nen� podporov�n   Toto je voln� programov� vybaven�; podm�nky pro kop�rov�n� a roz�i�ov�n�
naleznete ve zdrojov�ch textech. Toto programov� vybaven� je zcela BEZ Z�RUKY,
a to i bez z�ruky PRODEJNOSTI nebo VHODNOSTI PRO N�JAK� KONKR�TN� ��EL.
 V�ce informac� z�sk�te p��kazem `%s --help'.
 Lich� po�et ( Lich� po�et ) Lich� po�et [ Za \ chyb� znak Nezn�m� syst�mov� chyba Pou�it�: %s [P�EP�NA�]... VZOREK [SOUBOR]...
 Pou�it�: %s [P�EP�NA�]... VZOREK [SOUBOR]...
 zad�ny koliduj�c� vzorky po�et vstupn�ch ��dk� nelze spo��tat (je jich hodn�) neplatn� argument d�lky kontextu neplatn� maxim�ln� po�et deformovan� z�pis po�tu opakov�n� pam� vy�erp�na nedostatek voln� pam�ti smy�ka pro rekurzivn� pr�chod neukon�en� z�pis po�tu opakov�n� nezn�m� typ bin�rn�ho souboru nezn�m� obsluha adres��� varov�n�: %s: %s
 zapisuje se v�stup 