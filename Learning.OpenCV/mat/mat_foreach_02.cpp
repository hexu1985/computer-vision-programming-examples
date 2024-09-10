#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

using namespace std;

struct Operator {
    const float *data;
    int width;

    void operator ()(uint16_t &val, const int *position) const
    {
        val = *(data+position[0]*width+position[1]);
    }
};

int main()
{
	int rows = 3;
	int cols = 3;

	cv::Mat mat(rows, cols, CV_16UC1);
	cout << "mat: \n" << mat << endl;

    std::vector<float> f_array;
    int n = rows*cols;
    for (int i = 0; i < n; i++)
        f_array.push_back(i+0.1);

    cout << "f_array: ";
    for (int i = 0; i < n; i++)
        cout << f_array[i] << ", ";
    cout << "\n";

	mat.forEach<uint16_t>(Operator{f_array.data(), cols});

	cout << "after forEach\n" << "mat: \n" << mat << endl;

	return 0;
}
