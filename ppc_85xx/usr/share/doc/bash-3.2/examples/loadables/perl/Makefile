#
# Makefile for builtin perl interpreter
#
#
# Copyright (C) 1998 Free Software Foundation, Inc.     

# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.

# Include some boilerplate Gnu makefile definitions.
prefix = /var/tmp/eldk.pvjXBp/usr

exec_prefix = /usr
bindir = /usr/bin
libdir = /usr/lib
infodir = /usr/share/info
includedir = /usr/include

topdir = ../../..
BUILD_DIR = /opt/eldk/build/ppc-2008-04-01/work/usr/src/denx/BUILD/bash-3.2
srcdir = .
VPATH = .


CC = ppc-linux-gcc
RM = rm -f

SHELL = /bin/sh

PERL5 = perl5

CFLAGS = -O2 -g -fsigned-char

#
# These values are generated for configure by ${topdir}/support/shobj-conf.
# If your system is not supported by that script, but includes facilities for
# dynamic loading of shared objects, please update the script and send the
# changes to bash-maintainers@gnu.org.
#
SHOBJ_CC = ppc-linux-gcc
SHOBJ_CFLAGS = -fPIC
SHOBJ_LD = ${CC}
SHOBJ_LDFLAGS = -shared -Wl,-soname,$@
SHOBJ_XLDFLAGS = 
SHOBJ_LIBS = 
SHOBJ_STATUS = supported

# Values used for compiling the perl files
PERL_LDOPTS = `${PERL5} -MExtUtils::Embed -e ldopts`
PERL_CFLAGS = ${CCFLAGS} `${PERL5} -MExtUtils::Embed -e ccopts`

SRC = bperl.c iperl.c perlxsi.c
OBJ = bperl.o iperl.o perlxsi.o

BUILTIN = bperl5

INC = -I. -I.. -I$(topdir) -I$(topdir)/lib -I$(topdir)/builtins \
      -I$(topdir)/include -I$(BUILD_DIR) -I$(BUILD_DIR)/lib \
      -I$(BUILD_DIR)/builtins


${BUILTIN}:	${OBJ}
	${RM} $@
	${SHOBJ_LD} ${SHOBJ_LDFLAGS} ${SHOBJ_XLDFLAGS} -o $@ ${OBJ} ${PERL_LDOPTS} ${SHOBJ_LIBS}

bperl.o:	bperl.c
	${RM} $@
	$(SHOBJ_CC) $(SHOBJ_CFLAGS) $(CFLAGS) $(INC) -c -o $@ ${srcdir}/bperl.c

iperl.o:	iperl.c
	${RM} $@
	$(SHOBJ_CC) ${SHOBJ_CFLAGS} $(PERL_CFLAGS) -c -o $@ ${srcdir}/iperl.c

perlxsi.c:
	${PERL5} -MExtUtils::Embed -e xsinit -- -o $@

perlxsi.o:	perlxsi.c
	${RM} $@
	${SHOBJ_CC} ${SHOBJ_CFLAGS} $(PERL_CFLAGS) -c -o $@ perlxsi.c

clean mostlyclean:
	${RM} ${OBJ}
	${RM} ${BUILTIN}

distclean maintainer-clean: clean
	${RM} perlxsi.c
