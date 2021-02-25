/*Las variables globales que representan arrays se inicializan a 0 por defecto. 
Por ello, la ejecucion del siguiente programa visualiza 0 para los 10 valores del array:*/
#include<stdio.h>
#include<stdlib.h>
int lista[10];
int main()
{
    int j;
    for(j=0;j<=9;j++)
        printf("\n lista[%d] = %d",j,lista[j]);
    return 0;
}
