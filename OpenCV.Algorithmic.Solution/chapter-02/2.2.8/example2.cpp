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
    {
        // 获取matrix的第2、3行(索引是从0开始的)
        Mat r_range = matrix.rowRange(Range(2, 4));

        // 打印r_range
        for (int r = 0; r < r_range.rows; r++) {
            for (int c = 0; c < r_range.cols; c++) {
                cout << r_range.at<int>(r, c) << ",";
            }
            cout << endl;
        }
    }

    {
        Mat r_range = matrix.rowRange(2, 4);
        cout << r_range << endl;

        Mat c_range = matrix.colRange(1, 2);
        cout << c_range << endl;

        r_range.at<int>(0, 0) = 10000;
    }

    cout << matrix << endl;

    return 0;
}
