#include "ColaDoble.h"

int main()
{
    int tamanio;
    printf("Ingresa el tamaño\n");
    scanf("%d",&tamanio);

    Cola queue=crearCola(tamanio);

    printf("Primera Ejecucion\n");
    encolarFinal(&queue,11);
    encolarFinal(&queue,12);

    mostrarValores(queue);
    mostrarValores(queue);

    printf("Segunda Ejecucion\n");
    desencolarInicio(&queue);
    desencolarInicio(&queue);
    mostrarValores(queue);
    mostrarValores(queue);

    printf("Tercera Ejecucion\n");
    encolarFinal(&queue,13);
    encolarFinal(&queue,14);
    encolarInicial(&queue,10);
    encolarInicial(&queue,9);

    mostrarValores(queue);
    mostrarValores(queue);

    return 0;
}