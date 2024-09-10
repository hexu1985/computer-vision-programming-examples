# -*- coding: utf-8 -*-
import numpy as np
import cv2

angle=np.array([[30,31],[30,31]], np.float32)
r=np.array([[10,10],[11,11]], np.float32)
x,y = cv2.polarToCart(r,angle,angleInDegrees=True)
x+=-12
y+=15
print(x)
print(y)

