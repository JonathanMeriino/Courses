//¿Que salida produce el siguiente codigo, cuando se empotra un programa completo?
#include <stdio.h>

int main()
{
    int x=2;

    puts("Arranque");
    if (x<=3)
        if(x!=0)
            puts("Hola desde el segundo if");
        else 
            puts("Hola desde el else");
    puts("Fin\nArranque de nuevo");
    if(x>3)
        if (x!=0)
            puts("Hola desde el segundo if");
        else
            puts("Hola desde el else");
    puts("De nuevo fin");
}