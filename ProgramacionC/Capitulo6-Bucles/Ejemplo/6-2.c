/*Uso del operador de incremento ++ para controlar la iteracion de un bucle
Programa calculo de calorias */

#include <stdio.h>
int main()
{
    int num_de_elementos, calorias_por_alimento;

    printf("¿Cuantos alimentos ha comido hoy?");
    scanf("%d",&num_de_elementos);

    int calorias_total=0;
    int cuenta=1;
    
    printf("Introducir el numero de calorias de cada uno de los ");
    printf("%d %s",num_de_elementos,"alimentos tomados: \n");

    while (cuenta++<= num_de_elementos)
    {
        scanf("%d", &calorias_por_alimento);
        calorias_total += calorias_por_alimento;
        
    }
    printf("LAs calorias totales consumidas hoy son = ");
    printf("%d \n",calorias_total);

    return 0;
    
}