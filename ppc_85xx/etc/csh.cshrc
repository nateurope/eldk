# /etc/cshrc
#
# csh configuration for all shell invocations.

# By default, we want this to get set.
# Even for non-interactive, non-login shells.
umask 022

if ($?prompt) then
  if ($?tcsh) then
    set promptchars='$#'
    set prompt=\[$user'@%m %c]%# ' 
  else
    set prompt=\[$user@`hostname -s`\]\$\ 
  endif
endif

if ( $?tcsh ) then
	bindkey "^[[3~" delete-char
endif

setenv MAIL "/var/spool/mail/$USER"
limit coredumpsize 0

if ( -d /etc/profile.d ) then
	set nonomatch
        foreach i ( /etc/profile.d/*.csh )
		if ( -r $i ) then
               		source $i
		endif
        end
	unset i nonomatch
endif

