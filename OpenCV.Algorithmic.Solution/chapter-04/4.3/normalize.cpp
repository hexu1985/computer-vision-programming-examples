#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char*argv[])
{
	//输入矩阵
	Mat src = (Mat_<float>(2, 2) << 55, 80, 100, 255);

	// MINMAX
	Mat dst;
	normalize(src, dst, 10, 0, NORM_L1, CV_32FC1);

	//normalize(src,dst,10,0,CV_MI)
	for (int r = 0; r < src.rows; r++)
	{
		for (int c = 0; c < src.cols; c++)
		{
			cout << dst.at<float>(r, c) << ",";
		}
	}
    cout << endl;

	return 0;
}
