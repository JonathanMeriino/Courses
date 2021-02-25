//Visualizar el array muestra despues de introducir datos en el mismo, separandolos con el tabulador
#include<stdio.h>
#define MAX 10
float muestra[MAX];
void main()
{
    int i;
    printf("\nIntroduzca una lista de %d elementos positivos.\n",MAX);
    for(i=0;i<MAX;muestra[i]>0?++i:i)
        scanf("%f",&muestra[i]);
    printf("\nDatos leidos del teclado");
    for(i=0;i<MAX;++i)
        printf("%f\t",muestra[i]);
}