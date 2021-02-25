//El siguiente ejemplo busca el segmento de cadena que tiene un subonjunto de cadena 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *cadena1="3al1293456";
    char *cadena2 = "abc123";
    int longitud;

    longitud = strspn(cadena1,cadena2);
    printf("Longitud = %d",longitud);
    return 0;
}