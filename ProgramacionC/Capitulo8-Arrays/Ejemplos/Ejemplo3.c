//El siguiente programa muestra cómo se pasa un array de enteros a una función de ordenación, ordenar().
#include <stdio.h>
void ordenar(int[],int);
//prototipo de ordenar
int main ()
{
    int ListaEnt[] = {9, 8, 7 , 6, 5 , 4, 3 , 2 , 1, 10};
    int i;
    int LongLista = sizeof(ListaEnt) / sizeof(int);
    ordenar(ListaEnt,LongLista);
    
    for (i=0; i<LongLista; i++)    
        printf ("%d ",ListaEnt [i]) ;
    return 0;
}
void ordenar(int lista[],int numElementos)
{
/*cuerpo de la función ordenar el array */
}
