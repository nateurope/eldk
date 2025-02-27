#
# This spec file is read by gcj when linking.
# It is used to specify the standard libraries we need in order
# to link with libgcj.
#
%rename startfile startfileorig
*startfile:  %(startfileorig)

%rename lib liborig
*lib: %{static-libgcj:-non_shared} %{s-bc-abi:-lgcj_bc;:-lgcj} %{static-libgcj:-call_shared} -lm   -lpthread -lrt    -ldl %(libgcc) %(liborig)

*jc1: -fhash-synchronization -fuse-divide-subroutine  -fuse-boehm-gc -fnon-call-exceptions   -fkeep-inline-functions
