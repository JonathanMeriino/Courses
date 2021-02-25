//Ejemplo se declara la funcion media
#include <stdio.h>
double media(double x1,double x2);     //declaracion de media
int main()
{
  double num1,num2,med;

  printf("Ingresa los valores de 2 numeros: ");
  scanf("%lf %lf",&num1,&num2);
  med = media(num1,num2);
  printf("El valor de la media es %lf\n",med);
  return 0;                                               
}
double media(double x1,double x2)         //definicion
{
  return (x1+x2)/2;
}
