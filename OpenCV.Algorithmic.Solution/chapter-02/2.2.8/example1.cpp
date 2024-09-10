#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat m = (Mat_<int>(5,5) << 1, 2, 3, 4, 5, 
                               6, 7, 8, 9, 10, 
                               11, 12, 13, 14, 15, 
                               16, 17, 18, 19, 20, 
                               21, 22, 23, 24, 25);

    int r = 1;
    int c = 0;

    // 矩阵的第r行
    Mat mr = m.row(r);
    cout << mr << endl;

    // 矩阵的第c列
    Mat mc = m.col(c);
    cout << mc << endl;

    return 0;
}
