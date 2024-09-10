#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    {
        // 原位置坐标
        Point2f src[] = {Point2f(0,0), Point2f(200,0), Point2f(0,200)};

        // 经过某仿射变换后的坐标
        Point2f dst[] = {Point2f(0,0), Point2f(100,0), Point2f(0,100)};

        // 计算仿射矩阵
        Mat A = getAffineTransform(src, dst);
        cout << A << endl;
    }

    {
        // 原位置坐标和仿射变换后的坐标
        Mat src = (Mat_<float>(3, 2) << 0, 0, 200, 0, 0, 200);
        Mat dst = (Mat_<float>(3, 2) << 0, 0, 100, 0, 0, 100);

        // 计算仿射矩阵
        Mat A = getAffineTransform(src, dst);
        cout << A << endl;
    }

    return 0;
}
