/*Leer un caracter del teclado y comprobar si es una letra
Solicita iniciales y comprueba que es alfabetica*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    char inicial;

    printf("¿Cual es su primer caracter inicial?: ");
    scanf("%c",&inicial);

    while(!isalpha(inicial))
    {
        puts("Caracter no alfabetico ");
        printf("¿Cual es su siguiente inicial?: ");
        scanf("%c",&inicial);
    }

    puts("Es un caracter alfabetico ¡Terminado!");
    return 0;
}