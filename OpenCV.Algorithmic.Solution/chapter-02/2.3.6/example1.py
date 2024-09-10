import numpy as np

src = np.array([[6,5],[4,3]], np.uint8)

dst = np.log(src)
print(dst)
print(dst.dtype)

import cv2

src = src.astype(np.float32)    # 改变src1的数据类型
dst = cv2.log(src)
print(dst)
print(dst.dtype)
