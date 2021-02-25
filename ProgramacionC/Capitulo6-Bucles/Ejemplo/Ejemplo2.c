//Listado while(true)
#include <stdio.h>

int main()
{
    int flag=1,contador=0;

    while(flag)
    {
        contador++;
        if(contador>10)
            break;
    }
    printf("Contador: %d\n",contador);

    return 0;
}