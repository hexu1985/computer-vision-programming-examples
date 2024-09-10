#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat A = getRotationMatrix2D(Point2f(40, 50), 30, 0.5);
    cout << A << endl;

    return 0;
}
