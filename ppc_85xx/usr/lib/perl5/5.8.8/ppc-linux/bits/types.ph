require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_BITS_TYPES_H)) {
    eval 'sub _BITS_TYPES_H () {1;}' unless defined(&_BITS_TYPES_H);
    require 'features.ph';
    eval 'sub __need_size_t () {1;}' unless defined(&__need_size_t);
    require 'stddef.ph';
    if(defined(&__GLIBC_HAVE_LONG_LONG)) {
    } else {
    }
    if(defined(&__GLIBC_HAVE_LONG_LONG)) {
    }
    eval 'sub __FD_SETSIZE () {1024;}' unless defined(&__FD_SETSIZE);
    if(defined (defined(&__USE_POSIX199506) ? &__USE_POSIX199506 : undef) || defined (defined(&__USE_UNIX98) ? &__USE_UNIX98 : undef)) {
	require 'bits/pthreadtypes.ph';
    }
}
1;
