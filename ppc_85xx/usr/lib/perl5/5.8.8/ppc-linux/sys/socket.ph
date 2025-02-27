require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_SYS_SOCKET_H)) {
    eval 'sub _SYS_SOCKET_H () {1;}' unless defined(&_SYS_SOCKET_H);
    require 'features.ph';
    require 'sys/uio.ph';
    eval 'sub __need_size_t () {1;}' unless defined(&__need_size_t);
    require 'stddef.ph';
    require 'bits/socket.ph';
    if(defined(&__USE_BSD)) {
    }
    eval("sub SHUT_RD () { 0; }") unless defined(&SHUT_RD);
    eval("sub SHUT_WR () { 1; }") unless defined(&SHUT_WR);
    eval("sub SHUT_RDWR () { 2; }") unless defined(&SHUT_RDWR);
    if(defined (defined(&__cplusplus) ? &__cplusplus : undef) || ! &__GNUC_PREREQ (2, 7) || !defined (defined(&__USE_GNU) ? &__USE_GNU : undef)) {
	eval 'sub __SOCKADDR_ARG () {\'struct sockaddr\' * &__restrict;}' unless defined(&__SOCKADDR_ARG);
	eval 'sub __CONST_SOCKADDR_ARG () { &__const \'struct sockaddr\' *;}' unless defined(&__CONST_SOCKADDR_ARG);
    } else {
	eval 'sub __SOCKADDR_ALLTYPES () { &__SOCKADDR_ONETYPE ( &sockaddr)  &__SOCKADDR_ONETYPE ( &sockaddr_at)  &__SOCKADDR_ONETYPE ( &sockaddr_ax25)  &__SOCKADDR_ONETYPE ( &sockaddr_dl)  &__SOCKADDR_ONETYPE ( &sockaddr_eon)  &__SOCKADDR_ONETYPE ( &sockaddr_in)  &__SOCKADDR_ONETYPE ( &sockaddr_in6)  &__SOCKADDR_ONETYPE ( &sockaddr_inarp)  &__SOCKADDR_ONETYPE ( &sockaddr_ipx)  &__SOCKADDR_ONETYPE ( &sockaddr_iso)  &__SOCKADDR_ONETYPE ( &sockaddr_ns)  &__SOCKADDR_ONETYPE ( &sockaddr_un)  &__SOCKADDR_ONETYPE ( &sockaddr_x25);}' unless defined(&__SOCKADDR_ALLTYPES);
	eval 'sub __SOCKADDR_ONETYPE {
	    my($type) = @_;
    	    eval q(\'struct type\' * &__restrict  &__$type &__;);
	}' unless defined(&__SOCKADDR_ONETYPE);
	undef(&__SOCKADDR_ONETYPE) if defined(&__SOCKADDR_ONETYPE);
	eval 'sub __SOCKADDR_ONETYPE {
	    my($type) = @_;
    	    eval q( &__const \'struct type\' * &__restrict  &__$type &__;);
	}' unless defined(&__SOCKADDR_ONETYPE);
	undef(&__SOCKADDR_ONETYPE) if defined(&__SOCKADDR_ONETYPE);
    }
    if(defined(&__USE_XOPEN2K)) {
    }
    if(defined(&__USE_MISC)) {
    }
}
1;
