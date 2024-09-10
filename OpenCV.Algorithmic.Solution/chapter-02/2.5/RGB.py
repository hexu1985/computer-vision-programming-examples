# -*- coding: utf-8 -*-
import sys
import cv2
import numpy as np

# 主函数
if __name__ == "__main__":
    # 输入图像矩阵，转换为array
    if len(sys.argv) > 1:
        image = cv2.imread(sys.argv[1], cv2.IMREAD_COLOR)
    else:
        print("Usage: python RGB.py imageFile")
        sys.exit(1)

    # 显示彩色图像
    cv2.imshow("bgr", image)

    # 得到三个颜色通道
    b = image[:,:,0]
    g = image[:,:,1]
    r = image[:,:,2]

    # 显示三个颜色通道
    cv2.imshow("b", b)
    cv2.imshow("g", g)
    cv2.imshow("r", r)

    cv2.waitKey(0)
    cv2.destroyAllWindows()
