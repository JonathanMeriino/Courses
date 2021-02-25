/*Escribir un programa que convierte un numero dado en segundos en el equivalente
de minutos y horas*/
#include "stdio.h"

int main()
{
  float seg, min, horas;

  printf("Ingresa los segundos que quieras convertir: ");
  scanf("%f",&seg);

  min = (seg*1)/60;
  printf("El equivalente en minutos es: %.2f\n",min);

  horas= (seg*1)/3600;
  printf("El equivalente en horas es: %.2f\n",horas);

  return 0;

}
