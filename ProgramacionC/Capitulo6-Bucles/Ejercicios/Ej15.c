//¿Cual es la salida de este bucle
#include <stdio.h>

int main()
{
    int i=0;

    while(i*i<10)
    {
        int j=1;
        while(j*j<100)
        {
            printf("%d \n",i+j);
            j*=2;
        }
        i++;
    }
    printf("\n ****\n");
}