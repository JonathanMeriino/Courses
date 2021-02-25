//Programa que determina la fecha del domingo de Pascua
#include <stdio.h>

int main()
{
  int anio;
  int A,B,C,D,E,N;
  printf("Ingresa el anio: ");
  scanf("%d",&anio);

  A = anio%19;
  B = anio%4;
  C = anio%4;
  D = (19*A+24)%30;
  E = (2*B+4*C+6*D+5)%7;
  N = (22+D+E);

  (N<=31)? printf("En marzo el dia: %d\n",N): printf("En abril el dia: %d\n",N);

  return 0;
}
