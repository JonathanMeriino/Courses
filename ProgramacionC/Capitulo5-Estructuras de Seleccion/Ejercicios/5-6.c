/*Escribir una sentencia if-else que visualice la palabra Alta si el valor de la variable 
nota es mayor que 100 y Baja si el valor de esa nota es menor que 100*/
#include <stdio.h>

void main()
{
    float nota;
    printf("Ingresa el valor de la nota: ");
    scanf("%f",&nota);

    if(nota>100)
        printf("Alta\n");
    else
        printf("Baja\n");
}