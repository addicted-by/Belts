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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestsRational.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestsRational.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestsRational.dir/flags.make

CMakeFiles/TestsRational.dir/main.cpp.obj: CMakeFiles/TestsRational.dir/flags.make
CMakeFiles/TestsRational.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestsRational.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TestsRational.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\main.cpp

CMakeFiles/TestsRational.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestsRational.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\main.cpp > CMakeFiles\TestsRational.dir\main.cpp.i

CMakeFiles/TestsRational.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestsRational.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\main.cpp -o CMakeFiles\TestsRational.dir\main.cpp.s

# Object files for target TestsRational
TestsRational_OBJECTS = \
"CMakeFiles/TestsRational.dir/main.cpp.obj"

# External object files for target TestsRational
TestsRational_EXTERNAL_OBJECTS =

TestsRational.exe: CMakeFiles/TestsRational.dir/main.cpp.obj
TestsRational.exe: CMakeFiles/TestsRational.dir/build.make
TestsRational.exe: CMakeFiles/TestsRational.dir/linklibs.rsp
TestsRational.exe: CMakeFiles/TestsRational.dir/objects1.rsp
TestsRational.exe: CMakeFiles/TestsRational.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestsRational.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TestsRational.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestsRational.dir/build: TestsRational.exe

.PHONY : CMakeFiles/TestsRational.dir/build

CMakeFiles/TestsRational.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TestsRational.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TestsRational.dir/clean

CMakeFiles/TestsRational.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week2\Assignments\TestsRational\cmake-build-debug\CMakeFiles\TestsRational.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestsRational.dir/depend

