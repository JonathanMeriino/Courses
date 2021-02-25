/*Programa para generar, encontrar el mayo de 10  numeros aleatorios 
entre 0 y 1000*/
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
//#include<conio.h>
#define TOPE 1000
#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
    int mx,i,x,y;
    clrscr();
    randomize();

    mx=random(TOPE);
    for(i=2;i<=10;i++)
    {
        int y;
        y=random(TOPE);
        mx = MAX(x,y);
    }
    printf("El mayor numero aleatorio generado: %d",mx);
}