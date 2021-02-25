/*Las cadenas terminan con el caracter nulo. Asi en el siguiente programa se muestra que el caracter
NULL ('\0') se añade a la cadena */

#include <stdio.h>

int main()
{
    char S[]="ABCD";

    for (int i=0; i<5;i++)
        printf("S[%d] = %c\n",i, S[i]);
    return 0;
}