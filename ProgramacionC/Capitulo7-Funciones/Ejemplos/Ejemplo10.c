/*Generacion de numeros aleatorio, se fija la semilla en 50 y 
se genera un numero aleatorio*/
#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    clrscr();
    srand(50);
    printf("Este es un numero aleatorio %d",rand());
    return 0;
}