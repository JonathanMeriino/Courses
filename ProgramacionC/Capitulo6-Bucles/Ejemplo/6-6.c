//Suma de los 10 primero numeros pares
#include<stdio.h>

int main()
{
    int n, suma = 0;
    for(n=1;n<=10;n++)
        suma +=2*n;
    
    printf("La suma de los 10 primeros numeros pares: %d\n", suma);
    return 0;
}