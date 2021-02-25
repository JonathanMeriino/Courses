/*Diseñar un programa que lea dos conjuntos de coeficientes (a,b y c; d,e y f) y
visualice los valores de x e y*/
#include <stdio.h>

int main()
{
  int a,b,c,d,e,f;
  float x,y;

  printf("\tSistema de ecuaciones de la forma\n\t\t ax + by = c\n\t\t dx + ey = f\n");

  printf("Ingrese los coeficientes de la 1er ecuacion:");
  scanf("%d %d %d",&a,&b,&c);

  printf("Ingresa los coeficientes de la 2da ecuacion: ");
  scanf("%d %d %d",&d,&e,&f);

  x = (c*e - b*f)/(a*e - b*d);
  y= (a*f - c*d)/(a*e - b*d);

  printf("Valor de x = %.3f\n",x);
  printf("Valor de y = %.3f\n",y);

  return 0;
}
