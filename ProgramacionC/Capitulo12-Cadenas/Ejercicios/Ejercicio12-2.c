/*El programa siguiente lee una frase y escribe en pantalla tantas lineas como palabras tiene la frase;
cada linea que escribe, a partir de la primera, sin la ultima palabra de la linea anterior: 

Analisis:
La funcion sgtepal()explora los caracteres pasados en p hasta que encuentra el primer blanco
(separador de palabras). La exploracion se realiza de derecha a izquierda, en la posicion del blanco
asigna '\n' para indicar fin de cadena */

#include <stdio.h>
#include <string.h>

void sgtepal(char *p);

void main()
{
    char linea[81];
    
    printf("\n\tIntroduce una linea de caracteres \n");
    gets(linea);

    while(*linea)
    {
        puts(linea);
        sgtepal(linea);
    }
}
void sgtpal(char *p)
{
    int j;

    j= strlen(p)-1;
    while(j>0 && p[j]!= ' ')
        j--;
    p[j] = '\0';
}