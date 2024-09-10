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
        Mat r_range = matrix.rowRange(2, 4).clone();
        cout << r_range << endl;

        r_range.at<int>(0, 0) = 10000;
        cout << r_range << endl;
    }

    cout << matrix << endl;

    {
        Mat r_range;
        matrix.rowRange(2, 4).copyTo(r_range);
        cout << r_range << endl;

        r_range.at<int>(0, 0) = 10000;
        cout << r_range << endl;
    }

    cout << matrix << endl;

    return 0;
}
