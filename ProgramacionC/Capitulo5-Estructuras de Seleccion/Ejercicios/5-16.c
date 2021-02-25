/*Codificar un programa que escriba la calificacion correspondiente a una nota, 
de acuerdo con el siguiente criterio*/
#include <stdio.h>

int main()
{
    float nota;

    printf("Ingrese el valo de la nota: ");
    scanf("%f",&nota);

    if(nota>=0 && nota<5)
        printf("Suspenso\n");
    else if(nota>=5 && nota<6.5)
        printf("Aprobado\n");
    else if(nota>=6.5 && nota<8.5)
        printf("Notable\n");
    else if(nota>=8.5 && nota<10)
        printf("Sobresaliente\n");
    else if(nota==10)
        printf("Matricula de honor\n");
    
    return 0;
}