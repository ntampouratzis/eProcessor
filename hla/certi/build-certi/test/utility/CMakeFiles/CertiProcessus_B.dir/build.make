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
include test/utility/CMakeFiles/CertiProcessus_B.dir/depend.make

# Include the progress variables for this target.
include test/utility/CMakeFiles/CertiProcessus_B.dir/progress.make

# Include the compile flags for this target's objects.
include test/utility/CMakeFiles/CertiProcessus_B.dir/flags.make

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o: test/utility/CMakeFiles/CertiProcessus_B.dir/flags.make
test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o: ../test/utility/Main_SocketSHM.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o -c /home/red-sea/COSSIM/hla/certi/test/utility/Main_SocketSHM.cc

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.i"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/red-sea/COSSIM/hla/certi/test/utility/Main_SocketSHM.cc > CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.i

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.s"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/red-sea/COSSIM/hla/certi/test/utility/Main_SocketSHM.cc -o CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.s

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.requires:

.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.requires

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.provides: test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.requires
	$(MAKE) -f test/utility/CMakeFiles/CertiProcessus_B.dir/build.make test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.provides.build
.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.provides

test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.provides.build: test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o


# Object files for target CertiProcessus_B
CertiProcessus_B_OBJECTS = \
"CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o"

# External object files for target CertiProcessus_B
CertiProcessus_B_EXTERNAL_OBJECTS =

test/utility/CertiProcessus_B: test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o
test/utility/CertiProcessus_B: test/utility/CMakeFiles/CertiProcessus_B.dir/build.make
test/utility/CertiProcessus_B: libCERTI/libCERTId.so.4.0.0
test/utility/CertiProcessus_B: libHLA/libHLAd.so.4.0.0
test/utility/CertiProcessus_B: /usr/lib/x86_64-linux-gnu/librt.so
test/utility/CertiProcessus_B: /usr/lib/x86_64-linux-gnu/libxml2.so
test/utility/CertiProcessus_B: test/utility/CMakeFiles/CertiProcessus_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CertiProcessus_B"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CertiProcessus_B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/utility/CMakeFiles/CertiProcessus_B.dir/build: test/utility/CertiProcessus_B

.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/build

test/utility/CMakeFiles/CertiProcessus_B.dir/requires: test/utility/CMakeFiles/CertiProcessus_B.dir/Main_SocketSHM.cc.o.requires

.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/requires

test/utility/CMakeFiles/CertiProcessus_B.dir/clean:
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test/utility && $(CMAKE_COMMAND) -P CMakeFiles/CertiProcessus_B.dir/cmake_clean.cmake
.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/clean

test/utility/CMakeFiles/CertiProcessus_B.dir/depend:
	cd /home/red-sea/COSSIM/hla/certi/build-certi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/red-sea/COSSIM/hla/certi /home/red-sea/COSSIM/hla/certi/test/utility /home/red-sea/COSSIM/hla/certi/build-certi /home/red-sea/COSSIM/hla/certi/build-certi/test/utility /home/red-sea/COSSIM/hla/certi/build-certi/test/utility/CMakeFiles/CertiProcessus_B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/utility/CMakeFiles/CertiProcessus_B.dir/depend

