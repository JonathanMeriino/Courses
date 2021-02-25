//Reservar memoria para una cadena y a continuacion, ampliar para otra cadena mas larga

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char *cadena;
    int tam;

    tam = (strlen ("Primavera")+1)*sizeof(char);
    cadena = (char *) malloc (tam);

    strcpy(cadena, "Primavera");
    puts(cadena);

    //amplia el bloque de memoria

    tam += (strlen("en Lupiana\n")+1)*sizeof(char);
    cadena = (char *)realloc(cadena,tam);
    strcat (cadena, "en Lupiana\n");
    puts(cadena);
    //liberacion de memoria
    free (cadena);
    return 0;
}