#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 构造矩阵
    Mat m = (Mat_<int>(3, 2) << 11, 12, 33, 43, 51, 16);
    // 矩阵的行数
    cout << "行数: " << m.rows << endl;
    // 矩阵的列数
    cout << "列数: " << m.cols << endl;

    Size size = m.size();
    cout << "尺寸: " << size << endl;

    cout << "通道数: " << m.channels() << endl;

    cout << "面积: " << m.total() << endl;

    cout << "维数: " << m.dims << endl;

    return 0;
}
