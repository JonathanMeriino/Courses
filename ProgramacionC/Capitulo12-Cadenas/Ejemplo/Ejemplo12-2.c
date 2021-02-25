/*Entrada y salida de cadenas. Lectura de palabras de 79 caracteres de maxima longitud en una memoria
intermedia(buffer) de 80 caracteres */

#include <stdio.h>

void main()
{
    char palabra [80];
    do{
        scanf("%s",palabra);
        if(!feof(stdin))
            printf("\t\"%s\"\n",palabra);

    }while(!feof(stdin));
}