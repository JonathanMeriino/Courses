/* ¿Cuales son los resultados visualizados por el siguiente programa , si los
datos proporciondos son 5 y 8*/
#include <stdio.h>
const int M = 6;

int main ()
{
  int a, b, c;
  puts("Introduce el valor de a y de b: ") ;
  scanf ("%d %d", &a, &b) ;

  c = 2 * a - b ;
  c -= M;
  b = a + c - M;
  a = b * M ;

  printf ("\n a = %d\n",a);

  b = -1;
  printf ( "b = %d,c =%d\n",b,c);
  return 0;

}
