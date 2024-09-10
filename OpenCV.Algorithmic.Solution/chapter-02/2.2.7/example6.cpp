#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 三个单通道矩阵
    Mat plane0 = (Mat_<int>(2, 2) << 1, 2, 3, 4);
    Mat plane1 = (Mat_<int>(2, 2) << 5, 6, 7, 8);
    Mat plane2 = (Mat_<int>(2, 2) << 9, 10, 11, 12);

    {
        // 用三个单通道矩阵初始化一个数组
        Mat plane[] = {plane0, plane1, plane2};
        // 合并
        Mat mat;
        merge(plane, 3, mat);
        cout << mat << endl;
    }

    {
        // 将三个单通道矩阵一次放入vector容器中
        vector<Mat> plane;
        plane.push_back(plane0);
        plane.push_back(plane1);
        plane.push_back(plane2);
        // 合并为一个多通道矩阵
        Mat mat;
        merge(plane, mat);
        cout << mat << endl;
    }

    return 0;
}


