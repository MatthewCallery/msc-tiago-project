# CMake generated Testfile for 
# Source directory: /home/mc16766/tiago_public_ws/src/ros_control/controller_manager
# Build directory: /home/mc16766/tiago_public_ws/build/controller_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_controller_manager_rostest_test_hwi_switch_test.test "/home/mc16766/tiago_public_ws/build/controller_manager/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/mc16766/tiago_public_ws/build/controller_manager/test_results/controller_manager/rostest-test_hwi_switch_test.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/mc16766/tiago_public_ws/src/ros_control/controller_manager --package=controller_manager --results-filename test_hwi_switch_test.xml --results-base-dir \"/home/mc16766/tiago_public_ws/build/controller_manager/test_results\" /home/mc16766/tiago_public_ws/src/ros_control/controller_manager/test/hwi_switch_test.test ")
SUBDIRS(gtest)
