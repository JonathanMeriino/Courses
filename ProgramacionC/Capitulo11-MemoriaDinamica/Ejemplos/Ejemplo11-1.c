/*En el siguiente ejemplo se lee una linea de caracteres, se reserva memoria para un buffer de tantos 
caracteres como los leidos y se copia en el buffer la cadena */
#include <stdio.h>
#include <string.h>         //por el uso de strcpy

void main()
{
    char cad[121], *ptr;
    int lon;

    puts("\nIntroduce una linea de texto\n");
    gets(cad);

    lon = strlen(cad);
    ptr = (char *) malloc((lon+1)*sizeof(char));

    strcpy (ptr,cad);               //copia cad a nueva area de memoria

    printf("ptr = %s",ptr);             // cad esta ahora en ptr
    free(ptr);                      //libera memoria de ptr
}