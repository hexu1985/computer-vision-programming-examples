#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat a = (Mat_<float>(2,2) << 1, 2, 3, 4);
    Mat b = repeat(a, 2, 3);

    cout << b << endl;

    return 0;
}

