//Calcular el mayor de dos numeros leidos del teclado y visualizarlo en pantalla
#include <stdio.h>

int main()
{
    int x,y;
    printf("Introduzca dos numeros: ");
    scanf("%d %d", &x,&y);

    if(x>y)
        printf("%6d\n",x);
    else
        printf("%6d\n",y);
    
    return 0;
}