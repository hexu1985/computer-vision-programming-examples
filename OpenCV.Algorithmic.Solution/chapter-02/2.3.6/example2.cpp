#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src = (Mat_<uchar>(2, 2) << 4, 25, 16, 49);
    Mat dst;
    pow(src, 2, dst);

    cout << dst << endl;

    return 0;
}
