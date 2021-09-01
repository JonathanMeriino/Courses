import numpy as np
import time

SIZE = 100000

L1 = range(SIZE)
L2 = range(SIZE)
A1 = np.arange(SIZE)
A2 = np.arange(SIZE)

start = time.time()
result=[(x,y) for x,y in zip(L1,L2)]
print('Resultado de la lista de Python: ')
print((time.time()-start)*1000)
print()
start = time.time()
result= A1+A2
print('Resultado NumPy array: ')
print((time.time()-start)*1000)
