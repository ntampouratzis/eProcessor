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
include test/CMakeFiles/CertiCheckHostAndIP.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/CertiCheckHostAndIP.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/CertiCheckHostAndIP.dir/flags.make

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o: test/CMakeFiles/CertiCheckHostAndIP.dir/flags.make
test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o: ../test/certiCheckHostAndIP.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test && /usr/bin/cc $(C_DEFINES) -DLINUX $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o   -c /home/red-sea/COSSIM/hla/certi/test/certiCheckHostAndIP.c

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.i"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test && /usr/bin/cc $(C_DEFINES) -DLINUX $(C_INCLUDES) $(C_FLAGS) -E /home/red-sea/COSSIM/hla/certi/test/certiCheckHostAndIP.c > CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.i

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.s"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test && /usr/bin/cc $(C_DEFINES) -DLINUX $(C_INCLUDES) $(C_FLAGS) -S /home/red-sea/COSSIM/hla/certi/test/certiCheckHostAndIP.c -o CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.s

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.requires:

.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.requires

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.provides: test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.requires
	$(MAKE) -f test/CMakeFiles/CertiCheckHostAndIP.dir/build.make test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.provides.build
.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.provides

test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.provides.build: test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o


# Object files for target CertiCheckHostAndIP
CertiCheckHostAndIP_OBJECTS = \
"CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o"

# External object files for target CertiCheckHostAndIP
CertiCheckHostAndIP_EXTERNAL_OBJECTS =

test/CertiCheckHostAndIP: test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o
test/CertiCheckHostAndIP: test/CMakeFiles/CertiCheckHostAndIP.dir/build.make
test/CertiCheckHostAndIP: test/CMakeFiles/CertiCheckHostAndIP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CertiCheckHostAndIP"
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CertiCheckHostAndIP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/CertiCheckHostAndIP.dir/build: test/CertiCheckHostAndIP

.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/build

test/CMakeFiles/CertiCheckHostAndIP.dir/requires: test/CMakeFiles/CertiCheckHostAndIP.dir/certiCheckHostAndIP.c.o.requires

.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/requires

test/CMakeFiles/CertiCheckHostAndIP.dir/clean:
	cd /home/red-sea/COSSIM/hla/certi/build-certi/test && $(CMAKE_COMMAND) -P CMakeFiles/CertiCheckHostAndIP.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/clean

test/CMakeFiles/CertiCheckHostAndIP.dir/depend:
	cd /home/red-sea/COSSIM/hla/certi/build-certi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/red-sea/COSSIM/hla/certi /home/red-sea/COSSIM/hla/certi/test /home/red-sea/COSSIM/hla/certi/build-certi /home/red-sea/COSSIM/hla/certi/build-certi/test /home/red-sea/COSSIM/hla/certi/build-certi/test/CMakeFiles/CertiCheckHostAndIP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/CertiCheckHostAndIP.dir/depend
