//Escribe las variables de control de dos bucles anidados
#include<stdio.h>

void main()
{
    int i,j;
    //cabecera de la salida
    printf("\n\t\t i \t j \n");
    for(i=0;i<4;i++)
        printf("Externo \t %d \n",i);
        for(j=0;j<i;j++)
            printf("Interno \t\t %d \n",j);


}