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
CMAKE_SOURCE_DIR = /home/dmitry/cpp/Stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dmitry/cpp/Stack

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/main.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dmitry/cpp/Stack/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/stack.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/main.cpp.o -c /home/dmitry/cpp/Stack/main.cpp

CMakeFiles/stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dmitry/cpp/Stack/main.cpp > CMakeFiles/stack.dir/main.cpp.i

CMakeFiles/stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dmitry/cpp/Stack/main.cpp -o CMakeFiles/stack.dir/main.cpp.s

CMakeFiles/stack.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/stack.dir/main.cpp.o.requires

CMakeFiles/stack.dir/main.cpp.o.provides: CMakeFiles/stack.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/stack.dir/build.make CMakeFiles/stack.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/stack.dir/main.cpp.o.provides

CMakeFiles/stack.dir/main.cpp.o.provides.build: CMakeFiles/stack.dir/main.cpp.o

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/main.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/main.cpp.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack
.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/requires: CMakeFiles/stack.dir/main.cpp.o.requires
.PHONY : CMakeFiles/stack.dir/requires

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /home/dmitry/cpp/Stack && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dmitry/cpp/Stack /home/dmitry/cpp/Stack /home/dmitry/cpp/Stack /home/dmitry/cpp/Stack /home/dmitry/cpp/Stack/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend

