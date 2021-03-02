//Funcion calloc()
// puntero = calloc(numero de elementos,tamaño de cada elemento);

#include <stdio.h>
// *puntero1 = calloc(5,sizeof(int));

int main() {

    int *p1;
    int i;
    p1 = calloc(5,sizeof(int));
    //p1 = malloc(5*sizeof(int));
    
    for (i = 0; i <5; i++){
        printf("Escribe un numero: ");
        scanf("%i",&p1[i]);
    }
    printf("\n\n");

    for (i = 0; i < 5; i++){
        printf("%i, ",p1[i]);
    }
    return 0;
}