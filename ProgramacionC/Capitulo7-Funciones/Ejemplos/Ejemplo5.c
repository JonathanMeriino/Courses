/*El siguiente programa muestra el mecanismo de paso de parametros por valor
Muestra el paso de parametros por valor se puede cambiar la variable del
parametro en la funcion pero su modificacion no puede salir al exterior*/
#include<stdio.h>
void DemoLocal(int valor);

void main(void)
{
  int n=10;
  printf("Antes de llamar a DemoLocal, n = %d\n",n);
  DemoLocal(n);
  printf("Despues de llamar a DemoLocal, n=%d\n",n );
}
void DemoLocal(int valor)
{
  printf("Dentro de DemoLocal,valor =%d\n",valor );
  valor=999;
  printf("Dentro de DemoLocal,valor =%d\n",valor );
}
