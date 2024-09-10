# -*- coding: utf-8 -*-
import sys
import numpy as np
import cv2

# 主函数
if __name__ =="__main__":
    # 读入图像
    if len(sys.argv) > 1:
        I = cv2.imread(sys.argv[1],cv2.IMREAD_GRAYSCALE)
    else:
        print("Usge:python histNormalized.py imageFile")
        sys.exit(1)

    # 求I的最大值, 最小值
    Imax = np.max(I)
    Imin = np.min(I)
    # 要输出的最小灰度级和最大灰度级
    Omin, Omax = 0, 255
    # 计算a和b的值
    a = float(Omax-Omin)/(Imax-Imin)
    b = Omin - a*Imin
    # 矩阵的线性变换
    O = a*I + b
    # 数据类型转换
    O = O.astype(np.uint8)
    # 显示原图和直方图正规化的效果
    cv2.imshow("I", I)
    cv2.imshow("O", O)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
