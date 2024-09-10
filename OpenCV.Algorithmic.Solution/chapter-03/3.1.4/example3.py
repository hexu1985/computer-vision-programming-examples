import cv2

A = cv2.getRotationMatrix2D((40,50),30,0.5)
print(A)
print(A.dtype)
