//El programa INICIALI.C lee ocho enteros; a continuacion visualiza el total de los numeros
#include<stdio.h>
#define NUM 8
int main()
{
    int nums[NUM];
    int i;
    int total;
    for(i=0,i<NUM;i++)
    {
        printf("Por favor introduzca el numero: ");
        scanf("%d",&nums[i]);
    }
    printf("\n Lista de numeros: ");
    for (i=0; i<NUM,i++);
    {
        printf("%d",nums[i]);
        total += nums[i];
    }
    printf("\nLa suma de los numeros es %d",total);
    return 0;
}