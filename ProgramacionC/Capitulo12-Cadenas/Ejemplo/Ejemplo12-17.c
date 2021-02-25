/*Este programa convierte los caracteres en minusculas de una cadena a mayusculas; se escribe la cadena
por pantalla */

#include <stdio.h>
#include <string.h>

int main()
{
    char *cadena = "abcdefg";

    strupr(cadena);
    printf("La cadena convertida es: %s\n",cadena);
    return 0;
}