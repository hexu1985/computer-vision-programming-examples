#include <iostream>
#include <vector>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	Mat mat_b(64, 64, CV_8UC1, Scalar(0));
	Mat mat_g(64, 64, CV_8UC1, Scalar(127));
	Mat mat_r(64, 64, CV_8UC1, Scalar(255));

    vector<Mat> planes = {mat_b, mat_g, mat_r};
    Mat src;
    merge(planes, src);

	Mat dst;
	resize(src, dst, Size(src.cols / 2, src.rows / 2), 0.5, 0.5);

    cout << dst << endl;

	return 0;
}
