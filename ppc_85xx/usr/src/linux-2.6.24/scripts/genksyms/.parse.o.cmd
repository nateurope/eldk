cmd_scripts/genksyms/parse.o := /usr/bin/gcc -B/usr/bin/ -Wp,-MD,scripts/genksyms/.parse.o.d -Wall -Wstrict-prototypes -O2 -fomit-frame-pointer    -Wno-uninitialized -Iscripts/genksyms -c -o scripts/genksyms/parse.o scripts/genksyms/parse.c

deps_scripts/genksyms/parse.o := \
  scripts/genksyms/parse.c \
  /usr/include/stdc-predef.h \
  /usr/include/assert.h \
  /usr/include/features.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/bits/long-double.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/include/malloc.h \
  /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
  /usr/include/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
  /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
  /usr/include/x86_64-linux-gnu/bits/libio.h \
  /usr/include/x86_64-linux-gnu/bits/_G_config.h \
    $(wildcard include/config/h.h) \
  /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
  /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
  /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
  /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
  /usr/include/x86_64-linux-gnu/bits/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/stdio2.h \
  scripts/genksyms/genksyms.h \

scripts/genksyms/parse.o: $(deps_scripts/genksyms/parse.o)

$(deps_scripts/genksyms/parse.o):
