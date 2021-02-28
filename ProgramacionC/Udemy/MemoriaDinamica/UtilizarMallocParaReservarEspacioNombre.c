//* utilizar malloc para resrvar memoria para un nombre(String)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre,"Ricardo"); //? Jorge\0
    longitud = strlen(nombre);

    printf("la longitud del nombre es: %i\n",longitud);
    p_nombre = malloc((longitud+1)*sizeof(char));

    strcpy(p_nombre,nombre);
    printf("Nombre: %s",p_nombre);





    return 0;
}