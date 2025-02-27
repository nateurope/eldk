��       Q     �   m  ,      �   �  �   ,  �   5  	   7  ?   \  w   `  �   u  	5   l  	�   b  
   V  
{   Y  
�   ~  ,   �  �   �  ;   %  �          3     M   d  j     �     �     �          3   $  K     p     �     �     �     �   #  �     �               0     B     T     f   H  s     �     �     �   !       5     J   (  _     �   #  �     �   $  �        #  )   B  M   2  �     �      �     �        *  5   *  `     �     �     �   #  �   #  �   &       8   ,  W     �     �   -  �     �     �               *     @     N     g     �  v  �       ,     3  C   ;  w   e  �   [     q  u   }  �   d  e   W  �   c  "   �  �   �      �   &  �      �     �   ,     n  H     �     �   #  �          )   0  H      y   !  �     �     �   %  �   /     $  3     X      `     �     �     �     �   Y  �      8   ,   V      �   *   �      �      �   =  !   $  !E   4  !j   )  !�   0  !�     !�   (  "   Q  "B   4  "�     "�   "  "�      #     #"   *  #?   =  #j   *  #�     #�     #�   *  #�   *  $)   /  $T   %  $�   :  $�     $�     %   )  %     %@     %U     %o     %�     %�     %�     %�     %�   +  &	            $           D       Q       "          !   @   =   E       L   B      5          ?      4   3                .               N               ;           2   (   :       9   %           <   	   /       C       P   '   ,   K                 M                
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
 unexpected `,' unexpected `}' unknown command: `%c' unknown option to `s' unmatched `{' unterminated `s' command unterminated `y' command unterminated address regex Project-Id-Version: sed-4.1.1
POT-Creation-Date: 2004-11-11 15:28+0100
PO-Revision-Date: 2004-07-07 17:54+0300
Last-Translator: Pavel Maryanov <acid_jack@ukr.net>
Language-Team: Russian <ru@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=KOI8-R
Content-Transfer-Encoding: 8bit
Report-Msgid-Bugs-To: 
Plural-Forms: nplurals=2; plural=n>1;
X-Generator: KBabel 1.3
 
���� ����� -e, --expression, -f, ��� --file �� �������, ����� ������
�������������� �������� ������� ��� ������ sed ��� �������������. ���
���������� ��������� �������� ������� ������� ������; ���� �������
����� �� �������, ����� �������� ����������� ����.

       --help     ����� ���� ������� � �����
       --version  ����� ���������� � ������ � �����
   --posix
                 ���������� ���� ���������� GNU.
   -R, --regexp-perl
                 ������������� � ������� ���������� ���������� ��������� Perl 5.
   -e script, --expression=script
                 ���������� ������� � ����������� �������
   -f script-file, --file=script-file
                 ���������� ����������� �����-������� � ����������� �������
   -i[�������], --in-place[=�������]
                 �������������� ������ �� ����� (������� �����, ���� ������� ����������)
   -l N, --line-length=N
                 �������� �������� ����� ����������� ������ ��� ������� `l'
   -n, --quiet, --silent
                 ���������� ��������������� ������ �����������
   -r, --regexp-extended
                 ������������� � ������� ����������� ���������� ���������.
   -s, --separate
                 ���������, ��� ����� ���������, � �� � ���� ������
                 �������� ������������ ������.
   -u, --unbuffered
                 �������� ������������ ������ ������ �� ������� ������
                 � ����� ������ ����� �� ���� �������� �������
 %s
��� ��������� ����������� �����������; ������� ��� ����������� �������� �
�������� �������. �� ��������������� ������� ��������; ���� ��������
����������� ��� ������� ��� ������������ ��� ���������� ����, � ��� ����,
� ������� ��� ����� ���� �������� �����������������.
 %s: -e ��������� #%lu, ������ %lu: %s
 %s: ���������� ��������� %s: %s
 %s: ���� %s ������ %lu: %s
 `:' �� ��������� �������� �����-���� ������� ������ �� ������� ����������� �� ������: %s .
���������, ��� �������� ���-���� � ���� ``����:'' ����� ``%s''.
 GNU sed ������ %s
 ������������ �������� ������ ������������ ��� ��� ������ ������� ������������ ������ ��������� ������������ ���������� � \{\} ������������ �������������� ���������� ��������� ������������ ��������� ��������� ������������ ���������� ��������� ������ ��������� ��� ����������� ��� ����������� ����������� ��������� ��������������� ��������� ����������� ��������� ���������� ��������� ������� ������� ������� ����������� �������� ����� ����� �������� ������ ( or \( �������� ������ ) ��� \) �������� ������ [ ��� [^ �������� ������ \{ �������������: %s [�����]... {������-������-����-���-�������-�������} [�������-����]...

 ������� `e' �� �������������� `}' �� ��������� �������� �����-���� ������� ������� �� GNU sed ������ %s

 ���������� ����� ����� ��� �������� � `%s' ���������� ������� %s: %s ���������� ������������� %s: %s ���������� ������� ������������ � ������ ���������� ��������� ������� ���������� ������ ���� ����� ����������� �� ��������� �������� �����-���� ������� ���������� ������������� %s: ��� �������� ���������� ������������� %s: ��� �� ������� ���� ���������� ������� ���� %s: %s ���������� ������� ��������� ���� %s: %s ���������� �������� %d ������� � %s: %s ���������� �������� %d ��������� � %s: %s ������-����������� �� �������� ������������ �������� ������ � ����������� ��������� \ ����� `a', `c' ��� `i' ��������� ����� ����� ������ sed ������ ������� ����� ������� ������������ ������ \%d �� RHS ������� `s' ������������� +N ��� ~N � �������� ������� ������ ����������� ������������ ������������� ������ ������ 0 ����������� ������� ��������� �������� `!' ��������� ������������� `g' � �������� `s' ��������� ������������� `p' � �������� `s' ��������� �������� ������������� � �������� `s' ��� ����������� ����������� ��������� �������� ����������� ��� ������� `s' �� ����� ���� ������� ����� `e' �� �������������� ������ ������ %s: %s ������ ��� ������� `y' ����� ������ ����� super-sed ������ %s
 �������������� ������ `,' �������������� ������ `}' ����������� �������: `%c' ����������� ����������� � `s' �������� ������ `{' ������������� ������� `s' ������������� ������� `y' ������������� �������� ���������� ��������� 