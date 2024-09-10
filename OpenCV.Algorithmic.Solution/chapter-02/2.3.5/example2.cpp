#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src5 = (Mat_<Vec2f>(2, 1) << Vec2f(1, 2), Vec2f(3, 4));
    Mat src6 = (Mat_<Vec2f>(1, 2) << Vec2f(10,20), Vec2f(5,15));
    Mat dst2 = src5*src6;

    for (int r = 0; r < dst2.rows; r++) {
        for (int c = 0; c < dst2.cols; c++) {
            cout << dst2.at<Vec2f>(r, c) << ","; // 打印值
        }
        cout << endl;
    }

    return 0;
}
