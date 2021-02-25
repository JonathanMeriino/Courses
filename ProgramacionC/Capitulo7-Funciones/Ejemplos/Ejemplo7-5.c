//Comprueba si la enrada es una v o una h
#include <stdio.h>
#include<ctype.h>

int main()
{
    char resp;              //respuesta del usuario
    char c;

    printf("¿Es un varon o una hembra(V/H) ? ");
    scanf("%c",&resp);
    resp=toupper(resp);

    switch (resp)
    {
        case 'V':
            puts("Es u enfermero");
            break;
        case 'H':
            puts("Es una maestra");
            break;
        default:
            puts("No es ni enfermero ni maestra");
            break;
    }
    return 0;   
}