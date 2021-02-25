#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcion;

    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 0:
    
    case 1:
    case 2: puts("Menor de tres"); break;
    case 3: puts("Igual a 3"); break;
    default: puts ("Mayor a tres");
    }

    return 0;
}
