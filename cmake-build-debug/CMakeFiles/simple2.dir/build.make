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
include CMakeFiles/simple2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple2.dir/flags.make

CMakeFiles/simple2.dir/ss1_intro/simple2.c.o: CMakeFiles/simple2.dir/flags.make
CMakeFiles/simple2.dir/ss1_intro/simple2.c.o: ../ss1_intro/simple2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/simple2.dir/ss1_intro/simple2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/simple2.dir/ss1_intro/simple2.c.o -c /Users/tuanha/Work/KIT/C_lang/c-tutorial/ss1_intro/simple2.c

CMakeFiles/simple2.dir/ss1_intro/simple2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simple2.dir/ss1_intro/simple2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/tuanha/Work/KIT/C_lang/c-tutorial/ss1_intro/simple2.c > CMakeFiles/simple2.dir/ss1_intro/simple2.c.i

CMakeFiles/simple2.dir/ss1_intro/simple2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simple2.dir/ss1_intro/simple2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/tuanha/Work/KIT/C_lang/c-tutorial/ss1_intro/simple2.c -o CMakeFiles/simple2.dir/ss1_intro/simple2.c.s

# Object files for target simple2
simple2_OBJECTS = \
"CMakeFiles/simple2.dir/ss1_intro/simple2.c.o"

# External object files for target simple2
simple2_EXTERNAL_OBJECTS =

simple2: CMakeFiles/simple2.dir/ss1_intro/simple2.c.o
simple2: CMakeFiles/simple2.dir/build.make
simple2: CMakeFiles/simple2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable simple2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple2.dir/build: simple2

.PHONY : CMakeFiles/simple2.dir/build

CMakeFiles/simple2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple2.dir/clean

CMakeFiles/simple2.dir/depend:
	cd /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tuanha/Work/KIT/C_lang/c-tutorial /Users/tuanha/Work/KIT/C_lang/c-tutorial /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug /Users/tuanha/Work/KIT/C_lang/c-tutorial/cmake-build-debug/CMakeFiles/simple2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple2.dir/depend

