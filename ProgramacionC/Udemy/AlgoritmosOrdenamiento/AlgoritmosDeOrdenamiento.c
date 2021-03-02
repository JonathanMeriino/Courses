//* ALGORITMO DE ORDENAMIENTO: Bubble sort

#include <stdio.h>

int main() {

    //*Conjunto de datos a ordenar
    int array[10] = {24,5,96,3,3,96,100,999,450,66};

    //! Necesitamos una variable temporal para cambiar los valores de lugar
    int temp;

    //? Este es el algoritmo, ordena de menor a mayor

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            //* Si queremos que ordene de mayor a menor, cambiamos ">" por ">"
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    //* En este punto los datos ya estan ordenados, ahora los mostramos
    for (int x = 0; x < 10; x++)
        printf("%d, ",array[x]);
    
    return 0;
}