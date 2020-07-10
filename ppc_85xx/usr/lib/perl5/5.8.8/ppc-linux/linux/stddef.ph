require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_LINUX_STDDEF_H)) {
    eval 'sub _LINUX_STDDEF_H () {1;}' unless defined(&_LINUX_STDDEF_H);
    undef(&NULL) if defined(&NULL);
    if(defined( &__cplusplus)) {
	eval 'sub NULL () {0;}' unless defined(&NULL);
    } else {
	eval 'sub NULL () {(( &void *)0);}' unless defined(&NULL);
    }
    undef(&offsetof) if defined(&offsetof);
    eval 'sub offsetof {
        my($TYPE, $MEMBER) = @_;
	    eval q(( (($TYPE *)0)->$MEMBER));
    }' unless defined(&offsetof);
}
1;
