/*El siguiente programa ace <eco> del flujo de entrada y convierte las palabras en palabras iguales que
comienzan con letra mayuscula. Es deciar, si la entrada es "poblado de penas rubias" se ha de 
convertir en "Poblado De Peñas Rubias ". Para realizar esa operacion se recurre a la funcion 
toupper(car) que devuelve el equivalente mayuscula de car si car es una letra minuscula. El archivo
de cabecera necesario para poder utilizar la funcion toupper(car) es <ctype.h> */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char car, pre = '\n';

    while ((car = getchar())!=EOF)
    {
        if(pre == ' ' || pre== '\n')
            putchar(toupper(car));
        else
            putchar(car);
        pre = car;
    }
    return 0;
}