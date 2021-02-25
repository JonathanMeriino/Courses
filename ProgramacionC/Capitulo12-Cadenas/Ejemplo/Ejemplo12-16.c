/* Muestra de inversion de cadenas 
    char cadena [] = "Hola";
    strrev (cadena); 
    puts(cadena);           Visualiza "aloH"

El programa siguiente invierte el orden de la cadena Hola mundo*/
#include <stdio.h>
#include <string.h>

int main()
{
    char * cadena = "Hola mundo";
    strrev(cadena);
    printf("\nCadena inversa: %s\n",cadena);
    return 0;
}

/*Estas dos sentencias 
    strrev(cadena);
    printf("\nCadena inversa: %s\n",cadena);
se podrian haber sustituido por
    printf("\nCadena inversa: %s\n",strrev(cadena));*/