# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Desktop/Project/C/inf_labs/rk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Desktop/Project/C/inf_labs/rk

# Include any dependencies generated for this target.
include CMakeFiles/rk.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rk.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rk.dir/flags.make

CMakeFiles/rk.dir/main.c.o: CMakeFiles/rk.dir/flags.make
CMakeFiles/rk.dir/main.c.o: main.c
CMakeFiles/rk.dir/main.c.o: CMakeFiles/rk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Desktop/Project/C/inf_labs/rk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rk.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rk.dir/main.c.o -MF CMakeFiles/rk.dir/main.c.o.d -o CMakeFiles/rk.dir/main.c.o -c /Users/mac/Desktop/Project/C/inf_labs/rk/main.c

CMakeFiles/rk.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rk.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac/Desktop/Project/C/inf_labs/rk/main.c > CMakeFiles/rk.dir/main.c.i

CMakeFiles/rk.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rk.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac/Desktop/Project/C/inf_labs/rk/main.c -o CMakeFiles/rk.dir/main.c.s

CMakeFiles/rk.dir/args_check.c.o: CMakeFiles/rk.dir/flags.make
CMakeFiles/rk.dir/args_check.c.o: args_check.c
CMakeFiles/rk.dir/args_check.c.o: CMakeFiles/rk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Desktop/Project/C/inf_labs/rk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/rk.dir/args_check.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rk.dir/args_check.c.o -MF CMakeFiles/rk.dir/args_check.c.o.d -o CMakeFiles/rk.dir/args_check.c.o -c /Users/mac/Desktop/Project/C/inf_labs/rk/args_check.c

CMakeFiles/rk.dir/args_check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rk.dir/args_check.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac/Desktop/Project/C/inf_labs/rk/args_check.c > CMakeFiles/rk.dir/args_check.c.i

CMakeFiles/rk.dir/args_check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rk.dir/args_check.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac/Desktop/Project/C/inf_labs/rk/args_check.c -o CMakeFiles/rk.dir/args_check.c.s

# Object files for target rk
rk_OBJECTS = \
"CMakeFiles/rk.dir/main.c.o" \
"CMakeFiles/rk.dir/args_check.c.o"

# External object files for target rk
rk_EXTERNAL_OBJECTS =

rk: CMakeFiles/rk.dir/main.c.o
rk: CMakeFiles/rk.dir/args_check.c.o
rk: CMakeFiles/rk.dir/build.make
rk: /Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/lib/libcurses.tbd
rk: /Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/lib/libform.tbd
rk: CMakeFiles/rk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Desktop/Project/C/inf_labs/rk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable rk"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rk.dir/build: rk
.PHONY : CMakeFiles/rk.dir/build

CMakeFiles/rk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rk.dir/clean

CMakeFiles/rk.dir/depend:
	cd /Users/mac/Desktop/Project/C/inf_labs/rk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Desktop/Project/C/inf_labs/rk /Users/mac/Desktop/Project/C/inf_labs/rk /Users/mac/Desktop/Project/C/inf_labs/rk /Users/mac/Desktop/Project/C/inf_labs/rk /Users/mac/Desktop/Project/C/inf_labs/rk/CMakeFiles/rk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rk.dir/depend

