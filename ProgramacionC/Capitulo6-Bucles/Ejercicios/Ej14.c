//Describir la salida de los siguientes bucles
#include <stdio.h>

int main()
{

    puts("Parte A");
    for(int i=1; i<=5;i++)
    {
        printf(" %d \n",i);
        for(int j=i; j>=1;j-=2)
            printf(" %d \n",j);
    }
    puts("Parte B");

    for(int i=3; i>0;i--)
        for(int j=i;j<=i;j++)
            for(int k=1;k>=j;k--)
                printf(" %d %d %d \n",i,j,k);

    puts("Parte C");
    for(int i=1;i<=3;i++)
    {
        int j;
        for(int k=1;k<=j;k++)
            printf("%d %d %d",i,j,k);
        putchar('\n');
    }
}