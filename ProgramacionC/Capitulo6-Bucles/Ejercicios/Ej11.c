//Suponiendo que m=3 y n=5¿Cual es la salida de los siguientes segmentos de programa?
#include <stdio.h>

int main()
{
    int m=3,n=5;
    
    puts("Parte A");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            putchar('*');
        putchar('\n');
    }
    
    puts("Parte B");
    for(int i=n;i>0;i--)
    {
        for(int j=m;j>0;j--)
            putchar('*');
        putchar('\n');
    }
}