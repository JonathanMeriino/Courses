/* Una aplicacion de una variable static en una funcion es la que nos permite obtener la serie de
numeros de fibonacci. El ejercicio lo plantearnos: dado un enterno n, obtener los n primeros 
numeros de la serie de fibonacci.*/
#include <stdio.h>
long int fibonacci();

int main()
{
    int n,i;
    printf("\nCuantos numeros de fibonacci?: ");
    scanf("%d",&n);
    printf("\nSecuencia de fibonacci: 0,1");
    for(i=2;i<n;i++)
        printf(",%ld",fibonacci());
    
    return 0;
}
long int fibonacci()
{
    static int x=0;
    static int y=1;

    y=y+x;
    x=y-x;

    return y;
}
