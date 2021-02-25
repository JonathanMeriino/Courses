/*Comprobar si una matriz de números enteros es simétrica respecto a la diagonal principal.
La matriz se genera internamente, con la función random ( y argumento N(8) para que la matriz
tenga valores de O a 7. El tamaño de la matriz se pide como dato de entrada. La función s imetrica ( )
determina si la matriz es simétrica. La función main ( genera matrices hasta encontrar una que sea
simétrica y la escribe en pantalla.
Determina si una matriz es simétrica. La matriz se genera con números
aleatorios de O a 7. El programa itera hasta encontrar una matriz
simétrica.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 8
void genmat (int a[][N], int n) ;
int simetrica(int a[] [N], int n) ;
void escribemat (int a[] [N], int n) ;
int main (void)
{
    int a[N][N]; //define matriz de tamaño máximo N
    int n, i, j ;
    int es-sim;
    randomize();
    do {
        printf("\nTamaño de cada dimensión de la matriz, máximo %d: ",N);
        scanf ("%d" , &n) ;
    }while (n<2 | n>N);
    do{
        gen-mat(a,n);
        es-sim = simetrica(a,n);
        if (es-sim)
        {
            puts ("\n\tEncontrada matriz simétrica. \n") ;
            escribe-mat(a,n);
        }
    }while(!es-sim) ;
    return O;
}
void genmat (int a [][N], int n)
{
    int i,j;

    for (i=0; i<n; it+)
        for (j=O; j<n; j++)
            a[i] [jl= random(N);
}            
int simetrica(int a[][N], int n)
{
    int i,j;
    int es-simetrica;
    for (es-símetrica=l,i=O; i<n-i && es-simetrica; i++)
    {
        for (j=i+l; jcn && es-simetrica; j++)
            if (a[i] [j] ! = a[jl [il)
                es-simetrica= O ;
    }
    return es-simetrica;
}
void escribemat (int a[][N],int n)
{
    int i ,j;
    puts ("\tMatrizanalizada") ;
    puts ("\t-- - _ _ _ - - - - ~ -\n");
    for (i=0; i<n ; i++)
    { putchar('\t');
        for(j=0; j<n; j++)
            printf ("%d %c",a[i] [j], (j==n-l ?'\n1':'');
}

