/*¿Que salida producira el codigo siguiente, cuano se empotra en un programa completo y
primera_opcion vale 1?¿Y si primera_opcion valor 2?*/
#include <stdio.h>

int main()
{
    int primera_opcion;

    printf("Ingrese el valor de primera opcion: ");
    scanf("%d",&primera_opcion);

    switch (primera_opcion+1)
    {
        case 1:
            puts("Cordero asado");
            break;
        case 2:
            puts("Chuleta lechal");
            break;
        case 3:
            puts("Chuleton");
            //break;
        case 4:
            puts("Postre de pastel");
            break;
        default: puts("Buen apetito");
            
            
    }
}
