#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 构造矩阵
    Mat m = (Mat_<int>(3, 2) << 11, 12, 33, 43, 51, 16);
    // 通过for循环打印m中的每一个值
    for (int r = 0; r < m.rows; r++) {
        const int *ptr = m.ptr<int>(r);
        // 打印第r行的所有值
        for (int c = 0; c < m.cols; c++) {
            cout << ptr[c] << ",";
        }
        cout << endl;
    }

    return 0;
}
