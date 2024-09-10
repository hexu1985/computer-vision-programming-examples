rm -rf ./build
cmake -H. -Bbuild -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=~/local/opencv3 -DWITH_IPP=OFF -DWITH_OPENCL=OFF -DBUILD_EXAMPLES=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_TESTS=OFF -DBUILD_opencv_apps=OFF
cmake --build build --target install -- -j 7
