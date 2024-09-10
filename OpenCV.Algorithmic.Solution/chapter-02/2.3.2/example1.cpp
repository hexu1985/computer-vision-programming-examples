#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src1 = (Mat_<uchar>(2, 3) << 23, 123, 90, 100, 250, 0);
    Mat src2 = (Mat_<uchar>(2, 3) << 125, 150, 60, 100, 10, 40);

    {
        Mat dst = src1 - src2;
        cout << dst << endl;
    }

    {
        float value = 100.0;
        Mat dst1 = src1 - value;
        cout << dst1 << endl;
    }

    {
        Mat dst;
        subtract(src1, src2, dst, Mat(), CV_64FC1);
        cout << dst << endl;
    }

    Vec3f v1 = Vec3f(1, 2, 3);
    Vec3f v2 = Vec3f(10, 1, 12);
    Vec3f v = v1 - v2;
    cout << v << endl;

    return 0;
}
