//Bucle para introducir un digito
#include <stdio.h>

int main()
{
    char digito;
    do{
        printf("Introduzca un digito (0-9): ");
        scanf("%c",&digito);

    }while((digito<'0') || ('9'<digito));

    return 0;
}