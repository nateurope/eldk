require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_BITS_SOCKADDR_H)) {
    eval 'sub _BITS_SOCKADDR_H () {1;}' unless defined(&_BITS_SOCKADDR_H);
    eval 'sub __SOCKADDR_COMMON {
        my($sa_prefix) = @_;
	    eval q( &sa_family_t $sa_prefix &family);
    }' unless defined(&__SOCKADDR_COMMON);
    eval 'sub __SOCKADDR_COMMON_SIZE () {($sizeof{\'unsigned short int\'});}' unless defined(&__SOCKADDR_COMMON_SIZE);
}
1;
