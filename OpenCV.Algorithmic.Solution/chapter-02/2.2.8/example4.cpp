#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat matrix = (Mat_<int>(5,5) << 1, 2, 3, 4, 5, 
                               6, 7, 8, 9, 10, 
                               11, 12, 13, 14, 15, 
                               16, 17, 18, 19, 20, 
                               21, 22, 23, 24, 25);
    cout << matrix << endl;

    Mat roi1 = matrix(Rect(Point(2,1), Point(4,3)));
    cout << roi1 << endl;

    Mat roi2 = matrix(Rect(2,1,2,2));   // x, y, 宽度, 高度
    cout << roi2 << endl;

    Mat roi3 = matrix(Rect(Point(2,1), Size(2,2)));   // 左上角的坐标, 尺寸
    cout << roi3 << endl;

    return 0;
}
