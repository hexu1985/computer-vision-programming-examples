#include<iostream>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char*argv[])
{
	//输入图片
	Mat image = imread(argv[1],IMREAD_GRAYSCALE);
	if (!image.data)
	{
		cout << "没有图片" << endl;
		return -1;
	}
	//显示原图
	imshow("image", image);
	//直方图均衡化后的图片
	Mat eqHistImage;
	equalizeHist(image, eqHistImage);
	imshow("直方图均衡化", eqHistImage);
	waitKey(0);
	return 0;
}
