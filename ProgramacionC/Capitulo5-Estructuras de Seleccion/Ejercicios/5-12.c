/*Escribir un programa que introduzca el numero de un mes(1 a 12) y
 visualice el numero de dias de ese mes */

#include <stdio.h>

int main()
{
    int mes;

    printf("Ingresa el numero del mes: ");
    scanf("%d",&mes);

    switch (mes)
    {
        case 1: printf("Enero tiene 31 dias\n");
                break;
        case 2: printf("Febrero tiene 28 dias\n");
                break;
        case 3: printf("Marzo tiene 31 dias\n");
                break;
        case 4: printf("Abril tiene 30 dias\n");
                break;
        case 5: printf("Mayo tiene 31 dias\n");
                break;
        case 6: printf("Junio tiene 30 dias\n");
                break;
        case 7: printf("Julio tiene 30 dias\n");
                break;
        case 8: printf("Agosto tiene 31 dias\n");
                break;
        case 9: printf("Septiembre tiene 30 dias\n");
                break;
        case 10: printf("Octubre tiene 30 dias\n");
                break;
        case 11: printf("Noiembre tiene 30 dias\n");
                break;
        case 12: printf("Diciembre tiene 31 dias\n");
    
        default: printf("El mes no existe");
    
    }
}