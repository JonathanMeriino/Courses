/* Proteccion frente a errores en el intervalo(rango) de valores de una variable
de indice que represena un array*/
#include <stdio.h>
#include <stdlib.h>

double suma(cons double a[],const int n)
{
  double S = 0.0;
  if(n*sizeof(double)>sizeof(a))
    return 0;
  for(int i=0;i<n;i++)
    S += a[i];
  return S;
}
