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
CMAKE_SOURCE_DIR = "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/_Sur_names.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_Sur_names.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_Sur_names.dir/flags.make

CMakeFiles/_Sur_names.dir/main.cpp.obj: CMakeFiles/_Sur_names.dir/flags.make
CMakeFiles/_Sur_names.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_Sur_names.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\_Sur_names.dir\main.cpp.obj -c "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\main.cpp"

CMakeFiles/_Sur_names.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_Sur_names.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\main.cpp" > CMakeFiles\_Sur_names.dir\main.cpp.i

CMakeFiles/_Sur_names.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_Sur_names.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\main.cpp" -o CMakeFiles\_Sur_names.dir\main.cpp.s

# Object files for target _Sur_names
_Sur_names_OBJECTS = \
"CMakeFiles/_Sur_names.dir/main.cpp.obj"

# External object files for target _Sur_names
_Sur_names_EXTERNAL_OBJECTS =

_Sur_names.exe: CMakeFiles/_Sur_names.dir/main.cpp.obj
_Sur_names.exe: CMakeFiles/_Sur_names.dir/build.make
_Sur_names.exe: CMakeFiles/_Sur_names.dir/linklibs.rsp
_Sur_names.exe: CMakeFiles/_Sur_names.dir/objects1.rsp
_Sur_names.exe: CMakeFiles/_Sur_names.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _Sur_names.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_Sur_names.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_Sur_names.dir/build: _Sur_names.exe

.PHONY : CMakeFiles/_Sur_names.dir/build

CMakeFiles/_Sur_names.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_Sur_names.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_Sur_names.dir/clean

CMakeFiles/_Sur_names.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names" "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names" "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug" "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug" "C:\Users\User\CLionProjects\Coursera\White\Week3\Tasks\Introduction to structures and classes\names\cmake-build-debug\CMakeFiles\_Sur_names.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/_Sur_names.dir/depend
