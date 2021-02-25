//Rellenar los elementos de un array con numeros reales positivos procedentes del teclado
#include<stdio.h>
//Constantes y variables globales
#define MAX 10
float muestra[MAX];
void main()
{
    int i;
    printf("\nIntroduzca una lista de %d elementos positivos.\n",MAX);
    for(i=0;i<MAX;muestra[i]>0?++i:i)
        scanf("%f",muestra[i]);
}
/*En el bucle principal. solo se incrementa i si muestra[i] es positivo: muestra [i]>0?++i:i.
Con este incremento condicional se consigue que todos los valores almacenados sean positivos*/
