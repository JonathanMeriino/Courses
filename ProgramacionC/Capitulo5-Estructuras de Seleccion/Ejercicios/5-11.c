/*Escribir una sentencia i-else que clasifique un entero x en una de las siguientes 
categorias y esbriba un mensaje adecuado*/
#include <stdio.h>

int main()
{
    int x;

    printf("Ingresa un valor para x: ");
    scanf("%d",&x);

    if(x<0)
        printf("%d < 0\n",x);
    else if(x>=0 && x<=100)
        printf("0 <= %d <=100\n",x);
    else if(x>100)
        printf("%d > 100\n",x);
    
    return 0;

}