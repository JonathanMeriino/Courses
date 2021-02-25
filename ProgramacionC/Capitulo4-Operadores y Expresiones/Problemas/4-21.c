/*Construir un programa que indique si un numero introducido por el teclado es
positivo, igual a cero o negativo*/
#include <stdio.h>

int main()
{
  float numero;

  printf("Ingresa un numero: ");
  scanf("%f",&numero);

  (numero==0)? printf("El numero es igual a cero\n"):
  (numero>0 && numero!=0)? printf("El numero es positivo\n"): printf("El numero es negativo\n");

  return 0;
}
