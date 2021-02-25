//¿Cual es la salida del siguiente programa
#include <stdio.h>
#define T "Tambor de hojalata."
int main()
{
  char st[21]="Todo puede hacerse.";
  puts(T);
  puts("Permiso para salir en la toto.");
  puts(st);
  puts(&st[8]);
  return 0;
}
