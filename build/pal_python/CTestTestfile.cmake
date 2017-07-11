# CMake generated Testfile for 
# Source directory: /home/mc16766/tiago_public_ws/src/pal_python
# Build directory: /home/mc16766/tiago_public_ws/build/pal_python
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_pal_python_nosetests_test.test_shell_cmd.py "/home/mc16766/tiago_public_ws/build/pal_python/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/mc16766/tiago_public_ws/build/pal_python/test_results/pal_python/nosetests-test.test_shell_cmd.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/mc16766/tiago_public_ws/build/pal_python/test_results/pal_python" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/mc16766/tiago_public_ws/src/pal_python/test/test_shell_cmd.py --with-xunit --xunit-file=/home/mc16766/tiago_public_ws/build/pal_python/test_results/pal_python/nosetests-test.test_shell_cmd.py.xml")
SUBDIRS(gtest)
