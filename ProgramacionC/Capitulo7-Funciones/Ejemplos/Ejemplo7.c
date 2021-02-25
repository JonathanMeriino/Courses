//Este programa se realizan calculos de la funcion para valores de x en un intervalo
#include <stdio.h>
#define fesp(x) (x*x + 2*x-1)

void main()
{
  float x;
  for(x=0.0;x<=6.5; x+=0.3)
    printf("\t f(%.1f) = %6.2f\n",x,fesp(x));
}
