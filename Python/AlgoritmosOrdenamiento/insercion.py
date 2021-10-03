# ordenamiento por insercion

lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]

for i in range (1 , len(lista)):  # iniciamos desde el indice 1 
    actual = lista [i] # almacenamos el elemento actual 
    indice = i

    while indice > 0 and lista [indice -1] >actual: 
        lista[indice] = lista[indice -1]
        indice = indice-1
    
    lista[indice] = actual

print(lista)