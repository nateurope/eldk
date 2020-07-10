cmd_scripts/mod/empty.o := ppc_85xx-gcc -m32 -Wp,-MD,scripts/mod/.empty.o.d  -nostdinc -isystem /home/amue/workspace/test/eldk/usr/bin/../lib/gcc/powerpc-linux/4.2.2/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Iarch/powerpc -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -O2 -msoft-float -pipe -Iarch/powerpc -ffixed-r2 -mmultiple -mno-altivec -mno-spe -funit-at-a-time -mno-string -Wa,-me500 -fomit-frame-pointer -g  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign     -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(empty)"  -D"KBUILD_MODNAME=KBUILD_STR(empty)" -c -o scripts/mod/.tmp_empty.o scripts/mod/empty.c

deps_scripts/mod/empty.o := \
  scripts/mod/empty.c \

scripts/mod/empty.o: $(deps_scripts/mod/empty.o)

$(deps_scripts/mod/empty.o):
