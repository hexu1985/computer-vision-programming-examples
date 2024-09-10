# -*- coding: utf-8 -*-
import sys
import cv2
import numpy as np

# 主函数
if __name__ == "__main__":
    # 输入图像矩阵，转换为array
    if len(sys.argv) > 1:
        img = cv2.imread(sys.argv[1], cv2.IMREAD_GRAYSCALE)
    else:
        print("Usage: python imgToArray.py imageFile")

    # 显示图像
    cv2.imshow("img", img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
