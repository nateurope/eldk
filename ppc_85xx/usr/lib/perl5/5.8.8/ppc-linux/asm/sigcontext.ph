require '_h2ph_pre.ph';

no warnings 'redefine';

unless(defined(&_ASMi386_SIGCONTEXT_H)) {
    eval 'sub _ASMi386_SIGCONTEXT_H () {1;}' unless defined(&_ASMi386_SIGCONTEXT_H);
    eval 'sub X86_FXSR_MAGIC () {0x;}' unless defined(&X86_FXSR_MAGIC);
}
1;
