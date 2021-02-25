//El siguiente programa lee y escribe el nombre, direccion y telefono de un usuario

#include <stdio.h>

void main()
{
    char Nombre[32];
    char Calle[32];
    char Ciudad[27];
    char Provincia[27];
    char CodigoPostal[5];
    char Telefono[10];

    printf("\nNombre: ");gets(Nombre);
    printf("\nCalle: ");gets(Calle);
    printf("\nCiudad: ");gets(Ciudad);
    printf("\nProvincia: ");gets(Provincia);
    printf("\nCodigo postal: ");gets(CodigoPostal);
    printf("\nTelefono: ");gets(Telefono);
    //visualizar cadenas

    printf("\n\n%s \t%s\n",Nombre,Calle);
    printf("\n\n%s \t%s\n",Ciudad,Provincia);
    printf("\n\n%s \t%s\n",CodigoPostal,Telefono);
}