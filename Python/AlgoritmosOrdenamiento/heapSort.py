# algoritmo de heap sort
def heapify(lista,i):
    # si el nodo tiene dos hijos
    if 2*i +2 <= len(lista) -1:
        if lista[2 *i+1] <= lista[2*i+2]: 
            min = 2*i+1
        else:
            min = 2*i+2
        if lista[i] > lista[min]:
            aux = lista[i]
            lista[i] = lista[min]
            lista[min] = aux

            heapify(lista,min)
    # si tiene un hijo
    elif 2*i+1 <= len(lista) -1:
         if lista[i] > lista[2*i+1]:
             aux = lista[i]
             lista[i] = lista[2*i+1]
             lista[2*i+1] =  aux

    return lista


def heapSort(lista):
    listaFinal = []

    for i in range(len(lista)//2 -1,- 1,-1):
        lista=heapify(lista,i)

    for i in range(0, len(lista)):
        aux = lista[0]
        lista[0] = lista[len(lista)-1]
        lista[len(lista)-1]= aux

        listaFinal.append(aux)

        lista = lista[:len(lista)-1]

        lista = heapify(lista,0)

    return listaFinal  

lista = [12,70,90,2,12,0,32,69]

print(lista)

print(heapSort(lista))