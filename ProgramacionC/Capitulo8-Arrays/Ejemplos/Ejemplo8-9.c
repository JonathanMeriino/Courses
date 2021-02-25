/*El siguiente programa busca todas las ocurrencias de un elemento y la posición que ocupa en una
matriz. La posición viene dada porJila y columna; la matriz se genera con números aleatorios de O
a 49.
La función de búsqueda devuelve O si no encuentra al elemento, 1 si lo encuentra. Tiene el
argumento de la matriz y dos parámetros para devolver la fila y columna, por lo que tendrán que ser de
tipo puntero para poder devolver dicha información. La búsqueda se hará a partir de la fila y columna
de la última coincidencia.*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define F 8
#define C 10
#define N 50
void escribemat (int a [][C]);
void genmat (int a [][C]) ;
int buscar(int a[] [C],int* fila,int* co1,int elemento);
int main()
{
    int a[F] [C];
    int item, nf ,nc, esta;
    int veces = 0;

    randomize ( ) ;
    genmat(a) ;
    printf("\nElemento a buscar: ");
    scanf("%d",&item);
    
    do{ 
        esta = buscar(a,&nf,&nc,item);
        if (esta)
        {
        veces = veces+1;
        printf ("\n coincidencia %d: Fila %d, Co1.umna %d\n",veces,nf ,nc) ;
        }
    }while (esta) ;
    escribe_mat(a);
    printf("\nNÚmero de coincidencias del elemento %d : %d",item,veces);
    return 0;
}
//Busqueda lineal en toda la matriz
int buscar(int a[][C],int* fila,int* col,int elemento)
{
    static int x =0, y = -1;
    int i,j,encontrado;
  //avanza al siguiente elemento(fila,columna)
    if (y==C-1)         //ultima columna
    {
        y =0;
        x=x+1;
    }
    else
        y = y+1;
        encontrado = 0;
    while (!encontrado && ( x < F ))
    {
        encontrado = (a[x][y]==elemento);
        if (!encontrado) //avanza a siguiente elemento
            if (y==C-1)
            {       
                y = 0;
                x=x+1;
            }
        else
            y = y+1;
    }
  //ultimo valor de x e y
    *fila=x;
    *col = y;
    return encontrado;
}
void gen-mat(int a[][C])
{
    int i, j;

    for (i=0; i<F; i++)
        for (j=0; j<C; j++)
            a[i][j]= random(N);
}
void escribemat (int a [][C])
{
    int i,j;
    puts ("\t\tMatriz analizada") ;
    puts ("\t\t---\n");
    for (i=0; k F ; i++)
    { putchar('\t');
        for ( j = 0; j<C; j++)
            printf("%d %c",a[i][j],(j==C-i ?'\n':' '));
    }    
}