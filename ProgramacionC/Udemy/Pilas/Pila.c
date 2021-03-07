
#include "Pila.h"

int main()
{
    Pila miPila = crearPila();

    Push(&miPila, x:10);
    printf("El valor del tope es: %d",miPila.tope);
    printf("El valor del tope es: %d",miPila.lista[miPila.tope-1]);
    printf("El valor del tope es: %d",top(miPila));

    Push(&miPila,x:44);
    Push(&miPila,x:123);
    Push(&miPila,x:14);

    printf("El valor del tope es: %d",miPila.tope);
    printf("El valor del tope es: %d",top(miPila));

   // int valor = pop(&miPila);
    //printf("%d\n",valor)
    printf("%d\n", pop(&pila));

    printf("El valor del tope es: %d",miPila.tope);
    printf("El valor del tope es: %d",top(miPila));

    pop(&miPila);

    pop(&miPila);
    pop(&miPila);
    pop(&miPila);
}

