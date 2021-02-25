/*El siguiente programa copia un mensaje en un array de caracteres y lo imprime en pantalla. Ya que
printf() y strcpy()(una funcion de cadena)se utilizan, se necesitan sus archivos de cabecera especificos*/

#include<stdio.h>
#include<string.h>

int main()
{
  char mensaje[20];
  strcpy (mensaje,"Atapuerca");
  /* Las dos lineas anteriores se pueden sustituir por
      char mensaje[20] = "Atapuerca\n";*/
  puts(mensaje);
  return 0;
}
