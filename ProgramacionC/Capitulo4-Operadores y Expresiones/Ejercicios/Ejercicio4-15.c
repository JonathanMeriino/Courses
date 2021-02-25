/*Escribir un programa que lea tres enteros y emita un mensaje que indique si
estan o no en orden numerico */
#include <stdio.h>

int main()
{
  int a,b,c;

  printf("Ingresa los valores enteros: ");
  scanf("%d %d, %d",&a,&b,&c );

  (a<b) && (b<c)? printf("Estan en orden\n"): printf("No estan en orden\n");

  return 0;
}
