# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/denjo/src/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/denjo/src/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/denjo/opencvgl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/denjo/opencvgl/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2-2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2-2.dir/flags.make

CMakeFiles/2-2.dir/2-2.cpp.o: CMakeFiles/2-2.dir/flags.make
CMakeFiles/2-2.dir/2-2.cpp.o: ../2-2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/denjo/opencvgl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2-2.dir/2-2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2-2.dir/2-2.cpp.o -c /home/denjo/opencvgl/2-2.cpp

CMakeFiles/2-2.dir/2-2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2-2.dir/2-2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/denjo/opencvgl/2-2.cpp > CMakeFiles/2-2.dir/2-2.cpp.i

CMakeFiles/2-2.dir/2-2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2-2.dir/2-2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/denjo/opencvgl/2-2.cpp -o CMakeFiles/2-2.dir/2-2.cpp.s

CMakeFiles/2-2.dir/2-2.cpp.o.requires:

.PHONY : CMakeFiles/2-2.dir/2-2.cpp.o.requires

CMakeFiles/2-2.dir/2-2.cpp.o.provides: CMakeFiles/2-2.dir/2-2.cpp.o.requires
	$(MAKE) -f CMakeFiles/2-2.dir/build.make CMakeFiles/2-2.dir/2-2.cpp.o.provides.build
.PHONY : CMakeFiles/2-2.dir/2-2.cpp.o.provides

CMakeFiles/2-2.dir/2-2.cpp.o.provides.build: CMakeFiles/2-2.dir/2-2.cpp.o


# Object files for target 2-2
2__2_OBJECTS = \
"CMakeFiles/2-2.dir/2-2.cpp.o"

# External object files for target 2-2
2__2_EXTERNAL_OBJECTS =

2-2: CMakeFiles/2-2.dir/2-2.cpp.o
2-2: CMakeFiles/2-2.dir/build.make
2-2: /usr/lib/x86_64-linux-gnu/libglut.so
2-2: /usr/lib/x86_64-linux-gnu/libXmu.so
2-2: /usr/lib/x86_64-linux-gnu/libXi.so
2-2: /usr/lib/x86_64-linux-gnu/libGLU.so
2-2: /usr/lib/x86_64-linux-gnu/libGL.so
2-2: CMakeFiles/2-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/denjo/opencvgl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2-2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2-2.dir/build: 2-2

.PHONY : CMakeFiles/2-2.dir/build

CMakeFiles/2-2.dir/requires: CMakeFiles/2-2.dir/2-2.cpp.o.requires

.PHONY : CMakeFiles/2-2.dir/requires

CMakeFiles/2-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2-2.dir/clean

CMakeFiles/2-2.dir/depend:
	cd /home/denjo/opencvgl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/denjo/opencvgl /home/denjo/opencvgl /home/denjo/opencvgl/cmake-build-debug /home/denjo/opencvgl/cmake-build-debug /home/denjo/opencvgl/cmake-build-debug/CMakeFiles/2-2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2-2.dir/depend

