//Programa para generar 10 numeros aleatorios

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int i;

   
    randomize();

    for(i=1;i<=10;i++)
        printf("%d ",rand());
    
    return 0;
}