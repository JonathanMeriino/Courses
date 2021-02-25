//matriz de n filas y cada fila de un numero variable de elementos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p;
    int n,m,i;

    do{
        printf("\nNumero de filas: "); scanf("%d",&n);
    }while (n<=0);

    p= (int **)malloc(n*sizeof(int *));
    for(i=0; i<n;i++)
    {
        int j;
        printf("Numero de elementos de fila %d",i+1);
        scanf("%d",&m);
        p[i] = (int *)malloc (m*sizeof(int ));
        for(j = 0; j<m; j++)
            scanf("%d",&p[i][j]);
    }
}