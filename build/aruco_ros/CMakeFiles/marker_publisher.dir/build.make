# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mc16766/tiago_public_ws/build/aruco_ros

# Include any dependencies generated for this target.
include CMakeFiles/marker_publisher.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/marker_publisher.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/marker_publisher.dir/flags.make

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o: CMakeFiles/marker_publisher.dir/flags.make
CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o: /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/marker_publish.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mc16766/tiago_public_ws/build/aruco_ros/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o -c /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/marker_publish.cpp

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/marker_publish.cpp > CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.i

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/marker_publish.cpp -o CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.s

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.requires:
.PHONY : CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.requires

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.provides: CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.requires
	$(MAKE) -f CMakeFiles/marker_publisher.dir/build.make CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.provides.build
.PHONY : CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.provides

CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.provides.build: CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o: CMakeFiles/marker_publisher.dir/flags.make
CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o: /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/aruco_ros_utils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mc16766/tiago_public_ws/build/aruco_ros/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o -c /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/aruco_ros_utils.cpp

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/aruco_ros_utils.cpp > CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.i

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros/src/aruco_ros_utils.cpp -o CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.s

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.requires:
.PHONY : CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.requires

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.provides: CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/marker_publisher.dir/build.make CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.provides.build
.PHONY : CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.provides

CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.provides.build: CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o

# Object files for target marker_publisher
marker_publisher_OBJECTS = \
"CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o" \
"CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o"

# External object files for target marker_publisher
marker_publisher_EXTERNAL_OBJECTS =

/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: CMakeFiles/marker_publisher.dir/build.make
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libcv_bridge.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libdynamic_reconfigure_config_init_mutex.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libimage_transport.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libclass_loader.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/libPocoFoundation.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libdl.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libroslib.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/librospack.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libtf.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libtf2_ros.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libactionlib.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libmessage_filters.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libroscpp.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libtf2.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/librosconsole.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/liblog4cxx.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /home/mc16766/tiago_public_ws/devel/.private/aruco/lib/libaruco.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/librostime.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /opt/ros/indigo/lib/libcpp_common.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher: CMakeFiles/marker_publisher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/marker_publisher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/marker_publisher.dir/build: /home/mc16766/tiago_public_ws/devel/.private/aruco_ros/lib/aruco_ros/marker_publisher
.PHONY : CMakeFiles/marker_publisher.dir/build

CMakeFiles/marker_publisher.dir/requires: CMakeFiles/marker_publisher.dir/src/marker_publish.cpp.o.requires
CMakeFiles/marker_publisher.dir/requires: CMakeFiles/marker_publisher.dir/src/aruco_ros_utils.cpp.o.requires
.PHONY : CMakeFiles/marker_publisher.dir/requires

CMakeFiles/marker_publisher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/marker_publisher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/marker_publisher.dir/clean

CMakeFiles/marker_publisher.dir/depend:
	cd /home/mc16766/tiago_public_ws/build/aruco_ros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros /home/mc16766/tiago_public_ws/src/aruco_ros/aruco_ros /home/mc16766/tiago_public_ws/build/aruco_ros /home/mc16766/tiago_public_ws/build/aruco_ros /home/mc16766/tiago_public_ws/build/aruco_ros/CMakeFiles/marker_publisher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/marker_publisher.dir/depend
