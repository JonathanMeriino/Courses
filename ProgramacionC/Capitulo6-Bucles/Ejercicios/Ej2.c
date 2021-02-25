//¿Cual es la salida de los siguientes bucles
#include<stdio.h>

int main()
{
    puts("Parte A");
    for(int n=10;n>0;n=n-2)
    {
        printf("Hola");
        printf("%d \n",n);
    }
    puts("Parte B");
    double n=2;
    for(;n>0;n=n-0.5)
        printf("%g\n",n);
}