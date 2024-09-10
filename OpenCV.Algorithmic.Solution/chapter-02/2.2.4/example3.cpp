#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 构造矩阵
    Mat m = (Mat_<int>(3, 2) << 11, 12, 33, 43, 51, 16);
    if (m.isContinuous()) {
        // 得到矩阵m的第一个值的地址
        int *ptr = m.ptr<int>(0);
        // 利用操作符"[]"取值
        for (int n = 0; n < m.rows*m.cols; n++)
            cout << ptr[n] << ",";
    }
    cout << endl;

    return 0;
}
