//Calcula y visualiza el cociente y resto de la diision de dos enteros
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    div_t resultado;

    resultado = div(16,4);
    printf("Cociente %d",resultado.quot);
    printf("Resto %d",resultado.rem);

    return 0;
}