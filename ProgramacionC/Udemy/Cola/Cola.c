
#include "Cola.h"

int main()
{
    Cola colita = crearCola();
    Cola colota = crearCola();

    printf("Primer elemento de la cola es %d\n",colita.primero);
    printf("Ultimo elemento de la cola es %d\n",colita.ultimo);

    printf("La cola esta vacia? %d\n",isEmpty(colita));

    encolar(&colita,10);
    encolar(&colita,13);
    encolar(&colita,16);

    printf("La cola esta vacia? %d\n",isEmpty(colita));
    printf("%d\n",desencolar(&colita));


    return 0;
}