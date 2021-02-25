/*Aplicacion simple de un bucle while: seleccionar una opcion de saludo al
usuario dentro de un programa */
#include <stdio.h>

int main()
{
    char opcion;
    do{
        puts("Hola");
        puts("¿Desea otro tipo de saludo?");
        puts("Pulse s para si y n para no,");
        printf("y a continuacion pulse intro: ");
        scanf("%c",&opcion);
    }while(opcion=='s' || opcion=='S');
    puts("Adios");
    return 0;
}