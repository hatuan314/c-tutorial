# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tuanha/Work/KIT/C_lang/c-tutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/example22.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example22.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example22.dir/flags.make

CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o: CMakeFiles/example22.dir/flags.make
CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o: ../Homeworks/homework_2nd/example22.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o -c /Users/tuanha/Work/KIT/C_lang/c-tutorial/Homeworks/homework_2nd/example22.c

CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/tuanha/Work/KIT/C_lang/c-tutorial/Homeworks/homework_2nd/example22.c > CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.i

CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/tuanha/Work/KIT/C_lang/c-tutorial/Homeworks/homework_2nd/example22.c -o CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.s

# Object files for target example22
example22_OBJECTS = \
"CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o"

# External object files for target example22
example22_EXTERNAL_OBJECTS =

example22: CMakeFiles/example22.dir/Homeworks/homework_2nd/example22.c.o
example22: CMakeFiles/example22.dir/build.make
example22: CMakeFiles/example22.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable example22"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example22.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example22.dir/build: example22

.PHONY : CMakeFiles/example22.dir/build

CMakeFiles/example22.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example22.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example22.dir/clean

CMakeFiles/example22.dir/depend:
	cd /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tuanha/Work/KIT/C_lang/c-tutorial /Users/tuanha/Work/KIT/C_lang/c-tutorial /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles/example22.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example22.dir/depend

