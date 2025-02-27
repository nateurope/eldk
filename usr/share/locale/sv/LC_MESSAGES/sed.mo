��       Q     �   m  ,      �   �  �   ,  �   5  	   7  ?   \  w   `  �   u  	5   l  	�   b  
   V  
{   Y  
�   ~  ,   �  �   �  ;   %  �          3     M   d  j     �     �     �          3   $  K     p     �     �     �     �   #  �     �               0     B     T     f   H  s     �     �     �   !       5     J   (  _     �   #  �     �   $  �        #  )   B  M   2  �     �      �     �        *  5   *  `     �     �     �   #  �   #  �   &       8   ,  W     �     �   -  �     �     �               *     @     N     g     �  i  �   �     2  �   6  )   ;  `   ^  �   e  �   �  a   �  �   Y  y   Z  �   V  .   �  �   �    x  �   $       +     E     ]   �  {               ,     E     _   %  x     �     �     �     �      �   $  	     .     J     S     s     �     �     �   I  �            *      J   +   j      �      �   3   �   #   �   $  !#   &  !H   *  !o     !�   '  !�   O  !�   )  "0     "Z   &  "m      "�     "�   0  "�   3  #   "  #7     #Z   	  #j   $  #t   $  #�   &  #�      #�   2  $     $9     $P   +  $b     $�     $�     $�     $�     $�     $�     $�     %   &  %%            $           D       Q       "          !   @   =   E       L   B      5          ?      4   3                .               N               ;           2   (   :       9   %           <   	   /       C       P   '   ,   K                 M                
          #   6   +   0       1       7   F             H   *      -   >   J         O   8       &          I   )                 G      A 
If no -e, --expression, -f, or --file option is given, then the first
non-option argument is taken as the sed script to interpret.  All
remaining arguments are names of input files; if no input files are
specified, then the standard input is read.

       --help     display this help and exit
       --version  output version information and exit
   --posix
                 disable all GNU extensions.
   -R, --regexp-perl
                 use Perl 5's regular expressions syntax in the script.
   -e script, --expression=script
                 add the script to the commands to be executed
   -f script-file, --file=script-file
                 add the contents of script-file to the commands to be executed
   -i[SUFFIX], --in-place[=SUFFIX]
                 edit files in place (makes backup if extension supplied)
   -l N, --line-length=N
                 specify the desired line-wrap length for the `l' command
   -n, --quiet, --silent
                 suppress automatic printing of pattern space
   -r, --regexp-extended
                 use extended regular expressions in the script.
   -s, --separate
                 consider files as separate rather than as a single continuous
                 long stream.
   -u, --unbuffered
                 load minimal amounts of data from the input files and flush
                 the output buffers more often
 %s
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE,
to the extent permitted by law.
 %s: -e expression #%lu, char %lu: %s
 %s: can't read %s: %s
 %s: file %s line %lu: %s
 : doesn't want any addresses E-mail bug reports to: %s .
Be sure to include the word ``%s'' somewhere in the ``Subject:'' field.
 GNU sed version %s
 Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression Memory exhausted No match No previous regular expression Premature end of regular expression Regular expression too big Success Trailing backslash Unmatched ( or \( Unmatched ) or \) Unmatched [ or [^ Unmatched \{ Usage: %s [OPTION]... {script-only-if-no-other-script} [input-file]...

 `e' command not supported `}' doesn't want any addresses based on GNU sed version %s

 can't find label for jump to `%s' cannot remove %s: %s cannot rename %s: %s cannot specify modifiers on empty regexp command only uses one address comments don't accept any addresses couldn't edit %s: is a terminal couldn't edit %s: not a regular file couldn't open file %s: %s couldn't open temporary file %s: %s couldn't write %d item to %s: %s couldn't write %d items to %s: %s delimiter character is not a single-byte character error in subprocess expected \ after `a', `c' or `i' expected newer version of sed extra characters after command invalid reference \%d on `s' command's RHS invalid usage of +N or ~N as first address invalid usage of line address 0 missing command multiple `!'s multiple `g' options to `s' command multiple `p' options to `s' command multiple number options to `s' command no previous regular expression number option to `s' command may not be zero option `e' not supported read error on %s: %s strings for `y' command are different lengths super-sed version %s
 unexpected `,' unexpected `}' unknown command: `%c' unknown option to `s' unmatched `{' unterminated `s' command unterminated `y' command unterminated address regex Project-Id-Version: sed 4.1.1
POT-Creation-Date: 2004-11-11 15:28+0100
PO-Revision-Date: 2004-07-11 11:45+0200
Last-Translator: Christian Rose <menthos@menthos.com>
Language-Team: Swedish <sv@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
Report-Msgid-Bugs-To: 
Plural-Forms: nplurals=2; plural=(n != 1);
 
Om ingen av flaggorna -e, --expression, -f, eller --file ges, blir det
f�rsta argumentet som inte �r en flagga det sed-skript som tolkas. Alla
�terst�ende argument �r namn p� indatafiler. Om inga indatafiler �r angivna
l�ses standard in.

       --help     visa denna hj�lptext och avsluta
       --version  visa versionsinformation och avsluta
   --posix
                 inaktivera alla GNU-ut�kningar.
   -R, --regexp-perl
                 anv�nd Perl 5:s syntax f�r regulj�ra uttryck i skriptet.
   -e skript, --expression=skript
                 l�gg till skript till de kommandon som ska utf�ras
   -f skriptfil, --file=skriptfil
                 l�gg till inneh�llet i skriptfil till de kommandon som ska
                 utf�ras
   -i[�NDELSE], --in-place[=�NDELSE]
                 redigera filer p� plats (skapar s�kerhetskopia om �ndelse
                 tillhandah�lls)
   -l N, --line-length=N
                 ange �nskad radbrytningsl�ngd f�r "l"-kommandot
   -n, --quiet, --silent
                 f�rhindrar automatisk utskrift av m�nsterutrymme
   -r, --regexp-extended
                 anv�nd ut�kade regulj�ra uttryck i skriptet.
   -s, --separate
                 betrakta filer som separata ist�llet f�r som en
                 kontinuerlig l�ng datastr�m.
   -u, --unbuffered
                 l�s in minimala m�ngder data fr�n indatafilerna och t�m
                 utdatabufferterna oftare
 %s
(F�ljande text �r en informell �vers�ttning som enbart tillhandah�lls
 i informativt syfte. F�r alla juridiska tolkningar g�ller den engelska
 originaltexten.)
Det h�r �r fri programvara; se k�llkoden ang�ende villkor f�r kopiering.
Det finns INGEN garanti; inte ens f�r S�LJBARHET eller L�MPLIGHET F�R N�GOT
SPECIELLT �NDAM�L, i den omfattning som medges av g�llande lag.
 %s: -e uttryck #%lu, tecken %lu: %s
 %s: kan inte l�sa %s: %s
 %s: fil %s rad %lu: %s
 : vill inte ha n�gra adresser Rapportera fel till: %s .
Ange ordet "%s" p� n�got st�lle i "�rende:"-f�ltet.
Skicka anm�rkningar p� �vers�ttningen till <sv@li.org>.
 GNU sed version %s
 Ogiltig bak�treferens Ogiltigt teckenklassnamn Ogiltigt sorteringstecken Ogiltigt inneh�ll i \{\} Ogiltigt f�reg�ende regulj�rt uttryck Ogiltigt intervallslut Ogiltigt regulj�rt uttryck Minnet slut Ingen tr�ff Inget tidigare regulj�rt uttryck F�r tidigt slut p� regulj�rt uttryck Regulj�rt uttryck f�r stort Lyckades Eftersl�pande omv�nt snedstreck Obalanserad ( eller \( Obalanserad ) eller \) Obalanserad [ eller [^ Obalanserad \{ Anv�ndning: %s [FLAGGA]... {skript-endast-om-inga-andra} [indatafil]...

 kommandot "e" st�ds inte "}" vill inte ha n�gra adresser baserad p� GNU sed version %s

 kan inte hitta etiketten f�r hopp till "%s" kan inte ta bort %s: %s kan inte byta namn p� %s: %s kan inte ange modifierare p� tomt regulj�rt uttryck kommandot anv�nder endast en adress kommentarer accepterar inga adresser kunde inte redigera %s: �r en terminal kunde inte redigera %s: inte en vanlig fil kunde inte �ppna filen %s: %s kunde inte �ppna tempor�ra filen %s: %s kunde inte skriva %d objekt till %s: %s kunde inte skriva %d objekt till %s: %s avgr�nsningstecknet �r inte en ensam byte fel i underprocess \ f�rv�ntades efter "a", "c" eller "i" nyare version av sed f�rv�ntades extra tecken efter kommandot ogiltig referens \%d p� "s"-kommandots h�gersida ogiltig anv�ndning av +N eller ~N som f�rsta adress felaktig anv�ndning av radadress 0 kommando saknas flera "!" flera "g"-flaggor till "s"-kommandot flera "p"-flaggor till "s"-kommandot flera sifferflaggor till "s"-kommandot inget tidigare regulj�rt uttryck sifferflagga till kommandot "s" f�r inte vara noll flaggan "e" st�ds inte l�sfel vid %s: %s str�ngarna f�r kommandot "y" �r olika l�nga super-sed version %s
 ov�ntat "," ov�ntad "}" ok�nt kommando: "%c" flaggan ok�nd f�r "s" obalanserad "{" oavslutat "s"-kommando oavslutat "y"-kommando oavslutat regulj�rt uttryck f�r adress 