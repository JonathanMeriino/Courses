//Contar valores de 1 a 10 de modo recursivo
#include <stdio.h>

void contar(int cima);

int main()
{
  contar(10);
  return 0;
}
void contar(int cima)
{
  if(cima>1)
    contar(cima-1);
  printf("%d\n",cima );
}
