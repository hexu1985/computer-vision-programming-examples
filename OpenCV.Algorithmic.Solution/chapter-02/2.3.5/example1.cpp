#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src3 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);
    Mat src4 = (Mat_<float>(3, 2) << 6, 5, 4, 3, 2, 1);

    Mat dst1 = src3*src4;
    cout << dst1 << endl;

    return 0;
}
