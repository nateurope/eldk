require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&__need_timeval)) {
    unless(defined(&_BITS_TIME_H)) {
	eval 'sub _BITS_TIME_H () {1;}' unless defined(&_BITS_TIME_H);
	eval 'sub CLOCKS_PER_SEC () {1000000;}' unless defined(&CLOCKS_PER_SEC);
	if(!defined (defined(&__STRICT_ANSI__) ? &__STRICT_ANSI__ : undef)  && !defined (defined(&__USE_XOPEN2K) ? &__USE_XOPEN2K : undef)) {
	    require 'bits/types.ph';
	    eval 'sub CLK_TCK () {(( &__clock_t)  &__sysconf (2));}' unless defined(&CLK_TCK);
	}
	if(defined(&__USE_POSIX199309)) {
	    eval 'sub CLOCK_REALTIME () {0;}' unless defined(&CLOCK_REALTIME);
	    eval 'sub CLOCK_PROCESS_CPUTIME_ID () {2;}' unless defined(&CLOCK_PROCESS_CPUTIME_ID);
	    eval 'sub CLOCK_THREAD_CPUTIME_ID () {3;}' unless defined(&CLOCK_THREAD_CPUTIME_ID);
	    eval 'sub TIMER_ABSTIME () {1;}' unless defined(&TIMER_ABSTIME);
	}
    }
}
if(defined(&__need_timeval)) {
    undef(&__need_timeval) if defined(&__need_timeval);
    unless(defined(&_STRUCT_TIMEVAL)) {
	eval 'sub _STRUCT_TIMEVAL () {1;}' unless defined(&_STRUCT_TIMEVAL);
	require 'bits/types.ph';
    }
}
1;
