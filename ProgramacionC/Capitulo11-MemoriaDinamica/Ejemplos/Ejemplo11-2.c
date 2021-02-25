/*El programa TESTMEN comprueba la contidad de memoria que se puede asignar dinamicamente(esta
disponible). Para ello se llama a malloc(), solicitando en cada llamada 1.000 bytes de momoria

        TESTMEN: programa para determinar memoria libre
        */

#include <stdio.h>

int main()
{
    void *p;
    int i;
    long m=0;
    
    for(i=1; ; i++)
    {
        p = malloc(1000);
        if(p==NULL) break;

        m+=1000;
    }
    printf("\nTotal de memoria asignada %d\n",m);
    return 0;
}