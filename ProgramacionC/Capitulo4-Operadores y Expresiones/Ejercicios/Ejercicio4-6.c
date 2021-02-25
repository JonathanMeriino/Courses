/*Escribir un programa que lea un entero, lo multiplique por 2 y a continuacion
lo escriba de nuevo en la pantalla*/
#include <stdio.h>

int main()
{
    int n;

    printf("Ingresa un valor entero:");
    scanf("%d",&n);
    n *= 2;

    printf("n = %d\n",n);

    return 0;
}
