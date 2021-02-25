//Representar la superacion de un examen (Nota >=5,aprobado)
#include <stdio.h>

void main()
{
    float numero;
    //Comparar numero introducido por el usuario
    printf("Introduzca un numero positivo o negativo: ");
    scanf("%f", &numero);
    //comparar numero con cero
    if(numero >0)
        printf("%f es mayor que cero\n",numero);
    
}