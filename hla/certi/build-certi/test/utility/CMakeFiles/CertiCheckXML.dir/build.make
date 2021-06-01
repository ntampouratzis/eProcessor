# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/red-sea/COSSIM/hla/certi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/red-sea/COSSIM/hla/certi/build-certi

# Include any dependencies generated for this target.
include test/utility/CMakeFiles/CertiCheckXML.dir/depend.make

# Include the progress variables for this target.
include test/utility/CMakeFiles/CertiCheckXML.dir/progress.make

# Include the compile flags for this target's objects.
include test/utility/CMakeFiles/CertiCheckXML.dir/flags.make

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o: test/utility/CMakeFiles/CertiCheckXML.dir/flags.make
test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o: ../test/utility/checkXML.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CertiCheckXML.dir/checkXML.cc.o -c /home/red-sea/COSSIM/hla/certi/test/utility/checkXML.cc

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CertiCheckXML.dir/checkXML.cc.i"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/red-sea/COSSIM/hla/certi/test/utility/checkXML.cc > CMakeFiles/CertiCheckXML.dir/checkXML.cc.i

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CertiCheckXML.dir/checkXML.cc.s"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/red-sea/COSSIM/hla/certi/test/utility/checkXML.cc -o CMakeFiles/CertiCheckXML.dir/checkXML.cc.s

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.requires:

.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.requires

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.provides: test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.requires
	$(MAKE) -f test/utility/CMakeFiles/CertiCheckXML.dir/build.make test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.provides.build
.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.provides

test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.provides.build: test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o


# Object files for target CertiCheckXML
CertiCheckXML_OBJECTS = \
"CMakeFiles/CertiCheckXML.dir/checkXML.cc.o"

# External object files for target CertiCheckXML
CertiCheckXML_EXTERNAL_OBJECTS =

test/utility/CertiCheckXML: test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o
test/utility/CertiCheckXML: test/utility/CMakeFiles/CertiCheckXML.dir/build.make
test/utility/CertiCheckXML: /usr/lib/x86_64-linux-gnu/libxml2.so
test/utility/CertiCheckXML: libRTI/hla-1_3/libRTI-NGd.so.1.0.0
test/utility/CertiCheckXML: libCERTI/libCERTId.so.4.0.0
test/utility/CertiCheckXML: /usr/lib/x86_64-linux-gnu/libxml2.so
test/utility/CertiCheckXML: libHLA/libHLAd.so.4.0.0
test/utility/CertiCheckXML: /usr/lib/x86_64-linux-gnu/librt.so
test/utility/CertiCheckXML: libRTI/hla-1_3/libFedTimed.so.1.0.0
test/utility/CertiCheckXML: test/utility/CMakeFiles/CertiCheckXML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CertiCheckXML"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CertiCheckXML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/utility/CMakeFiles/CertiCheckXML.dir/build: test/utility/CertiCheckXML

.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/build

test/utility/CMakeFiles/CertiCheckXML.dir/requires: test/utility/CMakeFiles/CertiCheckXML.dir/checkXML.cc.o.requires

.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/requires

test/utility/CMakeFiles/CertiCheckXML.dir/clean:
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && $(CMAKE_COMMAND) -P CMakeFiles/CertiCheckXML.dir/cmake_clean.cmake
.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/clean

test/utility/CMakeFiles/CertiCheckXML.dir/depend:
	cd /home/red-sea/COSSIM/hla/certi/build-certi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/red-sea/COSSIM/hla/certi /home/red-sea/COSSIM/hla/certi/test/utility /home/red-sea/COSSIM/hla/certi/build-certi /home/red-sea/COSSIM/hla/certi/build-certi/test/utility /home/red-sea/COSSIM/hla/certi/build-certi/test/utility/CMakeFiles/CertiCheckXML.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/utility/CMakeFiles/CertiCheckXML.dir/depend

