#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src1 = (Mat_<uchar>(2, 3) << 23, 123, 90, 100, 250, 0);
    Mat src2 = (Mat_<uchar>(2, 3) << 125, 150, 60, 100, 10, 40);

    Mat dst = src2/src1;    // 点除运算
    for (int r = 0; r < dst.rows; r++) {
        for (int c = 0; c < dst.cols; c++) {
            cout << float(dst.at<uchar>(r, c)) << ",";  // 打印值
        }
        cout << endl;
    }

    return 0;
}
