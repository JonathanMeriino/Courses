/*Comparacion de las sentencias if-else-if y switch. Se necesita saber si un determinado caracter
car es una vocal.*/
#include <stdio.h>

void main()
{
    char car;

    printf("Ingresa una letra: ");
    scanf("%c",&car);
    //solucion con if-else if
    if((car=='a')|| (car=='A'))
        printf("%c es una vocal\n",car);
    else if((car=='e')|| (car=='E'))
        printf("%c es una vocal \n",car);
    else if ((car=='i')||(car=='I'))
        printf("%c es una vocal\n",car); 
    else if((car=='o')||(car=='O'))
        printf("%c es una vocal\n",car);
    else if ((car=='u')||(car=='U'))
        printf("%c es una vocal\n",car);
    else 
        printf("%c no es una vocal\n",car);

    //Solucion con switch
    switch (car)
    {
        case 'a': case 'A': 
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        printf("%c es una vocal\n",car);
            break;
    
        default: printf("%c no es una vocal\n",car);
    }

}