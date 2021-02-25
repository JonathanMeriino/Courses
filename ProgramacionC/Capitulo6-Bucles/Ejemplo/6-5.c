/*El siguiente codigo extrae y visualiza valores de entrade desde el dispositivo estandar de 
entrada(stdin) hasta que se encuentra un valor especificado */
#include <stdio.h>

void main()
{
    int clave = -9;
    int entrada;
    
    while (scanf("%d",&entrada))
    {
        if(entrada!=clave)
            printf("%d\n",entrada);
        else 
            break;
    }
    
}
