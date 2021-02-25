//Calcular la media aritmetica de dos numeros reales
#include<stdio.h>
double media(double x1,double x2)
{
  return (x1 + x2)/2;
}
int main()
{
  double num1,num2,med;
  printf("Introducir dos numeros reales: ");
  scanf("%lf %lf",&num1,&num2);
  med = media(num1,num2);
  printf("El valor medio es %.4lf\n", med);
  return 0;
}
