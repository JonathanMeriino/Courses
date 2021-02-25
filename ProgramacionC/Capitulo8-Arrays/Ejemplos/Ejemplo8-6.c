//Este programa introduce una lista de I O números enteros y calcula su suma y el valor máximo.
#include <stdio.h>
int SumaDeEnteros(const int ArrayEnteros[], int NoElementos);
int maximo(const int ArrayEnteros[], int NoElementos);
int main()
{
    int items [10];
    int total, i;
    puts("Introduzca 10 números, seguidos por return");
    for (i = 0 ; i < 10; i++)
        scanf ("%d",&items[i]);

    printf('Total = %d \n',SumaDeEnteros(items,10));
    printf("Valor máximo: %d \n",maximo(items,10);
    return 0;
}
int SumaDeEnteros(const int ArrayEnteros[], int NoElementos)
{
    int i, total=0;
    for (i = 0; i < NoElementos; i++)
        total += ArrayEnteros[i];
    return total;
}
int maximo(const int ArrayEnteros[], int NoElementos)
{
    int mx;
    int i;
    mx = ArrayEnteros [0];
    for (i = 1; i < NoElementos; i++)
        mx = (ArrayEnteros [i] >mx ? ArrayEnteros [i] : mx) ;
    return mx;
}
