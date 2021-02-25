/*Escriba un programa para calcular la longitud de la circunferencia y el area
del circulo para un radio introducido por el teclado */
#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main()
{
  float radio, longitud, area;

  printf("Ingrese el valor del radio: ");
  scanf("%f",&radio);

  longitud =2*PI*radio ;
  printf("El valor de longitud es: %.4f\n",longitud);

  area = PI*radio*radio;
  printf("El valor de area es: %.4f\n",area);

  return 0;
}
