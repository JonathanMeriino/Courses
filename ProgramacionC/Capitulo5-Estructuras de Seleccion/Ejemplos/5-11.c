#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcion;

    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 0:puts("Cero!"); break;
    
    case 1: puts("Uno!"); break;
    case 2: puts("Dos!"); break;
    default: puts ("Fuera de rango"); break;
    }

    return 0;
}
