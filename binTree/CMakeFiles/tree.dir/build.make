# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/dmitry/cpp/binTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dmitry/cpp/binTree

# Include any dependencies generated for this target.
include CMakeFiles/tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree.dir/flags.make

CMakeFiles/tree.dir/test.cpp.o: CMakeFiles/tree.dir/flags.make
CMakeFiles/tree.dir/test.cpp.o: test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dmitry/cpp/binTree/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tree.dir/test.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tree.dir/test.cpp.o -c /home/dmitry/cpp/binTree/test.cpp

CMakeFiles/tree.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree.dir/test.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dmitry/cpp/binTree/test.cpp > CMakeFiles/tree.dir/test.cpp.i

CMakeFiles/tree.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree.dir/test.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dmitry/cpp/binTree/test.cpp -o CMakeFiles/tree.dir/test.cpp.s

CMakeFiles/tree.dir/test.cpp.o.requires:
.PHONY : CMakeFiles/tree.dir/test.cpp.o.requires

CMakeFiles/tree.dir/test.cpp.o.provides: CMakeFiles/tree.dir/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/tree.dir/build.make CMakeFiles/tree.dir/test.cpp.o.provides.build
.PHONY : CMakeFiles/tree.dir/test.cpp.o.provides

CMakeFiles/tree.dir/test.cpp.o.provides.build: CMakeFiles/tree.dir/test.cpp.o

# Object files for target tree
tree_OBJECTS = \
"CMakeFiles/tree.dir/test.cpp.o"

# External object files for target tree
tree_EXTERNAL_OBJECTS =

tree: CMakeFiles/tree.dir/test.cpp.o
tree: CMakeFiles/tree.dir/build.make
tree: CMakeFiles/tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree.dir/build: tree
.PHONY : CMakeFiles/tree.dir/build

CMakeFiles/tree.dir/requires: CMakeFiles/tree.dir/test.cpp.o.requires
.PHONY : CMakeFiles/tree.dir/requires

CMakeFiles/tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree.dir/clean

CMakeFiles/tree.dir/depend:
	cd /home/dmitry/cpp/binTree && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dmitry/cpp/binTree /home/dmitry/cpp/binTree /home/dmitry/cpp/binTree /home/dmitry/cpp/binTree /home/dmitry/cpp/binTree/CMakeFiles/tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree.dir/depend

