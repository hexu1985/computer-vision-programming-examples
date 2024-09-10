#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    {
        // 原坐标
        Point2f src[] = {Point2f(0,0), Point2f(200,0), Point2f(0,200), Point2f(200,200)};

        // 经过某投影变换后的坐标
        Point2f dst[] = {Point2f(100,20), Point2f(200,20), Point2f(50,70), Point2f(250,70)};

        // 计算投影变换矩阵
        Mat P = getPerspectiveTransform(src, dst);
        cout << P << endl;
    }

    {
        // 原坐标
        Mat src = (Mat_<float>(4, 2) << 0, 0, 200, 0, 0, 200, 200, 200);

        // 经过某投影变换后的坐标
        Mat dst = (Mat_<float>(4, 2) << 100, 20, 200, 20, 50, 70, 250, 70);

        // 计算投影变换矩阵
        Mat P = getPerspectiveTransform(src, dst);
        cout << P << endl;
    }

    return 0;
}
