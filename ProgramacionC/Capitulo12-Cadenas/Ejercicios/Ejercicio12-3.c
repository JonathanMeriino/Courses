/*El programa siguiente extrae n caracteres de una cadena introducida por el usuario

Analisis
La extraccion de caracteres se realiza en una funcion que tiene como primer argumento la subcadena a
extraer, como segundo argumento la cadena fuente y el tercero el numero de caracteres a extraer. Se 
utilizan los punteros para pasar arrays a la funcion. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

int extraer(char *dest,const char *fuente,int num_cars);

void main(void)
{
    char s1[81];
    char *s2;
    int n;

    printf("\n\tCadena a analizar ?:");
    gets(s1);
    do{
        printf("Numero de caracteres a extraer: ");
        scanf("%d",&n);
    }while(n<1 || n>strlen(s1));

    s2 = malloc((n-1)*sizeof(char));
    extraer(s2,s1,n);
    printf("Cadena extraida \"%s\" ",s2);

    puts("\nPulse intro para continuar");
    getch();
}
int extraer(char *dest, const char *fuente,int num_cars)
{
    int cuenta;
    for(cuenta = 1; cuenta <= num_cars; cuenta++)
        *dest++ = *fuente++;
    *dest = '\0';

    return cuenta;             //devuelve numero de caracteres 
}