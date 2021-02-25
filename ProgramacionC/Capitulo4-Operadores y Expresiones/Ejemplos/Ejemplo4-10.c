/*Suponga que se desea conocer el tamaño, en bytes, de variables de coma flotante y de doble precision
de su computadora. El siguiente programa realiza esta tarea*/

//Imprime el tamaño de valores de coma flotante y double
#include<stdio.h>
int main()
{
  printf("El tamaño de variables de coma flotante es: %ld\n",sizeof(float) );
  printf("El tamaño de variables de doble precision es: %ld\n",sizeof(double));

  return 0;
}
