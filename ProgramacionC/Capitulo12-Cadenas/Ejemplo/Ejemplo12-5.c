/*El siguiente programa cuenta las ocurrencias de la letra 't' del flujo de entrada. Se diseña un bucle
while que continua ejecutandose mientras que la funcion getchar() lee caracteres y se asignan a car */

#include <stdio.h>

int main()
{
    int car;
    int cuenta = 0;

    while ((car = getchar())!=EOF )
        if(car == '\t') ++cuenta;
    printf("\n %d letras t \n",cuenta);

    return 0;
    
    
}