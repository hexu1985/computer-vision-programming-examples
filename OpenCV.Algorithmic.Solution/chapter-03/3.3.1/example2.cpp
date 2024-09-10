#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat x = (Mat_<float>(3,3) << 0, 1, 2, 0, 1, 2, 0, 1, 2)-1;
    Mat y = (Mat_<float>(3,3) << 0, 0, 0, 1, 1, 1, 2, 2, 2)-1;
    Mat r, theta;
    cartToPolar(x, y, r, theta, true);

    cout << r << endl;
    cout << theta << endl;

    return 0;
}
