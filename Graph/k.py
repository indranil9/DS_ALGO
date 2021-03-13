import numpy as np
#import math
#s = 1/math.sqrt(2) 0.707106
#v = 1/math.sqrt(6) 0.408248
#k = 1/math.sqrt(3) 0.577350
matrix1 = np.array([[2+0j,3-3j],[3+3j,5+0j]])
matrix = np.array([[0.707106+0j,0+0.408248j,0-0.577350j],[0-0.408248j,0-0.577350j,0-0.707106j],[0+0.577350j,0+0.707106j,0+0.408248j]])
eigenvalues,eigenvectors=np.linalg.eig(matrix1)

print(eigenvectors)