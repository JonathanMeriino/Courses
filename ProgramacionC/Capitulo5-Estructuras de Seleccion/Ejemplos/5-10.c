//Calcular el mayor de tres numeros enteros
#include <stdio.h>

int main()
{
    int a,b,c,mayor;

    printf("\nIntroduzca tres enteros: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
        if(a>c) 
            mayor=a;
        else 
            mayor=c;
    else if(b>c) 
        mayor =b;
        else 
            mayor=c;
                printf("El mayor es %d \n",mayor);
    
    return 0;

}