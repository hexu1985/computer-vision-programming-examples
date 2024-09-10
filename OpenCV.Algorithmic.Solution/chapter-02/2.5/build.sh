mkdir build
cd build
#OpenCV_DIR=~/local/lib/cmake/opencv4 cmake ..
cmake -DCMAKE_BUILD_TYPE=Release -DOpenCV_DIR=~/local/opencv3/share/OpenCV ..
#cmake ..
cmake --build .
