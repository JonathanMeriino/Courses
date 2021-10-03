#ordenamiento por quick sort
lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]

# funcion para dividir la lista en dos partes a partir de un pivote
def particionado (lista):

    pivote = lista[0]
    menores = []   # para guardar elementos menores
    mayores = []   # para guardar elementos mayores 

    for i in range (1 ,len(lista)):
        if lista[i]< pivote:
            menores.append(lista[i])
        else:
            mayores.append(lista[i])

    return menores, pivote, mayores

def quickSort(lista):

    if len(lista) <2:
        return lista
    
    menores, pivote, mayores = particionado(lista)

    return quickSort(menores) + [pivote] + quickSort(mayores)

print(quickSort(lista))    