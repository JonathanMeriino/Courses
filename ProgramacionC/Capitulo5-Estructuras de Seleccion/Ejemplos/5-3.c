#include <stdio.h>

void main()
{
    float numero;
    //comparar numero introducido por el usuario
    printf("Introduzca un numero positivo o negativo: ");
    scanf("%f",&numero);

    //comparar numero
    if(numero >0)
        printf("%f es mayor que cero\n",numero);
    if(numero<0)
        printf("%f es menor a cero\n",numero);
    if(numero==0)
        printf("%f es igual a cero\n",numero);
}    