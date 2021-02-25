/*Busqueda en orden inverso del caracter 'x' en una cadena y escribe la cadena que esta a
continuacion */

#include <stdio.h>
#include <string.h>

int main()
{
    char *cadena = "---x---";
    char *resultado;

    resultado = strrchr(cadena, 'x');
    printf("Cadena devuelta: %s \n",resultado);
    return 0;
}