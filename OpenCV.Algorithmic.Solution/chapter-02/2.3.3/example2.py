import numpy as np

src1 = np.array([[23,123,90],[100,250,0]], np.uint8)
src2 = np.array([[125,150,60],[100,10,40]], np.float32)

dst = src1 * src2
print(dst)
print(dst.dtype)

dst = np.multiply(src1, src2)
print(dst)
print(dst.dtype)

