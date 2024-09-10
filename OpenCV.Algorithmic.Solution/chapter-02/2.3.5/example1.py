import numpy as np

src3 = np.array([[1,2,3],[4,5,6]], np.uint8)
src4 = np.array([[6,5],[4,3],[2,1]], np.uint8)

dst = np.dot(src3, src4)
print(dst)
print(dst.dtype)


