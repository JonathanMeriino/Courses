#include <stdio.h>
#include <stdlib>

typedef struct Documento{
    char nombre[30];
    char autor[30];
    int numeroPaginas;
    char tamanio[30];
}Documento;

typedef struct Cola{
    int primero;
    int ultimo;
    Documento documentos[100];
}Cola;

Cola crearCola(){
    Cola c;
    c.primero = 1;
    c.ultimo = 0;

    return c;
}

isEmpty(Cola c)
{
    if(c.primero==c.ultimo+1)
        return 1;
    return 0;
}
void encolar(Cola *c,struct Documento x)
{
    c->documentos[c->ultimo]=x;
    c->ultimo++;
}

Documento desencolar(Cola *c)
{
    if(isEmpty(*c)==1)
    {
        printf("La cola esta vacia\n");
    }else{
        Documento aux = c->documentos[c->primero-1];

        c->primero++;

        if(c->primero==c->ultimo-1)
        {
            *c=crearCola();
        }
    }
    return aux;
}

Documento first(Cola c)
{
    c.primero++;

    return c.documentos[c.primero-1];
}