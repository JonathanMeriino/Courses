/*Escribir un programa que lea el radio de un circulo y a continuacion visualice:
area y diametro del circulo y longitud de la circunferencia del circulo */
#include <stdio.h>
#define PI 3.141582
int main()
{
  float radio;

  printf("Ingresa el valor del radio: ");
  scanf("%f",&radio);

  float area = PI*radio*radio;
  printf("El valor del area es: %f\n",area);

  float diametro = 2*radio;
  printf("El valor del diametro es: %f\n",diametro);

  float longitud = diametro*PI;
  printf("La longitud de la circunferencia es: %f\n",longitud);
  return 0;
}
