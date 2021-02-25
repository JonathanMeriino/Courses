/*Escribir un programa que lea dos enteros de tres digitos y calcule e imprima
su producto, cociente y el resto cuando el primero se divide por el segundo. La
salida sera justificada a derecha*/
#include <stdio.h>

int main()
{
  int num1,num2, producto, cociente1,cociente2;

  printf("Ingrese el valor de los dos numeros: " );
  scanf("%d %d",&num1,&num2);

  producto = num1*num2;
  printf("El producto de los numeros es: %d\n",producto);

  cociente1=num1%num2;
  cociente2=num2%num1;
  printf("El cociente de 1 con 2 es: %d\n",cociente1);
  printf("El cociente de 2 con 1 es: %d\n",cociente2);

    return 0;
}
