/*En este ejercicio se determina el tiempo del procesador para calcular
el factorial de un numero requerido entre 3 y 15*/
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    float inicio,fin;
    int n,x;
    long int fact;

    inicio=clock();
    do{
        printf("Factorial de (3<x<15): ");
        scanf("%d",&x);
    }while(x<=3 || x>=15);

    for(n=x,fact=1; x ; x--)
        fact*=x;
    fin=clock();

    printf("\nFactorial de %d! = %ld",n,fact);
    printf("\nUnidades de tiempo de proceso: %f,\t En segundos: %f",(fin-inicio),(fin-inicio)/CLK_TCK);

    return 0;
}