//una cadena formada por caracteres en mayusculas se convierte en minusculas

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *cadena = "ABCDEFG";

    strlwr(cadena);
    printf("La cadena convertida es: %s\n",cadena);
    return 0;
}