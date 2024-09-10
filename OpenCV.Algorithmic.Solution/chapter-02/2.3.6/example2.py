import numpy as np

src = np.array([[25,40],[10,100]], np.uint8)

dst1 = np.power(src, 2) # 对src中的每一个数值进行幂指数运算
print(dst1);
print(dst1.dtype)

dst2 = np.power(src, 2.0) # 将幂指数2改为2.0
print(dst2);
print(dst2.dtype)
