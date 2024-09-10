#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

using namespace std;

struct Operator1 {
    const float *data;
    int width;

    void operator ()(uint16_t &val, const int *position) const
    {
        val = *(data+position[0]*width+position[1]);
    }
};

struct Operator2 {
    int row_beg;
    int row_end;
    int col_beg;
    int col_end;
    uint16_t value;

    void operator ()(uint16_t &val, const int *position) const
    {
        if (row_beg <= position[0] && position[0] < row_end
               && col_beg <= position[1] && position[1] < col_end)
            return;
        val = value;
    }
};

int main()
{
	int rows = 5;
	int cols = 5;

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

	mat.forEach<uint16_t>(Operator1{f_array.data(), cols});

	cout << "after forEach Operator1\n" << "mat: \n" << mat << endl;

	mat.forEach<uint16_t>(Operator2{1,4,2,4,0});

	cout << "after forEach Operator2\n" << "mat: \n" << mat << endl;

	return 0;
}
