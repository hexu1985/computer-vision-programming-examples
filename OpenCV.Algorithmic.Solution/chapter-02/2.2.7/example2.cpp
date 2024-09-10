#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat mm = (Mat_<Vec3f>(2, 2) << Vec3f(1,11,21), Vec3f(2,12,32),
                                   Vec3f(3,13,23), Vec3f(4,24,34));
    for (int r = 0; r < mm.rows; r++) {
        // 每行首元素的地址
        Vec3f *ptr = mm.ptr<Vec3f>(r);
        for (int c = 0; c < mm.cols; c++) {
            cout << ptr[c] << ",";
        }
        cout << endl;
    }

    return 0;
}
