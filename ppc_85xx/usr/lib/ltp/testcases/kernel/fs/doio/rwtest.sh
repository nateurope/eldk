#!/bin/bash

# Copyright (c) 2000 Silicon Graphics, Inc.  All Rights Reserved.
# 
# This program is free software; you can redistribute it and/or modify it
# under the terms of version 2 of the GNU General Public License as
# published by the Free Software Foundation.
# 
# This program is distributed in the hope that it would be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# 
# Further, this software is distributed without any warranty that it is
# free of the rightful claim of any third person regarding infringement
# or the like.  Any license provided herein, whether implied or
# otherwise, applies only to this software file.  Patent licenses, if
# any, provided herein do not apply to combinations of this program with
# other software, or any other product whatsoever.
# 
# You should have received a copy of the GNU General Public License along
# with this program; if not, write the Free Software Foundation, Inc., 59
# Temple Place - Suite 330, Boston MA 02111-1307, USA.
# 
# Contact information: Silicon Graphics, Inc., 1600 Amphitheatre Pkwy,
# Mountain View, CA  94043, or:
# 
# http://www.sgi.com 
# 
# For further information regarding this notice, see: 
# 
# http://oss.sgi.com/projects/GenInfo/NoticeExplan/

#
# rwtest - a shell wrapper around iogen and doio
#

trap "exit 0" INT  # Until the smarter signal handler is engaged, below.

Prog=$(basename $0)

iOpts=""
dOpts=""
LockRegion=""
Nprocs=1
Files=""
Remove_Test_Files=""
Files_To_Remove=""
MPPrun=""
export TCID="rwtest"
export TST_TOTAL=1
export TST_COUNT=1

usage()
{
	echo "$Prog: [-chq] [-N name] [ iogen options ] [ doio options ] files" >&2
}

help()
{
	echo "\
    -c           Cleanup test files created by this invocation on exit.
                 Default is to leave them.  
    -h           This help - ignore all other options/arguments
    -F		 Only process filenames - does not run iogen & doio.
    -P Places	 Not used
    -S Scenario  Execute an internal scenario.
    -N Name	 Pan-style name to be printed with error messages.

    Options passed through to iogen:
    -[afiLmOstT] arg
    -o
    -q		 Set rwtest to be quiet and pass the flag on to iogen.

    Options passed through to doio:
    -D[rmMVUC] arg
    -D[aekv]
    -n nprocs    # procs to do simultanious io to the test files.
                 Default is 1.  If -n is non-zero, doio's -k option (use
		 file locking) is forced.

    files        Files to test on.  File names have the following fomat:
		 [ size: ] path
		 [ free% [ max size ] : ] path
		 If no size is specified, the files must exist
                 and the contents will be overwritten if testing write or
                 writea system calls.  If a size is supplied, an attempt to
                 create/grow/shrink path to the desired size will be made.
                 size is an integer which defaults to bytes, but may be
                 suffixed by 'b', 'k', or 'm' for blocks (4096 byte units), 
	         kilobytes (1024 byte units), or megabytes (2^20 byte units).

		 If the size is a percentage, df is used to find how much
		 free space there is (in blocks), and uses that.  The maximum
		 size is implied to be in blocks.
" >&2
}

killkids()
{
	trap "killkids" INT
	if [[ -z $didkids ]]
	then
		didkids=done
		kill -INT -$$
	fi
}


cleanup_and_exit()
{
	if [ -n "$Remove_Test_Files" ]
	then
		if [ -n "$Files_To_Remove" ]
		then
			rm -f $Files_To_Remove
		fi
	fi

	if [ $1 -ne 0 ]
	then
	    tst_resm TFAIL "Test failed"
	else
	    tst_resm TPASS "Test passed"
	fi

	exit $1
}

while (( $# > 0 ))
do	case $1 in
	-c)	Remove_Test_Files=yes
		;;

	-d)	debug=$2
		shift
		;;

	-h)	help
		exit 0
		;;

	-F)
		opt_F="-F"	# only process filenames
		;;

	-P)
		PLACES=$2
		shift
		;;

	-S)	Scenario=$2
		shift
		opt_S="-S"
		;;

	-N)	Name="($2)"
		TCID=$2
		iOpts="$iOpts -N $2"
		dOpts="$dOpts -N $2"
		shift
		;;

	# iogen Options to pass thru ... options with an argument
	-[afiLmOstT] )
		iOpts="$iOpts $1 $2"
		shift
		;;

	# iogen Options to pass thru ... just the option
	-[o] )
		iOpts="$iOpts $1"
		;;

	# iogen options to look at
	-q)
		iOpts="$iOpts $1"
		Quiet=$1
		;;

	# doio Options to pass thru ... options with an argument
	-D[rmMVUC] )
		o=${1#-D}
		dOpts="$dOpts -$o $2"
		shift
		;;

	# doio options to pass thru ... just the options
	-D[aekv] )
		o=${1#-D}
		dOpts="$dOpts -$o"
		;;

	# doio options to look at
	-n | -Dn )
		dOpts="$dOpts $1 $2"
		# force file locking with > 1 process
		if [[ $2 > 1 ]]
		then
			dOpts="$dOpts -k"
		fi
		opt_n="-n"
		shift
		;;

	\? | -*)
		echo "$Prog:  Illegal option $1" >&2
		tst_resm TBROK "Illegal option $1"
		exit 1
		;;

	*)
		break
		;;
	esac
	shift
done

#
# Hard-Coded Scenario Specifications
#
# FSA		RAW I/O via FSA
# MPPnnn	Run as a <nnn> sized MPP application
# userstripe	create files using user striping
#

if [[ -n "$opt_S" ]]
then
	case $Scenario in

	FSA )
		# I/O via FSA
		Flags="parallel"
		Nprocs=1
		LockRegion=""
	;;

	MPP* )
		# use mpprun...  to cooperate with a batch system, this
		# requires scanning mppview, etc.

		NPE=${Scenario#MPP}
		MPPrun=" mpprun -n $NPE "
	;;
	userstripe)
		#create files using user striping
		Oflags=O_PLACE,0xffffffffffffffff,1000
	;;

	places*)
		FSIZE=${Scenario#places-}
		oi="$IFS"
		IFS=":"
		set -- $PLACES
		if [ $# -eq 0 ]
		then
			# "this isn't supposed to happen"
			Files="25%:rwtest.$$"
		else
			IFS="$oi"
			PL=${*}
			for p in $PL
			do
				f="$f "${FSIZE}":"${p}"/rwtest$$"
			done
			set -- $f
		fi
	;;
	esac
fi

#
# If no files are specified ...
#	check if PLACES is set; if so, put one file in each place
#	otherwise generate one filename in the current directory.
#

if [ $# -eq 0 ]
then
	# put one file in each of $PLACES
	Files="25%:rwtest.file"
else
	Files=$*
fi

#
# use 'df -PB' to see how many blocks are available, apply a hard limit of
# 1,000,000 blocks if no limit is specified
#

case $(uname -s) in
	IRIX | IRIX64 )		dfOpts="-Pb"	;;
	Linux)			dfOpts="-P"	;;
	*)			dfOpts="-PB"	;;
esac

for f in $Files
do
	file=${f##*:}
	if [ ! -f "$file" ]
	then
		Files_To_Remove="$Files_To_Remove $file"
	fi

	dir=$(dirname $file)
	size=${f%%:*}
	if [[ $size = *%* ]]
	then

		typeset -i n=0
		while (( n < ${#szcache[*]} ))
		do
			if [[ szcache[$n] = $dir ]]; then
				break;
			fi
			n=n+1
		done

		if (( n < ${#szcache[*]} ))
		then
			blks=${szblks[$n]}
		else
			# If df is a symlink (to busybox) then do not pass the $dir and $dfOpts
			# parameters because they don't work as expected
                        [ -h $(which df) ] && dir=""; dfOpts=""
	
			blks=$(df $dfOpts $dir |
			(while read fs blks used avail cap mountpoint
			 do
				#echo $fs $blks $used $avail >&2
				b=$avail
			 done
			 echo $b) )

			case $(uname) in
			Linux)  blks=$( expr $blks / 2 ) ;;
			esac

			szcache[${#szcache[*]}+1]=$dir
			szblks[${#szblks[*]}+1]=$blks
		fi

		max=${size##*\%}
		if [[ "$max" = "" ]]
		then
			max=1000000
		fi
		size=${size%%\%*}

		case $(uname) in
		IRIX*)
		  sz=$( perl -le 'print int( '$blks' * '$size' / 100 )' )
		  ;;
		*)
		  sz=$(expr \( $blks '*' $size \) / 100)
		  ;;
		esac

		if [ $sz -gt $max ]
		then
			sz=$max
		fi
		f=$sz"b:"$file
	fi
	F[${#F[*]}+1]=$f
done

Files=${F[*]}

if [[ -z ${dOpts} ]]; then
	dOpts=-av
fi

if [[ -n "$opt_F" ]]; then

	echo $Files

else

	cmd="${LTPROOT}/testcases/bin/iogen ${iOpts} ${Files} | $MPPrun ${LTPROOT}/testcases/bin/doio ${dOpts}"

	if [[ -z "$Quiet" ]]; then
		echo $cmd
	fi

	trap "killkids" INT
	trap "cleanup_and_exit 2" HUP

	( ${LTPROOT}/testcases/bin/iogen ${iOpts} ${Files}
	  r=$?
	  if [ $r -ne 0 ]
	  then
		echo "$Prog$Name : iogen reported errors (r=$r)" >&2
		tst_resm TFAIL "iogen reported errors (r=$r)"
		kill -HUP $$
	  fi
	) | $MPPrun ${LTPROOT}/testcases/bin/doio ${dOpts}
	r=$?
	if [ $r -ne 0 ]
	then
		echo "$Prog$Name : doio reported errors (r=$r)" >&2
		tst_resm TFAIL "doio reported errors (r=$r)"
	fi

	cleanup_and_exit $r
fi
