#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <string>
#include <iostream>

cv::Mat image;//输入图像
cv::Mat image_0_1;//归一化输入图像
cv::Mat contrastImage;//输出图像

//图像的宽高
int height;
int width;
int value = 40;
float segValue = 40.0;
const int MAX_VALUE = 200;
std::string contrastWindow = "对比度";

void callback_value(int, void*)
{
	//这里 gamma 的取值范围为 [0，3]
	float gamma = float(value) / segValue;
	//调整对比度
#if 1
	contrastImage = cv::Mat::zeros(image.size(), CV_32FC1);
	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < width; c++)
		{
			float pixel = pow(image_0_1.at<float>(r, c), gamma);
			contrastImage.at<float>(r, c) = pixel;
		}
	}
#else
	//或者直接采用 OpenCV 提供的 pow函数
	cv::pow(image_0_1, gamma, contrastImage);
#endif
	//显示调整对比度后的效果
	cv::imshow(contrastWindow, contrastImage);
	/*保存结果*/
	contrastImage.convertTo(contrastImage, CV_8UC1, 255, 0);
	cv::imwrite("contrastImage.jpg", contrastImage);
}

int main(int argc, char*argv[])
{
	//输入图片
	image = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
	if (!image.data)
	{
		std::cout << "没有图片" << std::endl;
		return -1;
	}

	//图片归一化，每一个灰度值都除以 255
	image.convertTo(image_0_1, CV_32FC1, 1.0 / 255.0, 0);

	//显示原图
	cv::imshow("原图", image_0_1);

	//图像的宽高
	height = image.rows;
	width = image.cols;
	contrastImage = cv::Mat::zeros(image.size(), CV_32FC1);
	cv::namedWindow(contrastWindow, CV_WINDOW_AUTOSIZE);
	cv::createTrackbar("value", contrastWindow, &value, MAX_VALUE, callback_value);
	callback_value(0, 0);
	cv::waitKey(0);
	return 0;
}
