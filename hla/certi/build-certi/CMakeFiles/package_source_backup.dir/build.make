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

# Utility rule file for package_source_backup.

# Include the progress variables for this target.
include CMakeFiles/package_source_backup.dir/progress.make

CMakeFiles/package_source_backup:
	/usr/bin/cmake -P /home/red-sea/COSSIM/hla/certi/build-certi/PackageBackup.cmake

package_source_backup: CMakeFiles/package_source_backup
package_source_backup: CMakeFiles/package_source_backup.dir/build.make

.PHONY : package_source_backup

# Rule to build all files generated by this target.
CMakeFiles/package_source_backup.dir/build: package_source_backup

.PHONY : CMakeFiles/package_source_backup.dir/build

CMakeFiles/package_source_backup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/package_source_backup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/package_source_backup.dir/clean

CMakeFiles/package_source_backup.dir/depend:
	cd /home/red-sea/COSSIM/hla/certi/build-certi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/red-sea/COSSIM/hla/certi /home/red-sea/COSSIM/hla/certi /home/red-sea/COSSIM/hla/certi/build-certi /home/red-sea/COSSIM/hla/certi/build-certi /home/red-sea/COSSIM/hla/certi/build-certi/CMakeFiles/package_source_backup.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/package_source_backup.dir/depend

