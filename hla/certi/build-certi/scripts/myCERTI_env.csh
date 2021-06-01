#!/bin/csh
# Generated by CMake.

setenv CERTI_VERSION "4.0.0"
echo "CERTI version <$CERTI_VERSION>"

# 1 : shell verification

setenv MONSHELL `echo $SHELL | cut -d '/' -f3`
if ( $MONSHELL != "csh" && $MONSHELL != "tcsh" ) then
  echo "You are not in CShell ($SHELL), please use myCERTI.sh."
  exit
endif

# 2 CERTI_HOST (i.e. where rtig runs)

if ( $# == "1") then
   setenv CERTI_HOST $1
else
   setenv CERTI_HOST localhost
endif

# 3 Architecture (i.e 32 or 64 bits)

setenv ARCH `uname -m`
#if ( $ARCH == "x86_64" ) then
#    setenv NBITS 64
#else
#    setenv NBITS 32
#endif
echo "Current machine architecture is <$ARCH>."
# assumed to be $NBITS bits."

# 4 CERTI_HOME (i.e. where we find bin,lib,share,include about CERTI built)
setenv CERTI_HOME /home/red-sea/COSSIM/hla/certi-tools
alias go_certi_home='pushd $CERTI_HOME'

# 5 CERTI_FOM_PATH (i.e. where we find (default) FED files
setenv CERTI_FOM_PATH $CERTI_HOME/share/federations
alias go_certi_fom='pushd $CERTI_FOM_PATH'

# 6 PATH (i.e. to run easily rtig and s.o.)
# Note sometimes PATH is not modified
setenv MOREPATHBIN "$CERTI_HOME/bin"
setenv MODIFPATH `echo $PATH | grep $MOREPATHBIN`
if ( $MODIFPATH == "" ) then    
    setenv PATH $MOREPATHBIN":"$PATH
    echo "Your PATH variable has been modified for bin"
endif
setenv MOREPATHSCRIPTS "$CERTI_HOME/share/scripts"
setenv MODIFPATH `echo $PATH | grep $MOREPATHSCRIPTS`
if ( $MODIFPATH == "" ) then    
    setenv PATH $MOREPATHSCRIPTS":"$PATH
    echo "Your PATH variable has been modified for scripts"
endif

# 7 LD_LIBRARY_PATH ( applications needs...)
# Note LD_LIBRARY_PATH has to be extended sometimes
if ( $?LD_LIBRARY_PATH ) then
    setenv MOREPATHLIB "$CERTI_HOME/lib"
    setenv MODIFPATH `echo $LD_LIBRARY_PATH | grep $MOREPATHLIB`
    if ( $MODIFPATH == "" ) then
        setenv LD_LIBRARY_PATH $MOREPATHLIB":"$LD_LIBRARY_PATH
        echo "Your LD_LIBRARY_PATH variable has been extended."
    endif
else
    setenv LD_LIBRARY_PATH $CERTI_HOME/lib
endif

echo "=========================================================="
echo "** WARNING ** We hope you have made source myCERTI.tcsh **"
echo "                                    ------"
echo "If yes your variables for CERTI are now :"
echo "CERTI_HOST      = " $CERTI_HOST
echo "CERTI_HOME      = " $CERTI_HOME
echo "CERTI_FOM_PATH  = " $CERTI_FOM_PATH
echo "PATH            = " $PATH
echo "LD_LIBRARY_PATH = " $LD_LIBRARY_PATH


