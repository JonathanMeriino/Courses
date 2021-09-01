import numpy as np
import sys

S = range(1000)

print('Resultado lista de python: ')
print(sys.getsizeof(5)*len(S))
print()

D = np.arange(1000)
print('Resultado de numpy array: ')
print(D.size*D.itemsize)
