//Seleccionar un tipo de vehiculo segun un valor numerico
#include <stdio.h>

int main()
{
    int tipo_vehiculo,peaje;

    printf("Introduzca tipo de vehiculo: ");
    scanf("%d",&tipo_vehiculo);

    switch(tipo_vehiculo)
    {
        case 1:
            printf("turismo\n");
            peaje=500;
            break;
        case 2:
            printf("autobus\n");
            peaje=300;
            break;
        case 3:
            printf("motocicleta\n");
            peaje=300;
            break;
        default:
            printf("vehiculo no autorizado\n");
    }
}