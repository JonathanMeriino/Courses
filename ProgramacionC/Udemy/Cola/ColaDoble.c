//
// Created by leo61 on 08/03/2021.
//

#include "ColaDoble.h"

int main()
{
    Cola queue = crearCola(10);

    encolarInicio(&queue,10);
    encolarInicio(&queue,20);
    encolarInicio(&queue,30);
    encolarInicio(&queue,40);
    encolarInicio(&queue,50);
    encolarFinal(&queue,11);

    mostrarValores(queue);


   // printf("%d\n",desencolarFina(&queue));
   // printf("%d\n",desencolarFina(&queue));
   // printf("%d\n",desencolarFina(&queue));

    printf("%d\n",desencolarInicio(&queue));
    printf("%d\n",desencolarInicio(&queue));
    printf("%d\n",desencolarInicio(&queue));
    printf("%d\n",desencolarFinal(&queue));

    mostrarValores(queue);
    mostrarIndice()
    return 0;
}
