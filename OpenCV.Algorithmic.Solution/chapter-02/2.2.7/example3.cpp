#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat mm = (Mat_<Vec3f>(2, 2) << Vec3f(1,11,21), Vec3f(2,12,32),
                                   Vec3f(3,13,23), Vec3f(4,24,34));
    if (mm.isContinuous()) {
        // 指向多通道矩阵的第一个元素的指针
        Vec3f *ptr = mm.ptr<Vec3f>(0);
        for (int n = 0; n < mm.rows*mm.cols; n++) {
            // 打印
            cout << ptr[n] << endl;
        }
    }

    return 0;
}
