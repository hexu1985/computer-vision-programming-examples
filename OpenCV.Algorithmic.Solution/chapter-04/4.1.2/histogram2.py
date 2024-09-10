# -*- coding: utf-8 -*-

import sys
import numpy as np
import cv2
import matplotlib.pyplot as plt

# 主函数
if __name__ == "__main__":
    if len(sys.argv) > 1:
        #image = cv2.imread(sys.argv[1],cv2.CV_LOAD_IMAGE_GRAYSCALE)#OpenCV2.X
        image = cv2.imread(sys.argv[1],cv2.IMREAD_GRAYSCALE)#OpenCV3.X
    else:
        print("Usage: python histogram.py imageFile")
    # 得到图像矩阵的高, 宽
    rows, cols = image.shape
    # 将二维的图像矩阵, 变为一维的数组, 便于计算灰度直方图
    pixelSequence = image.reshape([rows*cols, ])
    # 组数
    numberBins = 256
    # 计算灰度直方图
    histogram, bins, patch = plt.hist(pixelSequence, numberBins, facecolor='black', histtype='bar')
    # 设置坐标轴的标签
    plt.xlabel('gray Level')
    plt.ylabel('number of pixels')
    # 设置坐标轴的范围
    y_maxValue = np.max(histogram)
    plt.axis([0,255,0,y_maxValue])
    # 显示灰度直方图
    plt.show()
