# CMake generated Testfile for 
# Source directory: /home/mc16766/tiago_public_ws/src/ros_controllers/joint_state_controller
# Build directory: /home/mc16766/tiago_public_ws/build/joint_state_controller
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_joint_state_controller_rostest_test_joint_state_controller.test "/home/mc16766/tiago_public_ws/build/joint_state_controller/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/mc16766/tiago_public_ws/build/joint_state_controller/test_results/joint_state_controller/rostest-test_joint_state_controller.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/mc16766/tiago_public_ws/src/ros_controllers/joint_state_controller --package=joint_state_controller --results-filename test_joint_state_controller.xml --results-base-dir \"/home/mc16766/tiago_public_ws/build/joint_state_controller/test_results\" /home/mc16766/tiago_public_ws/src/ros_controllers/joint_state_controller/test/joint_state_controller.test ")
SUBDIRS(gtest)
