//Este programa rompe una cadena en subcadenas y se imprime cada una de ellas
#include <stdio.h>
#include <string.h>

int main()
{
    char *cad = "Pepe Luis + Canovas * Marcos";
    char *seperador = "+";
    char *ptr = cad;

    printf("\n%s\n",cad);
    ptr = strtok(cad, seperador);

    /*Anterior llamada, devuelve direccion a primer
    caracter y situa un NULL en el primer caracter
    coincidente con algun caracter de s2 */
    printf ("\tSe rompe en tres subcadenas");
    while (ptr)
    {
        printf("\n%s",ptr);
        ptr = strtok(NULL, seperador);
        /*Devuelve direccion primer caracter
        a partir de subcadena anterior y situa NULL en
        primer caracter coincidente con alguno de s2 */
    }
    return 0;
    
}