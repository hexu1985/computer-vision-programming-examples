import numpy as np

s = np.array([[0.5,0,0], [0,0.5,0], [0,0,1]]); # 缩放矩阵
t = np.array([[1,0,100], [0,1,200], [0,0,1]]); # 平移矩阵

A = np.dot(t,s) # 矩阵相乘
print(A)
