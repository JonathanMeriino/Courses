//Escribir en pantalla el factorial de n, entre los valores de 1 a 10
#include<stdio.h>
#define S 10

int main()
{
    long int n,m,fact;
    
    for(n=1;n<=S;n++)
    {
        fact = 1;
        for(m=n;m>1;m--)
            fact *=m;
        printf("\t %ld!= %ld \n",n,fact);
    }
    return 0;
}