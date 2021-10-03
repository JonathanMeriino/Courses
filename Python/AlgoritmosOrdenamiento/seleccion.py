# algoritmo de seleccion de

lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]

longitud = len(lista) # almacena el tamaño de lista

for i in range(longitud-1): # recorre hasta el penultimo elemento de la lista
    print(lista)
    menor = i
    print("El indice actual para comparar es: ",menor)
    for j in range(i+1,longitud):   # iniciamos desde el indice siguiente hasta el final de la lista
        if lista[j] < lista[menor]: # comparando con el elemento actual(menor)
            menor=j # cambia el valor menor por el indice j
            print("Recorriendo lista. Es el menor el indice", menor)
    temporal = lista[menor]   # guarda el elemento menor en temporal
    lista[menor] = lista[i]
    lista[i] = temporal
    print("Cambiamos el elemento",lista[menor], "por el elemento",lista[i])

print("Lista ordenado por seleccion",lista)
