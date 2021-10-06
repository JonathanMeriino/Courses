import random
from typing_extensions import IntVar

def radixSort(lista):
    n = 0   # maximo de digitos entre la lista

    for i in lista:
        if len(lista) > n:
            n = len(lista)

    for i in range(0, len(lista)):
        while len(lista[i]) < n:
            lista[i] = "0" + lista[i]

    for j in range (n-1, -1,-1):
        grupos = [[]for i in range(10)]

        for i in range(len(lista)):
            grupos[int(lista[i][j])].append(lista[i])

        lista = []
        for g in grupos:
            lista += g

    return [int(i) for i in lista]


lista = [str(random.randint(0,200))for i in range(10)]

print(lista)

print(radixSort(lista))
