#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
    // 输入图像
    Mat img = imread(argv[1], CV_LOAD_IMAGE_ANYCOLOR);
    if (!img.data)
        return -1;
    // 显示图像
    imshow("原图", img);
    waitKey(0);

    return 0;
}
