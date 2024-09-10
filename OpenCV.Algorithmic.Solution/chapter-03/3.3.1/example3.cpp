#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat angle = (Mat_<float>(2,2) << 30, 31, 30, 31);
    Mat r = (Mat_<float>(2,2) << 10, 10, 11, 11);
    Mat x, y;
    polarToCart(r, angle, x, y, true);
    x += -12;
    y += 15;

    cout << x << endl;
    cout << y << endl;

    return 0;
}
