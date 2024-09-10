import cv2
import numpy as np

src = np.array([[0, 0], [200, 0], [0, 200], [200, 200]], np.float32);
dst = np.array([[100, 20], [200, 20], [50, 70], [250, 70]], np.float32);

P = cv2.getPerspectiveTransform(src, dst)
print(P)
