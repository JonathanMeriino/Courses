/* una vez definido un array de caracteres, se le asigna una cadena constante

char nombre[41];
strcpy(nombre, "Cadena a copiar");

La funcion strcpy() copia "Cadena a copiar" en la cadena nombre y añade un caracter nulo
al final de la cadena resultante. El siguiente programa muestra una aplicacion de strcpy()*/
#include <stdio.h>
#include <string.h>

void main()
{
    char s[100] = "Buenos dias Mr. Palacios", t[100];

    strcpy(t,s);
    strcpy (t+12,"Mr.C");
    printf("\n %s\n%s",s,t);
}