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
include CMakeFiles/1-1-gaussian.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1-1-gaussian.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1-1-gaussian.dir/flags.make

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o: CMakeFiles/1-1-gaussian.dir/flags.make
CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o: ../1-1-gaussian.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/denjo/opencvgl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o -c /home/denjo/opencvgl/1-1-gaussian.cpp

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/denjo/opencvgl/1-1-gaussian.cpp > CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.i

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/denjo/opencvgl/1-1-gaussian.cpp -o CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.s

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.requires:

.PHONY : CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.requires

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.provides: CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.requires
	$(MAKE) -f CMakeFiles/1-1-gaussian.dir/build.make CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.provides.build
.PHONY : CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.provides

CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.provides.build: CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o


# Object files for target 1-1-gaussian
1__1__gaussian_OBJECTS = \
"CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o"

# External object files for target 1-1-gaussian
1__1__gaussian_EXTERNAL_OBJECTS =

1-1-gaussian: CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o
1-1-gaussian: CMakeFiles/1-1-gaussian.dir/build.make
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_videostab.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_ts.a
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_superres.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_stitching.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_contrib.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_nonfree.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_ocl.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_gpu.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_photo.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_objdetect.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_legacy.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_video.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_ml.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_calib3d.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_features2d.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_highgui.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_imgproc.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_flann.so.2.4.9
1-1-gaussian: /home/denjo/opencv-2.4.9/release/lib/libopencv_core.so.2.4.9
1-1-gaussian: CMakeFiles/1-1-gaussian.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/denjo/opencvgl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1-1-gaussian"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1-1-gaussian.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1-1-gaussian.dir/build: 1-1-gaussian

.PHONY : CMakeFiles/1-1-gaussian.dir/build

CMakeFiles/1-1-gaussian.dir/requires: CMakeFiles/1-1-gaussian.dir/1-1-gaussian.cpp.o.requires

.PHONY : CMakeFiles/1-1-gaussian.dir/requires

CMakeFiles/1-1-gaussian.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1-1-gaussian.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1-1-gaussian.dir/clean

CMakeFiles/1-1-gaussian.dir/depend:
	cd /home/denjo/opencvgl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/denjo/opencvgl /home/denjo/opencvgl /home/denjo/opencvgl/cmake-build-debug /home/denjo/opencvgl/cmake-build-debug /home/denjo/opencvgl/cmake-build-debug/CMakeFiles/1-1-gaussian.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1-1-gaussian.dir/depend

