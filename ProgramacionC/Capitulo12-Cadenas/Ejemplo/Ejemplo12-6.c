//La siguiente funcion devuelve el caracter S o N:
#include <conio.h>
#include <ctype.h>

int respuesta ()
{
    char car;
    do{
        car = toupper(getche());
    
    }while (car != 'S' && car != 'N');

    return car;
}