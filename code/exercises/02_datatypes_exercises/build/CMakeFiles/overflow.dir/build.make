# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1441/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1441/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build

# Include any dependencies generated for this target.
include CMakeFiles/overflow.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/overflow.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/overflow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/overflow.dir/flags.make

CMakeFiles/overflow.dir/codegen:
.PHONY : CMakeFiles/overflow.dir/codegen

CMakeFiles/overflow.dir/overflow.cpp.o: CMakeFiles/overflow.dir/flags.make
CMakeFiles/overflow.dir/overflow.cpp.o: /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source/overflow.cpp
CMakeFiles/overflow.dir/overflow.cpp.o: CMakeFiles/overflow.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/overflow.dir/overflow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/overflow.dir/overflow.cpp.o -MF CMakeFiles/overflow.dir/overflow.cpp.o.d -o CMakeFiles/overflow.dir/overflow.cpp.o -c /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source/overflow.cpp

CMakeFiles/overflow.dir/overflow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/overflow.dir/overflow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source/overflow.cpp > CMakeFiles/overflow.dir/overflow.cpp.i

CMakeFiles/overflow.dir/overflow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/overflow.dir/overflow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source/overflow.cpp -o CMakeFiles/overflow.dir/overflow.cpp.s

# Object files for target overflow
overflow_OBJECTS = \
"CMakeFiles/overflow.dir/overflow.cpp.o"

# External object files for target overflow
overflow_EXTERNAL_OBJECTS =

overflow: CMakeFiles/overflow.dir/overflow.cpp.o
overflow: CMakeFiles/overflow.dir/build.make
overflow: CMakeFiles/overflow.dir/compiler_depend.ts
overflow: CMakeFiles/overflow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable overflow"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/overflow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/overflow.dir/build: overflow
.PHONY : CMakeFiles/overflow.dir/build

CMakeFiles/overflow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/overflow.dir/cmake_clean.cmake
.PHONY : CMakeFiles/overflow.dir/clean

CMakeFiles/overflow.dir/depend:
	cd /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/source /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build /home/ffre/physics441-sose25-c-vorkurs/code/exercises/02_datatypes_exercises/build/CMakeFiles/overflow.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/overflow.dir/depend

