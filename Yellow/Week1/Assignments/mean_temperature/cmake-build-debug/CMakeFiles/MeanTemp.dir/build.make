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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MeanTemp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MeanTemp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MeanTemp.dir/flags.make

CMakeFiles/MeanTemp.dir/main.cpp.obj: CMakeFiles/MeanTemp.dir/flags.make
CMakeFiles/MeanTemp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MeanTemp.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MeanTemp.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\main.cpp

CMakeFiles/MeanTemp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeanTemp.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\main.cpp > CMakeFiles\MeanTemp.dir\main.cpp.i

CMakeFiles/MeanTemp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeanTemp.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\main.cpp -o CMakeFiles\MeanTemp.dir\main.cpp.s

# Object files for target MeanTemp
MeanTemp_OBJECTS = \
"CMakeFiles/MeanTemp.dir/main.cpp.obj"

# External object files for target MeanTemp
MeanTemp_EXTERNAL_OBJECTS =

MeanTemp.exe: CMakeFiles/MeanTemp.dir/main.cpp.obj
MeanTemp.exe: CMakeFiles/MeanTemp.dir/build.make
MeanTemp.exe: CMakeFiles/MeanTemp.dir/linklibs.rsp
MeanTemp.exe: CMakeFiles/MeanTemp.dir/objects1.rsp
MeanTemp.exe: CMakeFiles/MeanTemp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MeanTemp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MeanTemp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MeanTemp.dir/build: MeanTemp.exe

.PHONY : CMakeFiles/MeanTemp.dir/build

CMakeFiles/MeanTemp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MeanTemp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MeanTemp.dir/clean

CMakeFiles/MeanTemp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug C:\Users\User\CLionProjects\Coursera\Yellow\Week1\Assignments\MeanTemp\cmake-build-debug\CMakeFiles\MeanTemp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MeanTemp.dir/depend

