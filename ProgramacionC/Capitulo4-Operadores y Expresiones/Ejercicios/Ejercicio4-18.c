/*Escribir un programa que lea dos numeros y visualice el mayor, utilizar el
operador ternario ?*/
#include <stdio.h>

int main()
{
  float num1,num2;

  printf("Ingrese el primer numero: ");
  scanf("%f",&num1 );
  printf("Ingrese el segundo numero: ");
  scanf("%f",&num2);

  (num1>num2)? printf("El numero mas grande es: %.3f\n",num1): printf("El numero mas grande es: %.3f\n",num2);

  return 0;
}
