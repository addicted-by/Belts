# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BuildMapValueSet.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BuildMapValueSet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BuildMapValueSet.dir/flags.make

CMakeFiles/BuildMapValueSet.dir/main.cpp.obj: CMakeFiles/BuildMapValueSet.dir/flags.make
CMakeFiles/BuildMapValueSet.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BuildMapValueSet.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BuildMapValueSet.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\main.cpp

CMakeFiles/BuildMapValueSet.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BuildMapValueSet.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\main.cpp > CMakeFiles\BuildMapValueSet.dir\main.cpp.i

CMakeFiles/BuildMapValueSet.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BuildMapValueSet.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\main.cpp -o CMakeFiles\BuildMapValueSet.dir\main.cpp.s

# Object files for target BuildMapValueSet
BuildMapValueSet_OBJECTS = \
"CMakeFiles/BuildMapValueSet.dir/main.cpp.obj"

# External object files for target BuildMapValueSet
BuildMapValueSet_EXTERNAL_OBJECTS =

BuildMapValueSet.exe: CMakeFiles/BuildMapValueSet.dir/main.cpp.obj
BuildMapValueSet.exe: CMakeFiles/BuildMapValueSet.dir/build.make
BuildMapValueSet.exe: CMakeFiles/BuildMapValueSet.dir/linklibs.rsp
BuildMapValueSet.exe: CMakeFiles/BuildMapValueSet.dir/objects1.rsp
BuildMapValueSet.exe: CMakeFiles/BuildMapValueSet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BuildMapValueSet.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BuildMapValueSet.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BuildMapValueSet.dir/build: BuildMapValueSet.exe

.PHONY : CMakeFiles/BuildMapValueSet.dir/build

CMakeFiles/BuildMapValueSet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BuildMapValueSet.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BuildMapValueSet.dir/clean

CMakeFiles/BuildMapValueSet.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week2\set\BuildMapValueSet\cmake-build-debug\CMakeFiles\BuildMapValueSet.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BuildMapValueSet.dir/depend

