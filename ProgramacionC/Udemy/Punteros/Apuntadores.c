//Demostrar el uso basico de punteros

/*
    posiciones de memoria --
    punteros
    int numero = 3; 

    printf("%i",numero);
    printf("%p",&numero); 

int hola = 100;
1234
int *phola = &hola;

tipoDato *nombreApuntador;

char *hola1,*hola2;
float *hi1,hi2;

*/

#include <stdio.h>

int main() {

    int numero = 50;
    int *pNumero;
    printf("Dato: %i",numero); //Dato
    printf("\nPosicion:  %p\n",&numero); //Posicion en memoria

    pNumero = &numero; //&numero = posicion en memoria de numero
    printf("Valor de la variable\n");
    printf("Dato: %i\n",numero);
    printf("Dato: %i\n",*pNumero);

    printf("Posicion de memoria\n\n");
    printf("\nPosicion: %p",&numero);
    printf("\nPosicion: %p",pNumero);
    

    return 0;
}