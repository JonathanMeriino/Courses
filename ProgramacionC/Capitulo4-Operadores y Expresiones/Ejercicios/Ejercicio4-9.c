/*Escribir un programa que solicite al usuario la longitud y anchura de una
habitacion y a continuacion visualice su superficie con cuatro decimales*/
#include <stdio.h>

int main()
{
  float longitud, anchura, superficie;

  printf("Ingresa el valor de la longitud: ");
  scanf("%f",&longitud);

  printf("Ingresa el valor de la anchura: ");
  scanf("%f",&anchura);

  superficie=longitud*anchura;
  printf("El valor de la superficie es: %.4f",superficie);

  return 0;
}
