### OpenCV算法精解 示例代码

![封面](cover.jpg)

#### ubuntu上安装opencv

- 安装C++的opencv开发包
    ```
    $ sudo apt install libopencv-dev 
    ```

- 安装python3的opencv开发包
    ```
    $ sudo apt install python3-opencv
    ```


#### ubuntu上源码编译opencv

- 安装依赖
    ```
    $ sudo apt-get update
    $ sudo apt-get install -y --no-install-recommends build-essential cmake libavcodec-dev libavformat-dev libgtk2.0-dev libgtkglext1 libgtkglext1-dev libjpeg-dev  libpng-dev libswscale-dev libtbb2 libtbb-dev libtiff-dev pkg-config unzip wget
    ```

- 下载代码
    ```
    $ git clone https://github.com/opencv/opencv.git
    $ cd opencv
    ```

- 编译opencv2
    ```
    $ git checkout v2.4
    $ cmake -H. -Bbuild -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=~/local/opencv2 -DWITH_OPENEXR=OFF -DWITH_OPENMP=OFF -DWITH_OPENCL=OFF -DBUILD_EXAMPLES=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_TESTS=OFF -DBUILD_WITH_DEBUG_INFO=ON -DBUILD_opencv_apps=OFF
    $ cmake --build build --target install -- -j 7
    ```

- 编译opencv3
    ```
    $ git checkout v3.4
    cmake -H. -Bbuild -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=~/local/opencv3 -DWITH_IPP=OFF -DWITH_OPENCL=OFF -DBUILD_EXAMPLES=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_TESTS=OFF -DBUILD_opencv_apps=OFF
    cmake --build build --target install -- -j 7
    ```
