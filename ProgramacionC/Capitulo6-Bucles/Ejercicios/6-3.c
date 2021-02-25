//Escribir un programa que visualice el factorial de un entero comprendido entre 2 y 20

#include <stdio.h>

int main()
{
    long int n,m,fact;
    do
    {
        printf("\nFactorial de numero n, entre 2 y 20: ");
        scanf("%ld",&n);
    } while ((n<2)||(n>20));
    
    for(m=n,fact=1; n>1; fact *=n--);
        printf("%ld! = %ld",m,fact);

    return 0;
    
}