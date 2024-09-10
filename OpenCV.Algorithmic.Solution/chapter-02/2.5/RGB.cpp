#include <vector>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 输入图像矩阵
    Mat img = imread(argv[1], IMREAD_COLOR);
    if (img.empty())
        return -1;

    // 显示彩色图
    imshow("BGR", img);

    // 分离通道
    vector<Mat> planes;
    split(img, planes);

    // 显示B通道
    imshow("B", planes[0]);

    // 显示G通道
    imshow("G", planes[1]);

    // 显示R通道
    imshow("R", planes[2]);

    waitKey(0);

    return 0;
}
