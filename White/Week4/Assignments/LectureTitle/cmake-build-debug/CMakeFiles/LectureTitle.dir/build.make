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
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LectureTitle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LectureTitle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LectureTitle.dir/flags.make

CMakeFiles/LectureTitle.dir/main.cpp.obj: CMakeFiles/LectureTitle.dir/flags.make
CMakeFiles/LectureTitle.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LectureTitle.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LectureTitle.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\main.cpp

CMakeFiles/LectureTitle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LectureTitle.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\main.cpp > CMakeFiles\LectureTitle.dir\main.cpp.i

CMakeFiles/LectureTitle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LectureTitle.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\main.cpp -o CMakeFiles\LectureTitle.dir\main.cpp.s

# Object files for target LectureTitle
LectureTitle_OBJECTS = \
"CMakeFiles/LectureTitle.dir/main.cpp.obj"

# External object files for target LectureTitle
LectureTitle_EXTERNAL_OBJECTS =

LectureTitle.exe: CMakeFiles/LectureTitle.dir/main.cpp.obj
LectureTitle.exe: CMakeFiles/LectureTitle.dir/build.make
LectureTitle.exe: CMakeFiles/LectureTitle.dir/linklibs.rsp
LectureTitle.exe: CMakeFiles/LectureTitle.dir/objects1.rsp
LectureTitle.exe: CMakeFiles/LectureTitle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LectureTitle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LectureTitle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LectureTitle.dir/build: LectureTitle.exe

.PHONY : CMakeFiles/LectureTitle.dir/build

CMakeFiles/LectureTitle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LectureTitle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LectureTitle.dir/clean

CMakeFiles/LectureTitle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug C:\Users\User\CLionProjects\Coursera\White\Week4\LectureTitle\cmake-build-debug\CMakeFiles\LectureTitle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LectureTitle.dir/depend

