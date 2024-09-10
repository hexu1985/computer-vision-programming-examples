#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main()
{
	int rows = 3;
	int cols = 3;

	cv::Mat mat(rows, cols, CV_32FC1);

	cv::RNG rng;
	rng.fill( mat, cv::RNG::UNIFORM, 0.f, 10.f );

	cout << "mat: \n" << mat << endl;

	cv::Mat mask = cv::Mat::zeros(rows, cols, CV_8UC1);
    mask.at<uint8_t>(0, 0) = 1;
    mask.at<uint8_t>(1, 1) = 1;
    mask.at<uint8_t>(2, 2) = 1;

    cout << "mat mean: " << cv::mean(mat, mask) << endl;

	return 0;
}
