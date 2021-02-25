//¿Cual es la salida de los siguientes bucles
#include <stdio.h>

int main()
{
    puts("Parte A");
    for(int i=0;i<10;i++)
        printf("2*%d = %d\n",i,2*i);

    puts("Parte B");
    for(int i=0;i<=5;i++)
        printf("%d",2*i+1);
        putchar('\n');
    
    puts("Parte C");
    for(int i=1;i<4;i++)
    {
        printf(" %d",i);
        for (int j=i;j>=1;j--)
            printf("%d \n",j);
    }
}