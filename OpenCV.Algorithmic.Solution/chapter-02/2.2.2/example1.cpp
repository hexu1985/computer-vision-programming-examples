#include <opencv2/core.hpp>

using namespace cv;

int main()
{
    // 构造2行3列的矩阵
    Mat m = Mat(2, 3, CV_32FC(1));
    // Mat m = Mat(Size(3,2), CV_32FC(1));
    return 0;
}
