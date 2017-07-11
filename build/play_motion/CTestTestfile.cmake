# CMake generated Testfile for 
# Source directory: /home/mc16766/tiago_public_ws/src/play_motion/play_motion
# Build directory: /home/mc16766/tiago_public_ws/build/play_motion
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_play_motion_rostest_test_play_motion.test "/home/mc16766/tiago_public_ws/build/play_motion/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/mc16766/tiago_public_ws/build/play_motion/test_results/play_motion/rostest-test_play_motion.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/mc16766/tiago_public_ws/src/play_motion/play_motion --package=play_motion --results-filename test_play_motion.xml --results-base-dir \"/home/mc16766/tiago_public_ws/build/play_motion/test_results\" /home/mc16766/tiago_public_ws/src/play_motion/play_motion/test/play_motion.test ")
ADD_TEST(_ctest_play_motion_rostest_test_play_motion_helpers.test "/home/mc16766/tiago_public_ws/build/play_motion/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/mc16766/tiago_public_ws/build/play_motion/test_results/play_motion/rostest-test_play_motion_helpers.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/mc16766/tiago_public_ws/src/play_motion/play_motion --package=play_motion --results-filename test_play_motion_helpers.xml --results-base-dir \"/home/mc16766/tiago_public_ws/build/play_motion/test_results\" /home/mc16766/tiago_public_ws/src/play_motion/play_motion/test/play_motion_helpers.test ")
SUBDIRS(gtest)
