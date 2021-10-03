#ordenamiento burbuja mejorado

lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]
comparaciones = 0
desordenada=True
i = 0
while desordenada and i<len(lista)-1:
    desordenada = False

    for j in range(len(lista)-i -1):   # comparando cada elemento con el siguiente y limitando el numero de iteraciones
        comparaciones +=1
        if (lista[j]>lista[j+1]):
                
            temporal = lista[j]
            lista[j] = lista[j+1]
            lista[j+1] = temporal

        desordenada = True
    i +=1

print(lista)
print(comparaciones)