��       Q     �   m  ,      �   �  �   ,  �   5  	   7  ?   \  w   `  �   u  	5   l  	�   b  
   V  
{   Y  
�   ~  ,   �  �   �  ;   %  �          3     M   d  j     �     �     �          3   $  K     p     �     �     �     �   #  �     �               0     B     T     f   H  s     �     �     �   !       5     J   (  _     �   #  �     �   $  �        #  )   B  M   2  �     �      �     �        *  5   *  `     �     �     �   #  �   #  �   &       8   ,  W     �     �   -  �     �     �               *     @     N     g     �  �  �  Y  X   8  �   8  �   C  $   e  h   e  �   �  4   �  �   c  q   d  �   ]  :   �  �   �     �  �   $  w     �     �     �   e  �     W      j     �     �     �   /  �        !  3     U     g   '  x   )  �   "  �     �     �            '      C      _   S   u       �      �      !   ,  !(     !U     !m   C  !�   $  !�   (  !�   +  "   1  "J     "|   ,  "�   y  "�   5  #C     #y   &  #�   &  #�     #�   ;  #�   5  $3   #  $i     $�     $�   '  $�   '  $�   ,  %   '  %1   3  %Y     %�     %�   .  %�     %�     &     &     &2      &K     &l     &�     &�   )  &�            $           D       Q       "          !   @   =   E       L   B      5          ?      4   3                .               N               ;           2   (   :       9   %           <   	   /       C       P   '   ,   K                 M                
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
PO-Revision-Date: 2004-07-08 19:58+0200
Last-Translator: Wojciech Polak <polak@gnu.org>
Language-Team: Polish <translation-team-pl@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-2
Content-Transfer-Encoding: 8bit
Report-Msgid-Bugs-To: 
Plural-Forms: nplurals=3; plural=(n==1 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2);
 
Je�eli nie zostan� podane opcje -e, --expression, -f, lub --file,
to wtedy pierwszy argument, kt�ry nie jest opcj� linii polece� sed,
zostanie wzi�ty jako skrypt sed do przetworzenia. Wszystkie pozosta�e
argumenty s� nazwami plik�w wej�ciowych; je�eli nie zostan� podane
�adne pliki wej�ciowe, to wtedy odczytane zostanie standardowe wej�cie.

       --help     wy�wietla t� oto pomoc i ko�czy prac�.
       --version  wy�wietla numer wersji i ko�czy prac�.
       --posix
                 wy��cza wszystkie rozszerzenia GNU.
   -R, --regexp-perl
                 u�ywa w skrypcie wyra�enia regularne zgodne ze sk�adni� Perl 5.
   -e skrypt, --expression=skrypt
                 dodaje skrypt do polece�, kt�re maj� by� wykonane.
   -f plik-skryptowy, --file=plik-skryptowy
                 dodaje zawarto�� pliku skryptowego do polece�,
                 kt�re maj� by� wykonane.
   -i[rozszerzenie], --in-place[=rozszerzenie]
                 edytuje pliki "w miejscu" (tworzy kopie zapasowe
                 je�eli zosta�o podane rozszerzenie).
   -l N, --line-length=N
                 ustala po��dan� d�ugo�� �amanych linii dla polecenia `l'.
   -n, --quiet, --silent
                 powstrzymuje automatyczne drukowanie przetwarzanych linii.
   -r, --regexp-extended
                 u�ywa w skrypcie rozszerzonych wyra�e� regularnych.
   -s, --separate
                 traktuje pliki jako oddzielne, a nie jako pojedynczy,
                 d�ugi i ci�g�y strumie�.
   -u, --unbuffered
                 �aduje minimaln� ilo�� danych z plik�w wej�ciowych
                 i cz�ciej oczyszcza bufor wyj�ciowy.
 %s
Niniejszy program jest wolnym oprogramowaniem; warunki kopiowania s� opisane
w �r�d�ach. Autorzy nie daj� �ADNYCH gwarancji, w tym r�wnie� gwarancji
PRZYDATNO�CI DO SPRZEDA�Y LUB DO KONKRETNYCH CEL�W.
 %s: -e wyra�enie #%lu, znak %lu: %s
 %s: nie mo�na odczyta� %s: %s
 %s: plik %s linia %lu: %s
 : nie chce �adnych adres�w Ewentualne b��dy prosimy zg�asza� na adres: %s
W tym celu prosz� doda� s�owo ``%s'' do tematu listu.
 GNU sed wersja %s
 Nieprawid�owe odwo�anie wsteczne Nieprawid�owa nazwa klasy znaku Nieprawid�owy znak por�wnania Nieprawid�owa zawarto�� \{\} Nieprawid�owe poprzedzaj�ce wyra�enie regularne Nieprawid�owy koniec zakresu Nieprawid�owe wyra�enie regularne Pami�� wyczerpana Brak dopasowania Brak poprzedniego wyra�enia regularnego Przedwczesny koniec wyra�enia regularnego Wyra�enie regularne jest zbyt du�e Sukces Ko�cowy znak backslash Niedopasowany znak ( lub \( Niedopasowany znak ) lub \) Niedopasowany znak [ lub [^ Niedopasowany znak \{ U�ycie: %s [OPCJE] {skrypt-tylko-wtedy-gdy-�aden-inny-skrypt} [plik-wej�ciowy]...

 polecenie `e' nie jest wspierane `}' nie chce �adnych adres�w na podstawie wersji GNU sed %s

 nie mo�na znale�� etykiety dla skoku do `%s' nie mo�na usun�� %s: %s nie mo�na zmieni� nazwy %s: %s nie mo�na wyszczeg�lni� modyfikator�w w pustym wyra�eniu regularnym polecenie u�ywa tylko jednego adresu komentarze nie akceptuj� �adnych adres�w nie mo�na edytowa� %s: plik jest terminalem nie mo�na edytowa� %s: to nie jest regularny plik nie mo�na otworzy� pliku %s: %s nie mo�na otworzy� tymczasowego pliku %s: %s nie mo�na zapisa� %d elementu do %s: %s nie mo�na zapisa� %d element�w do %s: %s nie mo�na zapisa� %d element�w do %s: %s znak ogranicznika nie jest pojedynczym znakiem-bajtem b��d w podprocesie oczekiwano znaku \ po `a', `c' lub `i' oczekiwano nowszej wersji programu sed dodatkowe znaki po poleceniu nieprawid�owe odwo�anie \%d po prawej stronie polecenia `s' nieprawid�owe u�ycie +N lub ~N jako pierwszego adresu nieprawid�owe u�ycie adresu linii 0 brakuje polecenia wielokrotny znak `!' wielokrotne opcje `g' dla polecenia `s' wielokrotne opcje `p' dla polecenia `s' wielokrotne opcje liczbowe dla polecenia `s' brak poprzedniego wyra�enia regularnego opcja liczbowa dla polecenia `s' nie mo�e by� zerem opcja `e' nie jest wspierana b��d odczytu w %s: %s �a�cuchy dla polecenia `y' s� r�nych d�ugo�ci super-sed wersja %s
 nieoczekiwany znak `,' nieoczekiwany znak `}' nieznane polecenie: `%c' nieznana opcja dla polecenia `s' niedopasowany znak `{' niezako�czone polecenie `s' niezako�czone polecenie `y' niezako�czony adres wyra�enia regularnego 