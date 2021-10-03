# ordenamiento por quick sort Hoare 
lista = [5 , 7, 3, 1,8, 4 ,9, 2, 6]

def particionado (lista,menor,mayor):
    
    pivote = lista[menor]  # primer elemento de la lista
    izq = menor + 1        # siguiente indice 
    der = mayor             # indice mayor

    while True: # mientras existan cambios a realizar

        while izq <= der and lista[izq] <= pivote:
            izq += 1
        
        while izq <= der and lista [der] >= pivote:
            der -= 1
        if der < izq:
            break
        else: 
            lista[izq], lista [der] = lista[der], lista [izq]
    lista[menor], lista[der] = lista[der] , lista [menor]

    return der

def quickSort(lista, menor,mayor):
    if menor <mayor:
        pivote = particionado(lista,menor,mayor)
        quickSort(lista, menor,pivote-1)
        quickSort(lista,pivote+1,mayor)

lista = [9,1,4,9,3,-1,15,12,3,9,-3,7,5,2,10]

print(lista)

quickSort(lista,0,len(lista)-1)

print(lista)
