# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Acer\CLionProjects\untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Acer\CLionProjects\untitled\cmake-build-debug

# Include any dependencies generated for this target.
include allocation_basics/CMakeFiles/allocation_basics.dir/depend.make
# Include the progress variables for this target.
include allocation_basics/CMakeFiles/allocation_basics.dir/progress.make

# Include the compile flags for this target's objects.
include allocation_basics/CMakeFiles/allocation_basics.dir/flags.make

allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.obj: allocation_basics/CMakeFiles/allocation_basics.dir/flags.make
allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.obj: ../allocation_basics/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.obj"
	cd /d C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\allocation_basics.dir\main.cpp.obj -c C:\Users\Acer\CLionProjects\untitled\allocation_basics\main.cpp

allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/allocation_basics.dir/main.cpp.i"
	cd /d C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Acer\CLionProjects\untitled\allocation_basics\main.cpp > CMakeFiles\allocation_basics.dir\main.cpp.i

allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/allocation_basics.dir/main.cpp.s"
	cd /d C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Acer\CLionProjects\untitled\allocation_basics\main.cpp -o CMakeFiles\allocation_basics.dir\main.cpp.s

# Object files for target allocation_basics
allocation_basics_OBJECTS = \
"CMakeFiles/allocation_basics.dir/main.cpp.obj"

# External object files for target allocation_basics
allocation_basics_EXTERNAL_OBJECTS =

allocation_basics/allocation_basics.exe: allocation_basics/CMakeFiles/allocation_basics.dir/main.cpp.obj
allocation_basics/allocation_basics.exe: allocation_basics/CMakeFiles/allocation_basics.dir/build.make
allocation_basics/allocation_basics.exe: allocation_basics/CMakeFiles/allocation_basics.dir/linklibs.rsp
allocation_basics/allocation_basics.exe: allocation_basics/CMakeFiles/allocation_basics.dir/objects1.rsp
allocation_basics/allocation_basics.exe: allocation_basics/CMakeFiles/allocation_basics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable allocation_basics.exe"
	cd /d C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\allocation_basics.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
allocation_basics/CMakeFiles/allocation_basics.dir/build: allocation_basics/allocation_basics.exe
.PHONY : allocation_basics/CMakeFiles/allocation_basics.dir/build

allocation_basics/CMakeFiles/allocation_basics.dir/clean:
	cd /d C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics && $(CMAKE_COMMAND) -P CMakeFiles\allocation_basics.dir\cmake_clean.cmake
.PHONY : allocation_basics/CMakeFiles/allocation_basics.dir/clean

allocation_basics/CMakeFiles/allocation_basics.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Acer\CLionProjects\untitled C:\Users\Acer\CLionProjects\untitled\allocation_basics C:\Users\Acer\CLionProjects\untitled\cmake-build-debug C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics C:\Users\Acer\CLionProjects\untitled\cmake-build-debug\allocation_basics\CMakeFiles\allocation_basics.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : allocation_basics/CMakeFiles/allocation_basics.dir/depend

