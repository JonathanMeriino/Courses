#include <stdio.h>

int main() {

    int A[5] = {10,46,47,24,53};
    int j,posicion,aux;

    for ( j = 0; j <strlen(A); j++){
        posicion = j;
        aux = A[j];
        while ((posicion>0)&&(aux < A[posicion-1])){
            A[posicion] = A[posicion-1];
            posicion--;
        }
        A[posicion] = aux;
    }
    printf("Ascendente\n");
    for ( i = 0; i <5; i++){
        printf("%i, ",a[i]);
    }
    printf("\nDescendente\n");
    for ( i = 4; i>= 0; i--){
        printf("%i, ",a[i]);
    }
    
    
    return 0;
}