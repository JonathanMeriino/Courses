/*En este programa se quiere buscar la fila de una matriz real que tiene la máxima suma de sus elementos
en valor absoluto, La matriz se genera con números aleatorios, las dimensiones de la matriz se
establecen con una constante predejinida.
Para determinar la suma de una fila se define la función sumar ( ) , se la pasa la dirección del primer
elemento de la fila para tratar cada fila como una array unidimensional. Para generar números aleatorios
de tipo real, se divide el número que devuelve la función rand ( ) entre 100.0.*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define F 6
#define C 10
#define V 100.0
void escribe-mat (float mt[][C]);
void gen-mat (float mt[][C]);
float sumar(float v[]);
int maximo(float mt[][C]) ;
int main()
{
    float mat [F] [C];
    int fila;

    randomize();
    gen-mat (mat);
    escribe_mat(mat);

    fila = maximo(mat);
    printf("\n\nFila cuya suma de elementos es mayor: %d",fila);
    return 0;
}
void gen-mat(float mat[][C])
{
    int i, j;

    for (i=O; i<F; i++)
        for (j=O; j<C; j++)
            mat[i] [j]= rand()/V;
}
void escribe_mat(float mat[][C])
{
    int i,j;
    puts ("\n\t\t Matriz analizada\n");
    puts("\t\t-- - ___ - - - - - -\n");
    for (i=0; i<F; i++)
    {
        for (j=0; j<C; j++)
            printf("%.2f%c",mat[i][jl,(j==C-l ?'\n':' '));
    }
} 
float sumar (float v[])
{
    int i;
    float s;
    for (s=0.0,i=0; i<C;i++)
        s += v[i];
    return s;
}
int maxirno(float mt[][C])
{
    float mx;
    int i,f;
    mx = sumar(&mt[0][0]);          //dirección de primera fila 
    printf ("\nSumafila %d %.2f",0,mx);
    for (f=0,i=1;i<F; i++)
    {
        float t;
        t = sumar(&mt [i][0]);
        printf ("\nSuma fila %d %.Lf",i,t);
        if (t>mx)
        {
            mx=t;
            f=i;
        }
    }
    return f;
}

