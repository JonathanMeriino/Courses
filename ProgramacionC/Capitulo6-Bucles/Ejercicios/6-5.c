/*Ejecutar el programa siguiente que imprime una tabla de m filas por n columnas 
y un caracter de entrada*/
#include<stdio.h>

int main()
{
    int filas,columnas;
    int i,j;
    char elCar;

    printf("¿Cuants filas?: ");
    scanf("%d",&filas);

    printf("¿Cuantas columnas?: ");
    scanf("%d",&columnas);

    printf("¿Que caracter?: ");
    scanf("\n%c",&elCar);

    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas;j++)
            putchar(elCar);
        putchar('\n');
    }
    return 0;
}