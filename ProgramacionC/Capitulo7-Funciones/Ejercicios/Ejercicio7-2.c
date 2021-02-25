/*Una aplicacion completa de una macro con argumentos es Volcono(),que calcula el
volumen de la figura geometrica cono*/
#include<stdio.h>
#define Pi 3.141592

#define VOLCONO(radio,altura) ((Pi*(radio*radio)*altura)/3.0)
int main()
{
  float radio,altura,volumen;

  printf("\nIntroduzca radio del cono: ");
  scanf("%f",&radio);
  printf("Introduzca la altura del cono: ");
  scanf("%f",&altura);
  volumen = VOLCONO(radio,altura);
  printf("\nEl volumen del cono es: %.2f\n",volumen);
  return 0;
}
