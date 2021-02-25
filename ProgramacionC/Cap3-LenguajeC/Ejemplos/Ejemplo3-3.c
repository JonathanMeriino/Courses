//Este ejemplo muestra como una variable puede ser declarada al inicio de cualquier bloque de un programa.c
#include<stdio.h>
//Diferentes declaraciones
int main()
{
  int x,y1;           //Declarar a las variables x e y1 en la funcion main()
  x=75;
  y1=89;
  if(x>10)
  {
      int y2=50;      //Declarar e inicializar a la variable y2 en el bloque if
      y1=y1+y2;
  }
  printf("x = %d, y1 = %d\n",x,y1);
  return 0;      

}
