#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src1 = (Mat_<uchar>(2, 3) << 23, 123, 90, 100, 250, 0);
    Mat src2 = (Mat_<uchar>(2, 3) << 125, 150, 60, 100, 10, 40);

    Mat dst = src1.mul(src2);
    cout << dst << endl;

    return 0;
}
