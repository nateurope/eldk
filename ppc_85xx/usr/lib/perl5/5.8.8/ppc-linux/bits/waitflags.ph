require '_h2ph_pre.ph';

no warnings 'redefine';

if(!defined (defined(&_SYS_WAIT_H) ? &_SYS_WAIT_H : undef)  && !defined (defined(&_STDLIB_H) ? &_STDLIB_H : undef)) {
    die("Never include <bits/waitflags.h> directly; use <sys/wait.h> instead.");
}
unless(defined(&WNOHANG)) {
    sub WNOHANG () {	1;}
}
unless(defined(&WUNTRACED)) {
    sub WUNTRACED () {	2;}
}
unless(defined(&__WALL)) {
    sub __WALL () {	0x40000000;}
}
unless(defined(&__WCLONE)) {
    sub __WCLONE () {	0x80000000;}
}
1;
