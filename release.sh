# 
# File: release.sh
#
# Source this file so that the right environment variables
# are set for the program to build and run.
#

unset SSH_ASKPASS
export OSPL_HOME=/home/awaumann/HDE/x86_64.linux
export OSPL_URI=file://ospl.xml
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${OSPL_HOME}/lib
export PATH=${PATH}:${OSPL_HOME}/bin
