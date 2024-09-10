# -*- coding: utf-8 -*-

import sys
import numpy as np
import cv2
import matplotlib.pyplot as plt

def calcGrayHist(image):
    # 灰度图像矩阵的高, 宽
    rows, cols = image.shape
    # 存储灰度直方图
    grayHist = np.zeros([256], np.uint64)
    for r in range(rows):
        for c in range(cols):
            grayHist[image[r][c]] += 1
    return grayHist

# 主函数
if __name__ == "__main__":
    if len(sys.argv) > 1:
        #image = cv2.imread(sys.argv[1],cv2.CV_LOAD_IMAGE_GRAYSCALE)#OpenCV2.X
        image = cv2.imread(sys.argv[1],cv2.IMREAD_GRAYSCALE)#OpenCV3.X
    else:
        print("Usage: python histogram.py imageFile")
    # 计算灰度直方图
    grayHist = calcGrayHist(image)
    # 画出灰度直方图
    x_range = range(256)
    plt.plot(x_range, grayHist, 'r', linewidth=2, c='black')
    # 设置坐标轴的范围
    y_maxValue = np.max(grayHist)
    plt.axis([0,255,0,y_maxValue])
    # 设置坐标轴的标签
    plt.xlabel('gray Level')
    plt.ylabel('number of pixels')
    # 显示灰度直方图
    plt.show()
