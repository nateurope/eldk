require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_SYS_RESOURCE_H)) {
    die("Never use <bits/resource.h> directly; include <sys/resource.h> instead.");
}
require 'bits/types.ph';
eval("sub RLIMIT_CPU () { 0; }") unless defined(&RLIMIT_CPU);
eval("sub RLIMIT_FSIZE () { 1; }") unless defined(&RLIMIT_FSIZE);
eval("sub RLIMIT_DATA () { 2; }") unless defined(&RLIMIT_DATA);
eval("sub RLIMIT_STACK () { 3; }") unless defined(&RLIMIT_STACK);
eval("sub RLIMIT_CORE () { 4; }") unless defined(&RLIMIT_CORE);
eval("sub RLIMIT_RSS () { 5; }") unless defined(&RLIMIT_RSS);
eval("sub RLIMIT_NOFILE () { 7; }") unless defined(&RLIMIT_NOFILE);
eval("sub RLIMIT_OFILE () { RLIMIT_NOFILE; }") unless defined(&RLIMIT_OFILE);
eval("sub RLIMIT_AS () { 9; }") unless defined(&RLIMIT_AS);
eval("sub RLIMIT_NPROC () { 6; }") unless defined(&RLIMIT_NPROC);
eval("sub RLIMIT_MEMLOCK () { 8; }") unless defined(&RLIMIT_MEMLOCK);
eval("sub RLIMIT_LOCKS () { 10; }") unless defined(&RLIMIT_LOCKS);
eval("sub RLIMIT_NLIMITS () { 11; }") unless defined(&RLIMIT_NLIMITS);
eval("sub RLIM_NLIMITS () { RLIMIT_NLIMITS; }") unless defined(&RLIM_NLIMITS);
unless(defined(&__USE_FILE_OFFSET64)) {
    eval 'sub RLIM_INFINITY () {((~0));}' unless defined(&RLIM_INFINITY);
} else {
    eval 'sub RLIM_INFINITY () {1.84467440737096e+19;}' unless defined(&RLIM_INFINITY);
}
if(defined(&__USE_LARGEFILE64)) {
    eval 'sub RLIM64_INFINITY () {1.84467440737096e+19;}' unless defined(&RLIM64_INFINITY);
}
unless(defined(&RLIM_SAVED_MAX)) {
    sub RLIM_SAVED_MAX () {	 &RLIM_INFINITY;}
}
unless(defined(&RLIM_SAVED_CUR)) {
    sub RLIM_SAVED_CUR () {	 &RLIM_INFINITY;}
}
unless(defined(&__USE_FILE_OFFSET64)) {
} else {
}
if(defined(&__USE_LARGEFILE64)) {
}
if(defined(&__USE_LARGEFILE64)) {
}
eval("sub RUSAGE_SELF () { 0; }") unless defined(&RUSAGE_SELF);
eval("sub RUSAGE_CHILDREN () { -1; }") unless defined(&RUSAGE_CHILDREN);
eval("sub RUSAGE_BOTH () { -2; }") unless defined(&RUSAGE_BOTH);
unless(defined(&__need_timeval)) {
    sub __need_timeval () {	1;}
}
require 'bits/time.ph';
unless(defined(&PRIO_MIN)) {
    sub PRIO_MIN () {	-20;}
}
unless(defined(&PRIO_MAX)) {
    sub PRIO_MAX () {	20;}
}
eval("sub PRIO_PROCESS () { 0; }") unless defined(&PRIO_PROCESS);
eval("sub PRIO_PGRP () { 1; }") unless defined(&PRIO_PGRP);
eval("sub PRIO_USER () { 2; }") unless defined(&PRIO_USER);
1;
