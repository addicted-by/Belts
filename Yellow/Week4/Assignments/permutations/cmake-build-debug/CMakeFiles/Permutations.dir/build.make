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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Permutations.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Permutations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Permutations.dir/flags.make

CMakeFiles/Permutations.dir/main.cpp.obj: CMakeFiles/Permutations.dir/flags.make
CMakeFiles/Permutations.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Permutations.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Permutations.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\main.cpp

CMakeFiles/Permutations.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Permutations.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\main.cpp > CMakeFiles\Permutations.dir\main.cpp.i

CMakeFiles/Permutations.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Permutations.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\main.cpp -o CMakeFiles\Permutations.dir\main.cpp.s

# Object files for target Permutations
Permutations_OBJECTS = \
"CMakeFiles/Permutations.dir/main.cpp.obj"

# External object files for target Permutations
Permutations_EXTERNAL_OBJECTS =

Permutations.exe: CMakeFiles/Permutations.dir/main.cpp.obj
Permutations.exe: CMakeFiles/Permutations.dir/build.make
Permutations.exe: CMakeFiles/Permutations.dir/linklibs.rsp
Permutations.exe: CMakeFiles/Permutations.dir/objects1.rsp
Permutations.exe: CMakeFiles/Permutations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Permutations.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Permutations.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Permutations.dir/build: Permutations.exe

.PHONY : CMakeFiles/Permutations.dir/build

CMakeFiles/Permutations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Permutations.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Permutations.dir/clean

CMakeFiles/Permutations.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week4\Assignments\Permutations\cmake-build-debug\CMakeFiles\Permutations.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Permutations.dir/depend

