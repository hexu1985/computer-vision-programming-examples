import numpy as np
import cv2

src1 = np.array([[23,123,90],[100,250,0]], np.uint8)
src2 = np.array([[125,150,60],[100,10,40]], np.float32)

dst = cv2.divide(src2, src1, dtype=cv2.CV_32F)
print(dst)
print(dst.dtype)

