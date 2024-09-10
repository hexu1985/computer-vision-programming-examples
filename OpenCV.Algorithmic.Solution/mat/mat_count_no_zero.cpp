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

	mat.forEach<float>([](float &value, const int *position) {
			cout << "pos: " << position[0] << ", " << position[1] << endl;
			if (value > 5.0) {
				value = 0.0;
			}
			});

	cout << "after forEach\n" << "mat: \n" << mat << endl;

    cout << "nonzero count: " << cv::countNonZero(mat) << endl;

	return 0;
}
