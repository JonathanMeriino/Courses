#ordenamiento burbuja

lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]

for i in range(len(lista)-1):   # vuelvas a la lista
    for j in range(len(lista)-1):   # comparando cada elemento con el siguiente
        print("Comparando: ",lista[j], "con", lista[j+1])

        if (lista[j]>lista[j+1]):
            
            # lista [j], lista[j+1] = lista [j+1],lista[j]   <- asignacion multiple

            temporal = lista[j]
            lista[j] = lista[j+1]
            lista[j+1] = temporal

            print("Intercambiando: ",lista[j],"por",lista[j+1])
print(lista)