//Escribir un programa que lea dos numeros y visualice el mayor
#include <stdio.h>

int main()
{
  float num1,num2;

  printf("Ingresa los dos numeros a comparar: ");
  scanf("%f %f",&num1,&num2);

  (num1>num2)? printf("El numero mayor es %.2f\n",num1): printf("El numero mayor es: %.2f\n",num2);

  return 0;
}
