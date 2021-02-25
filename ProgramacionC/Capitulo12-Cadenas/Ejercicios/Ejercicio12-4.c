/*El programa añade la cadena s2 alfinal de la cadena si. Reserva memoria dinamicamente, en tiempo
de ejecucion */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
    char *s1 = "ABCDEFGH";
    char s2[] = "XYZ";

    printf("\n Antes de strcat(s1,s2): \n");
    printf("\ts1 = [%s], longitud = %d \n",s1.strlen(s1));
    printf("\ts2 = [%s], longitud = %d \n",s2,strlen(s2));
        //amplia memoria para la cadena resultante de la concatenacion
    s1 = realloc(s1,(strlen(s1)+strlen(s2)+1)*sizeof(char));
    printf("\ts1 = [%s], longitud = %d (amplia memoria)\n", s1,strlen(s1));

    strcat(s1,s2);
    puts("Despues de strcat(s1,s2)");
    printf("\ts1 = [%s], longitud = %d\n",s1,strlen(s1));
    printf("\ts2 = [%s], longitud = %d\n",s2,strlen(s2));
}
}