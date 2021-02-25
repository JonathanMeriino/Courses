//Seleccionar el mayo de dos numeros enteros con la sentencia if-else y con el operador ?
#include <stdio.h>

void main()
{
    float n1,n2;

    printf("Introduzca dos numeros positivos o negativos: ");
    scanf("%f %f",&n1,&n2);
    //seleccion con if-else
    if(n1>n2)
        printf("%f > %f\n",n1,n2);
    else
        printf("%f <= %f\n",n1,n2);
    
    //operador condicional
    n1>n2 ? printf("%f > %f\n",n1,n2):printf("%f <= %f\n",n1,n2);
}