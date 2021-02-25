/*En este ejemplo se leen dos cadenas de caracteres; si la segunda cadena comienza por COPIA se añade
a la primera. La memoria se reserva con realloc(); */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char *C1 = NULL, *C2 = NULL, B[121];
    char *clave = "COPIA";
    int tam;

    puts("\n\t Primera cadena ");
    gets(B);
    tam = (strlen(B)+1)*sizeof(char);
    C1 = (char *)realloc (C1,tam);
    strcpy(C1,B);

    /*Compara los primeros caracteres de C2 con clave.
    La comparacion se realiza con la funciones strcmp */

    if(strlen(clave)<= strlen(C2))
    {
        int j;
        char *R = NULL;
        R = realloc(R,(strlen(clave)+1)*sizeof(char));
        //copia los strlen(clave) primeros caracteres
        for(j=0; j<strlen(clave);j++)
            *(R+j) = *(C2+j);
        *(R+j) = '\0';
        //compara con clave
        if(strcmp(clave,R)==0)
        {
            //amplia el bloque de memoria
            tam = (strlen(C1)+strlen(C2)+1)*sizeof(char);
            C1 = realloc(C1,tam);
            strcat(C1,C2);
            return 1;
        }
    }
}