import numpy as np

m = np.array(
        [
            [
                [1, 2, 3, 4],
                [5, 6, 7, 8]
            ],
            [
                [10, 11, 12, 14],
                [15, 16, 17, 18]
            ],
            [
                [11, 12, 43, 32],
                [1, 5, 10, 23]
            ]
        ], dtype=np.float32)

print(m[:,:,0])
print(m[0,:,:])
