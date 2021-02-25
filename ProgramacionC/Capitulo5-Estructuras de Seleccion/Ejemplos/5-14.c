//Dada una note de un examen mediante un codigo escribir el literal que le corresponde a la nota
#include <stdio.h>

int main()
{
    char nota;
    printf("Introduzca calificacion A-F y pulse Intro: ");
    scanf("%c",&nota);

    switch (nota)
    {
        case 'A':
            puts("Excelente. Examen superado");
            break;
        case 'B':
            puts("Notable. Satisfactoria");
            break;
        case 'C':
            puts("Aprobado");
            break;
        case 'D':
        case 'F':
            puts("Suspendido");
            break;
        default: puts("No es posible esa nota");
        
    }
    puts("Final del programa");
    return 0;
}