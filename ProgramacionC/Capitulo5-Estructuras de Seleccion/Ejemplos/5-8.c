//El siguiente programa realiza selecciones multiples con la sentencia compuestas if-else

#include <stdio.h>

void main()
{
    float numero;

    printf("Introduzca un numero positivo o negativo: ");
    scanf("%f",&numero);
    //comparar numero con cero 
    if(numero>0)
    {
        printf("%.2f %s",numero, "es mayor que cero\n");
        puts( "Pruebe de nuevo introduciento un numero negativo");        
    }
    else if(numero<0)
    {
        printf("%.2f %s",numero, "es menor que cero\n");
        puts("pruebe de nuevo introduciendo un numero negativo");
    }
    else 
    {
        printf("%.2f %s",numero,"es igual a cero\n");
        puts("¿Por que no introduce otro numero?");
    }
}