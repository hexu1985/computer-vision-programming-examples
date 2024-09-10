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

    cout << "mat mean: " << cv::mean(mat) << endl;

	return 0;
}
