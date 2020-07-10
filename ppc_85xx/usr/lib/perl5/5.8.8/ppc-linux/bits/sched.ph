require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&__need_schedparam)) {
    unless(defined(&_SCHED_H)) {
	die("Never include <bits/sched.h> directly; use <sched.h> instead.");
    }
    eval 'sub SCHED_OTHER () {0;}' unless defined(&SCHED_OTHER);
    eval 'sub SCHED_FIFO () {1;}' unless defined(&SCHED_FIFO);
    eval 'sub SCHED_RR () {2;}' unless defined(&SCHED_RR);
    if(defined(&__USE_MISC)) {
	eval 'sub CSIGNAL () {0xff;}' unless defined(&CSIGNAL);
	eval 'sub CLONE_VM () {0x100;}' unless defined(&CLONE_VM);
	eval 'sub CLONE_FS () {0x200;}' unless defined(&CLONE_FS);
	eval 'sub CLONE_FILES () {0x400;}' unless defined(&CLONE_FILES);
	eval 'sub CLONE_SIGHAND () {0x800;}' unless defined(&CLONE_SIGHAND);
	eval 'sub CLONE_PID () {0x1000;}' unless defined(&CLONE_PID);
	eval 'sub CLONE_PTRACE () {0x2000;}' unless defined(&CLONE_PTRACE);
	eval 'sub CLONE_VFORK () {0x4000;}' unless defined(&CLONE_VFORK);
    }
    if(defined(&__USE_MISC)) {
    }
}
if(!defined (defined(&__defined_schedparam) ? &__defined_schedparam : undef)  && (defined (defined(&__need_schedparam) ? &__need_schedparam : undef) || defined (defined(&_SCHED_H) ? &_SCHED_H : undef))) {
    eval 'sub __defined_schedparam () {1;}' unless defined(&__defined_schedparam);
    undef(&__need_schedparam) if defined(&__need_schedparam);
}
1;
