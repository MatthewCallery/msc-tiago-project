#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/mc16766/tiago_public_ws/src/ddynamic_reconfigure_python"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/mc16766/tiago_public_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/mc16766/tiago_public_ws/install/lib/python2.7/dist-packages:/home/mc16766/tiago_public_ws/build/ddynamic_reconfigure_python/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/mc16766/tiago_public_ws/build/ddynamic_reconfigure_python" \
    "/usr/bin/python" \
    "/home/mc16766/tiago_public_ws/src/ddynamic_reconfigure_python/setup.py" \
    build --build-base "/home/mc16766/tiago_public_ws/build/ddynamic_reconfigure_python" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/mc16766/tiago_public_ws/install" --install-scripts="/home/mc16766/tiago_public_ws/install/bin"
