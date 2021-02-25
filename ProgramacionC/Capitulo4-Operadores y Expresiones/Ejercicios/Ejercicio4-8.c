/* Escribir un programa que lea dos enteros en las variables x e y , y a
continuacion obtenga los valores de 1. x/y , 2. x%y. Ejecute el programa varias
veces con diferentes pares de enteros como entrada */
#include <stdio.h>


int main()
{
  int x,y;
  float n;

  printf("Ingrese los numeros para X,Y: " );
  scanf("%d %d",&x,&y );
  n= x/y;
  printf("Division de x/y = %.3f\n",n);

  n= x%y;
  printf("Residuo de n= %.3f\n",n);

  return 0;
}
