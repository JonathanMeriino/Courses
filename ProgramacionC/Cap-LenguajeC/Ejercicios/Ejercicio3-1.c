//¿Cual es la salida del siguiente programa?
#include <stdio.h>

int main()
{
    char pax[] = "Juan sin miedo";
    printf("%s %c \n",pax,pax[4]);
    puts(pax);
    puts(&pax[4]);

    return 0;
}
