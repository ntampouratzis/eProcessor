# CMake generated Testfile for 
# Source directory: /home/red-sea/COSSIM/hla/certi/test/utility
# Build directory: /home/red-sea/COSSIM/hla/certi/build-certi/test/utility
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CheckXML2000 "/home/red-sea/COSSIM/hla/certi/build-certi/test/utility/CertiCheckXML" "/home/red-sea/COSSIM/hla/certi/test/utility/T2000.xml")
set_tests_properties(CheckXML2000 PROPERTIES  PASS_REGULAR_EXPRESSION "2000")
add_test(CheckXML2010 "/home/red-sea/COSSIM/hla/certi/build-certi/test/utility/CertiCheckXML" "/home/red-sea/COSSIM/hla/certi/test/utility/T2010.xml")
set_tests_properties(CheckXML2010 PROPERTIES  PASS_REGULAR_EXPRESSION "2010")
