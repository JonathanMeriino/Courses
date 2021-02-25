//Escribir un programa que determine si un año es bisiesto
#include <stdio.h>
int main()
{
  int anio;

  printf("Ingresa el año: ");
  scanf("%d",&anio);

  (anio%4==0 && anio%100!=0 && anio%400==0)? printf("El año es bisiesto\n"): 
  printf("El año no es bisiesto\n");

  return 0;
}
