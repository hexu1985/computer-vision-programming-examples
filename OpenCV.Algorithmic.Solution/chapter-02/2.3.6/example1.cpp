#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src = (Mat_<float>(2, 2) << 6, 5, 4, 3);

    Mat dst;
    log(src, dst);
    cout << dst << endl;

    return 0;
}
