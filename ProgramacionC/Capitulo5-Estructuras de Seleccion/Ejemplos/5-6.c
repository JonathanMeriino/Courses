//Dada la funcion f(x), calcular la funcion para un valor dado de x y visualizarlo en pantalla
#include <stdio.h>
#include <math.h>

int main()
{
    float f,x;
    printf("\n Elige un valor de x: ");
    scanf("%f",&x);
    //seleccion del rango en que se encuentra x
    if(x<=0.0)
        f=pow(x,2)-2;
    else 
        f=-pow(x,2)+3*x;
    printf("f(%.1f) = %.3f",x,f);

    return 0;
}