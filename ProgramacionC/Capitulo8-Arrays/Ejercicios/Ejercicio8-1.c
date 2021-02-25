//Lectura y visualizacion de un array de dos dimensiones
/*La funcion leer() lee un array(una tabla) de dos dimensiones y la funcion visualizar()
presenta la tabla en la pantalla*/
#include<stdio.h>
//prototipos
void leer(int a[][5]);
void visualizar(const int a[][5]);

int main()
{
    int a[3][5];
    leer(a);
    visualizar(a);
    return 0;
}
void leer(int a[][5])
{
    int i,j;
    puts("Introduzca 15 numeros enteros, 3 por fila");
    for(i=0;i<3;i++)
    {
        printf("Fila %d: ",i);
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
}
void visualizar(const int a[][5])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
}