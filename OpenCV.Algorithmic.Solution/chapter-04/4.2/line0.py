# -*- coding: utf-8 -*-
import cv2
import numpy as np
import sys

#主函数
if __name__ =="__main__":
    if len(sys.argv) > 1:
        #读入图像
        I = cv2.imread(sys.argv[1],cv2.IMREAD_GRAYSCALE)
    else:
        print("Usge:python lineContrast.py imageFile")
        sys.exit(1)

    #线性变换
    a = 2
    O = float(a)*I
    #进行数据截断，大于255的值要截断为255
    O[O>255] = 255
    #数据类型转换
    O = np.round(O)
    O=O.astype(np.uint8)
    #显示原图和线性变换后的效果
    cv2.imshow("I",I)
    cv2.imshow("O",O)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
