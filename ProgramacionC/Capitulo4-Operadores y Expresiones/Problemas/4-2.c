//Escriba un programa que lea la temperatura en grados Celcius y la escriba en F
#include <stdio.h>

int main()
{
  float grados, fahren;

  printf("Ingresa los grados: ");
  scanf("%f",&grados);

  fahren = (9/5)*grados + 32;
  printf("El equivalente en Fahrenheit es: %.3f\n",fahren);

  return 0;
}
