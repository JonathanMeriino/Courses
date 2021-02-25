/* Se desea ordenar un array de numeros reales, la ordenacion se va a realiar con la funcion qsort()

    Esta funcion etiene un parametro que es un puntero a funciion del tipo int (*)(const void *,const 
    void*). Se necesita una fuincion de comparacion, que devuelva negativo si primer argumento es menor
    que el segundo, 0 si son iguales y positivo si es mayor. A continuacion se escribe el programa */

#include <stdio.h>
#include <stdlib.h>

int compara_float(const void *a,const void *b); //prototipo de funcion de comparacion

float v[]={34.5, -12.3, 4.5,9.1, -2.5, 18.0,10., 5.5};

int main()
{
    int j,n;
    int (*pf)(const void *,const void *); //puntero a funcion

    n= sizeof(v)/sizeof(v[0]);      //numero de elementos
    printf("\n Numero de elementos: %d \n",n);

    pf = compara_float;
    qsort((void *)v,n,sizeof(v[0]),pf); //llamada a funcion de biblioteca

    for(j=0;j<n;j++)
        printf("%.2f",v[j]);
    puts("\nPulsa cualquier tecla para continuar....");
    j=getchar();
    return 0; 
}

int compara_float(const void *a,const void *b)
{
    float *x,*y;
    x = (float *)a; y = (float *)b;
    return (*x - *y);
}