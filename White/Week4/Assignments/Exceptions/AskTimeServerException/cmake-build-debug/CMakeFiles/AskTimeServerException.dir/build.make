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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AskTimeServerException.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AskTimeServerException.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AskTimeServerException.dir/flags.make

CMakeFiles/AskTimeServerException.dir/main.cpp.obj: CMakeFiles/AskTimeServerException.dir/flags.make
CMakeFiles/AskTimeServerException.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AskTimeServerException.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AskTimeServerException.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\main.cpp

CMakeFiles/AskTimeServerException.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AskTimeServerException.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\main.cpp > CMakeFiles\AskTimeServerException.dir\main.cpp.i

CMakeFiles/AskTimeServerException.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AskTimeServerException.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\main.cpp -o CMakeFiles\AskTimeServerException.dir\main.cpp.s

# Object files for target AskTimeServerException
AskTimeServerException_OBJECTS = \
"CMakeFiles/AskTimeServerException.dir/main.cpp.obj"

# External object files for target AskTimeServerException
AskTimeServerException_EXTERNAL_OBJECTS =

AskTimeServerException.exe: CMakeFiles/AskTimeServerException.dir/main.cpp.obj
AskTimeServerException.exe: CMakeFiles/AskTimeServerException.dir/build.make
AskTimeServerException.exe: CMakeFiles/AskTimeServerException.dir/linklibs.rsp
AskTimeServerException.exe: CMakeFiles/AskTimeServerException.dir/objects1.rsp
AskTimeServerException.exe: CMakeFiles/AskTimeServerException.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AskTimeServerException.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AskTimeServerException.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AskTimeServerException.dir/build: AskTimeServerException.exe

.PHONY : CMakeFiles/AskTimeServerException.dir/build

CMakeFiles/AskTimeServerException.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AskTimeServerException.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AskTimeServerException.dir/clean

CMakeFiles/AskTimeServerException.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week4\Assignments\Exceptions\AskTimeServerException\cmake-build-debug\CMakeFiles\AskTimeServerException.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AskTimeServerException.dir/depend

