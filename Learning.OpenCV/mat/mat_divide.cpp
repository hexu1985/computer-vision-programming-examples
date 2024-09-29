#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main()
{
	int rows = 3;
	int cols = 3;

	cv::Mat mat1(rows, cols, CV_32FC1);

	cv::RNG rng;
	rng.fill( mat1, cv::RNG::UNIFORM, 1.0f, 10.f );

	cout << "mat1: \n" << mat1 << endl;

	cv::Mat mat2(rows, cols, CV_32FC1);

	rng.fill( mat2, cv::RNG::UNIFORM, 1.0f, 10.f );

	cout << "mat2: \n" << mat2 << endl;

    cv::Mat mat = mat1/mat2;

	cout << "mat: \n" << mat << endl;

	return 0;
}

