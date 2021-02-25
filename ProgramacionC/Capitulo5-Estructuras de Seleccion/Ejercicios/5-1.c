/*Visualizar la tarifa de la luz segun el gasto de la corriente electrica. Para un gasto
menor de 1.000Kwxh la tariga es de 1.2 entre 1.000 y 1.850kwxh es 1.0 y mayor de 1.850kwxh 0.9*/
#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main()
{
    float gasto, tasa;

    printf("\nGasto de corriente: ");
    scanf("%f",&gasto);

    if (gasto<1000.0)
        tasa = TARIFA1;
    if (gasto >=1000.0 && gasto<=1850.0)
        tasa = TARIFA2;
    if (gasto>1850.0)
        tasa = TARIFA3;

    printf("\nTasa que le corresponde a %.1f kwxh es de %f\n",gasto,tasa);

    return 0;    
}