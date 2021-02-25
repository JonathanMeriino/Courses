//La funcion max devuelve el numero mayor de dos enteros
#include<stdio.h>
int max(int x,int y)
{
  if(x<y)
    return y;
  else
    return x;
}
int main()
{
  int m,n;
  do{
    printf("Ingresa tus dos numeros: ");
    scanf("%d %d",&m,&n);
    printf("Maximo de %d,%d es %d\n",m,n,max(m,n)); //Llamada a max
  }while (m !=0);
  return 0;
}
