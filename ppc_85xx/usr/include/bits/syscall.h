/* Generated at libc build time from kernel syscall list.  */

#ifndef _SYSCALL_H
# error "Never use <bits/syscall.h> directly; include <sys/syscall.h> instead."
#endif

#include <bits/wordsize.h>

#define SYS__llseek __NR__llseek
#define SYS__newselect __NR__newselect
#define SYS__sysctl __NR__sysctl
#define SYS_access __NR_access
#define SYS_acct __NR_acct
#define SYS_add_key __NR_add_key
#define SYS_adjtimex __NR_adjtimex
#define SYS_afs_syscall __NR_afs_syscall
#define SYS_alarm __NR_alarm
#define SYS_bdflush __NR_bdflush
#define SYS_break __NR_break
#define SYS_brk __NR_brk
#define SYS_capget __NR_capget
#define SYS_capset __NR_capset
#define SYS_chdir __NR_chdir
#define SYS_chmod __NR_chmod
#define SYS_chown __NR_chown
#define SYS_chroot __NR_chroot
#define SYS_clock_getres __NR_clock_getres
#define SYS_clock_gettime __NR_clock_gettime
#define SYS_clock_nanosleep __NR_clock_nanosleep
#define SYS_clock_settime __NR_clock_settime
#define SYS_clone __NR_clone
#define SYS_close __NR_close
#define SYS_creat __NR_creat
#define SYS_create_module __NR_create_module
#define SYS_delete_module __NR_delete_module
#define SYS_dup __NR_dup
#define SYS_dup2 __NR_dup2
#define SYS_epoll_create __NR_epoll_create
#define SYS_epoll_ctl __NR_epoll_ctl
#define SYS_epoll_pwait __NR_epoll_pwait
#define SYS_epoll_wait __NR_epoll_wait
#define SYS_eventfd __NR_eventfd
#define SYS_execve __NR_execve
#define SYS_exit __NR_exit
#define SYS_exit_group __NR_exit_group
#define SYS_faccessat __NR_faccessat
#define SYS_fadvise64 __NR_fadvise64
#define SYS_fallocate __NR_fallocate
#define SYS_fchdir __NR_fchdir
#define SYS_fchmod __NR_fchmod
#define SYS_fchmodat __NR_fchmodat
#define SYS_fchown __NR_fchown
#define SYS_fchownat __NR_fchownat
#define SYS_fcntl __NR_fcntl
#define SYS_fdatasync __NR_fdatasync
#define SYS_fgetxattr __NR_fgetxattr
#define SYS_flistxattr __NR_flistxattr
#define SYS_flock __NR_flock
#define SYS_fork __NR_fork
#define SYS_fremovexattr __NR_fremovexattr
#define SYS_fsetxattr __NR_fsetxattr
#define SYS_fstat __NR_fstat
#define SYS_fstatfs __NR_fstatfs
#define SYS_fstatfs64 __NR_fstatfs64
#define SYS_fsync __NR_fsync
#define SYS_ftime __NR_ftime
#define SYS_ftruncate __NR_ftruncate
#define SYS_futex __NR_futex
#define SYS_futimesat __NR_futimesat
#define SYS_get_kernel_syms __NR_get_kernel_syms
#define SYS_get_mempolicy __NR_get_mempolicy
#define SYS_get_robust_list __NR_get_robust_list
#define SYS_getcpu __NR_getcpu
#define SYS_getcwd __NR_getcwd
#define SYS_getdents __NR_getdents
#define SYS_getdents64 __NR_getdents64
#define SYS_getegid __NR_getegid
#define SYS_geteuid __NR_geteuid
#define SYS_getgid __NR_getgid
#define SYS_getgroups __NR_getgroups
#define SYS_getitimer __NR_getitimer
#define SYS_getpgid __NR_getpgid
#define SYS_getpgrp __NR_getpgrp
#define SYS_getpid __NR_getpid
#define SYS_getpmsg __NR_getpmsg
#define SYS_getppid __NR_getppid
#define SYS_getpriority __NR_getpriority
#define SYS_getresgid __NR_getresgid
#define SYS_getresuid __NR_getresuid
#define SYS_getrlimit __NR_getrlimit
#define SYS_getrusage __NR_getrusage
#define SYS_getsid __NR_getsid
#define SYS_gettid __NR_gettid
#define SYS_gettimeofday __NR_gettimeofday
#define SYS_getuid __NR_getuid
#define SYS_getxattr __NR_getxattr
#define SYS_gtty __NR_gtty
#define SYS_idle __NR_idle
#define SYS_init_module __NR_init_module
#define SYS_inotify_add_watch __NR_inotify_add_watch
#define SYS_inotify_init __NR_inotify_init
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#define SYS_io_cancel __NR_io_cancel
#define SYS_io_destroy __NR_io_destroy
#define SYS_io_getevents __NR_io_getevents
#define SYS_io_setup __NR_io_setup
#define SYS_io_submit __NR_io_submit
#define SYS_ioctl __NR_ioctl
#define SYS_ioperm __NR_ioperm
#define SYS_iopl __NR_iopl
#define SYS_ioprio_get __NR_ioprio_get
#define SYS_ioprio_set __NR_ioprio_set
#define SYS_ipc __NR_ipc
#define SYS_kexec_load __NR_kexec_load
#define SYS_keyctl __NR_keyctl
#define SYS_kill __NR_kill
#define SYS_lchown __NR_lchown
#define SYS_lgetxattr __NR_lgetxattr
#define SYS_link __NR_link
#define SYS_linkat __NR_linkat
#define SYS_listxattr __NR_listxattr
#define SYS_llistxattr __NR_llistxattr
#define SYS_lock __NR_lock
#define SYS_lookup_dcookie __NR_lookup_dcookie
#define SYS_lremovexattr __NR_lremovexattr
#define SYS_lseek __NR_lseek
#define SYS_lsetxattr __NR_lsetxattr
#define SYS_lstat __NR_lstat
#define SYS_madvise __NR_madvise
#define SYS_mbind __NR_mbind
#define SYS_migrate_pages __NR_migrate_pages
#define SYS_mincore __NR_mincore
#define SYS_mkdir __NR_mkdir
#define SYS_mkdirat __NR_mkdirat
#define SYS_mknod __NR_mknod
#define SYS_mknodat __NR_mknodat
#define SYS_mlock __NR_mlock
#define SYS_mlockall __NR_mlockall
#define SYS_mmap __NR_mmap
#define SYS_modify_ldt __NR_modify_ldt
#define SYS_mount __NR_mount
#define SYS_move_pages __NR_move_pages
#define SYS_mprotect __NR_mprotect
#define SYS_mpx __NR_mpx
#define SYS_mq_getsetattr __NR_mq_getsetattr
#define SYS_mq_notify __NR_mq_notify
#define SYS_mq_open __NR_mq_open
#define SYS_mq_timedreceive __NR_mq_timedreceive
#define SYS_mq_timedsend __NR_mq_timedsend
#define SYS_mq_unlink __NR_mq_unlink
#define SYS_mremap __NR_mremap
#define SYS_msync __NR_msync
#define SYS_multiplexer __NR_multiplexer
#define SYS_munlock __NR_munlock
#define SYS_munlockall __NR_munlockall
#define SYS_munmap __NR_munmap
#define SYS_nanosleep __NR_nanosleep
#define SYS_nfsservctl __NR_nfsservctl
#define SYS_nice __NR_nice
#define SYS_oldfstat __NR_oldfstat
#define SYS_oldlstat __NR_oldlstat
#define SYS_oldolduname __NR_oldolduname
#define SYS_oldstat __NR_oldstat
#define SYS_olduname __NR_olduname
#define SYS_open __NR_open
#define SYS_openat __NR_openat
#define SYS_pause __NR_pause
#define SYS_pciconfig_iobase __NR_pciconfig_iobase
#define SYS_pciconfig_read __NR_pciconfig_read
#define SYS_pciconfig_write __NR_pciconfig_write
#define SYS_personality __NR_personality
#define SYS_pipe __NR_pipe
#define SYS_pivot_root __NR_pivot_root
#define SYS_poll __NR_poll
#define SYS_ppoll __NR_ppoll
#define SYS_prctl __NR_prctl
#define SYS_pread64 __NR_pread64
#define SYS_prof __NR_prof
#define SYS_profil __NR_profil
#define SYS_pselect6 __NR_pselect6
#define SYS_ptrace __NR_ptrace
#define SYS_putpmsg __NR_putpmsg
#define SYS_pwrite64 __NR_pwrite64
#define SYS_query_module __NR_query_module
#define SYS_quotactl __NR_quotactl
#define SYS_read __NR_read
#define SYS_readahead __NR_readahead
#define SYS_readdir __NR_readdir
#define SYS_readlink __NR_readlink
#define SYS_readlinkat __NR_readlinkat
#define SYS_readv __NR_readv
#define SYS_reboot __NR_reboot
#define SYS_remap_file_pages __NR_remap_file_pages
#define SYS_removexattr __NR_removexattr
#define SYS_rename __NR_rename
#define SYS_renameat __NR_renameat
#define SYS_request_key __NR_request_key
#define SYS_restart_syscall __NR_restart_syscall
#define SYS_rmdir __NR_rmdir
#define SYS_rt_sigaction __NR_rt_sigaction
#define SYS_rt_sigpending __NR_rt_sigpending
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#define SYS_rt_sigreturn __NR_rt_sigreturn
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#define SYS_rtas __NR_rtas
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#define SYS_sched_getaffinity __NR_sched_getaffinity
#define SYS_sched_getparam __NR_sched_getparam
#define SYS_sched_getscheduler __NR_sched_getscheduler
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#define SYS_sched_setaffinity __NR_sched_setaffinity
#define SYS_sched_setparam __NR_sched_setparam
#define SYS_sched_setscheduler __NR_sched_setscheduler
#define SYS_sched_yield __NR_sched_yield
#define SYS_select __NR_select
#define SYS_sendfile __NR_sendfile
#define SYS_set_mempolicy __NR_set_mempolicy
#define SYS_set_robust_list __NR_set_robust_list
#define SYS_set_tid_address __NR_set_tid_address
#define SYS_setdomainname __NR_setdomainname
#define SYS_setfsgid __NR_setfsgid
#define SYS_setfsuid __NR_setfsuid
#define SYS_setgid __NR_setgid
#define SYS_setgroups __NR_setgroups
#define SYS_sethostname __NR_sethostname
#define SYS_setitimer __NR_setitimer
#define SYS_setpgid __NR_setpgid
#define SYS_setpriority __NR_setpriority
#define SYS_setregid __NR_setregid
#define SYS_setresgid __NR_setresgid
#define SYS_setresuid __NR_setresuid
#define SYS_setreuid __NR_setreuid
#define SYS_setrlimit __NR_setrlimit
#define SYS_setsid __NR_setsid
#define SYS_settimeofday __NR_settimeofday
#define SYS_setuid __NR_setuid
#define SYS_setxattr __NR_setxattr
#define SYS_sgetmask __NR_sgetmask
#define SYS_sigaction __NR_sigaction
#define SYS_sigaltstack __NR_sigaltstack
#define SYS_signal __NR_signal
#define SYS_signalfd __NR_signalfd
#define SYS_sigpending __NR_sigpending
#define SYS_sigprocmask __NR_sigprocmask
#define SYS_sigreturn __NR_sigreturn
#define SYS_sigsuspend __NR_sigsuspend
#define SYS_socketcall __NR_socketcall
#define SYS_splice __NR_splice
#define SYS_spu_create __NR_spu_create
#define SYS_spu_run __NR_spu_run
#define SYS_ssetmask __NR_ssetmask
#define SYS_stat __NR_stat
#define SYS_statfs __NR_statfs
#define SYS_statfs64 __NR_statfs64
#define SYS_stime __NR_stime
#define SYS_stty __NR_stty
#define SYS_swapcontext __NR_swapcontext
#define SYS_swapoff __NR_swapoff
#define SYS_swapon __NR_swapon
#define SYS_symlink __NR_symlink
#define SYS_symlinkat __NR_symlinkat
#define SYS_sync __NR_sync
#define SYS_sync_file_range2 __NR_sync_file_range2
#define SYS_sys_debug_setcontext __NR_sys_debug_setcontext
#define SYS_sysfs __NR_sysfs
#define SYS_sysinfo __NR_sysinfo
#define SYS_syslog __NR_syslog
#define SYS_tee __NR_tee
#define SYS_tgkill __NR_tgkill
#define SYS_time __NR_time
#define SYS_timer_create __NR_timer_create
#define SYS_timer_delete __NR_timer_delete
#define SYS_timer_getoverrun __NR_timer_getoverrun
#define SYS_timer_gettime __NR_timer_gettime
#define SYS_timer_settime __NR_timer_settime
#define SYS_timerfd __NR_timerfd
#define SYS_times __NR_times
#define SYS_tkill __NR_tkill
#define SYS_truncate __NR_truncate
#define SYS_tuxcall __NR_tuxcall
#define SYS_ugetrlimit __NR_ugetrlimit
#define SYS_ulimit __NR_ulimit
#define SYS_umask __NR_umask
#define SYS_umount __NR_umount
#define SYS_umount2 __NR_umount2
#define SYS_uname __NR_uname
#define SYS_unlink __NR_unlink
#define SYS_unlinkat __NR_unlinkat
#define SYS_unshare __NR_unshare
#define SYS_uselib __NR_uselib
#define SYS_ustat __NR_ustat
#define SYS_utime __NR_utime
#define SYS_utimensat __NR_utimensat
#define SYS_utimes __NR_utimes
#define SYS_vfork __NR_vfork
#define SYS_vhangup __NR_vhangup
#define SYS_vm86 __NR_vm86
#define SYS_vmsplice __NR_vmsplice
#define SYS_wait4 __NR_wait4
#define SYS_waitid __NR_waitid
#define SYS_waitpid __NR_waitpid
#define SYS_write __NR_write
#define SYS_writev __NR_writev
#if __WORDSIZE == 64
#define SYS_newfstatat __NR_newfstatat
#else
#define SYS_fadvise64_64 __NR_fadvise64_64
#define SYS_fcntl64 __NR_fcntl64
#define SYS_fstat64 __NR_fstat64
#define SYS_fstatat64 __NR_fstatat64
#define SYS_ftruncate64 __NR_ftruncate64
#define SYS_lstat64 __NR_lstat64
#define SYS_mmap2 __NR_mmap2
#define SYS_sendfile64 __NR_sendfile64
#define SYS_stat64 __NR_stat64
#define SYS_truncate64 __NR_truncate64
#endif
