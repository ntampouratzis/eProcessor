# CMake generated Testfile for 
# Source directory: /home/red-sea/COSSIM/hla/certi
# Build directory: /home/red-sea/COSSIM/hla/certi/build-certi
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TestPackage "/usr/bin/make" "package")
subdirs("include")
subdirs("libHLA")
subdirs("libCERTI")
subdirs("RTIG")
subdirs("RTIA")
subdirs("libRTI")
subdirs("test")
subdirs("doc")
subdirs("scripts")
subdirs("xml")
