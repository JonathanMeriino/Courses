//¿Cual es la salida del siguiente programa, si se introducen por teclado las letras LJ?
#include <stdio.h>

int main()
{
  char primero,ultimo;
  printf("Introduzca su primera y ultima inicial: ");
  scanf("%c %c",&primero,&ultimo);
  printf("Hola, %c . %c . \n",primero,ultimo);
  return 0;
}
