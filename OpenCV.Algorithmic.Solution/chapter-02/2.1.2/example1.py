import numpy as np

m = np.array([[14,12,3,1],[10,12,114,29],[67,23,534,2]], np.float32)
print(m[1,3])
print(m[2,:])
print(m[:,3])
print(m[0:2,1:3])
