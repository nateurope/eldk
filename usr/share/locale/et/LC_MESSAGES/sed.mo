��       Q     �   m  ,      �   �  �   ,  �   5  	   7  ?   \  w   `  �   u  	5   l  	�   b  
   V  
{   Y  
�   ~  ,   �  �   �  ;   %  �          3     M   d  j     �     �     �          3   $  K     p     �     �     �     �   #  �     �               0     B     T     f   H  s     �     �     �   !       5     J   (  _     �   #  �     �   $  �        #  )   B  M   2  �     �      �     �        *  5   *  `     �     �     �   #  �   #  �   &       8   ,  W     �     �   -  �     �     �               *     @     N     g     �  p  �   �     3  �   6     9  S   Y  �   T  �   l  <   m  �   P     S  h   a  �   T     �  s   �  �   $  �     �     �        Q       g     |     �     �     �     �     �     	           .     6     T     s     �     �     �     �     �   	  �   R  �     8     M     b   (  �     �     �   3  �          3   $  Q   -  v     �   !  �   a  �   )   B      l   #   �      �      �   (   �   ,  !      !0     !Q   
  !]     !h     !�     !�     !�   %  !�     "      "   $  "(     "M     "d     "q     "~     "�   
  "�     "�     "�     "�            $           D       Q       "          !   @   =   E       L   B      5          ?      4   3                .               N               ;           2   (   :       9   %           <   	   /       C       P   '   ,   K                 M                
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
PO-Revision-Date: 2004-07-09 16:33+0300
Last-Translator: Toomas Soome <Toomas.Soome@microlink.ee>
Language-Team: Estonian <et@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-15
Content-Transfer-Encoding: 8-bit
Report-Msgid-Bugs-To: 
Plural-Forms: nplurals=2; plural=(n != 1);
 
Kui v�tmeid -e, --expression, -f v�i --file ei kasutata, loetakse
esimene argument, mis pole v�ti, sed skriptiks. K�ik j�rgnevad argumendid on
sisendfailide nimed; kui sisendfaile ei antud, loetakse standardsisendit.

       --help     v�ljast see abiinfo ja l�peta t��
       --version  v�ljasta versiooniinfo ja l�peta t��
   --posix
                 blokeeri k�ik GNU laiendused.
   -R, --regexp-perl
                 kasuta skriptis Perl 5 regulaaravaldiste s�ntaksit.
   -e skript, --expression=skript
                 lisa t�idetavate k�skluste skript
   -f skripti-fail, --file=skripti-fail
                 lisa skripti-faili sisu t�idetavate k�skluste hulka
   -i[SUFIKS], --in-place[=SUFIKS]
                 toimeta faile (kui kasutati sifiksit, loob ka varukoopia)
   -l N, --line-length=N
                 m��ra `l' k�sule soovitatav rea pikkus
   -n, --quiet, --silent
                 keela mustriruumi automaatne v�ljastamine
   -r, --regexp-extended
                 kasuta skriptis laiendatud regulaaravaldiste s�ntaksit.
   -s, --separate
                 k�sitle faile �kshaaval, mitte �he j�tkuva voona.
   -u, --unbuffered
                 loe sisendfailist minimaalne kogus andmeid ja t�hjenda
                 v�ljundpuhvreid sagedamini
 %s
See on vaba tarkvara; kopeerimistingimused leiate l�htetekstidest. Garantii
PUUDUB; ka m��giks v�i mingil eesm�rgil kasutamiseks, vastavalt seadustega
lubatud piiridele.
 %s: -e avaldis #%lu, s�mbol %lu: %s
 %s: ei saa lugeda %s: %s
 %s: fail %s rida %lu: %s
 : ei vaja aadresse Postitage teated vigadest: %s .
Lisage kindlasti s�na ``%s'' ``Subject:'' reale.
 GNU sed versioon %s
 Vigane tagasi viide Vigane s�mbolite klassi nimi Vigane sortimise s�mbol Vigane \{\} sisu Vigane eelnev regulaaravaldis Vigane vahemiku l�pp Vigane regulaaravaldis M�lu on otsas Ei leia Eelmist regulaaravaldist pole Ootamatu regulaaravaldise l�pp Regulaaravaldis on liiga suur Edukas L�petav langkriips Puudub ( v�i \( Puudub ) v�i \) Puudub [ v�i [^ Puudub \{ Kasutamine: %s [v�ti]... {ainult-skript-kui-teisi-skripte-pole} [sisend-fail]...

 k�sku `e' ei toetata `}' ei vaja aadresse p�hineb GNU sed versioonil %s

 ei leia m�rgendit, et h�pata kohale `%s' %s ei saa eemaldada: %s %s ei saa �mber nimetada: %s muudatusi t�hjale regulaaravaldisele ei saa m��rata k�sk kasutab vaid �ht aadressi kommentaarid ei vaja aadresse %s ei saa toimetada: see on terminal %s ei saa toimetada: see ei ole tavaline fail faili %s ei saa avada: %s ajutist faili %s ei saa avada: %s %d elemendi faili %s kirjutamine eba�nnestus: %s %d elemendi faili %s kirjutamine eba�nnestus: %s eraldav s�bol ei ole �he-baidiline s�mbol viga alamprotsessis peale `a', `c' v�i `i' peab olema \ oodati sedi uuemat versiooni lisas�mbolid peale k�sku vigane viide \%d k�su `s' paremas pooles +N v�i ~N ei v�i kasutada esimese aadressina vigane rea aadressi 0 kasutamine k�sk puudub korduv `!' korduv `g' v�ti `s' k�sus korduv `p' v�ti `s' k�sus korduvad numbriv�tmed `s' k�sus eelmist regulaaravaldist pole numbriv�ti `s' k�sus ei v�i olla null v�tit `e' ei toetata lugemisviga %s: %s s�ned k�sus `y' on erineva pikkusega super-sed versioon %s
 ootamatu `,' ootamatu `}' tundmatu k�sk: `%c' tundmatu v�ti `s' k�sule liigne `{' l�petamata `s' k�sk l�petamata `y' k�sk l�petamata aadressi avaldis 