��          �   %   �      `  �  a  �  4  !   �  !   �  /     =   6  2   t  $   �     �  %   �  *     +   6  .   b     �     �     �     �  "   �     	     3	  3   A	    u	     �
     �
     �
     �
  3  �
  �  !  �    )   �  $   �  9     I   Q  :   �  '   �     �       )   =  .   g  3   �     �  "   �          *  +   C     o     �  9   �  +  �  "   �  #   !     E     a                                                                                                   	               
            -n, --name=name         get the named extended attribute value
  -d, --dump              get all extended attribute values
  -e, --encoding=...      encode values (as 'text', 'hex' or 'base64')
      --match=pattern     only get attributes with names matching pattern
      --only-values       print the bare values only
  -h, --no-dereference    do not dereference symbolic links
      --absolute-names    don't strip leading '/' in pathnames
  -R, --recursive         recurse into subdirectories
  -L, --logical           logical walk, follow symbolic links
  -P  --physical          physical walk, do not follow symbolic links
      --version           print version and exit
      --help              this help text
   -n, --name=name         set the value of the named extended attribute
  -x, --remove=name       remove the named extended attribute
  -v, --value=value       use value as the attribute value
  -h, --no-dereference    do not dereference symbolic links
      --restore=file      restore extended attributes
      --version           print version and exit
      --help              this help text
 %s %s -- get extended attributes
 %s %s -- set extended attributes
 %s: %s: No filename found in line %d, aborting
 %s: No filename found in line %d of standard input, aborting
 %s: Removing leading '/' from absolute path names
 %s: invalid regular expression "%s"
 -V only allowed with -s
 A filename to operate on is required
 At least one of -s, -g, or -r is required
 Attribute "%s" had a %d byte value for %s:
 Attribute "%s" set to a %d byte value for %s:
 Could not get "%s" for %s
 Could not remove "%s" for %s
 Could not set "%s" for %s
 No such attribute Only one of -s, -g, or -r allowed
 Unrecognized option: %c
 Usage: %s %s
 Usage: %s %s
Try `%s --help' for more information.
 Usage: %s [-LRSq] -s attrname [-V attrvalue] pathname  # set value
       %s [-LRSq] -g attrname pathname                 # get value
       %s [-LRSq] -r attrname pathname                 # remove attr
      -s reads a value from stdin and -g writes a value to stdout
 getting attribute %s of %s listing attributes of %s setting attribute %s for %s setting attributes for %s Project-Id-Version: attr 2.4.16-1
POT-Creation-Date: 
PO-Revision-Date: 2004-09-17 14:55+0100
Last-Translator: Luk Claes <luk.claes@ugent.be>
Language-Team: Debian l10n Dutch <debian-l10n-dutch@lists.debian.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
   -n, --name=naam       verkrijg de uitgebreide attribuutwaarde voor naam
  -d, --dump            verkrijg alle uitgebreide attribuutwaarden
  -e, --encoding=...    codeer waarden (als 'text', 'hex' of 'base64')
      --match=patroon   verkrijg enkel attributen met namen die overeenkomen met het patroon
      --only-values     print enkel de waarden
  -h, --no-dereference  zoek niet de verwijzing van symbolische koppelingen
      --absolute-names  laat de leidende '/' in padnamen staan
  -R, --recursive       ga recursief in submappen
  -L, --logical         logisch, volg symbolische koppelingen
  -P  --physical        fysisch, volg geen symbolische koppelingen
      --version         print versie en sluit af
      --help            deze helptekst
   -n, --name=naam       zet de waarde van het genoemde uitgebreide attribuut
  -x, --remove=naam     verwijder het genoemde uitgebreide attribuut
  -v, --value=waarde    gebruik waarde als de attribuutwaarde
  -h, --no-dereference  zoek niet naar verwijzingen van symbolische koppelingen
      --restore=bestand herstel uitgebreide attributen
      --version         print versie en sluit af
      --help            deze helptekst
 %s %s -- verkrijg uitgebreide attributen
 %s %s -- zet uitgebreide attributen
 %s: %s: geen bestandsnaam gevonden op regel %d, afbreken
 %s: geen bestandsnaam gevonden op regel %d van standaardinvoer, afbreken
 %s: de leidende '/' in absolute padnamen wordt verwijderd
 %s: ongeldige reguliere expressie "%s"
 -V is enkel toegestaan met -s
 Er is een bestandsnaam vereist
 Minstens ��n van -s, -g of -r is vereist
 Attribuut "%s" had een %d-bytewaarde voor %s:
 Attribuut "%s" gezet op een %d-bytewaarde voor %s:
 Kon "%s" niet krijgen voor %s
 Kon "%s" niet verwijderen voor %s
 Kon "%s" niet zetten voor %s
 Geen dergelijk attribuut Slechts ��n van -s, -g of -r is toegestaan
 Niet herkende optie: %c
 Gebruik: %s %s
 Gebruik: %s %s
Probeer `%s --help' voor meer informatie.
 Gebruik: %s [-LRSq] -s attr-naam [-V attr-waarde] padnaam # zet waarde
         %s [-LRSq] -g attr-naam padnaam                  # vraag waarde op
         %s [-LRSq] -r attr-naam padnaam                  # verwijder attr
         -s leest een waarde van stdin en -g schrijft een waarde naar stdout
 verkrijgen van attribuut %s van %s lijst opmaken met attributen van %s attribuut %s zetten voor %s attributen zetten voor %s 