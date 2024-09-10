#include <string>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // 输入图像矩阵
    Mat img = imread(argv[1], IMREAD_GRAYSCALE);
    if (img.empty())
        return -1;

    // 定义显示原图的窗口
    string winname = "原图";
    namedWindow(winname, WINDOW_AUTOSIZE);

    // 显示图像
    imshow(winname, img);
    waitKey(0);

    return 0;
}
