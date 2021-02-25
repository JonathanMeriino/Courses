/*Escribir un programa que solicite dos numeros decimales y calcule su suma,
visualizandola suma ajustada a la derecha*/
#include <stdio.h>
int main()
{
  float num1,num2, suma;

  printf("Ingresa el valor del numero 1: ");
  scanf("%f",&num1);

  printf("Ingresa el valor del numero 2: " );
  scanf("%f",&num2);

  suma = num1+num2;
  printf("\t %.4f \n\t +%.4f \n\t---------\n\t %.4f \n",num1,num2,suma);

  return 0;

}
