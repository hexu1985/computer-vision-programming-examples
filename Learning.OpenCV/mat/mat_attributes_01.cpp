#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main()
{
	int rows = 3;
	int cols = 3;

	cv::Mat mat(rows, cols, CV_32FC4);

	cout << "mat.type(): " << mat.type() << endl;
	cout << "mat.depth(): " << mat.depth() << endl;
	cout << "mat.size(): " << mat.size() << endl;

	return 0;
}
