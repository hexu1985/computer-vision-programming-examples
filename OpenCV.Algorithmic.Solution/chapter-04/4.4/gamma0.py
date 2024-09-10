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

    # 图像归一化
    fI = I/255.0
    # 伽马变换
    gamma = 0.5
    O = np.power(fI, gamma)
    # 显示原图和伽马变换后的效果
    cv2.imshow("I", I)
    cv2.imshow("O", O)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
