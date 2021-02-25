//Las funciones cuadrado() y suma() muestran dos ejemplos tipicos de ellas

#include <stdio.h>
#include <stdlib.h>
void cuadrado(int );
float suma(int );
/*Funcion que calcule los cuadrados de numeros enteros sucesivos a partir de un
numero dado(n), parametro de la funcion y hasta obtener un cuadrado que sea mayor de 1000*/
void main()
{
  int n, num_elementos; 
  cuadrado(n);
  suma(num_elementos);
}


void cuadrado(int n)
{
  int cuadrado=0, q=0;
  while(q<=1000)            //El cuadrado ha de ser menor de 1000
  {
    q=n*n;
    printf("El cuadrado de: %d es %d\n",n,q);
    n++;
  }
  return;
}
/*Calcula la suma de un numero dado(parametro) de elementos leidos de la
entrada estandar(teclado)*/
float suma(int num_elementos)
{
  int indice;
  float total=0.0;
  printf("\n\t Introduce %d numeros reales \n",num_elementos);
  for(indice=0;indice <num_elementos;indice++)
  {
    float x;
    scanf("%f\n",&x);
    total +=x;
  }
  return total;
}
