################################################################################
##                                                                            ##
## Copyright (c) International Business Machines  Corp., 2007                 ##
##                                                                            ##
## This program is free software;  you can redistribute it and#or modify      ##
## it under the terms of the GNU General Public License as published by       ##
## the Free Software Foundation; either version 2 of the License, or          ##
## (at your option) any later version.                                        ##
##                                                                            ##
## This program is distributed in the hope that it will be useful, but        ##
## WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY ##
## or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   ##
## for more details.                                                          ##
##                                                                            ##
## You should have received a copy of the GNU General Public License          ##
## along with this program;  if not, write to the Free Software               ##
## Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA    ##
##                                                                            ##
################################################################################
#   
# Author         Pradeep Kumar Surisetty, pradeepkumars@in.ibm.com
#   
# History        Nov 27 2007 -created- pradeep kumar surisetty
#! /bin/sh
#
# File :         test.sh


#!/bin/sh
x=0
chk_ifexist()
{
if [ ! -d /sys/devices/system/node ]
then
x=0
echo $x
else
x=$(ls /sys/devices/system/node | wc -l)
fi
if [ $x -gt 1 ]
then
   
	rpm -qa|grep numactl > /dev/null
	y=$?
	if [ $y -eq 0 ]
	then
  	 	cat /etc/issue|grep "Red Hat" > /dev/null # Checking weather distro is Red Hat or not
		z=$?
		if [ $z -eq 0 ]
		then
			rpm -qa|grep numactl-devel > /dev/null  # checking for numactl-devel
			a=$?
			if [ $a -eq 0 ]
			then
				echo yes
			else
				echo " numactl-devel is not installed"
			fi
		else
		     echo yes;    # numa is available
		fi
	else
		echo "numactl package is not installed"
	fi

else
        echo no;     #numa is not present

fi
}
chk_ifexist

