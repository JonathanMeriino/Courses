def merge_sort(arr):
    if len(arr) > 1: # comprueba que existen valores a ordenar

        primera_mitad = arr[:len(arr) // 2]
        segunda_mitad = arr[len(arr) // 2:]
        #recursion
        merge_sort(primera_mitad)
        merge_sort(segunda_mitad)
        #mezcla
        i =0  # indice primera mitad 
        j=0   #indice segunda mitad
        k=0     #indice mezcla

        while i <len(primera_mitad) and j< len(segunda_mitad):
            if primera_mitad[i] < segunda_mitad[i]:
                arr[k] = primera_mitad[i]
                i+=1
                
            else:
                arr[k] = segunda_mitad[j]
                j+=1
            k +=1

        while i < len(primera_mitad):
            arr[k] = primera_mitad[i]
            i += 1
            k +=1
        
        while j < len(segunda_mitad):
            arr[k] = segunda_mitad[j]
            i += 1
            k +=1

numeros = [13,5,2,19,11,7,1,3]
merge_sort(numeros)
print(numeros)