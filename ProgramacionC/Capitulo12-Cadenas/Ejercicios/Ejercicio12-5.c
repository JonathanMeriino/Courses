/*Se desea encontrar una cadena que sea palindromo. El programa lee cadenas hasta encontrar un
palindromo
Analisis
La cadena se lee con gets(), se transforman todos los caracteres a mayusculas con la funcion
strupr(), se obtiene la cadena inversa con strrev() y se comparan con strcmp()-
No hubiera hecho falta convertir a mayusculas si la comparacion de cadenas se hubiera hecho con
stricmp() */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ctr[81] , ictr[81];
    puts("\n\tIntroducir una frase hasta que sea capicua ");
    do{
        gets(ctr);
        strupr(ctr);        //Todos los caracteres en mayusculas
        strcpy(ictr,ctr);
        strrev (ctr);       // invierte la cadena
    }while (strcmp (ctr,ictr));     //termina el bucle cuando son iguales
    printf("\nCadena %s es palindromo",ictr);
    return 0;
}