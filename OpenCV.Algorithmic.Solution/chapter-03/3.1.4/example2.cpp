#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat s = (Mat_<float>(3,3) << 0.5, 0, 0, 0, 0.5, 0, 0, 0, 1);    // 缩放矩阵
    Mat t = (Mat_<float>(3,3) << 1, 0, 100, 0, 1, 200, 0, 0, 1);    // 平移矩阵
    Mat A;
    gemm(t, s, 1.0, Mat(), 0, A, 0);    // 矩阵相乘
    cout << A << endl;

    return 0;
}
