# -*- coding: utf-8 -*-
import numpy as np

a=np.array([[1,2],[3,4]])
b=np.tile(a,(2,3)) # 将a分别在垂直方向和水平方向上复制2次和3次
print(b)

