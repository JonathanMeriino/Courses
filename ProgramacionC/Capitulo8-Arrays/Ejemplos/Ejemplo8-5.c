/*Paso de arrays a funciones. En el ejemplo se lee un array y se escribe.
El array tiene un tamaño máximo, L, aunque el número real de elementos es determinado en la
función leerArray ( ) . El segundo argumento es, por tanto, un puntero para así poder transmitir por
referencia y obtener dicho dato de la función.*/
#include <stdio.h>
#define L 100
void leerArray(double a[], int*);
void imprimirArray (const double [],int);
int main()
{
    double a[L] ;
    int n;
    leerArray (a, &n) ;
    printf("E1 array a tiene %d elementos, estos son\n ",n);
    imprimirArray (a, n) ;
    return 0;
}
void leerArray(double a[], int* num)
{
    int n = 0;
    puts("1ntroduzca datos. Para terminar pulsar O.\n");
    for ( ; n < L; n++)
    {
        printf ("%d: ",n);
        scanf ("%lf",&a[n]);
        if (a[n]==0) break;
    };
    *num = n;
}
void imprimirArray(const double a[],int n)
{
    int i = 0;
    for ( ; i < n; i++)
        printf ("\t%d: %lf\n",i,a[i]
}