//¿Que valor se le asigna a consumo en la sentencia if siguiente si velocidad es 120?
#include <stdio.h>

int main()
{
    int velocidad, consumo;

    printf("Ingresa el valor de la velocidad: ");
    scanf("%d",&velocidad);

    if(velocidad > 80)
        consumo=10.00;
    else if (velocidad > 100)
        consumo = 10.00;
    else if (velocidad >120)
        consumo = 15.00;
    
    printf("El consumo es de %d",consumo);

    return 0;
    
}