//El siguiente programa solicita introducir un nombre, comprueba la operacion y lo escribe en pantalla
#include <stdio.h>

int main()
{
    char nombre[80];
    printf("\nIntroduzca su nombre: ");
    
    if(gets(nombre)!=NULL)
        printf("Hola %s ¿Como esta usted?");
    return 0;

}