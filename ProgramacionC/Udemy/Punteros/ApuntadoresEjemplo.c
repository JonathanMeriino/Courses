#include <stdio.h>

int main() {


    //Declaramos las variables

    int a = 19;
    int b = 20;
    //* Declaramos un apuntador a la referencia de las variables

    int *apuntadorA = &a;
    int *apuntadorB = &b;

    printf("el valor de a es: %d\n",a);
    printf("la ubicacion en memoria del apuntador es: %p\n",apuntadorA);
    printf("%d\n",*apuntadorA);
    printf("%d\n",a);


    //! Le cambiamos el valor al apuntador
    *apuntadorA = 123;

    //? Aqui se notara que cambio el valor de la variable a la que apuntaba
    printf("%d",a);

    return 0;
}