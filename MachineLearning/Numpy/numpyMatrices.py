import numpy as np

#matrices vacias

#crear una matriz de unos - 3 filas 4 columnas
unos = np.ones((3,4))
print('Matriz de unos: ')
print(unos)

#crear una matriz de ceros - 3 filas 4 columnas
ceros = np.zeros((3,4))
print('Matriz de ceros: ')
print(ceros)

#crear una matriz con numeros aleatorios
aleatorios = np.random.random((2,2))
print('Matriz de numeros: ')
print(aleatorios)

#crear una matriz vacia
vacia = np.empty((3,2))
print('Matriz vacia ')
print(vacia)

#crear una matriz con un solo valor
full = np.full((2,2),8)
print('Matriz con un solo valor')
print(full)

#crear una matriz con valores espaciados uniformemente
espaciado1 = np.arange(0,30,5)
print('Matriz 0-30 con espaciados de 5 ')
print(espaciado1)

espaciado2 = np.linspace(0,2,5)
print('Matriz 0 -2 con espaciados de .5')
print(espaciado2)

#crear una matriz identidad
identidad1 = np.eye(4,4)
print('Matriz identidad')
print(identidad1)

identidad2 = np.identity(4)
print('Matriz identidad')
print(identidad2)

#Conocer las dimensiones de una matriz
a = np.array([(1,2,3),(4,5,6)])
print('Dimension de la matriz')
print(a.ndim)

#Conocer el tipo de los datos
a = np.array([1,2,3])
print('Tipo de los datos')
print(a.dtype)

#Conocer el tamaño y forma de la matriz
a = np.array([1,2,3,4,5,6])
print('Tamaño de la matriz')
print(a.size)
print('Forma de la matriz')
print(a.shape)

#Cambio de forma de una matriz
a = np.array([(1,2,3),(4,5,6)])
print(a)
a = a.reshape(3,2)
print(a)

#Extraer un solo valor de la matriz-
a = np.array([(1,2,3),(4,5,6)])
print('Fila 0 columna 2')
print(a[0,2])

#extraer los valores de todas las filas ubicados en la columna 3
a = np.array([(1,2,3),(4,5,6)])
print('Extrae los valores ubicados en la columna 3')
print(a[0:,2])

#encontrar el minimo,maximo y la suma
a = np.array([2,4,8])

print('Valor minimo: ',a.min())
print('Valor maximo',a.max())
print('La suma: ',a.sum())

# Calcular la raiz cuadrada y la desviacion estandar
a = np.array([(1,2,3),(4,5,6)])
print('Raiz cuadrada: ',np.sqrt(a))
print('Desviacion estandar',np.std(a))

#Calcular la suma,resta, multiplicacion y division de dos matrices

x = np.array([(1,2,3),(4,5,6)])
y = np.array([(1,2,3),(4,5,6)])

print('La suma es:  ',x+y)
print('La resta es: ',x-y)
print('La multiplicacion es:',x*y)
print('La division es: ',x/y)