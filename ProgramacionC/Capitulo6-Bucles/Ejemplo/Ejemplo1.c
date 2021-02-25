//Bucle de muestra con while

#include <stdio.h>
int main()
{
    int contador = 0;   //inicializar la condicion

    while(contador <5)
    {
        contador++;
        printf("contador: %d \n",contador);
    }
    printf("Terminado.Contador: %d \n",contador);
    return 0;
}